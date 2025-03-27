// Copyright 2025 YZG. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "YzgWebBrowserModule.h"
#include "IWebBrowserSingleton.h"
#include "WebBrowserJSParams.generated.h"

UCLASS(Blueprintable)
class YZGWEBBROWSER_API UWebBrowserJSParams : public UObject
{
    GENERATED_BODY()
public:
    UWebBrowserJSParams();

    virtual ~UWebBrowserJSParams();
       
public :
    int32 JSParamsID = -1;
};