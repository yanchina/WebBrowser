// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YzgWebBrowser/Public/YzgWebJSFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYzgWebJSFunction() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_YzgWebBrowser();
	YZGWEBBROWSER_API UScriptStruct* Z_Construct_UScriptStruct_FYzgWebJSCallbackBase();
	YZGWEBBROWSER_API UScriptStruct* Z_Construct_UScriptStruct_FYzgWebJSFunction();
	YZGWEBBROWSER_API UScriptStruct* Z_Construct_UScriptStruct_FYzgWebJSResponse();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_YzgWebJSCallbackBase;
class UScriptStruct* FYzgWebJSCallbackBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_YzgWebJSCallbackBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_YzgWebJSCallbackBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FYzgWebJSCallbackBase, (UObject*)Z_Construct_UPackage__Script_YzgWebBrowser(), TEXT("YzgWebJSCallbackBase"));
	}
	return Z_Registration_Info_UScriptStruct_YzgWebJSCallbackBase.OuterSingleton;
}
template<> YZGWEBBROWSER_API UScriptStruct* StaticStruct<FYzgWebJSCallbackBase>()
{
	return FYzgWebJSCallbackBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FYzgWebJSCallbackBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYzgWebJSCallbackBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YzgWebJSFunction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FYzgWebJSCallbackBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYzgWebJSCallbackBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYzgWebJSCallbackBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_YzgWebBrowser,
		nullptr,
		&NewStructOps,
		"YzgWebJSCallbackBase",
		nullptr,
		0,
		sizeof(FYzgWebJSCallbackBase),
		alignof(FYzgWebJSCallbackBase),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYzgWebJSCallbackBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FYzgWebJSCallbackBase_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FYzgWebJSCallbackBase()
	{
		if (!Z_Registration_Info_UScriptStruct_YzgWebJSCallbackBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_YzgWebJSCallbackBase.InnerSingleton, Z_Construct_UScriptStruct_FYzgWebJSCallbackBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_YzgWebJSCallbackBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FYzgWebJSFunction>() == std::is_polymorphic<FYzgWebJSCallbackBase>(), "USTRUCT FYzgWebJSFunction cannot be polymorphic unless super FYzgWebJSCallbackBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_YzgWebJSFunction;
class UScriptStruct* FYzgWebJSFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_YzgWebJSFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_YzgWebJSFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FYzgWebJSFunction, (UObject*)Z_Construct_UPackage__Script_YzgWebBrowser(), TEXT("YzgWebJSFunction"));
	}
	return Z_Registration_Info_UScriptStruct_YzgWebJSFunction.OuterSingleton;
}
template<> YZGWEBBROWSER_API UScriptStruct* StaticStruct<FYzgWebJSFunction>()
{
	return FYzgWebJSFunction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FYzgWebJSFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYzgWebJSFunction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YzgWebJSFunction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FYzgWebJSFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYzgWebJSFunction>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYzgWebJSFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_YzgWebBrowser,
		Z_Construct_UScriptStruct_FYzgWebJSCallbackBase,
		&NewStructOps,
		"YzgWebJSFunction",
		nullptr,
		0,
		sizeof(FYzgWebJSFunction),
		alignof(FYzgWebJSFunction),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYzgWebJSFunction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FYzgWebJSFunction_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FYzgWebJSFunction()
	{
		if (!Z_Registration_Info_UScriptStruct_YzgWebJSFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_YzgWebJSFunction.InnerSingleton, Z_Construct_UScriptStruct_FYzgWebJSFunction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_YzgWebJSFunction.InnerSingleton;
	}

static_assert(std::is_polymorphic<FYzgWebJSResponse>() == std::is_polymorphic<FYzgWebJSCallbackBase>(), "USTRUCT FYzgWebJSResponse cannot be polymorphic unless super FYzgWebJSCallbackBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_YzgWebJSResponse;
class UScriptStruct* FYzgWebJSResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_YzgWebJSResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_YzgWebJSResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FYzgWebJSResponse, (UObject*)Z_Construct_UPackage__Script_YzgWebBrowser(), TEXT("YzgWebJSResponse"));
	}
	return Z_Registration_Info_UScriptStruct_YzgWebJSResponse.OuterSingleton;
}
template<> YZGWEBBROWSER_API UScriptStruct* StaticStruct<FYzgWebJSResponse>()
{
	return FYzgWebJSResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FYzgWebJSResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYzgWebJSResponse_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YzgWebJSFunction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FYzgWebJSResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYzgWebJSResponse>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYzgWebJSResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_YzgWebBrowser,
		Z_Construct_UScriptStruct_FYzgWebJSCallbackBase,
		&NewStructOps,
		"YzgWebJSResponse",
		nullptr,
		0,
		sizeof(FYzgWebJSResponse),
		alignof(FYzgWebJSResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYzgWebJSResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FYzgWebJSResponse_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FYzgWebJSResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_YzgWebJSResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_YzgWebJSResponse.InnerSingleton, Z_Construct_UScriptStruct_FYzgWebJSResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_YzgWebJSResponse.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UEProject_Pak_YzgWebBrowserWidget_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowser_Public_YzgWebJSFunction_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_Pak_YzgWebBrowserWidget_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowser_Public_YzgWebJSFunction_h_Statics::ScriptStructInfo[] = {
		{ FYzgWebJSCallbackBase::StaticStruct, Z_Construct_UScriptStruct_FYzgWebJSCallbackBase_Statics::NewStructOps, TEXT("YzgWebJSCallbackBase"), &Z_Registration_Info_UScriptStruct_YzgWebJSCallbackBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FYzgWebJSCallbackBase), 2458020919U) },
		{ FYzgWebJSFunction::StaticStruct, Z_Construct_UScriptStruct_FYzgWebJSFunction_Statics::NewStructOps, TEXT("YzgWebJSFunction"), &Z_Registration_Info_UScriptStruct_YzgWebJSFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FYzgWebJSFunction), 2202272646U) },
		{ FYzgWebJSResponse::StaticStruct, Z_Construct_UScriptStruct_FYzgWebJSResponse_Statics::NewStructOps, TEXT("YzgWebJSResponse"), &Z_Registration_Info_UScriptStruct_YzgWebJSResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FYzgWebJSResponse), 945242797U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_Pak_YzgWebBrowserWidget_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowser_Public_YzgWebJSFunction_h_1526912680(TEXT("/Script/YzgWebBrowser"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UEProject_Pak_YzgWebBrowserWidget_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowser_Public_YzgWebJSFunction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_Pak_YzgWebBrowserWidget_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowser_Public_YzgWebJSFunction_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
