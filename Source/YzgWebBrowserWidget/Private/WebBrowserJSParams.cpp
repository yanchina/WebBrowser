// Copyright 2025 YZG. All Rights Reserved.

#include "WebBrowserJSParams.h"

UWebBrowserJSParams::UWebBrowserJSParams()
{
    if (IYzgWebBrowserModule::IsAvailable() && IYzgWebBrowserModule::Get().IsWebModuleAvailable())
    {
        JSParamsID = IYzgWebBrowserModule::Get().GetSingleton()->RegisterJSParam();
    }
}

UWebBrowserJSParams::~UWebBrowserJSParams()
{
    if (IYzgWebBrowserModule::IsAvailable() && IYzgWebBrowserModule::Get().IsWebModuleAvailable())
    {
        IYzgWebBrowserModule::Get().GetSingleton()->UnRegisterJSParam(JSParamsID);
    }
}