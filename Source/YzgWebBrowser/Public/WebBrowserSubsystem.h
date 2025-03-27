// Copyright 2025 YZG. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/SoftObjectPtr.h"
#include "Subsystems/WorldSubsystem.h"
#include "IWebBrowserSingleton.h"
#include "IWebBrowserWindow.h"
#include "WebBrowserSubsystem.generated.h"

USTRUCT(BlueprintType)
struct FCreateBrowserSetting
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Default)
    FString URL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Default)
    int32 FrameRate = 60;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Default)
    bool bUseTransparency = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Default)
    bool bUseAcceleratedPaint = true;
};

UCLASS(BlueprintType, Transient)
class YZGWEBBROWSER_API UWebBrowserSubsystem : public UTickableWorldSubsystem
{
	GENERATED_BODY()

public:
    static UWebBrowserSubsystem* GetWebBrowserSubsystem(const UWorld* InWorld);

	UWebBrowserSubsystem();
	virtual ~UWebBrowserSubsystem();

public:
	virtual void OnWorldBeginPlay(UWorld& InWorld) override;
	virtual void OnWorldEndPlay(UWorld& InWorld);

	void AddWebBrowser(const TSharedPtr<IWebBrowserWindow>& WebBrowser);
public:
	//~FTickableGameObject implementation Begin
	virtual bool IsTickable() const override { return true; }
	virtual bool IsTickableInEditor() const override { return false; }
	virtual void Tick(float DeltaTime) override;
	virtual TStatId GetStatId() const override;
	//~~FTickableGameObject implementation End

public:
	//~USubsystem implementation Begin
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	//~~USubsystem implementation End

public:
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "CreateBrowserForReady"), Category = "WebBrowser")
	int32 CreateBrowserForReady(const FCreateBrowserSetting& BrowserSetting);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "RemoveBrowserFromReady"), Category = "WebBrowser")
	bool RemoveBrowserFromReady(int32 ReadyID);
private:
	// Release objects and resources
	void Release();

private:
	// Handle logic OnWorldBeginPlay/OnWorldEndPlay
	bool bWorldPlay = false;

	IWebBrowserSingleton* WebBrowserSingleton;

	TArray<TSharedPtr<IWebBrowserWindow>> WebBrowsers;
};
