#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "YzgWebBrowserSettings.generated.h"

UCLASS(Config = Engine, DefaultConfig, meta = (DisplayName = "YzgWebBrowser"))
class YZGWEBBROWSER_API UYzgWebBrowserSettings : public UDeveloperSettings {
    GENERATED_UCLASS_BODY()

public:
    UPROPERTY( Config, EditAnywhere, Category = "Default")
    FString Token;

    UPROPERTY(Config, EditAnywhere, Category = "Default")
    FString Mac;

    UPROPERTY(Config, EditAnywhere, Category = "Default")
    FString SystemID;
};
