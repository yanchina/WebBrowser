// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "WebBrowserJSParams.h"
#include "WebBrowserFunctionLibrary.generated.h"

UCLASS()
class YZGWEBBROWSER_API UWebBrowserFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "MakeJSParams"), Category = WebBrowser)
    static UWebBrowserJSParams* MakeJSParams();

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "CreateJSParams"), Category = WebBrowser)
    static UWebBrowserJSParams* CreateJSParams();

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Clear"), Category = WebBrowser)
    static UWebBrowserJSParams* ClearParams(UWebBrowserJSParams* JSParams);

    UFUNCTION(BlueprintCallable, BlueprintPure,CustomThunk, meta = (DisplayName="Append", CustomStructureParam = "Param"), Category = WebBrowser)
    static UWebBrowserJSParams* AppendJSParam(UWebBrowserJSParams* JSParams,int32 Param);
    static UWebBrowserJSParams* Generic_AppendJSParam(UWebBrowserJSParams* JSParams, FProperty* Property, void* ValueAddress);

    DECLARE_FUNCTION(execAppendJSParam)
    {
        P_GET_OBJECT(UWebBrowserJSParams, JSParams);
        Stack.StepCompiledIn<FProperty>(NULL);
        void* ValueAddress = Stack.MostRecentPropertyAddress;
        FProperty* Property = Stack.MostRecentProperty;
        P_FINISH;

        P_NATIVE_BEGIN;
        *(UWebBrowserJSParams**)Z_Param__Result = Generic_AppendJSParam(JSParams, Property, ValueAddress);
        P_NATIVE_END;
    }
};
