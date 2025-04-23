// Copyright 2025 YZG. All Rights Reserved.

#include "YzgWebBrowserWidgetModule.h"
#include "YzgWebBrowserAssetManager.h"
#include "YzgWebBrowserModule.h"
#include "IWebBrowserSingleton.h"
#include "Materials/Material.h"

//////////////////////////////////////////////////////////////////////////
// FWebBrowserWidgetModule

class FYzgWebBrowserWidgetModule : public IYzgWebBrowserWidgetModule
{
public:
	virtual void StartupModule() override
	{
		if (WebBrowserAssetMgr == nullptr)
		{
			WebBrowserAssetMgr = NewObject<UWebBrowserAssetManager>((UObject*)GetTransientPackage(), NAME_None, RF_Transient | RF_Public);
			WebBrowserAssetMgr->LoadDefaultMaterials();

			FModuleManager& ModuleManager = FModuleManager::Get();
#if !IS_MONOLITHIC
			FName YzgWebBrowserMoudleName = FName("YzgWebBrowser");
			if(!ModuleManager.GetModule(FName("YzgWebBrowser")))
			{
				ModuleManager.AddModule(YzgWebBrowserMoudleName);
				// YzgWebBrowser is External, set YzgWebBrowser dll Path
				if(ModuleManager.GetModuleFilename(YzgWebBrowserMoudleName).IsEmpty())
				{
                    FString CurrentModlePath = ModuleManager.GetModuleFilename(FName("YzgWebBrowserWidget"));
                    ModuleManager.SetModuleFilename(YzgWebBrowserMoudleName, FPaths::ConvertRelativePathToFull(CurrentModlePath).Replace(TEXT("UnrealEditor-YzgWebBrowserWidget.dll"), TEXT("UnrealEditor-YzgWebBrowser.dll")));
				}
			}
#endif
			IYzgWebBrowserModule::Get(); // force the module to load
			if (IYzgWebBrowserModule::IsAvailable() && IYzgWebBrowserModule::Get().IsWebModuleAvailable())
			{
				IWebBrowserSingleton* WebBrowserSingleton = IYzgWebBrowserModule::Get().GetSingleton();
				if (WebBrowserSingleton)
				{
					WebBrowserSingleton->SetDefaultMaterial(WebBrowserAssetMgr->GetDefaultMaterial());
					WebBrowserSingleton->SetDefaultTranslucentMaterial(WebBrowserAssetMgr->GetDefaultTranslucentMaterial());
				}
			}
		}
	}

	virtual void ShutdownModule() override
	{
	}
	
private:
	UWebBrowserAssetManager* WebBrowserAssetMgr;
};

//////////////////////////////////////////////////////////////////////////

IMPLEMENT_MODULE(FYzgWebBrowserWidgetModule, YzgWebBrowserWidget);
