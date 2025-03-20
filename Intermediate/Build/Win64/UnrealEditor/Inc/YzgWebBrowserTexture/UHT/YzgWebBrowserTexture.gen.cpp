// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YzgWebBrowserTexture/Public/YzgWebBrowserTexture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYzgWebBrowserTexture() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture();
	UPackage* Z_Construct_UPackage__Script_YzgWebBrowserTexture();
	YZGWEBBROWSERTEXTURE_API UClass* Z_Construct_UClass_UYzgWebBrowserTexture();
	YZGWEBBROWSERTEXTURE_API UClass* Z_Construct_UClass_UYzgWebBrowserTexture_NoRegister();
// End Cross Module References
	void UYzgWebBrowserTexture::StaticRegisterNativesUYzgWebBrowserTexture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYzgWebBrowserTexture);
	UClass* Z_Construct_UClass_UYzgWebBrowserTexture_NoRegister()
	{
		return UYzgWebBrowserTexture::StaticClass();
	}
	struct Z_Construct_UClass_UYzgWebBrowserTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYzgWebBrowserTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture,
		(UObject* (*)())Z_Construct_UPackage__Script_YzgWebBrowserTexture,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYzgWebBrowserTexture_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYzgWebBrowserTexture_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Implements a texture asset for rendering webbrowser output for Android.\n* \n*  probably should have derived from UTexture2DDynamic (not UTexture)\n*/" },
		{ "HideCategories", "Adjustments Compositing LevelOfDetail Object" },
		{ "IncludePath", "YzgWebBrowserTexture.h" },
		{ "ModuleRelativePath", "Public/YzgWebBrowserTexture.h" },
		{ "ToolTip", "Implements a texture asset for rendering webbrowser output for Android.\n\n probably should have derived from UTexture2DDynamic (not UTexture)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYzgWebBrowserTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYzgWebBrowserTexture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UYzgWebBrowserTexture_Statics::ClassParams = {
		&UYzgWebBrowserTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYzgWebBrowserTexture_Statics::Class_MetaDataParams), Z_Construct_UClass_UYzgWebBrowserTexture_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UYzgWebBrowserTexture()
	{
		if (!Z_Registration_Info_UClass_UYzgWebBrowserTexture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYzgWebBrowserTexture.OuterSingleton, Z_Construct_UClass_UYzgWebBrowserTexture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UYzgWebBrowserTexture.OuterSingleton;
	}
	template<> YZGWEBBROWSERTEXTURE_API UClass* StaticClass<UYzgWebBrowserTexture>()
	{
		return UYzgWebBrowserTexture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYzgWebBrowserTexture);
	UYzgWebBrowserTexture::~UYzgWebBrowserTexture() {}
	struct Z_CompiledInDeferFile_FID_PAK_5_3_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowserTexture_Public_YzgWebBrowserTexture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAK_5_3_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowserTexture_Public_YzgWebBrowserTexture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UYzgWebBrowserTexture, UYzgWebBrowserTexture::StaticClass, TEXT("UYzgWebBrowserTexture"), &Z_Registration_Info_UClass_UYzgWebBrowserTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYzgWebBrowserTexture), 3077082076U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAK_5_3_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowserTexture_Public_YzgWebBrowserTexture_h_3906905651(TEXT("/Script/YzgWebBrowserTexture"),
		Z_CompiledInDeferFile_FID_PAK_5_3_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowserTexture_Public_YzgWebBrowserTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAK_5_3_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowserTexture_Public_YzgWebBrowserTexture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
