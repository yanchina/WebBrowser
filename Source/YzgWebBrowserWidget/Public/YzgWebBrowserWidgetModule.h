// Copyright 2025 YZG. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

class IYzgWebBrowserWidgetModule : public IModuleInterface
{

public:
	static inline IYzgWebBrowserWidgetModule& Get()
	{
		return FModuleManager::LoadModuleChecked<IYzgWebBrowserWidgetModule>( "YzgWebBrowserWidget" );
	}

	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded( "YzgWebBrowserWidget" );
	}
};

