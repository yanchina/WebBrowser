// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Components/Widget.h"
#include "Blueprint/UserWidget.h"
#include "YzgWebBrowser.generated.h"

enum class EWebBrowserConsoleLogSeverity;
class UWebBrowserJSParams;

#ifndef YZGWEBBROWSERWIDGET_API
#define YZGWEBBROWSERWIDGET_API __declspec(dllexport)
#endif // !


#ifndef WEBBROWSERWIDGET_API
    #define WEBBROWSERWIDGET_API YZGWEBBROWSERWIDGET_API
#endif // !WEBBROWSERWIDGET_API

class UTextureRenderTarget2D;

UCLASS(DisplayName="Web Browser")
class YZGWEBBROWSERWIDGET_API UYzgWebBrowser : public UWidget
{
	GENERATED_UCLASS_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUrlChanged, const FText&, Text);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBeforePopup, FString, URL, FString, Frame);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnConsoleMessage, const FString&, Message, const FString&, Source, int32, Line);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBrowserMessage, FString, MsgName,FString, MsgParams);
	/**
	 * Load the specified URL
	 *
	 * @param NewURL New URL to load
	 */
	UFUNCTION(BlueprintCallable, Category="Web Browser")
	void LoadURL(FString NewURL);

	/**
	 * Load a string as data to create a web page
	 *
	 * @param Contents String to load
	 * @param DummyURL Dummy URL for the page
	 */
	UFUNCTION(BlueprintCallable, Category="Web Browser")
	void LoadString(FString Contents, FString DummyURL);

	/**
	* Executes a JavaScript string in the context of the web page
	*
	* @param ScriptText JavaScript string to execute
	*/
	UFUNCTION(BlueprintCallable, Category = "Web Browser")
	void ExecuteJavascript(const FString& ScriptText);

	UFUNCTION(BlueprintCallable, meta = (DisplayName="ExecuteFunction", AutoCreateRefTerm = "JSParams"), Category = "Web Browser")
	void ExecuteJSFunction(const FString& FunctionName, UWebBrowserJSParams* Params);

	/**
	 * Get the current title of the web page
	 */
	UFUNCTION(BlueprintCallable, Category="Web Browser")
	FText GetTitleText() const;

	/**
	* Gets the currently loaded URL.
	*
	* @return The URL, or empty string if no document is loaded.
	*/
	UFUNCTION(BlueprintCallable, Category = "Web Browser")
	FString GetUrl() const;

    UPROPERTY(BlueprintAssignable, Category = "Web Browser|Event")
    FOnBrowserMessage OnBrowserMessage;

	/** Called when the Url changes. */
	UPROPERTY(BlueprintAssignable, Category = "Web Browser|Event")
	FOnUrlChanged OnUrlChanged;

	/** Called when a popup is about to spawn. */
	UPROPERTY(BlueprintAssignable, Category = "Web Browser|Event")
	FOnBeforePopup OnBeforePopup;

	/** Called when the browser has console spew to print */
	UPROPERTY(BlueprintAssignable, Category = "Web Browser|Event")
	FOnConsoleMessage OnConsoleMessage;

public:

	//~ Begin UWidget interface
	virtual void SynchronizeProperties() override;
	// End UWidget interface

	virtual void ReleaseSlateResources(bool bReleaseChildren) override;

#if WITH_EDITOR
	virtual const FText GetPaletteCategory() override;
#endif

protected:
	/** URL that the browser will initially navigate to. The URL should include the protocol, eg http:// */
	UPROPERTY(EditAnywhere, Category=Appearance)
	FString InitialURL;

	/** Should the browser window support transparency. */
	UPROPERTY(EditAnywhere, Category=Appearance)
    bool bSupportsTransparency = true;

    UPROPERTY(EditAnywhere, Category = Appearance, Meta = (ClampMin = 1, ClampMax = 60))
    int32 FrameRate = 30;

    UPROPERTY(EditAnywhere, Category = Appearance)
    float MouseTransparencyValue = 0.3333;

    UPROPERTY(EditAnywhere, Category = Appearance)
    bool bUseResolution = false;

    UPROPERTY(EditAnywhere, Category = Appearance, meta = (EditCondition = "bUseResolution==true"))
    FIntPoint Resolution = FIntPoint(1920,1080);

    UPROPERTY(EditAnywhere, Category = Appearance)
    bool bUseAcceleratedPaint = true;

	UPROPERTY(EditAnywhere, Category = Appearance)
	bool bManageInPool = false;
public:
    UFUNCTION(BlueprintCallable, Category= WebBrowser)
    void BindUObject(const FString& Name, UObject* Object, bool bIsPermanent = true);

    UFUNCTION(BlueprintCallable, Category = WebBrowser)
    void UnbindUObject(const FString& Name, UObject* Object, bool bIsPermanent = true);

	UFUNCTION(BlueprintCallable, Category = WebBrowser)
	void SetResolution(const FIntPoint& InResolution);

	UFUNCTION(BlueprintCallable, Category = WebBrowser)
	void Refresh(bool bForce = true);
protected:
	TSharedPtr<class SWebBrowser> WebBrowserWidget;

protected:
	// UWidget interface
	virtual TSharedRef<SWidget> RebuildWidget() override;
	// End of UWidget interface
    void HandleBrowserMessage(const FString& MsgName, const FString& MsgParams);
	void HandleOnConsoleMessage(const FString& Message, const FString& Source, int32 Line, EWebBrowserConsoleLogSeverity Severity);
	void HandleOnUrlChanged(const FText& Text);
	bool HandleOnBeforePopup(FString URL, FString Frame);
};

typedef UYzgWebBrowser UWebBrowser;
