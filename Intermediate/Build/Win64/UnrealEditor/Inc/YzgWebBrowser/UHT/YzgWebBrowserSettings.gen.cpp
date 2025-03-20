// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YzgWebBrowser/Public/YzgWebBrowserSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYzgWebBrowserSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_YzgWebBrowser();
	YZGWEBBROWSER_API UClass* Z_Construct_UClass_UYzgWebBrowserSettings();
	YZGWEBBROWSER_API UClass* Z_Construct_UClass_UYzgWebBrowserSettings_NoRegister();
// End Cross Module References
	void UYzgWebBrowserSettings::StaticRegisterNativesUYzgWebBrowserSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYzgWebBrowserSettings);
	UClass* Z_Construct_UClass_UYzgWebBrowserSettings_NoRegister()
	{
		return UYzgWebBrowserSettings::StaticClass();
	}
	struct Z_Construct_UClass_UYzgWebBrowserSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Token;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mac_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Mac;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SystemID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYzgWebBrowserSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_YzgWebBrowser,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYzgWebBrowserSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYzgWebBrowserSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "YzgWebBrowser" },
		{ "IncludePath", "YzgWebBrowserSettings.h" },
		{ "ModuleRelativePath", "Public/YzgWebBrowserSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYzgWebBrowserSettings_Statics::NewProp_Token_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/YzgWebBrowserSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UYzgWebBrowserSettings_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYzgWebBrowserSettings, Token), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYzgWebBrowserSettings_Statics::NewProp_Token_MetaData), Z_Construct_UClass_UYzgWebBrowserSettings_Statics::NewProp_Token_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYzgWebBrowserSettings_Statics::NewProp_Mac_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/YzgWebBrowserSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UYzgWebBrowserSettings_Statics::NewProp_Mac = { "Mac", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYzgWebBrowserSettings, Mac), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYzgWebBrowserSettings_Statics::NewProp_Mac_MetaData), Z_Construct_UClass_UYzgWebBrowserSettings_Statics::NewProp_Mac_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYzgWebBrowserSettings_Statics::NewProp_SystemID_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/YzgWebBrowserSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UYzgWebBrowserSettings_Statics::NewProp_SystemID = { "SystemID", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYzgWebBrowserSettings, SystemID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYzgWebBrowserSettings_Statics::NewProp_SystemID_MetaData), Z_Construct_UClass_UYzgWebBrowserSettings_Statics::NewProp_SystemID_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYzgWebBrowserSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYzgWebBrowserSettings_Statics::NewProp_Token,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYzgWebBrowserSettings_Statics::NewProp_Mac,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYzgWebBrowserSettings_Statics::NewProp_SystemID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYzgWebBrowserSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYzgWebBrowserSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UYzgWebBrowserSettings_Statics::ClassParams = {
		&UYzgWebBrowserSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UYzgWebBrowserSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UYzgWebBrowserSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYzgWebBrowserSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UYzgWebBrowserSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYzgWebBrowserSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UYzgWebBrowserSettings()
	{
		if (!Z_Registration_Info_UClass_UYzgWebBrowserSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYzgWebBrowserSettings.OuterSingleton, Z_Construct_UClass_UYzgWebBrowserSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UYzgWebBrowserSettings.OuterSingleton;
	}
	template<> YZGWEBBROWSER_API UClass* StaticClass<UYzgWebBrowserSettings>()
	{
		return UYzgWebBrowserSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYzgWebBrowserSettings);
	UYzgWebBrowserSettings::~UYzgWebBrowserSettings() {}
	struct Z_CompiledInDeferFile_FID_PAK_5_3_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowser_Public_YzgWebBrowserSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAK_5_3_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowser_Public_YzgWebBrowserSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UYzgWebBrowserSettings, UYzgWebBrowserSettings::StaticClass, TEXT("UYzgWebBrowserSettings"), &Z_Registration_Info_UClass_UYzgWebBrowserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYzgWebBrowserSettings), 1350616182U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAK_5_3_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowser_Public_YzgWebBrowserSettings_h_284968585(TEXT("/Script/YzgWebBrowser"),
		Z_CompiledInDeferFile_FID_PAK_5_3_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowser_Public_YzgWebBrowserSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAK_5_3_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowser_Public_YzgWebBrowserSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
