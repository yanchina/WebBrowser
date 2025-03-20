// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "YzgWebBrowser.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UWebBrowserJSParams;
#ifdef YZGWEBBROWSERWIDGET_YzgWebBrowser_generated_h
#error "YzgWebBrowser.generated.h already included, missing '#pragma once' in YzgWebBrowser.h"
#endif
#define YZGWEBBROWSERWIDGET_YzgWebBrowser_generated_h

#define FID_PAK_5_3_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowserWidget_Public_YzgWebBrowser_h_29_DELEGATE \
static void FOnUrlChanged_DelegateWrapper(const FMulticastScriptDelegate& OnUrlChanged, FText const& Text);


#define FID_PAK_5_3_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowserWidget_Public_YzgWebBrowser_h_30_DELEGATE \
static void FOnBeforePopup_DelegateWrapper(const FMulticastScriptDelegate& OnBeforePopup, const FString& URL, const FString& Frame);


#define FID_PAK_5_3_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowserWidget_Public_YzgWebBrowser_h_31_DELEGATE \
static void FOnConsoleMessage_DelegateWrapper(const FMulticastScriptDelegate& OnConsoleMessage, const FString& Message, const FString& Source, int32 Line);


#define FID_PAK_5_3_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowserWidget_Public_YzgWebBrowser_h_32_DELEGATE \
static void FOnBrowserMessage_DelegateWrapper(const FMulticastScriptDelegate& OnBrowserMessage, const FString& MsgName, const FString& MsgParams);


#define FID_PAK_5_3_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowserWidget_Public_YzgWebBrowser_h_26_SPARSE_DATA
#define FID_PAK_5_3_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowserWidget_Public_YzgWebBrowser_h_26_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_PAK_5_3_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowserWidget_Public_YzgWebBrowser_h_26_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_PAK_5_3_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowserWidget_Public_YzgWebBrowser_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRefresh); \
	DECLARE_FUNCTION(execSetResolution); \
	DECLARE_FUNCTION(execUnbindUObject); \
	DECLARE_FUNCTION(execBindUObject); \
	DECLARE_FUNCTION(execGetUrl); \
	DECLARE_FUNCTION(execGetTitleText); \
	DECLARE_FUNCTION(execExecuteJSFunction); \
	DECLARE_FUNCTION(execExecuteJavascript); \
	DECLARE_FUNCTION(execLoadString); \
	DECLARE_FUNCTION(execLoadURL);


#define FID_PAK_5_3_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowserWidget_Public_YzgWebBrowser_h_26_ACCESSORS
#define FID_PAK_5_3_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowserWidget_Public_YzgWebBrowser_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUYzgWebBrowser(); \
	friend struct Z_Construct_UClass_UYzgWebBrowser_Statics; \
public: \
	DECLARE_CLASS(UYzgWebBrowser, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/YzgWebBrowserWidget"), NO_API) \
	DECLARE_SERIALIZER(UYzgWebBrowser)


#define FID_PAK_5_3_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowserWidget_Public_YzgWebBrowser_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYzgWebBrowser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYzgWebBrowser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYzgWebBrowser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYzgWebBrowser); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UYzgWebBrowser(UYzgWebBrowser&&); \
	NO_API UYzgWebBrowser(const UYzgWebBrowser&); \
public: \
	NO_API virtual ~UYzgWebBrowser();


#define FID_PAK_5_3_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowserWidget_Public_YzgWebBrowser_h_23_PROLOG
#define FID_PAK_5_3_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowserWidget_Public_YzgWebBrowser_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAK_5_3_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowserWidget_Public_YzgWebBrowser_h_26_SPARSE_DATA \
	FID_PAK_5_3_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowserWidget_Public_YzgWebBrowser_h_26_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_PAK_5_3_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowserWidget_Public_YzgWebBrowser_h_26_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_PAK_5_3_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowserWidget_Public_YzgWebBrowser_h_26_RPC_WRAPPERS \
	FID_PAK_5_3_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowserWidget_Public_YzgWebBrowser_h_26_ACCESSORS \
	FID_PAK_5_3_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowserWidget_Public_YzgWebBrowser_h_26_INCLASS \
	FID_PAK_5_3_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowserWidget_Public_YzgWebBrowser_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YZGWEBBROWSERWIDGET_API UClass* StaticClass<class UYzgWebBrowser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAK_5_3_YzgWebBrowserWidget_HostProject_Plugins_YzgWebBrowserWidget_Source_YzgWebBrowserWidget_Public_YzgWebBrowser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
