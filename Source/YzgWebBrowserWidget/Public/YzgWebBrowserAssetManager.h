// Copyright 2025 YZG. All Rights Reserved.

#pragma once

#include "UObject/SoftObjectPtr.h"
#include "Materials/Material.h"
#include "YzgWebBrowserAssetManager.generated.h"

class UMaterial;

UCLASS()
class YZGWEBBROWSERWIDGET_API UYzgWebBrowserAssetManager : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	void LoadDefaultMaterials();

	UMaterial* GetDefaultMaterial(); 
	UMaterial* GetDefaultTranslucentMaterial(); 

protected:
	UPROPERTY()
	TSoftObjectPtr<UMaterial> DefaultMaterial;
	TSoftObjectPtr<UMaterial> DefaultTranslucentMaterial;
};

typedef UYzgWebBrowserAssetManager UWebBrowserAssetManager;