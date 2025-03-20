// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Containers/UnrealString.h"
#include "CoreMinimal.h"
#include "HAL/Platform.h"

#if WITH_CEF3
namespace YzgCEF3Utils
{
	/**
	 * Load the required modules for CEF3, returns false if we fail to load the cef library
	 */
	YZGCEF3UTILS_API bool LoadCEF3Modules(bool bIsMainApp);

	/**
	 * Unload the required modules for CEF3
	 */
    YZGCEF3UTILS_API void UnloadCEF3Modules();

	YZGCEF3UTILS_API FString GetD3D11On12Path();

    YZGCEF3UTILS_API FString GetCEF3Path();

	YZGCEF3UTILS_API FString GetYzgWebBrowserWidgetPath();
#if PLATFORM_WINDOWS
	/**
	 * Get the module (dll) handle to the loaded CEF3 module, will be null if not loaded
	 */
    YZGCEF3UTILS_API void* GetCEF3ModuleHandle();
#endif

#if PLATFORM_MAC
	/**
	  * Get the module loaded path
	 */
    YZGCEF3UTILS_API FString GetCEF3ModulePath();
#endif

	/**
	 * Move the current cef3.log file to a backup file, so CEF makes a new log when it starts up.
	 * This backup file is then cleaned up by the logic in FMaintenance::DeleteOldLogs()
	 */
    YZGCEF3UTILS_API void BackupCEF3Logfile(const FString& LogFilePath);
};
#endif //WITH_CEF3
