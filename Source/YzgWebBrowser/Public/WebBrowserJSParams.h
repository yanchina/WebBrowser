// Fill out your copyright notice in the Description page of Project Settings.

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