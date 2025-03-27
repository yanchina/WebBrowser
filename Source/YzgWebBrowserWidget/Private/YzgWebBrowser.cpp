// Copyright 2025 YZG. All Rights Reserved.

#include "YzgWebBrowser.h"
#include "SWebBrowser.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "Engine/TextureRenderTarget2D.h"
#include "YzgWebBrowserModule.h"
#include "WebBrowserJSParams.h"

#if WITH_EDITOR
#endif

#define LOCTEXT_NAMESPACE "WebBrowser"

/////////////////////////////////////////////////////
UYzgWebBrowser::UYzgWebBrowser(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bIsVariable = true;
	SetVisibility(ESlateVisibility::SelfHitTestInvisible);
}

void UYzgWebBrowser::LoadURL(FString NewURL)
{
	if ( WebBrowserWidget.IsValid() )
	{
		return WebBrowserWidget->LoadURL(NewURL);
	}
}

void UYzgWebBrowser::LoadString(FString Contents, FString DummyURL)
{
	if ( WebBrowserWidget.IsValid() )
	{
		return WebBrowserWidget->LoadString(Contents, DummyURL);
	}
}

void UYzgWebBrowser::ExecuteJavascript(const FString& ScriptText)
{
	if (WebBrowserWidget.IsValid())
	{
		return WebBrowserWidget->ExecuteJavascript(ScriptText);
	}
}

void UYzgWebBrowser::ExecuteJSFunction(const FString& FunctionName, UWebBrowserJSParams* Params)
{
    if (WebBrowserWidget.IsValid() && !FunctionName.IsEmpty())
    {
        return WebBrowserWidget->ExecuteJSFunction(FunctionName, Params->JSParamsID);
    }
}

FText UYzgWebBrowser::GetTitleText() const
{
	if ( WebBrowserWidget.IsValid() )
	{
		return WebBrowserWidget->GetTitleText();
	}

	return FText::GetEmpty();
}

FString UYzgWebBrowser::GetUrl() const
{
	if (WebBrowserWidget.IsValid())
	{
		return WebBrowserWidget->GetUrl();
	}

	return FString();
}

void UYzgWebBrowser::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);

	WebBrowserWidget.Reset();
}

TSharedRef<SWidget> UYzgWebBrowser::RebuildWidget()
{
	if ( IsDesignTime() )
	{
		return SNew(SBox)
			.HAlign(HAlign_Center)
			.VAlign(VAlign_Center)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("Web Browser", "Web Browser"))
			];
	}
	else
	{
		WebBrowserWidget = SNew(SWebBrowser)
			.InitialURL(InitialURL)
			.ShowControls(false)
			.SupportsTransparency(bSupportsTransparency)
            .MouseTransparencyValue(MouseTransparencyValue)
            .bUseAcceleratedPaint(bUseAcceleratedPaint)
            .BrowserFrameRate(FrameRate)
			.bManageInPool(bManageInPool)
            .OnBrowserMessage(BIND_UOBJECT_DELEGATE(FOnBrowserMessageDelegate, HandleBrowserMessage))
			.OnUrlChanged(BIND_UOBJECT_DELEGATE(FOnTextChanged, HandleOnUrlChanged))
			.OnBeforePopup(BIND_UOBJECT_DELEGATE(FOnBeforePopupDelegate, HandleOnBeforePopup))
			.OnConsoleMessage(BIND_UOBJECT_DELEGATE(FOnConsoleMessageDelegate, HandleOnConsoleMessage));
		
		if(bUseResolution)
		{
			WebBrowserWidget->SetResolution(Resolution);
		}
		return WebBrowserWidget.ToSharedRef();
	}
}

void UYzgWebBrowser::SynchronizeProperties()
{
	Super::SynchronizeProperties();

	if ( WebBrowserWidget.IsValid() )
	{

	}
}

void UYzgWebBrowser::HandleBrowserMessage(const FString& MsgName, const FString& MsgParams)
{
    OnBrowserMessage.Broadcast(MsgName, MsgParams);
}

void UYzgWebBrowser::HandleOnUrlChanged(const FText& InText)
{
	OnUrlChanged.Broadcast(InText);
}

void UYzgWebBrowser::HandleOnConsoleMessage(const FString& Message, const FString& Source, int32 Line, EWebBrowserConsoleLogSeverity Severity)
{
	OnConsoleMessage.Broadcast(Message, Source, Line);
}

bool UYzgWebBrowser::HandleOnBeforePopup(FString URL, FString Frame)
{
	if (OnBeforePopup.IsBound())
	{
		if (IsInGameThread())
		{
			OnBeforePopup.Broadcast(URL, Frame);
		}
		else
		{
			// Retry on the GameThread.
			TWeakObjectPtr<UYzgWebBrowser> WeakThis = this;
			FFunctionGraphTask::CreateAndDispatchWhenReady([WeakThis, URL, Frame]()
			{
				if (WeakThis.IsValid())
				{
					WeakThis->HandleOnBeforePopup(URL, Frame);
				}
			}, TStatId(), nullptr, ENamedThreads::GameThread);
		}

		return true;
	}

	return false;
}

void UYzgWebBrowser::BindUObject(const FString& Name, UObject* Object, bool bIsPermanent)
{
    if(WebBrowserWidget.IsValid())
    {
        WebBrowserWidget->BindUObject(Name,Object,bIsPermanent);
    }
}

void UYzgWebBrowser::UnbindUObject(const FString& Name, UObject* Object, bool bIsPermanent)
{
    if (WebBrowserWidget.IsValid())
    {
        WebBrowserWidget->UnbindUObject(Name, Object, bIsPermanent);
    }
}

void UYzgWebBrowser::SetResolution(const FIntPoint& InResolution)
{
    if (WebBrowserWidget.IsValid())
    {
		bUseResolution = true;
        Resolution = InResolution;

        WebBrowserWidget->SetResolution(InResolution);
    }
}

void UYzgWebBrowser::Refresh(bool bForce)
{
	if (WebBrowserWidget.IsValid())
	{
		WebBrowserWidget->Refresh(bForce);
	}
}

#if WITH_EDITOR

const FText UYzgWebBrowser::GetPaletteCategory()
{
	return LOCTEXT("Experimental", "Experimental");
}

#endif

#undef LOCTEXT_NAMESPACE
