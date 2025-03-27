// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YzgWebBrowser/Public/WebBrowserFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebBrowserFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_YzgWebBrowser();
	YZGWEBBROWSER_API UClass* Z_Construct_UClass_UWebBrowserFunctionLibrary();
	YZGWEBBROWSER_API UClass* Z_Construct_UClass_UWebBrowserFunctionLibrary_NoRegister();
	YZGWEBBROWSER_API UClass* Z_Construct_UClass_UWebBrowserJSParams_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWebBrowserFunctionLibrary::execClearParams)
	{
		P_GET_OBJECT(UWebBrowserJSParams,Z_Param_JSParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWebBrowserJSParams**)Z_Param__Result=UWebBrowserFunctionLibrary::ClearParams(Z_Param_JSParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebBrowserFunctionLibrary::execCreateJSParams)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWebBrowserJSParams**)Z_Param__Result=UWebBrowserFunctionLibrary::CreateJSParams();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebBrowserFunctionLibrary::execMakeJSParams)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWebBrowserJSParams**)Z_Param__Result=UWebBrowserFunctionLibrary::MakeJSParams();
		P_NATIVE_END;
	}
	void UWebBrowserFunctionLibrary::StaticRegisterNativesUWebBrowserFunctionLibrary()
	{
		UClass* Class = UWebBrowserFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AppendJSParam", &UWebBrowserFunctionLibrary::execAppendJSParam },
			{ "ClearParams", &UWebBrowserFunctionLibrary::execClearParams },
			{ "CreateJSParams", &UWebBrowserFunctionLibrary::execCreateJSParams },
			{ "MakeJSParams", &UWebBrowserFunctionLibrary::execMakeJSParams },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebBrowserFunctionLibrary_AppendJSParam_Statics
	{
		struct WebBrowserFunctionLibrary_eventAppendJSParam_Parms
		{
			UWebBrowserJSParams* JSParams;
			int32 Param;
			UWebBrowserJSParams* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JSParams;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Param;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebBrowserFunctionLibrary_AppendJSParam_Statics::NewProp_JSParams = { "JSParams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebBrowserFunctionLibrary_eventAppendJSParam_Parms, JSParams), Z_Construct_UClass_UWebBrowserJSParams_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebBrowserFunctionLibrary_AppendJSParam_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebBrowserFunctionLibrary_eventAppendJSParam_Parms, Param), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebBrowserFunctionLibrary_AppendJSParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebBrowserFunctionLibrary_eventAppendJSParam_Parms, ReturnValue), Z_Construct_UClass_UWebBrowserJSParams_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebBrowserFunctionLibrary_AppendJSParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBrowserFunctionLibrary_AppendJSParam_Statics::NewProp_JSParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBrowserFunctionLibrary_AppendJSParam_Statics::NewProp_Param,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBrowserFunctionLibrary_AppendJSParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBrowserFunctionLibrary_AppendJSParam_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebBrowser" },
		{ "CustomStructureParam", "Param" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Append" },
		{ "ModuleRelativePath", "Public/WebBrowserFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBrowserFunctionLibrary_AppendJSParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBrowserFunctionLibrary, nullptr, "AppendJSParam", nullptr, nullptr, Z_Construct_UFunction_UWebBrowserFunctionLibrary_AppendJSParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBrowserFunctionLibrary_AppendJSParam_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebBrowserFunctionLibrary_AppendJSParam_Statics::WebBrowserFunctionLibrary_eventAppendJSParam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBrowserFunctionLibrary_AppendJSParam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebBrowserFunctionLibrary_AppendJSParam_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBrowserFunctionLibrary_AppendJSParam_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWebBrowserFunctionLibrary_AppendJSParam_Statics::WebBrowserFunctionLibrary_eventAppendJSParam_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWebBrowserFunctionLibrary_AppendJSParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebBrowserFunctionLibrary_AppendJSParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebBrowserFunctionLibrary_ClearParams_Statics
	{
		struct WebBrowserFunctionLibrary_eventClearParams_Parms
		{
			UWebBrowserJSParams* JSParams;
			UWebBrowserJSParams* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JSParams;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebBrowserFunctionLibrary_ClearParams_Statics::NewProp_JSParams = { "JSParams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebBrowserFunctionLibrary_eventClearParams_Parms, JSParams), Z_Construct_UClass_UWebBrowserJSParams_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebBrowserFunctionLibrary_ClearParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebBrowserFunctionLibrary_eventClearParams_Parms, ReturnValue), Z_Construct_UClass_UWebBrowserJSParams_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebBrowserFunctionLibrary_ClearParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBrowserFunctionLibrary_ClearParams_Statics::NewProp_JSParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBrowserFunctionLibrary_ClearParams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBrowserFunctionLibrary_ClearParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebBrowser" },
		{ "DisplayName", "Clear" },
		{ "ModuleRelativePath", "Public/WebBrowserFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBrowserFunctionLibrary_ClearParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBrowserFunctionLibrary, nullptr, "ClearParams", nullptr, nullptr, Z_Construct_UFunction_UWebBrowserFunctionLibrary_ClearParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBrowserFunctionLibrary_ClearParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebBrowserFunctionLibrary_ClearParams_Statics::WebBrowserFunctionLibrary_eventClearParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBrowserFunctionLibrary_ClearParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebBrowserFunctionLibrary_ClearParams_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBrowserFunctionLibrary_ClearParams_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWebBrowserFunctionLibrary_ClearParams_Statics::WebBrowserFunctionLibrary_eventClearParams_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWebBrowserFunctionLibrary_ClearParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebBrowserFunctionLibrary_ClearParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebBrowserFunctionLibrary_CreateJSParams_Statics
	{
		struct WebBrowserFunctionLibrary_eventCreateJSParams_Parms
		{
			UWebBrowserJSParams* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebBrowserFunctionLibrary_CreateJSParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebBrowserFunctionLibrary_eventCreateJSParams_Parms, ReturnValue), Z_Construct_UClass_UWebBrowserJSParams_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebBrowserFunctionLibrary_CreateJSParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBrowserFunctionLibrary_CreateJSParams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBrowserFunctionLibrary_CreateJSParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebBrowser" },
		{ "DisplayName", "CreateJSParams" },
		{ "ModuleRelativePath", "Public/WebBrowserFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBrowserFunctionLibrary_CreateJSParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBrowserFunctionLibrary, nullptr, "CreateJSParams", nullptr, nullptr, Z_Construct_UFunction_UWebBrowserFunctionLibrary_CreateJSParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBrowserFunctionLibrary_CreateJSParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebBrowserFunctionLibrary_CreateJSParams_Statics::WebBrowserFunctionLibrary_eventCreateJSParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBrowserFunctionLibrary_CreateJSParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebBrowserFunctionLibrary_CreateJSParams_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBrowserFunctionLibrary_CreateJSParams_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWebBrowserFunctionLibrary_CreateJSParams_Statics::WebBrowserFunctionLibrary_eventCreateJSParams_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWebBrowserFunctionLibrary_CreateJSParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebBrowserFunctionLibrary_CreateJSParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebBrowserFunctionLibrary_MakeJSParams_Statics
	{
		struct WebBrowserFunctionLibrary_eventMakeJSParams_Parms
		{
			UWebBrowserJSParams* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebBrowserFunctionLibrary_MakeJSParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebBrowserFunctionLibrary_eventMakeJSParams_Parms, ReturnValue), Z_Construct_UClass_UWebBrowserJSParams_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebBrowserFunctionLibrary_MakeJSParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBrowserFunctionLibrary_MakeJSParams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBrowserFunctionLibrary_MakeJSParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebBrowser" },
		{ "DisplayName", "MakeJSParams" },
		{ "ModuleRelativePath", "Public/WebBrowserFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBrowserFunctionLibrary_MakeJSParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBrowserFunctionLibrary, nullptr, "MakeJSParams", nullptr, nullptr, Z_Construct_UFunction_UWebBrowserFunctionLibrary_MakeJSParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBrowserFunctionLibrary_MakeJSParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebBrowserFunctionLibrary_MakeJSParams_Statics::WebBrowserFunctionLibrary_eventMakeJSParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBrowserFunctionLibrary_MakeJSParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebBrowserFunctionLibrary_MakeJSParams_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBrowserFunctionLibrary_MakeJSParams_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWebBrowserFunctionLibrary_MakeJSParams_Statics::WebBrowserFunctionLibrary_eventMakeJSParams_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWebBrowserFunctionLibrary_MakeJSParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebBrowserFunctionLibrary_MakeJSParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebBrowserFunctionLibrary);
	UClass* Z_Construct_UClass_UWebBrowserFunctionLibrary_NoRegister()
	{
		return UWebBrowserFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UWebBrowserFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebBrowserFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_YzgWebBrowser,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebBrowserFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebBrowserFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebBrowserFunctionLibrary_AppendJSParam, "AppendJSParam" }, // 2172258442
		{ &Z_Construct_UFunction_UWebBrowserFunctionLibrary_ClearParams, "ClearParams" }, // 909035858
		{ &Z_Construct_UFunction_UWebBrowserFunctionLibrary_CreateJSParams, "CreateJSParams" }, // 2123276813
		{ &Z_Construct_UFunction_UWebBrowserFunctionLibrary_MakeJSParams, "MakeJSParams" }, // 1705524283
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebBrowserFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBrowserFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WebBrowserFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/WebBrowserFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebBrowserFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebBrowserFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebBrowserFunctionLibrary_Statics::ClassParams = {
		&UWebBrowserFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWebBrowserFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UWebBrowserFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UWebBrowserFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UWebBrowserFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebBrowserFunctionLibrary.OuterSingleton, Z_Construct_UClass_UWebBrowserFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebBrowserFunctionLibrary.OuterSingleton;
	}
	template<> YZGWEBBROWSER_API UClass* StaticClass<UWebBrowserFunctionLibrary>()
	{
		return UWebBrowserFunctionLibrary::StaticClass();
	}
	UWebBrowserFunctionLibrary::UWebBrowserFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebBrowserFunctionLibrary);
	UWebBrowserFunctionLibrary::~UWebBrowserFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_PAK_5_3_YzgWebBrowserWidget_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowser_Public_WebBrowserFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAK_5_3_YzgWebBrowserWidget_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowser_Public_WebBrowserFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebBrowserFunctionLibrary, UWebBrowserFunctionLibrary::StaticClass, TEXT("UWebBrowserFunctionLibrary"), &Z_Registration_Info_UClass_UWebBrowserFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebBrowserFunctionLibrary), 38892838U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAK_5_3_YzgWebBrowserWidget_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowser_Public_WebBrowserFunctionLibrary_h_2728305565(TEXT("/Script/YzgWebBrowser"),
		Z_CompiledInDeferFile_FID_PAK_5_3_YzgWebBrowserWidget_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowser_Public_WebBrowserFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAK_5_3_YzgWebBrowserWidget_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowser_Public_WebBrowserFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
