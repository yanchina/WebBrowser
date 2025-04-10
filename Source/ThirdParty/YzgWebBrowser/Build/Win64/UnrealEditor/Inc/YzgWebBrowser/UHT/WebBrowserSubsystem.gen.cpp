// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YzgWebBrowser/Public/WebBrowserSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebBrowserSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_YzgWebBrowser();
	YZGWEBBROWSER_API UClass* Z_Construct_UClass_UWebBrowserSubsystem();
	YZGWEBBROWSER_API UClass* Z_Construct_UClass_UWebBrowserSubsystem_NoRegister();
	YZGWEBBROWSER_API UScriptStruct* Z_Construct_UScriptStruct_FCreateBrowserSetting();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreateBrowserSetting;
class UScriptStruct* FCreateBrowserSetting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreateBrowserSetting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreateBrowserSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateBrowserSetting, (UObject*)Z_Construct_UPackage__Script_YzgWebBrowser(), TEXT("CreateBrowserSetting"));
	}
	return Z_Registration_Info_UScriptStruct_CreateBrowserSetting.OuterSingleton;
}
template<> YZGWEBBROWSER_API UScriptStruct* StaticStruct<FCreateBrowserSetting>()
{
	return FCreateBrowserSetting::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCreateBrowserSetting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseTransparency_MetaData[];
#endif
		static void NewProp_bUseTransparency_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTransparency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAcceleratedPaint_MetaData[];
#endif
		static void NewProp_bUseAcceleratedPaint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAcceleratedPaint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateBrowserSetting_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WebBrowserSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCreateBrowserSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateBrowserSetting>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateBrowserSetting_Statics::NewProp_URL_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/WebBrowserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCreateBrowserSetting_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateBrowserSetting, URL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateBrowserSetting_Statics::NewProp_URL_MetaData), Z_Construct_UScriptStruct_FCreateBrowserSetting_Statics::NewProp_URL_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateBrowserSetting_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/WebBrowserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCreateBrowserSetting_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateBrowserSetting, FrameRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateBrowserSetting_Statics::NewProp_FrameRate_MetaData), Z_Construct_UScriptStruct_FCreateBrowserSetting_Statics::NewProp_FrameRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateBrowserSetting_Statics::NewProp_bUseTransparency_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/WebBrowserSubsystem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCreateBrowserSetting_Statics::NewProp_bUseTransparency_SetBit(void* Obj)
	{
		((FCreateBrowserSetting*)Obj)->bUseTransparency = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateBrowserSetting_Statics::NewProp_bUseTransparency = { "bUseTransparency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCreateBrowserSetting), &Z_Construct_UScriptStruct_FCreateBrowserSetting_Statics::NewProp_bUseTransparency_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateBrowserSetting_Statics::NewProp_bUseTransparency_MetaData), Z_Construct_UScriptStruct_FCreateBrowserSetting_Statics::NewProp_bUseTransparency_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateBrowserSetting_Statics::NewProp_bUseAcceleratedPaint_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/WebBrowserSubsystem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCreateBrowserSetting_Statics::NewProp_bUseAcceleratedPaint_SetBit(void* Obj)
	{
		((FCreateBrowserSetting*)Obj)->bUseAcceleratedPaint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateBrowserSetting_Statics::NewProp_bUseAcceleratedPaint = { "bUseAcceleratedPaint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCreateBrowserSetting), &Z_Construct_UScriptStruct_FCreateBrowserSetting_Statics::NewProp_bUseAcceleratedPaint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateBrowserSetting_Statics::NewProp_bUseAcceleratedPaint_MetaData), Z_Construct_UScriptStruct_FCreateBrowserSetting_Statics::NewProp_bUseAcceleratedPaint_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateBrowserSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateBrowserSetting_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateBrowserSetting_Statics::NewProp_FrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateBrowserSetting_Statics::NewProp_bUseTransparency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateBrowserSetting_Statics::NewProp_bUseAcceleratedPaint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateBrowserSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_YzgWebBrowser,
		nullptr,
		&NewStructOps,
		"CreateBrowserSetting",
		Z_Construct_UScriptStruct_FCreateBrowserSetting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateBrowserSetting_Statics::PropPointers),
		sizeof(FCreateBrowserSetting),
		alignof(FCreateBrowserSetting),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateBrowserSetting_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCreateBrowserSetting_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateBrowserSetting_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCreateBrowserSetting()
	{
		if (!Z_Registration_Info_UScriptStruct_CreateBrowserSetting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreateBrowserSetting.InnerSingleton, Z_Construct_UScriptStruct_FCreateBrowserSetting_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CreateBrowserSetting.InnerSingleton;
	}
	DEFINE_FUNCTION(UWebBrowserSubsystem::execRemoveBrowserFromReady)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ReadyID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveBrowserFromReady(Z_Param_ReadyID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebBrowserSubsystem::execCreateBrowserForReady)
	{
		P_GET_STRUCT_REF(FCreateBrowserSetting,Z_Param_Out_BrowserSetting);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CreateBrowserForReady(Z_Param_Out_BrowserSetting);
		P_NATIVE_END;
	}
	void UWebBrowserSubsystem::StaticRegisterNativesUWebBrowserSubsystem()
	{
		UClass* Class = UWebBrowserSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateBrowserForReady", &UWebBrowserSubsystem::execCreateBrowserForReady },
			{ "RemoveBrowserFromReady", &UWebBrowserSubsystem::execRemoveBrowserFromReady },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebBrowserSubsystem_CreateBrowserForReady_Statics
	{
		struct WebBrowserSubsystem_eventCreateBrowserForReady_Parms
		{
			FCreateBrowserSetting BrowserSetting;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrowserSetting_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BrowserSetting;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBrowserSubsystem_CreateBrowserForReady_Statics::NewProp_BrowserSetting_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWebBrowserSubsystem_CreateBrowserForReady_Statics::NewProp_BrowserSetting = { "BrowserSetting", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebBrowserSubsystem_eventCreateBrowserForReady_Parms, BrowserSetting), Z_Construct_UScriptStruct_FCreateBrowserSetting, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBrowserSubsystem_CreateBrowserForReady_Statics::NewProp_BrowserSetting_MetaData), Z_Construct_UFunction_UWebBrowserSubsystem_CreateBrowserForReady_Statics::NewProp_BrowserSetting_MetaData) }; // 4233433466
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebBrowserSubsystem_CreateBrowserForReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebBrowserSubsystem_eventCreateBrowserForReady_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebBrowserSubsystem_CreateBrowserForReady_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBrowserSubsystem_CreateBrowserForReady_Statics::NewProp_BrowserSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBrowserSubsystem_CreateBrowserForReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBrowserSubsystem_CreateBrowserForReady_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebBrowser" },
		{ "DisplayName", "CreateBrowserForReady" },
		{ "ModuleRelativePath", "Public/WebBrowserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBrowserSubsystem_CreateBrowserForReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBrowserSubsystem, nullptr, "CreateBrowserForReady", nullptr, nullptr, Z_Construct_UFunction_UWebBrowserSubsystem_CreateBrowserForReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBrowserSubsystem_CreateBrowserForReady_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebBrowserSubsystem_CreateBrowserForReady_Statics::WebBrowserSubsystem_eventCreateBrowserForReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBrowserSubsystem_CreateBrowserForReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebBrowserSubsystem_CreateBrowserForReady_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBrowserSubsystem_CreateBrowserForReady_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWebBrowserSubsystem_CreateBrowserForReady_Statics::WebBrowserSubsystem_eventCreateBrowserForReady_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWebBrowserSubsystem_CreateBrowserForReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebBrowserSubsystem_CreateBrowserForReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebBrowserSubsystem_RemoveBrowserFromReady_Statics
	{
		struct WebBrowserSubsystem_eventRemoveBrowserFromReady_Parms
		{
			int32 ReadyID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReadyID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebBrowserSubsystem_RemoveBrowserFromReady_Statics::NewProp_ReadyID = { "ReadyID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebBrowserSubsystem_eventRemoveBrowserFromReady_Parms, ReadyID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UWebBrowserSubsystem_RemoveBrowserFromReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WebBrowserSubsystem_eventRemoveBrowserFromReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebBrowserSubsystem_RemoveBrowserFromReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebBrowserSubsystem_eventRemoveBrowserFromReady_Parms), &Z_Construct_UFunction_UWebBrowserSubsystem_RemoveBrowserFromReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebBrowserSubsystem_RemoveBrowserFromReady_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBrowserSubsystem_RemoveBrowserFromReady_Statics::NewProp_ReadyID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBrowserSubsystem_RemoveBrowserFromReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBrowserSubsystem_RemoveBrowserFromReady_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebBrowser" },
		{ "DisplayName", "RemoveBrowserFromReady" },
		{ "ModuleRelativePath", "Public/WebBrowserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBrowserSubsystem_RemoveBrowserFromReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBrowserSubsystem, nullptr, "RemoveBrowserFromReady", nullptr, nullptr, Z_Construct_UFunction_UWebBrowserSubsystem_RemoveBrowserFromReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBrowserSubsystem_RemoveBrowserFromReady_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWebBrowserSubsystem_RemoveBrowserFromReady_Statics::WebBrowserSubsystem_eventRemoveBrowserFromReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBrowserSubsystem_RemoveBrowserFromReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebBrowserSubsystem_RemoveBrowserFromReady_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBrowserSubsystem_RemoveBrowserFromReady_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWebBrowserSubsystem_RemoveBrowserFromReady_Statics::WebBrowserSubsystem_eventRemoveBrowserFromReady_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWebBrowserSubsystem_RemoveBrowserFromReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebBrowserSubsystem_RemoveBrowserFromReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebBrowserSubsystem);
	UClass* Z_Construct_UClass_UWebBrowserSubsystem_NoRegister()
	{
		return UWebBrowserSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UWebBrowserSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebBrowserSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_YzgWebBrowser,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebBrowserSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebBrowserSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebBrowserSubsystem_CreateBrowserForReady, "CreateBrowserForReady" }, // 749914812
		{ &Z_Construct_UFunction_UWebBrowserSubsystem_RemoveBrowserFromReady, "RemoveBrowserFromReady" }, // 2833014980
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebBrowserSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBrowserSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WebBrowserSubsystem.h" },
		{ "ModuleRelativePath", "Public/WebBrowserSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebBrowserSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebBrowserSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebBrowserSubsystem_Statics::ClassParams = {
		&UWebBrowserSubsystem::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWebBrowserSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UWebBrowserSubsystem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UWebBrowserSubsystem()
	{
		if (!Z_Registration_Info_UClass_UWebBrowserSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebBrowserSubsystem.OuterSingleton, Z_Construct_UClass_UWebBrowserSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebBrowserSubsystem.OuterSingleton;
	}
	template<> YZGWEBBROWSER_API UClass* StaticClass<UWebBrowserSubsystem>()
	{
		return UWebBrowserSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebBrowserSubsystem);
	struct Z_CompiledInDeferFile_FID_UEProject_Pak_YzgWebBrowserWidget_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowser_Public_WebBrowserSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_Pak_YzgWebBrowserWidget_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowser_Public_WebBrowserSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FCreateBrowserSetting::StaticStruct, Z_Construct_UScriptStruct_FCreateBrowserSetting_Statics::NewStructOps, TEXT("CreateBrowserSetting"), &Z_Registration_Info_UScriptStruct_CreateBrowserSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreateBrowserSetting), 4233433466U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_Pak_YzgWebBrowserWidget_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowser_Public_WebBrowserSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebBrowserSubsystem, UWebBrowserSubsystem::StaticClass, TEXT("UWebBrowserSubsystem"), &Z_Registration_Info_UClass_UWebBrowserSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebBrowserSubsystem), 3124536818U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_Pak_YzgWebBrowserWidget_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowser_Public_WebBrowserSubsystem_h_120479487(TEXT("/Script/YzgWebBrowser"),
		Z_CompiledInDeferFile_FID_UEProject_Pak_YzgWebBrowserWidget_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowser_Public_WebBrowserSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_Pak_YzgWebBrowserWidget_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowser_Public_WebBrowserSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UEProject_Pak_YzgWebBrowserWidget_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowser_Public_WebBrowserSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_Pak_YzgWebBrowserWidget_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowser_Public_WebBrowserSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
