// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YzgWebBrowserWidget/Public/YzgWebBrowserAssetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYzgWebBrowserAssetManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	UPackage* Z_Construct_UPackage__Script_YzgWebBrowserWidget();
	YZGWEBBROWSERWIDGET_API UClass* Z_Construct_UClass_UYzgWebBrowserAssetManager();
	YZGWEBBROWSERWIDGET_API UClass* Z_Construct_UClass_UYzgWebBrowserAssetManager_NoRegister();
// End Cross Module References
	void UYzgWebBrowserAssetManager::StaticRegisterNativesUYzgWebBrowserAssetManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYzgWebBrowserAssetManager);
	UClass* Z_Construct_UClass_UYzgWebBrowserAssetManager_NoRegister()
	{
		return UYzgWebBrowserAssetManager::StaticClass();
	}
	struct Z_Construct_UClass_UYzgWebBrowserAssetManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYzgWebBrowserAssetManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_YzgWebBrowserWidget,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYzgWebBrowserAssetManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYzgWebBrowserAssetManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "YzgWebBrowserAssetManager.h" },
		{ "ModuleRelativePath", "Public/YzgWebBrowserAssetManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYzgWebBrowserAssetManager_Statics::NewProp_DefaultMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/YzgWebBrowserAssetManager.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UYzgWebBrowserAssetManager_Statics::NewProp_DefaultMaterial = { "DefaultMaterial", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYzgWebBrowserAssetManager, DefaultMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYzgWebBrowserAssetManager_Statics::NewProp_DefaultMaterial_MetaData), Z_Construct_UClass_UYzgWebBrowserAssetManager_Statics::NewProp_DefaultMaterial_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYzgWebBrowserAssetManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYzgWebBrowserAssetManager_Statics::NewProp_DefaultMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYzgWebBrowserAssetManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYzgWebBrowserAssetManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UYzgWebBrowserAssetManager_Statics::ClassParams = {
		&UYzgWebBrowserAssetManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UYzgWebBrowserAssetManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UYzgWebBrowserAssetManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYzgWebBrowserAssetManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UYzgWebBrowserAssetManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYzgWebBrowserAssetManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UYzgWebBrowserAssetManager()
	{
		if (!Z_Registration_Info_UClass_UYzgWebBrowserAssetManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYzgWebBrowserAssetManager.OuterSingleton, Z_Construct_UClass_UYzgWebBrowserAssetManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UYzgWebBrowserAssetManager.OuterSingleton;
	}
	template<> YZGWEBBROWSERWIDGET_API UClass* StaticClass<UYzgWebBrowserAssetManager>()
	{
		return UYzgWebBrowserAssetManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYzgWebBrowserAssetManager);
	UYzgWebBrowserAssetManager::~UYzgWebBrowserAssetManager() {}
	struct Z_CompiledInDeferFile_FID_PAK_5_3_YzgWebBrowserWidget_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowserWidget_Public_YzgWebBrowserAssetManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAK_5_3_YzgWebBrowserWidget_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowserWidget_Public_YzgWebBrowserAssetManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UYzgWebBrowserAssetManager, UYzgWebBrowserAssetManager::StaticClass, TEXT("UYzgWebBrowserAssetManager"), &Z_Registration_Info_UClass_UYzgWebBrowserAssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYzgWebBrowserAssetManager), 1959662354U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAK_5_3_YzgWebBrowserWidget_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowserWidget_Public_YzgWebBrowserAssetManager_h_2911583616(TEXT("/Script/YzgWebBrowserWidget"),
		Z_CompiledInDeferFile_FID_PAK_5_3_YzgWebBrowserWidget_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowserWidget_Public_YzgWebBrowserAssetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAK_5_3_YzgWebBrowserWidget_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowserWidget_Public_YzgWebBrowserAssetManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
