// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YzgWebBrowserWidget/Public/YzgWebBrowser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYzgWebBrowser() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_YzgWebBrowserWidget();
	YZGWEBBROWSER_API UClass* Z_Construct_UClass_UWebBrowserJSParams_NoRegister();
	YZGWEBBROWSERWIDGET_API UClass* Z_Construct_UClass_UYzgWebBrowser();
	YZGWEBBROWSERWIDGET_API UClass* Z_Construct_UClass_UYzgWebBrowser_NoRegister();
	YZGWEBBROWSERWIDGET_API UFunction* Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBeforePopup__DelegateSignature();
	YZGWEBBROWSERWIDGET_API UFunction* Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBrowserMessage__DelegateSignature();
	YZGWEBBROWSERWIDGET_API UFunction* Z_Construct_UDelegateFunction_UYzgWebBrowser_OnConsoleMessage__DelegateSignature();
	YZGWEBBROWSERWIDGET_API UFunction* Z_Construct_UDelegateFunction_UYzgWebBrowser_OnUrlChanged__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UYzgWebBrowser_OnUrlChanged__DelegateSignature_Statics
	{
		struct YzgWebBrowser_eventOnUrlChanged_Parms
		{
			FText Text;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UYzgWebBrowser_OnUrlChanged__DelegateSignature_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_UYzgWebBrowser_OnUrlChanged__DelegateSignature_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YzgWebBrowser_eventOnUrlChanged_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UYzgWebBrowser_OnUrlChanged__DelegateSignature_Statics::NewProp_Text_MetaData), Z_Construct_UDelegateFunction_UYzgWebBrowser_OnUrlChanged__DelegateSignature_Statics::NewProp_Text_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UYzgWebBrowser_OnUrlChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UYzgWebBrowser_OnUrlChanged__DelegateSignature_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UYzgWebBrowser_OnUrlChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YzgWebBrowser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UYzgWebBrowser_OnUrlChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYzgWebBrowser, nullptr, "OnUrlChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UYzgWebBrowser_OnUrlChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UYzgWebBrowser_OnUrlChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UYzgWebBrowser_OnUrlChanged__DelegateSignature_Statics::YzgWebBrowser_eventOnUrlChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UYzgWebBrowser_OnUrlChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UYzgWebBrowser_OnUrlChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UYzgWebBrowser_OnUrlChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UYzgWebBrowser_OnUrlChanged__DelegateSignature_Statics::YzgWebBrowser_eventOnUrlChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UYzgWebBrowser_OnUrlChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UYzgWebBrowser_OnUrlChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UYzgWebBrowser::FOnUrlChanged_DelegateWrapper(const FMulticastScriptDelegate& OnUrlChanged, FText const& Text)
{
	struct YzgWebBrowser_eventOnUrlChanged_Parms
	{
		FText Text;
	};
	YzgWebBrowser_eventOnUrlChanged_Parms Parms;
	Parms.Text=Text;
	OnUrlChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBeforePopup__DelegateSignature_Statics
	{
		struct YzgWebBrowser_eventOnBeforePopup_Parms
		{
			FString URL;
			FString Frame;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Frame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBeforePopup__DelegateSignature_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YzgWebBrowser_eventOnBeforePopup_Parms, URL), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBeforePopup__DelegateSignature_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YzgWebBrowser_eventOnBeforePopup_Parms, Frame), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBeforePopup__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBeforePopup__DelegateSignature_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBeforePopup__DelegateSignature_Statics::NewProp_Frame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBeforePopup__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YzgWebBrowser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBeforePopup__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYzgWebBrowser, nullptr, "OnBeforePopup__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBeforePopup__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBeforePopup__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBeforePopup__DelegateSignature_Statics::YzgWebBrowser_eventOnBeforePopup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBeforePopup__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBeforePopup__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBeforePopup__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBeforePopup__DelegateSignature_Statics::YzgWebBrowser_eventOnBeforePopup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBeforePopup__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBeforePopup__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UYzgWebBrowser::FOnBeforePopup_DelegateWrapper(const FMulticastScriptDelegate& OnBeforePopup, const FString& URL, const FString& Frame)
{
	struct YzgWebBrowser_eventOnBeforePopup_Parms
	{
		FString URL;
		FString Frame;
	};
	YzgWebBrowser_eventOnBeforePopup_Parms Parms;
	Parms.URL=URL;
	Parms.Frame=Frame;
	OnBeforePopup.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UYzgWebBrowser_OnConsoleMessage__DelegateSignature_Statics
	{
		struct YzgWebBrowser_eventOnConsoleMessage_Parms
		{
			FString Message;
			FString Source;
			int32 Line;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Source;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Line;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UYzgWebBrowser_OnConsoleMessage__DelegateSignature_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UYzgWebBrowser_OnConsoleMessage__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YzgWebBrowser_eventOnConsoleMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UYzgWebBrowser_OnConsoleMessage__DelegateSignature_Statics::NewProp_Message_MetaData), Z_Construct_UDelegateFunction_UYzgWebBrowser_OnConsoleMessage__DelegateSignature_Statics::NewProp_Message_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UYzgWebBrowser_OnConsoleMessage__DelegateSignature_Statics::NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UYzgWebBrowser_OnConsoleMessage__DelegateSignature_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YzgWebBrowser_eventOnConsoleMessage_Parms, Source), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UYzgWebBrowser_OnConsoleMessage__DelegateSignature_Statics::NewProp_Source_MetaData), Z_Construct_UDelegateFunction_UYzgWebBrowser_OnConsoleMessage__DelegateSignature_Statics::NewProp_Source_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UYzgWebBrowser_OnConsoleMessage__DelegateSignature_Statics::NewProp_Line = { "Line", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YzgWebBrowser_eventOnConsoleMessage_Parms, Line), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UYzgWebBrowser_OnConsoleMessage__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UYzgWebBrowser_OnConsoleMessage__DelegateSignature_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UYzgWebBrowser_OnConsoleMessage__DelegateSignature_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UYzgWebBrowser_OnConsoleMessage__DelegateSignature_Statics::NewProp_Line,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UYzgWebBrowser_OnConsoleMessage__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YzgWebBrowser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UYzgWebBrowser_OnConsoleMessage__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYzgWebBrowser, nullptr, "OnConsoleMessage__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UYzgWebBrowser_OnConsoleMessage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UYzgWebBrowser_OnConsoleMessage__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UYzgWebBrowser_OnConsoleMessage__DelegateSignature_Statics::YzgWebBrowser_eventOnConsoleMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UYzgWebBrowser_OnConsoleMessage__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UYzgWebBrowser_OnConsoleMessage__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UYzgWebBrowser_OnConsoleMessage__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UYzgWebBrowser_OnConsoleMessage__DelegateSignature_Statics::YzgWebBrowser_eventOnConsoleMessage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UYzgWebBrowser_OnConsoleMessage__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UYzgWebBrowser_OnConsoleMessage__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UYzgWebBrowser::FOnConsoleMessage_DelegateWrapper(const FMulticastScriptDelegate& OnConsoleMessage, const FString& Message, const FString& Source, int32 Line)
{
	struct YzgWebBrowser_eventOnConsoleMessage_Parms
	{
		FString Message;
		FString Source;
		int32 Line;
	};
	YzgWebBrowser_eventOnConsoleMessage_Parms Parms;
	Parms.Message=Message;
	Parms.Source=Source;
	Parms.Line=Line;
	OnConsoleMessage.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBrowserMessage__DelegateSignature_Statics
	{
		struct YzgWebBrowser_eventOnBrowserMessage_Parms
		{
			FString MsgName;
			FString MsgParams;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_MsgName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MsgParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBrowserMessage__DelegateSignature_Statics::NewProp_MsgName = { "MsgName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YzgWebBrowser_eventOnBrowserMessage_Parms, MsgName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBrowserMessage__DelegateSignature_Statics::NewProp_MsgParams = { "MsgParams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YzgWebBrowser_eventOnBrowserMessage_Parms, MsgParams), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBrowserMessage__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBrowserMessage__DelegateSignature_Statics::NewProp_MsgName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBrowserMessage__DelegateSignature_Statics::NewProp_MsgParams,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBrowserMessage__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YzgWebBrowser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBrowserMessage__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYzgWebBrowser, nullptr, "OnBrowserMessage__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBrowserMessage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBrowserMessage__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBrowserMessage__DelegateSignature_Statics::YzgWebBrowser_eventOnBrowserMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBrowserMessage__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBrowserMessage__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBrowserMessage__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBrowserMessage__DelegateSignature_Statics::YzgWebBrowser_eventOnBrowserMessage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBrowserMessage__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBrowserMessage__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UYzgWebBrowser::FOnBrowserMessage_DelegateWrapper(const FMulticastScriptDelegate& OnBrowserMessage, const FString& MsgName, const FString& MsgParams)
{
	struct YzgWebBrowser_eventOnBrowserMessage_Parms
	{
		FString MsgName;
		FString MsgParams;
	};
	YzgWebBrowser_eventOnBrowserMessage_Parms Parms;
	Parms.MsgName=MsgName;
	Parms.MsgParams=MsgParams;
	OnBrowserMessage.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UYzgWebBrowser::execRefresh)
	{
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Refresh(Z_Param_bForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYzgWebBrowser::execSetResolution)
	{
		P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_InResolution);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetResolution(Z_Param_Out_InResolution);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYzgWebBrowser::execUnbindUObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_UBOOL(Z_Param_bIsPermanent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnbindUObject(Z_Param_Name,Z_Param_Object,Z_Param_bIsPermanent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYzgWebBrowser::execBindUObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_UBOOL(Z_Param_bIsPermanent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindUObject(Z_Param_Name,Z_Param_Object,Z_Param_bIsPermanent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYzgWebBrowser::execGetUrl)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetUrl();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYzgWebBrowser::execGetTitleText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetTitleText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYzgWebBrowser::execExecuteJSFunction)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FunctionName);
		P_GET_OBJECT(UWebBrowserJSParams,Z_Param_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteJSFunction(Z_Param_FunctionName,Z_Param_Params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYzgWebBrowser::execExecuteJavascript)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ScriptText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteJavascript(Z_Param_ScriptText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYzgWebBrowser::execLoadString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Contents);
		P_GET_PROPERTY(FStrProperty,Z_Param_DummyURL);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadString(Z_Param_Contents,Z_Param_DummyURL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYzgWebBrowser::execLoadURL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewURL);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadURL(Z_Param_NewURL);
		P_NATIVE_END;
	}
	void UYzgWebBrowser::StaticRegisterNativesUYzgWebBrowser()
	{
		UClass* Class = UYzgWebBrowser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindUObject", &UYzgWebBrowser::execBindUObject },
			{ "ExecuteJavascript", &UYzgWebBrowser::execExecuteJavascript },
			{ "ExecuteJSFunction", &UYzgWebBrowser::execExecuteJSFunction },
			{ "GetTitleText", &UYzgWebBrowser::execGetTitleText },
			{ "GetUrl", &UYzgWebBrowser::execGetUrl },
			{ "LoadString", &UYzgWebBrowser::execLoadString },
			{ "LoadURL", &UYzgWebBrowser::execLoadURL },
			{ "Refresh", &UYzgWebBrowser::execRefresh },
			{ "SetResolution", &UYzgWebBrowser::execSetResolution },
			{ "UnbindUObject", &UYzgWebBrowser::execUnbindUObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYzgWebBrowser_BindUObject_Statics
	{
		struct YzgWebBrowser_eventBindUObject_Parms
		{
			FString Name;
			UObject* Object;
			bool bIsPermanent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_bIsPermanent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPermanent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYzgWebBrowser_BindUObject_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYzgWebBrowser_BindUObject_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YzgWebBrowser_eventBindUObject_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYzgWebBrowser_BindUObject_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UYzgWebBrowser_BindUObject_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYzgWebBrowser_BindUObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YzgWebBrowser_eventBindUObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UYzgWebBrowser_BindUObject_Statics::NewProp_bIsPermanent_SetBit(void* Obj)
	{
		((YzgWebBrowser_eventBindUObject_Parms*)Obj)->bIsPermanent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYzgWebBrowser_BindUObject_Statics::NewProp_bIsPermanent = { "bIsPermanent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YzgWebBrowser_eventBindUObject_Parms), &Z_Construct_UFunction_UYzgWebBrowser_BindUObject_Statics::NewProp_bIsPermanent_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYzgWebBrowser_BindUObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYzgWebBrowser_BindUObject_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYzgWebBrowser_BindUObject_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYzgWebBrowser_BindUObject_Statics::NewProp_bIsPermanent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYzgWebBrowser_BindUObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebBrowser" },
		{ "CPP_Default_bIsPermanent", "true" },
		{ "ModuleRelativePath", "Public/YzgWebBrowser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYzgWebBrowser_BindUObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYzgWebBrowser, nullptr, "BindUObject", nullptr, nullptr, Z_Construct_UFunction_UYzgWebBrowser_BindUObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYzgWebBrowser_BindUObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYzgWebBrowser_BindUObject_Statics::YzgWebBrowser_eventBindUObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYzgWebBrowser_BindUObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYzgWebBrowser_BindUObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYzgWebBrowser_BindUObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UYzgWebBrowser_BindUObject_Statics::YzgWebBrowser_eventBindUObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UYzgWebBrowser_BindUObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYzgWebBrowser_BindUObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYzgWebBrowser_ExecuteJavascript_Statics
	{
		struct YzgWebBrowser_eventExecuteJavascript_Parms
		{
			FString ScriptText;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ScriptText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYzgWebBrowser_ExecuteJavascript_Statics::NewProp_ScriptText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYzgWebBrowser_ExecuteJavascript_Statics::NewProp_ScriptText = { "ScriptText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YzgWebBrowser_eventExecuteJavascript_Parms, ScriptText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYzgWebBrowser_ExecuteJavascript_Statics::NewProp_ScriptText_MetaData), Z_Construct_UFunction_UYzgWebBrowser_ExecuteJavascript_Statics::NewProp_ScriptText_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYzgWebBrowser_ExecuteJavascript_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYzgWebBrowser_ExecuteJavascript_Statics::NewProp_ScriptText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYzgWebBrowser_ExecuteJavascript_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web Browser" },
		{ "Comment", "/**\n\x09* Executes a JavaScript string in the context of the web page\n\x09*\n\x09* @param ScriptText JavaScript string to execute\n\x09*/" },
		{ "ModuleRelativePath", "Public/YzgWebBrowser.h" },
		{ "ToolTip", "Executes a JavaScript string in the context of the web page\n\n@param ScriptText JavaScript string to execute" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYzgWebBrowser_ExecuteJavascript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYzgWebBrowser, nullptr, "ExecuteJavascript", nullptr, nullptr, Z_Construct_UFunction_UYzgWebBrowser_ExecuteJavascript_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYzgWebBrowser_ExecuteJavascript_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYzgWebBrowser_ExecuteJavascript_Statics::YzgWebBrowser_eventExecuteJavascript_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYzgWebBrowser_ExecuteJavascript_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYzgWebBrowser_ExecuteJavascript_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYzgWebBrowser_ExecuteJavascript_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UYzgWebBrowser_ExecuteJavascript_Statics::YzgWebBrowser_eventExecuteJavascript_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UYzgWebBrowser_ExecuteJavascript()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYzgWebBrowser_ExecuteJavascript_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYzgWebBrowser_ExecuteJSFunction_Statics
	{
		struct YzgWebBrowser_eventExecuteJSFunction_Parms
		{
			FString FunctionName;
			UWebBrowserJSParams* Params;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Params;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYzgWebBrowser_ExecuteJSFunction_Statics::NewProp_FunctionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYzgWebBrowser_ExecuteJSFunction_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YzgWebBrowser_eventExecuteJSFunction_Parms, FunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYzgWebBrowser_ExecuteJSFunction_Statics::NewProp_FunctionName_MetaData), Z_Construct_UFunction_UYzgWebBrowser_ExecuteJSFunction_Statics::NewProp_FunctionName_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYzgWebBrowser_ExecuteJSFunction_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YzgWebBrowser_eventExecuteJSFunction_Parms, Params), Z_Construct_UClass_UWebBrowserJSParams_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYzgWebBrowser_ExecuteJSFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYzgWebBrowser_ExecuteJSFunction_Statics::NewProp_FunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYzgWebBrowser_ExecuteJSFunction_Statics::NewProp_Params,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYzgWebBrowser_ExecuteJSFunction_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "JSParams" },
		{ "Category", "Web Browser" },
		{ "DisplayName", "ExecuteFunction" },
		{ "ModuleRelativePath", "Public/YzgWebBrowser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYzgWebBrowser_ExecuteJSFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYzgWebBrowser, nullptr, "ExecuteJSFunction", nullptr, nullptr, Z_Construct_UFunction_UYzgWebBrowser_ExecuteJSFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYzgWebBrowser_ExecuteJSFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYzgWebBrowser_ExecuteJSFunction_Statics::YzgWebBrowser_eventExecuteJSFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYzgWebBrowser_ExecuteJSFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYzgWebBrowser_ExecuteJSFunction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYzgWebBrowser_ExecuteJSFunction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UYzgWebBrowser_ExecuteJSFunction_Statics::YzgWebBrowser_eventExecuteJSFunction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UYzgWebBrowser_ExecuteJSFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYzgWebBrowser_ExecuteJSFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYzgWebBrowser_GetTitleText_Statics
	{
		struct YzgWebBrowser_eventGetTitleText_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UYzgWebBrowser_GetTitleText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YzgWebBrowser_eventGetTitleText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYzgWebBrowser_GetTitleText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYzgWebBrowser_GetTitleText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYzgWebBrowser_GetTitleText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web Browser" },
		{ "Comment", "/**\n\x09 * Get the current title of the web page\n\x09 */" },
		{ "ModuleRelativePath", "Public/YzgWebBrowser.h" },
		{ "ToolTip", "Get the current title of the web page" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYzgWebBrowser_GetTitleText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYzgWebBrowser, nullptr, "GetTitleText", nullptr, nullptr, Z_Construct_UFunction_UYzgWebBrowser_GetTitleText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYzgWebBrowser_GetTitleText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYzgWebBrowser_GetTitleText_Statics::YzgWebBrowser_eventGetTitleText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYzgWebBrowser_GetTitleText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYzgWebBrowser_GetTitleText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYzgWebBrowser_GetTitleText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UYzgWebBrowser_GetTitleText_Statics::YzgWebBrowser_eventGetTitleText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UYzgWebBrowser_GetTitleText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYzgWebBrowser_GetTitleText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYzgWebBrowser_GetUrl_Statics
	{
		struct YzgWebBrowser_eventGetUrl_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYzgWebBrowser_GetUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YzgWebBrowser_eventGetUrl_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYzgWebBrowser_GetUrl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYzgWebBrowser_GetUrl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYzgWebBrowser_GetUrl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web Browser" },
		{ "Comment", "/**\n\x09* Gets the currently loaded URL.\n\x09*\n\x09* @return The URL, or empty string if no document is loaded.\n\x09*/" },
		{ "ModuleRelativePath", "Public/YzgWebBrowser.h" },
		{ "ToolTip", "Gets the currently loaded URL.\n\n@return The URL, or empty string if no document is loaded." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYzgWebBrowser_GetUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYzgWebBrowser, nullptr, "GetUrl", nullptr, nullptr, Z_Construct_UFunction_UYzgWebBrowser_GetUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYzgWebBrowser_GetUrl_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYzgWebBrowser_GetUrl_Statics::YzgWebBrowser_eventGetUrl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYzgWebBrowser_GetUrl_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYzgWebBrowser_GetUrl_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYzgWebBrowser_GetUrl_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UYzgWebBrowser_GetUrl_Statics::YzgWebBrowser_eventGetUrl_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UYzgWebBrowser_GetUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYzgWebBrowser_GetUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYzgWebBrowser_LoadString_Statics
	{
		struct YzgWebBrowser_eventLoadString_Parms
		{
			FString Contents;
			FString DummyURL;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Contents;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DummyURL;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYzgWebBrowser_LoadString_Statics::NewProp_Contents = { "Contents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YzgWebBrowser_eventLoadString_Parms, Contents), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYzgWebBrowser_LoadString_Statics::NewProp_DummyURL = { "DummyURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YzgWebBrowser_eventLoadString_Parms, DummyURL), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYzgWebBrowser_LoadString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYzgWebBrowser_LoadString_Statics::NewProp_Contents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYzgWebBrowser_LoadString_Statics::NewProp_DummyURL,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYzgWebBrowser_LoadString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web Browser" },
		{ "Comment", "/**\n\x09 * Load a string as data to create a web page\n\x09 *\n\x09 * @param Contents String to load\n\x09 * @param DummyURL Dummy URL for the page\n\x09 */" },
		{ "ModuleRelativePath", "Public/YzgWebBrowser.h" },
		{ "ToolTip", "Load a string as data to create a web page\n\n@param Contents String to load\n@param DummyURL Dummy URL for the page" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYzgWebBrowser_LoadString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYzgWebBrowser, nullptr, "LoadString", nullptr, nullptr, Z_Construct_UFunction_UYzgWebBrowser_LoadString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYzgWebBrowser_LoadString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYzgWebBrowser_LoadString_Statics::YzgWebBrowser_eventLoadString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYzgWebBrowser_LoadString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYzgWebBrowser_LoadString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYzgWebBrowser_LoadString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UYzgWebBrowser_LoadString_Statics::YzgWebBrowser_eventLoadString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UYzgWebBrowser_LoadString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYzgWebBrowser_LoadString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYzgWebBrowser_LoadURL_Statics
	{
		struct YzgWebBrowser_eventLoadURL_Parms
		{
			FString NewURL;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewURL;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYzgWebBrowser_LoadURL_Statics::NewProp_NewURL = { "NewURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YzgWebBrowser_eventLoadURL_Parms, NewURL), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYzgWebBrowser_LoadURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYzgWebBrowser_LoadURL_Statics::NewProp_NewURL,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYzgWebBrowser_LoadURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web Browser" },
		{ "Comment", "/**\n\x09 * Load the specified URL\n\x09 *\n\x09 * @param NewURL New URL to load\n\x09 */" },
		{ "ModuleRelativePath", "Public/YzgWebBrowser.h" },
		{ "ToolTip", "Load the specified URL\n\n@param NewURL New URL to load" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYzgWebBrowser_LoadURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYzgWebBrowser, nullptr, "LoadURL", nullptr, nullptr, Z_Construct_UFunction_UYzgWebBrowser_LoadURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYzgWebBrowser_LoadURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYzgWebBrowser_LoadURL_Statics::YzgWebBrowser_eventLoadURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYzgWebBrowser_LoadURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYzgWebBrowser_LoadURL_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYzgWebBrowser_LoadURL_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UYzgWebBrowser_LoadURL_Statics::YzgWebBrowser_eventLoadURL_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UYzgWebBrowser_LoadURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYzgWebBrowser_LoadURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYzgWebBrowser_Refresh_Statics
	{
		struct YzgWebBrowser_eventRefresh_Parms
		{
			bool bForce;
		};
		static void NewProp_bForce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYzgWebBrowser_Refresh_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((YzgWebBrowser_eventRefresh_Parms*)Obj)->bForce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYzgWebBrowser_Refresh_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YzgWebBrowser_eventRefresh_Parms), &Z_Construct_UFunction_UYzgWebBrowser_Refresh_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYzgWebBrowser_Refresh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYzgWebBrowser_Refresh_Statics::NewProp_bForce,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYzgWebBrowser_Refresh_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebBrowser" },
		{ "CPP_Default_bForce", "true" },
		{ "ModuleRelativePath", "Public/YzgWebBrowser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYzgWebBrowser_Refresh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYzgWebBrowser, nullptr, "Refresh", nullptr, nullptr, Z_Construct_UFunction_UYzgWebBrowser_Refresh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYzgWebBrowser_Refresh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYzgWebBrowser_Refresh_Statics::YzgWebBrowser_eventRefresh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYzgWebBrowser_Refresh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYzgWebBrowser_Refresh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYzgWebBrowser_Refresh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UYzgWebBrowser_Refresh_Statics::YzgWebBrowser_eventRefresh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UYzgWebBrowser_Refresh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYzgWebBrowser_Refresh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYzgWebBrowser_SetResolution_Statics
	{
		struct YzgWebBrowser_eventSetResolution_Parms
		{
			FIntPoint InResolution;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InResolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InResolution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYzgWebBrowser_SetResolution_Statics::NewProp_InResolution_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYzgWebBrowser_SetResolution_Statics::NewProp_InResolution = { "InResolution", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YzgWebBrowser_eventSetResolution_Parms, InResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYzgWebBrowser_SetResolution_Statics::NewProp_InResolution_MetaData), Z_Construct_UFunction_UYzgWebBrowser_SetResolution_Statics::NewProp_InResolution_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYzgWebBrowser_SetResolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYzgWebBrowser_SetResolution_Statics::NewProp_InResolution,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYzgWebBrowser_SetResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebBrowser" },
		{ "ModuleRelativePath", "Public/YzgWebBrowser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYzgWebBrowser_SetResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYzgWebBrowser, nullptr, "SetResolution", nullptr, nullptr, Z_Construct_UFunction_UYzgWebBrowser_SetResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYzgWebBrowser_SetResolution_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYzgWebBrowser_SetResolution_Statics::YzgWebBrowser_eventSetResolution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYzgWebBrowser_SetResolution_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYzgWebBrowser_SetResolution_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYzgWebBrowser_SetResolution_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UYzgWebBrowser_SetResolution_Statics::YzgWebBrowser_eventSetResolution_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UYzgWebBrowser_SetResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYzgWebBrowser_SetResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYzgWebBrowser_UnbindUObject_Statics
	{
		struct YzgWebBrowser_eventUnbindUObject_Parms
		{
			FString Name;
			UObject* Object;
			bool bIsPermanent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_bIsPermanent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPermanent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYzgWebBrowser_UnbindUObject_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYzgWebBrowser_UnbindUObject_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YzgWebBrowser_eventUnbindUObject_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYzgWebBrowser_UnbindUObject_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UYzgWebBrowser_UnbindUObject_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYzgWebBrowser_UnbindUObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YzgWebBrowser_eventUnbindUObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UYzgWebBrowser_UnbindUObject_Statics::NewProp_bIsPermanent_SetBit(void* Obj)
	{
		((YzgWebBrowser_eventUnbindUObject_Parms*)Obj)->bIsPermanent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYzgWebBrowser_UnbindUObject_Statics::NewProp_bIsPermanent = { "bIsPermanent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YzgWebBrowser_eventUnbindUObject_Parms), &Z_Construct_UFunction_UYzgWebBrowser_UnbindUObject_Statics::NewProp_bIsPermanent_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYzgWebBrowser_UnbindUObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYzgWebBrowser_UnbindUObject_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYzgWebBrowser_UnbindUObject_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYzgWebBrowser_UnbindUObject_Statics::NewProp_bIsPermanent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYzgWebBrowser_UnbindUObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebBrowser" },
		{ "CPP_Default_bIsPermanent", "true" },
		{ "ModuleRelativePath", "Public/YzgWebBrowser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYzgWebBrowser_UnbindUObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYzgWebBrowser, nullptr, "UnbindUObject", nullptr, nullptr, Z_Construct_UFunction_UYzgWebBrowser_UnbindUObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYzgWebBrowser_UnbindUObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYzgWebBrowser_UnbindUObject_Statics::YzgWebBrowser_eventUnbindUObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYzgWebBrowser_UnbindUObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYzgWebBrowser_UnbindUObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYzgWebBrowser_UnbindUObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UYzgWebBrowser_UnbindUObject_Statics::YzgWebBrowser_eventUnbindUObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UYzgWebBrowser_UnbindUObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYzgWebBrowser_UnbindUObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYzgWebBrowser);
	UClass* Z_Construct_UClass_UYzgWebBrowser_NoRegister()
	{
		return UYzgWebBrowser::StaticClass();
	}
	struct Z_Construct_UClass_UYzgWebBrowser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBrowserMessage_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBrowserMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUrlChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUrlChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBeforePopup_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeforePopup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnConsoleMessage_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConsoleMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InitialURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsTransparency_MetaData[];
#endif
		static void NewProp_bSupportsTransparency_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsTransparency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseTransparencyValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseTransparencyValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseResolution_MetaData[];
#endif
		static void NewProp_bUseResolution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAcceleratedPaint_MetaData[];
#endif
		static void NewProp_bUseAcceleratedPaint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAcceleratedPaint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bManageInPool_MetaData[];
#endif
		static void NewProp_bManageInPool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bManageInPool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYzgWebBrowser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_YzgWebBrowserWidget,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYzgWebBrowser_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UYzgWebBrowser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYzgWebBrowser_BindUObject, "BindUObject" }, // 682534292
		{ &Z_Construct_UFunction_UYzgWebBrowser_ExecuteJavascript, "ExecuteJavascript" }, // 175917211
		{ &Z_Construct_UFunction_UYzgWebBrowser_ExecuteJSFunction, "ExecuteJSFunction" }, // 2252500632
		{ &Z_Construct_UFunction_UYzgWebBrowser_GetTitleText, "GetTitleText" }, // 3291950617
		{ &Z_Construct_UFunction_UYzgWebBrowser_GetUrl, "GetUrl" }, // 4273562308
		{ &Z_Construct_UFunction_UYzgWebBrowser_LoadString, "LoadString" }, // 1008364925
		{ &Z_Construct_UFunction_UYzgWebBrowser_LoadURL, "LoadURL" }, // 2913095954
		{ &Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBeforePopup__DelegateSignature, "OnBeforePopup__DelegateSignature" }, // 2823541079
		{ &Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBrowserMessage__DelegateSignature, "OnBrowserMessage__DelegateSignature" }, // 2139031017
		{ &Z_Construct_UDelegateFunction_UYzgWebBrowser_OnConsoleMessage__DelegateSignature, "OnConsoleMessage__DelegateSignature" }, // 2460895396
		{ &Z_Construct_UDelegateFunction_UYzgWebBrowser_OnUrlChanged__DelegateSignature, "OnUrlChanged__DelegateSignature" }, // 1805845881
		{ &Z_Construct_UFunction_UYzgWebBrowser_Refresh, "Refresh" }, // 1524413132
		{ &Z_Construct_UFunction_UYzgWebBrowser_SetResolution, "SetResolution" }, // 3593826655
		{ &Z_Construct_UFunction_UYzgWebBrowser_UnbindUObject, "UnbindUObject" }, // 125701926
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYzgWebBrowser_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYzgWebBrowser_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Web Browser" },
		{ "IncludePath", "YzgWebBrowser.h" },
		{ "ModuleRelativePath", "Public/YzgWebBrowser.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_OnBrowserMessage_MetaData[] = {
		{ "Category", "Web Browser|Event" },
		{ "ModuleRelativePath", "Public/YzgWebBrowser.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_OnBrowserMessage = { "OnBrowserMessage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYzgWebBrowser, OnBrowserMessage), Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBrowserMessage__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_OnBrowserMessage_MetaData), Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_OnBrowserMessage_MetaData) }; // 2139031017
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_OnUrlChanged_MetaData[] = {
		{ "Category", "Web Browser|Event" },
		{ "Comment", "/** Called when the Url changes. */" },
		{ "ModuleRelativePath", "Public/YzgWebBrowser.h" },
		{ "ToolTip", "Called when the Url changes." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_OnUrlChanged = { "OnUrlChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYzgWebBrowser, OnUrlChanged), Z_Construct_UDelegateFunction_UYzgWebBrowser_OnUrlChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_OnUrlChanged_MetaData), Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_OnUrlChanged_MetaData) }; // 1805845881
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_OnBeforePopup_MetaData[] = {
		{ "Category", "Web Browser|Event" },
		{ "Comment", "/** Called when a popup is about to spawn. */" },
		{ "ModuleRelativePath", "Public/YzgWebBrowser.h" },
		{ "ToolTip", "Called when a popup is about to spawn." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_OnBeforePopup = { "OnBeforePopup", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYzgWebBrowser, OnBeforePopup), Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBeforePopup__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_OnBeforePopup_MetaData), Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_OnBeforePopup_MetaData) }; // 2823541079
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_OnConsoleMessage_MetaData[] = {
		{ "Category", "Web Browser|Event" },
		{ "Comment", "/** Called when the browser has console spew to print */" },
		{ "ModuleRelativePath", "Public/YzgWebBrowser.h" },
		{ "ToolTip", "Called when the browser has console spew to print" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_OnConsoleMessage = { "OnConsoleMessage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYzgWebBrowser, OnConsoleMessage), Z_Construct_UDelegateFunction_UYzgWebBrowser_OnConsoleMessage__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_OnConsoleMessage_MetaData), Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_OnConsoleMessage_MetaData) }; // 2460895396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_InitialURL_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** URL that the browser will initially navigate to. The URL should include the protocol, eg http:// */" },
		{ "ModuleRelativePath", "Public/YzgWebBrowser.h" },
		{ "ToolTip", "URL that the browser will initially navigate to. The URL should include the protocol, eg http://" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_InitialURL = { "InitialURL", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYzgWebBrowser, InitialURL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_InitialURL_MetaData), Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_InitialURL_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_bSupportsTransparency_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Should the browser window support transparency. */" },
		{ "ModuleRelativePath", "Public/YzgWebBrowser.h" },
		{ "ToolTip", "Should the browser window support transparency." },
	};
#endif
	void Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_bSupportsTransparency_SetBit(void* Obj)
	{
		((UYzgWebBrowser*)Obj)->bSupportsTransparency = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_bSupportsTransparency = { "bSupportsTransparency", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UYzgWebBrowser), &Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_bSupportsTransparency_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_bSupportsTransparency_MetaData), Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_bSupportsTransparency_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "60" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/YzgWebBrowser.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYzgWebBrowser, FrameRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_FrameRate_MetaData), Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_FrameRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_MouseTransparencyValue_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/YzgWebBrowser.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_MouseTransparencyValue = { "MouseTransparencyValue", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYzgWebBrowser, MouseTransparencyValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_MouseTransparencyValue_MetaData), Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_MouseTransparencyValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_bUseResolution_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/YzgWebBrowser.h" },
	};
#endif
	void Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_bUseResolution_SetBit(void* Obj)
	{
		((UYzgWebBrowser*)Obj)->bUseResolution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_bUseResolution = { "bUseResolution", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UYzgWebBrowser), &Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_bUseResolution_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_bUseResolution_MetaData), Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_bUseResolution_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_Resolution_MetaData[] = {
		{ "Category", "Appearance" },
		{ "EditCondition", "bUseResolution==true" },
		{ "ModuleRelativePath", "Public/YzgWebBrowser.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYzgWebBrowser, Resolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_Resolution_MetaData), Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_Resolution_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_bUseAcceleratedPaint_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/YzgWebBrowser.h" },
	};
#endif
	void Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_bUseAcceleratedPaint_SetBit(void* Obj)
	{
		((UYzgWebBrowser*)Obj)->bUseAcceleratedPaint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_bUseAcceleratedPaint = { "bUseAcceleratedPaint", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UYzgWebBrowser), &Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_bUseAcceleratedPaint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_bUseAcceleratedPaint_MetaData), Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_bUseAcceleratedPaint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_bManageInPool_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/YzgWebBrowser.h" },
	};
#endif
	void Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_bManageInPool_SetBit(void* Obj)
	{
		((UYzgWebBrowser*)Obj)->bManageInPool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_bManageInPool = { "bManageInPool", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UYzgWebBrowser), &Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_bManageInPool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_bManageInPool_MetaData), Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_bManageInPool_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYzgWebBrowser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_OnBrowserMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_OnUrlChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_OnBeforePopup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_OnConsoleMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_InitialURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_bSupportsTransparency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_FrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_MouseTransparencyValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_bUseResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_bUseAcceleratedPaint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYzgWebBrowser_Statics::NewProp_bManageInPool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYzgWebBrowser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYzgWebBrowser>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UYzgWebBrowser_Statics::ClassParams = {
		&UYzgWebBrowser::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UYzgWebBrowser_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UYzgWebBrowser_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYzgWebBrowser_Statics::Class_MetaDataParams), Z_Construct_UClass_UYzgWebBrowser_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYzgWebBrowser_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UYzgWebBrowser()
	{
		if (!Z_Registration_Info_UClass_UYzgWebBrowser.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYzgWebBrowser.OuterSingleton, Z_Construct_UClass_UYzgWebBrowser_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UYzgWebBrowser.OuterSingleton;
	}
	template<> YZGWEBBROWSERWIDGET_API UClass* StaticClass<UYzgWebBrowser>()
	{
		return UYzgWebBrowser::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYzgWebBrowser);
	UYzgWebBrowser::~UYzgWebBrowser() {}
	struct Z_CompiledInDeferFile_FID_PAK_5_3_YzgWebBrowserWidget_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowserWidget_Public_YzgWebBrowser_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAK_5_3_YzgWebBrowserWidget_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowserWidget_Public_YzgWebBrowser_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UYzgWebBrowser, UYzgWebBrowser::StaticClass, TEXT("UYzgWebBrowser"), &Z_Registration_Info_UClass_UYzgWebBrowser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYzgWebBrowser), 3909547607U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAK_5_3_YzgWebBrowserWidget_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowserWidget_Public_YzgWebBrowser_h_1634324264(TEXT("/Script/YzgWebBrowserWidget"),
		Z_CompiledInDeferFile_FID_PAK_5_3_YzgWebBrowserWidget_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowserWidget_Public_YzgWebBrowser_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAK_5_3_YzgWebBrowserWidget_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowserWidget_Public_YzgWebBrowser_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
