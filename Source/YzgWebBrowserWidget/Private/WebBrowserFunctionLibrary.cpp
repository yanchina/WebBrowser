// Copyright 2025 YZG. All Rights Reserved.

#include "WebBrowserFunctionLibrary.h"
#include "Kismet/KismetSystemLibrary.h"

UWebBrowserJSParams* UWebBrowserFunctionLibrary::MakeJSParams()
{
    check(IsInGameThread());
    static UWebBrowserJSParams* ParamConstruct = nullptr;
    if(!ParamConstruct)
    {
        ParamConstruct = NewObject<UWebBrowserJSParams>();
        ParamConstruct->AddToRoot();
    }

    ClearParams(ParamConstruct);

    return ParamConstruct;
}

UWebBrowserJSParams* UWebBrowserFunctionLibrary::CreateJSParams()
{
    return NewObject<UWebBrowserJSParams>();
}

UWebBrowserJSParams* UWebBrowserFunctionLibrary::ClearParams(UWebBrowserJSParams* JSParams)
{
    if (JSParams && JSParams->JSParamsID != -1 && IYzgWebBrowserModule::IsAvailable() && IYzgWebBrowserModule::Get().IsWebModuleAvailable())
    {
        IYzgWebBrowserModule::Get().GetSingleton()->ClearJSParams(JSParams->JSParamsID);
    }

    return JSParams;
}

UWebBrowserJSParams* UWebBrowserFunctionLibrary::Generic_AppendJSParam(UWebBrowserJSParams* JSParams, FProperty* Property, void* ValueAddress)
{
    if (JSParams->JSParamsID != -1 && IYzgWebBrowserModule::IsAvailable() && IYzgWebBrowserModule::Get().IsWebModuleAvailable())
    {
        IYzgWebBrowserModule::Get().GetSingleton()->AppendJSParam(JSParams->JSParamsID, Property, ValueAddress);
    }

    return JSParams;
}