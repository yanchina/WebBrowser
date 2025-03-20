// Copyright Epic Games, Inc. All Rights Reserved.

#include "YzgWebBrowserTextureModule.h"


class FYzgWebBrowserTextureModule : public IYzgWebBrowserTextureModule
{
private:
	// IModuleInterface Interface
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

IMPLEMENT_MODULE(FYzgWebBrowserTextureModule, YzgWebBrowserTexture );

void FYzgWebBrowserTextureModule::StartupModule()
{
}

void FYzgWebBrowserTextureModule::ShutdownModule()
{
}
