// Copyright 2025 YZG. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"

#ifndef YZGWEBBROWSER_API
#define YZGWEBBROWSER_API DLLEXPORT
#endif

class IWebBrowserSingleton;

struct FWebBrowserInitSettings
{
public:

    YZGWEBBROWSER_API FWebBrowserInitSettings();

    FString ProductVersion;
};

class IYzgWebBrowserModule : public IModuleInterface
{
public:
	static inline IYzgWebBrowserModule& Get()
	{
		return FModuleManager::LoadModuleChecked< IYzgWebBrowserModule >("YzgWebBrowser");
	}
	
	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("YzgWebBrowser");
	}

	/**
	 * Customize initialization settings. You must call this before the first GetSingleton call, in order to override init settings.
	 * 
	 * @param WebBrowserInitSettings The custom settings.
	 * @return true if the settings were used to initialize the singleton. False if the call was ignored due to singleton already existing.
	 */
	virtual bool CustomInitialize(const FWebBrowserInitSettings& WebBrowserInitSettings) = 0;

	/**
	 * Get the Web Browser Singleton
	 * 
	 * @return The Web Browser Singleton
	 */
	virtual IWebBrowserSingleton* GetSingleton() = 0;


	/**
	 * Check whether the web module loaded its requirements successfully
	 *
	 * @return True if the module load worked
	 */
	virtual bool IsWebModuleAvailable() const = 0;
};
