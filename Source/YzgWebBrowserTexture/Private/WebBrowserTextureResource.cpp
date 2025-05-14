// Copyright 2025 YZG. All Rights Reserved.

#include "WebBrowserTextureResource.h"

#include "DeviceProfiles/DeviceProfile.h"
#include "DeviceProfiles/DeviceProfileManager.h"
#include "ExternalTexture.h"
#include "PipelineStateCache.h"
#include "SceneUtils.h"
#include "Shader.h"
#include "StaticBoundShaderState.h"
#include "RenderUtils.h"
#include "RHIStaticStates.h"
#include "ExternalTexture.h"
#include "YzgWebBrowserTexture.h"


#define WebBrowserTextureRESOURCE_TRACE_RENDER 0

DEFINE_LOG_CATEGORY(LogWebBrowserTexture);

FWebBrowserTextureResource::FWebBrowserTextureResource(UYzgWebBrowserTexture& InOwner, FIntPoint& InOwnerDim, SIZE_T& InOwnerSize)
	: Cleared(false)
	, CurrentClearColor(FLinearColor::Transparent)
	, Owner(InOwner)
	, OwnerDim(InOwnerDim)
	, OwnerSize(InOwnerSize)
{;
}

void FWebBrowserTextureResource::Render(const FRenderParams& Params)
{
	check(IsInRenderingThread());

	TSharedPtr<FWebBrowserTextureSampleQueue, ESPMode::ThreadSafe> SampleSource = Params.SampleSource.Pin();

	if (SampleSource.IsValid())
	{
		TSharedPtr<FWebBrowserTextureSample, ESPMode::ThreadSafe> Sample;
		bool SampleValid = false;
		
		while (SampleSource->Peek(Sample) && Sample.IsValid())
		{
			SampleValid = SampleSource->Dequeue(Sample);
		}

		if (!SampleValid)
		{
			return;
		}

		check(Sample.IsValid());

		CopySample(Sample, Params.ClearColor);

		if (!GSupportsImageExternal && Params.PlayerGuid.IsValid())
		{
			FTextureRHIRef VideoTexture = (FTextureRHIRef)Owner.TextureReference.TextureReferenceRHI;
			FExternalTextureRegistry::Get().RegisterExternalTexture(Params.PlayerGuid, VideoTexture, SamplerStateRHI, Sample->GetScaleRotation(), Sample->GetOffset());
		}
	}
	else if (!Cleared)
	{
		ClearTexture(Params.ClearColor);

		if (!GSupportsImageExternal && Params.PlayerGuid.IsValid())
		{
			FTextureRHIRef VideoTexture = (FTextureRHIRef)Owner.TextureReference.TextureReferenceRHI;
			FExternalTextureRegistry::Get().RegisterExternalTexture(Params.PlayerGuid, VideoTexture, SamplerStateRHI, FLinearColor(1.0f, 0.0f, 0.0f, 1.0f), FLinearColor(0.0f, 0.0f, 0.0f, 0.0f));
		}
	}
}

FIntPoint FWebBrowserTextureResource::GetSizeXY() const
{
	return FIntPoint(Owner.GetWidth(), Owner.GetHeight());
}

FString FWebBrowserTextureResource::GetFriendlyName() const
{
	return Owner.GetPathName();
}


uint32 FWebBrowserTextureResource::GetSizeX() const
{
	return Owner.GetWidth();
}


uint32 FWebBrowserTextureResource::GetSizeY() const
{
	return Owner.GetHeight();
}


void FWebBrowserTextureResource::InitRHI(FRHICommandListBase& RHICmdList)
{
	FSamplerStateInitializerRHI SamplerStateInitializer(
		(ESamplerFilter)UDeviceProfileManager::Get().GetActiveProfile()->GetTextureLODSettings()->GetSamplerFilter(&Owner),
		(Owner.AddressX == TA_Wrap) ? AM_Wrap : ((Owner.AddressX == TA_Clamp) ? AM_Clamp : AM_Mirror),
		(Owner.AddressY == TA_Wrap) ? AM_Wrap : ((Owner.AddressY == TA_Clamp) ? AM_Clamp : AM_Mirror),
		AM_Wrap
	);

	SamplerStateRHI = RHICreateSamplerState(SamplerStateInitializer);
}


void FWebBrowserTextureResource::ReleaseRHI()
{
	Cleared = false;

	InputTarget.SafeRelease();
	OutputTarget.SafeRelease();
	RenderTargetTextureRHI.SafeRelease();
	TextureRHI.SafeRelease();

	UpdateTextureReference(nullptr);
}

void FWebBrowserTextureResource::ClearTexture(const FLinearColor& ClearColor)
{
	const ETextureCreateFlags OutputCreateFlags = ETextureCreateFlags::Dynamic | ETextureCreateFlags::SRGB;

	if ((ClearColor != CurrentClearColor) || !OutputTarget.IsValid() || !EnumHasAllFlags(OutputTarget->GetFlags(), OutputCreateFlags))
	{
		const FRHITextureCreateDesc Desc =
			FRHITextureCreateDesc::Create2D(TEXT("FWebBrowserTextureResource"))
			.SetExtent(2, 2)
			.SetFormat(PF_B8G8R8A8)
			.SetFlags(OutputCreateFlags | ETextureCreateFlags::RenderTargetable | ETextureCreateFlags::ShaderResource)
			.SetInitialState(ERHIAccess::SRVMask)
			.SetClearValue(FClearValueBinding(ClearColor));

		OutputTarget = RHICreateTexture(Desc);

		CurrentClearColor = ClearColor;
		UpdateResourceSize();
	}

	if (RenderTargetTextureRHI != OutputTarget)
	{
		UpdateTextureReference(OutputTarget);
	}

	FRHICommandListImmediate& CommandList = FRHICommandListExecutor::GetImmediateCommandList();
	{
		CommandList.Transition(FRHITransitionInfo(RenderTargetTextureRHI, ERHIAccess::Unknown, ERHIAccess::RTV));
		ClearRenderTarget(CommandList, RenderTargetTextureRHI);
		CommandList.Transition(FRHITransitionInfo(RenderTargetTextureRHI, ERHIAccess::RTV, ERHIAccess::SRVMask));
	}

	Cleared = true;
}

void FWebBrowserTextureResource::CopySample(const TSharedPtr<FWebBrowserTextureSample, ESPMode::ThreadSafe>& Sample, const FLinearColor& ClearColor)
{
	FRHITexture* SampleTexture = Sample->GetTexture();
	FRHITexture* SampleTexture2D = (SampleTexture != nullptr) ? SampleTexture->GetTexture2D() : nullptr;
	if (SampleTexture2D != nullptr)
	{
		if (TextureRHI != SampleTexture2D)
		{
			UpdateTextureReference(SampleTexture2D);

			OutputTarget.SafeRelease();
			UpdateResourceSize();
		}
	}
	else
	{
		const ETextureCreateFlags OutputCreateFlags = TexCreate_Dynamic | TexCreate_SRGB;
		const FIntPoint SampleDim = Sample->GetDim();

		if ((ClearColor != CurrentClearColor) || !OutputTarget.IsValid() || (OutputTarget->GetSizeXY() != SampleDim) || ((OutputTarget->GetFlags() & OutputCreateFlags) != OutputCreateFlags))
		{
			UE_LOG(LogWebBrowserTexture, VeryVerbose, TEXT("FWebBrowserTextureResource:CopySample 1"));

			const FRHITextureCreateDesc Desc =
				FRHITextureCreateDesc::Create2D(TEXT("FWebBrowserTextureResource"))
				.SetExtent(SampleDim)
				.SetFormat(PF_B8G8R8A8)
				.SetFlags(OutputCreateFlags | ETextureCreateFlags::RenderTargetable | ETextureCreateFlags::ShaderResource)
				.SetInitialState(ERHIAccess::SRVMask)
				.SetClearValue(FClearValueBinding(ClearColor));

			OutputTarget = RHICreateTexture(Desc);

			CurrentClearColor = ClearColor;
			UpdateResourceSize();
		}

		if (RenderTargetTextureRHI != OutputTarget)
		{
			UpdateTextureReference(OutputTarget);
		}

		FUpdateTextureRegion2D Region(0, 0, 0, 0, SampleDim.X, SampleDim.Y);
		RHIUpdateTexture2D(RenderTargetTextureRHI.GetReference(), 0, Region, Sample->GetStride(), (uint8*)Sample->GetBuffer());
	}
	Cleared = false;
}


void FWebBrowserTextureResource::UpdateResourceSize()
{
	UE_LOG(LogWebBrowserTexture, VeryVerbose, TEXT("FWebBrowserTextureResource:UpdateResourceSize"));

	SIZE_T ResourceSize = 0;

	if (InputTarget.IsValid())
	{
		ResourceSize += CalcTextureSize(InputTarget->GetSizeX(), InputTarget->GetSizeY(), InputTarget->GetFormat(), 1);
	}

	if (OutputTarget.IsValid())
	{
		ResourceSize += CalcTextureSize(OutputTarget->GetSizeX(), OutputTarget->GetSizeY(), OutputTarget->GetFormat(), 1);
	}

	OwnerSize = ResourceSize;
}


void FWebBrowserTextureResource::UpdateTextureReference(FRHITexture* NewTexture)
{
	TextureRHI = NewTexture;
	RenderTargetTextureRHI = NewTexture;

	RHIUpdateTextureReference(Owner.TextureReference.TextureReferenceRHI, NewTexture);

	if (RenderTargetTextureRHI != nullptr)
	{
		OwnerDim = FIntPoint(RenderTargetTextureRHI->GetSizeX(), RenderTargetTextureRHI->GetSizeY());
	}
	else
	{
		OwnerDim = FIntPoint::ZeroValue;
	}
}
