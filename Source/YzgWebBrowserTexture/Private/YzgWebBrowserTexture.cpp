// Copyright 2025 YZG. All Rights Reserved.

#include "YzgWebBrowserTexture.h"

#include "ExternalTexture.h"
#include "Modules/ModuleManager.h"
#include "RenderUtils.h"
#include "RenderingThread.h"
#include "UObject/WeakObjectPtrTemplates.h"
#include "WebBrowserTextureResource.h"

UYzgWebBrowserTexture::UYzgWebBrowserTexture(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, AddressX(TA_Clamp)
	, AddressY(TA_Clamp)
	, ClearColor(FLinearColor::Black)
	, Size(0)
{
	SampleQueue = MakeShared<FWebBrowserTextureSampleQueue, ESPMode::ThreadSafe>();
	WebPlayerGuid = FGuid::NewGuid();
	NeverStream = true;
}

float UYzgWebBrowserTexture::GetAspectRatio() const
{
	if (Dimensions.Y == 0)
	{
		return 0.0f;
	}

	return (float)(Dimensions.X) / Dimensions.Y;
}

int32 UYzgWebBrowserTexture::GetHeight() const
{
	return Dimensions.Y;
}

int32 UYzgWebBrowserTexture::GetWidth() const
{
	return Dimensions.X;
}

FTextureResource* UYzgWebBrowserTexture::CreateResource()
{
	return new FWebBrowserTextureResource(*this, Dimensions, Size);
}

EMaterialValueType UYzgWebBrowserTexture::GetMaterialType() const
{
	return MCT_TextureExternal;
}

float UYzgWebBrowserTexture::GetSurfaceWidth() const
{
	return Dimensions.X;
}

float UYzgWebBrowserTexture::GetSurfaceHeight() const
{
	return Dimensions.Y;
}

FGuid UYzgWebBrowserTexture::GetExternalTextureGuid() const
{
	return WebPlayerGuid;
}

void UYzgWebBrowserTexture::SetExternalTextureGuid(FGuid guid)
{
	WebPlayerGuid = guid;
}

void UYzgWebBrowserTexture::BeginDestroy()
{
	UnregisterPlayerGuid();

	Super::BeginDestroy();
}

FString UYzgWebBrowserTexture::GetDesc()
{
	return FString::Printf(TEXT("%ix%i [%s]"), Dimensions.X, Dimensions.Y, GPixelFormats[PF_B8G8R8A8].Name);
}


void UYzgWebBrowserTexture::GetResourceSizeEx(FResourceSizeEx& CumulativeResourceSize)
{
	Super::GetResourceSizeEx(CumulativeResourceSize);
	CumulativeResourceSize.AddUnknownMemoryBytes(Size);
}

void UYzgWebBrowserTexture::TickResource(TSharedPtr<FWebBrowserTextureSample, ESPMode::ThreadSafe> Sample)
{
	if (GetResource() == nullptr)
	{
		return;
	}
	
	check(SampleQueue.IsValid());

	if (Sample.IsValid())
	{
		SampleQueue.Get()->Enqueue(Sample);
	}

	FWebBrowserTextureResource::FRenderParams RenderParams;
	{
		RenderParams.ClearColor = ClearColor;
		RenderParams.PlayerGuid = GetExternalTextureGuid();
		RenderParams.SampleSource = SampleQueue;
	}

	FWebBrowserTextureResource* ResourceParam = (FWebBrowserTextureResource*)GetResource();
	ENQUEUE_RENDER_COMMAND(UYzgWebBrowserTextureResourceRender)(
		[ResourceParam, RenderParams](FRHICommandListImmediate& RHICmdList)
		{
			ResourceParam->Render(RenderParams);
		});
}

void UYzgWebBrowserTexture::UnregisterPlayerGuid()
{
	if (!WebPlayerGuid.IsValid())
	{
		return;
	}

	FGuid PlayerGuid = WebPlayerGuid;
	ENQUEUE_RENDER_COMMAND(UYzgWebBrowserTextureUnregisterPlayerGuid)(
		[PlayerGuid](FRHICommandListImmediate& RHICmdList)
		{
			FExternalTextureRegistry::Get().UnregisterExternalTexture(PlayerGuid);
		});
}
