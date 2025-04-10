// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YzgWebBrowser/Public/WebBrowserJSParams.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebBrowserJSParams() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_YzgWebBrowser();
	YZGWEBBROWSER_API UClass* Z_Construct_UClass_UWebBrowserJSParams();
	YZGWEBBROWSER_API UClass* Z_Construct_UClass_UWebBrowserJSParams_NoRegister();
// End Cross Module References
	void UWebBrowserJSParams::StaticRegisterNativesUWebBrowserJSParams()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebBrowserJSParams);
	UClass* Z_Construct_UClass_UWebBrowserJSParams_NoRegister()
	{
		return UWebBrowserJSParams::StaticClass();
	}
	struct Z_Construct_UClass_UWebBrowserJSParams_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebBrowserJSParams_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_YzgWebBrowser,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebBrowserJSParams_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBrowserJSParams_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WebBrowserJSParams.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WebBrowserJSParams.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebBrowserJSParams_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebBrowserJSParams>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebBrowserJSParams_Statics::ClassParams = {
		&UWebBrowserJSParams::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWebBrowserJSParams_Statics::Class_MetaDataParams), Z_Construct_UClass_UWebBrowserJSParams_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UWebBrowserJSParams()
	{
		if (!Z_Registration_Info_UClass_UWebBrowserJSParams.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebBrowserJSParams.OuterSingleton, Z_Construct_UClass_UWebBrowserJSParams_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebBrowserJSParams.OuterSingleton;
	}
	template<> YZGWEBBROWSER_API UClass* StaticClass<UWebBrowserJSParams>()
	{
		return UWebBrowserJSParams::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebBrowserJSParams);
	struct Z_CompiledInDeferFile_FID_UEProject_Pak_YzgWebBrowserWidget_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowser_Public_WebBrowserJSParams_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_Pak_YzgWebBrowserWidget_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowser_Public_WebBrowserJSParams_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebBrowserJSParams, UWebBrowserJSParams::StaticClass, TEXT("UWebBrowserJSParams"), &Z_Registration_Info_UClass_UWebBrowserJSParams, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebBrowserJSParams), 634329962U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_Pak_YzgWebBrowserWidget_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowser_Public_WebBrowserJSParams_h_2313810252(TEXT("/Script/YzgWebBrowser"),
		Z_CompiledInDeferFile_FID_UEProject_Pak_YzgWebBrowserWidget_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowser_Public_WebBrowserJSParams_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_Pak_YzgWebBrowserWidget_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowser_Public_WebBrowserJSParams_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
