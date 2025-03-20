// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYzgWebBrowserWidget_init() {}
	YZGWEBBROWSERWIDGET_API UFunction* Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBeforePopup__DelegateSignature();
	YZGWEBBROWSERWIDGET_API UFunction* Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBrowserMessage__DelegateSignature();
	YZGWEBBROWSERWIDGET_API UFunction* Z_Construct_UDelegateFunction_UYzgWebBrowser_OnConsoleMessage__DelegateSignature();
	YZGWEBBROWSERWIDGET_API UFunction* Z_Construct_UDelegateFunction_UYzgWebBrowser_OnUrlChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_YzgWebBrowserWidget;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_YzgWebBrowserWidget()
	{
		if (!Z_Registration_Info_UPackage__Script_YzgWebBrowserWidget.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBeforePopup__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UYzgWebBrowser_OnBrowserMessage__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UYzgWebBrowser_OnConsoleMessage__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UYzgWebBrowser_OnUrlChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/YzgWebBrowserWidget",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE9F800DA,
				0x669B8E6B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_YzgWebBrowserWidget.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_YzgWebBrowserWidget.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_YzgWebBrowserWidget(Z_Construct_UPackage__Script_YzgWebBrowserWidget, TEXT("/Script/YzgWebBrowserWidget"), Z_Registration_Info_UPackage__Script_YzgWebBrowserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE9F800DA, 0x669B8E6B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
