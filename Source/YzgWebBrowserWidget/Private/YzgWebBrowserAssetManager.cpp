// Copyright 2025 YZG. All Rights Reserved.

#include "YzgWebBrowserAssetManager.h"

#if WITH_EDITOR || PLATFORM_ANDROID || PLATFORM_IOS
#include "Materials/Material.h"
#include "YzgWebBrowserTexture.h"
#endif

/////////////////////////////////////////////////////
// WebBrowserAssetManager

UYzgWebBrowserAssetManager::UYzgWebBrowserAssetManager(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer) ,
	DefaultMaterial(FSoftObjectPath(FString(TEXT("/YzgWebBrowserWidget/WebTexture_M.WebTexture_M")))) ,
	DefaultTranslucentMaterial(FSoftObjectPath(FString(TEXT("/YzgWebBrowserWidget/WebTexture_TM.WebTexture_TM"))))
{
#if WITH_EDITOR || PLATFORM_ANDROID || PLATFORM_IOS
	UYzgWebBrowserTexture::StaticClass();

#endif
};

void UYzgWebBrowserAssetManager::LoadDefaultMaterials()
{
	DefaultMaterial.LoadSynchronous();
	DefaultTranslucentMaterial.LoadSynchronous();
}

UMaterial* UYzgWebBrowserAssetManager::GetDefaultMaterial()
{
	return DefaultMaterial.Get();
}

UMaterial* UYzgWebBrowserAssetManager::GetDefaultTranslucentMaterial()
{
	return DefaultTranslucentMaterial.Get();
}
