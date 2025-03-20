// Copyright Epic Games, Inc. All Rights Reserved.

#include "YzgCEF3Utils.h"
#include "Containers/UnrealString.h"
#include "Logging/LogMacros.h"
#include "Misc/Paths.h"
#include "Modules/ModuleManager.h"
#include "HAL/PlatformProcess.h"
#include "HAL/FileManager.h"
#include "Misc/OutputDeviceFile.h"
#include "YzgCEF3UtilsLog.h"
#include "Interfaces/IPluginManager.h"
#if WITH_CEF3 && PLATFORM_MAC
#  include "include/wrapper/cef_library_loader.h"
#  define CEF3_BIN_DIR TEXT("Binaries/ThirdParty/CEF3")
#  define CEF3_FRAMEWORK_DIR CEF3_BIN_DIR TEXT("/Mac/Chromium Embedded Framework.framework")
#  define CEF3_FRAMEWORK_EXE CEF3_FRAMEWORK_DIR TEXT("/Chromium Embedded Framework")

#  define CEF3_BUNDLE_DIR TEXT("../Frameworks/Chromium Embedded Framework.framework")
#  define CEF3_BUNDLE_EXE CEF3_BUNDLE_DIR TEXT("/Chromium Embedded Framework")
#endif

DEFINE_LOG_CATEGORY(LogYzgCEF3Utils);

IMPLEMENT_MODULE(FDefaultModuleImpl, YzgCEF3Utils);

#if WITH_CEF3
namespace YzgCEF3Utils
{
#if PLATFORM_WINDOWS
    void* CEF3DLLHandle = nullptr;
	void* ElfHandle = nullptr;
	void* D3DHandle = nullptr;
	void* GLESHandle = nullptr;
    void* EGLHandle = nullptr;
    void* dxcompilerHandle = nullptr;
    void* dxilHandle = nullptr;
    void* vk_swiftshaderHandle = nullptr;
    void* vulkan1Handle = nullptr;

#elif PLATFORM_MAC
	// Dynamically load the CEF framework library.
	CefScopedLibraryLoader *CEFLibraryLoader = nullptr;
	FString FrameworkPath;
#endif

	void* LoadDllCEF(const FString& Path)
	{
		if (Path.IsEmpty())
		{
			return nullptr;
		}
		void* Handle = FPlatformProcess::GetDllHandle(*Path);
		if (!Handle)
		{
			int32 ErrorNum = FPlatformMisc::GetLastError();
			TCHAR ErrorMsg[1024];
			FPlatformMisc::GetSystemErrorMessage(ErrorMsg, 1024, ErrorNum);
			UE_LOG(LogYzgCEF3Utils, Error, TEXT("Failed to get CEF3 DLL handle for %s: %s (%d)"), *Path, ErrorMsg, ErrorNum);
		}
		return Handle;
	}

	bool LoadCEF3Modules(bool bIsMainApp)
	{
#if PLATFORM_WINDOWS
        const FString DllPath = FPaths::Combine(*GetCEF3Path(), TEXT("Release"));
		FPlatformProcess::PushDllDirectory(*DllPath);
		CEF3DLLHandle = LoadDllCEF(FPaths::Combine(*DllPath, TEXT("libcef.dll")));
		if (CEF3DLLHandle)
		{
			ElfHandle = LoadDllCEF(FPaths::Combine(*DllPath, TEXT("chrome_elf.dll")));
			D3DHandle = LoadDllCEF(FPaths::Combine(*DllPath, TEXT("d3dcompiler_47.dll")));
			GLESHandle = LoadDllCEF(FPaths::Combine(*DllPath, TEXT("libGLESv2.dll")));
			EGLHandle = LoadDllCEF(FPaths::Combine(*DllPath, TEXT("libEGL.dll")));

            dxcompilerHandle = LoadDllCEF(FPaths::Combine(*DllPath, TEXT("dxcompiler.dll")));
            dxilHandle = LoadDllCEF(FPaths::Combine(*DllPath, TEXT("dxil.dll")));
            vk_swiftshaderHandle = LoadDllCEF(FPaths::Combine(*DllPath, TEXT("vk_swiftshader.dll")));
            vulkan1Handle = LoadDllCEF(FPaths::Combine(*DllPath, TEXT("vulkan-1.dll")));
		}

		FPlatformProcess::PopDllDirectory(*DllPath);

		return CEF3DLLHandle != nullptr;
#elif PLATFORM_MAC
		// Dynamically load the CEF framework library.
		CEFLibraryLoader = new CefScopedLibraryLoader();
		
		// look for proper framework bundle, and failing that, fall back to old location
		FrameworkPath = FPaths::Combine(FPaths::GetPath(FPlatformProcess::ExecutablePath()), CEF3_BUNDLE_EXE);
		if (!FPaths::FileExists(FrameworkPath))
		{
			FrameworkPath = (FPaths::Combine(*FPaths::EngineDir(), CEF3_FRAMEWORK_EXE));
		}
		FrameworkPath = FPaths::ConvertRelativePathToFull(FrameworkPath);

		bool bLoaderInitialized = false;
		if (bIsMainApp)
		{
			// first look in standard Frameworks dir, then loom in old UE path
			bLoaderInitialized = CEFLibraryLoader->LoadInMain(TCHAR_TO_ANSI(*FrameworkPath));
			if (!bLoaderInitialized)
			{
				UE_LOG(LogCEF3Utils, Error, TEXT("Chromium loader initialization failed"));
			}
		}
		else
		{
			bLoaderInitialized = CEFLibraryLoader->LoadInHelper(TCHAR_TO_ANSI(*FrameworkPath));
			if (!bLoaderInitialized)
			{
				UE_LOG(LogCEF3Utils, Error, TEXT("Chromium helper loader initialization failed"));
			}
		}
		return bLoaderInitialized;
#elif PLATFORM_LINUX
		return true;
#else
		// unsupported platform for libcef
		return false;
#endif
	}

	void UnloadCEF3Modules()
	{
#if PLATFORM_WINDOWS
		FPlatformProcess::FreeDllHandle(CEF3DLLHandle);
		CEF3DLLHandle = nullptr;
		FPlatformProcess::FreeDllHandle(ElfHandle);
		ElfHandle = nullptr;
		FPlatformProcess::FreeDllHandle(D3DHandle);
		D3DHandle = nullptr;
		FPlatformProcess::FreeDllHandle(GLESHandle);
		GLESHandle = nullptr;
		FPlatformProcess::FreeDllHandle(EGLHandle);
		EGLHandle = nullptr;
        
        FPlatformProcess::FreeDllHandle(dxcompilerHandle);
        dxcompilerHandle = nullptr;
        FPlatformProcess::FreeDllHandle(dxilHandle);
        dxilHandle = nullptr;
        FPlatformProcess::FreeDllHandle(vk_swiftshaderHandle);
        vk_swiftshaderHandle = nullptr;
        FPlatformProcess::FreeDllHandle(vulkan1Handle);
        vulkan1Handle = nullptr;
#elif PLATFORM_MAC
		delete CEFLibraryLoader;
		CEFLibraryLoader = nullptr;
#endif
	}

	FString GetD3D11On12Path()
	{
        const FString BaseDir = IPluginManager::Get().FindPlugin(TEXT("YzgWebBrowserWidget"))->GetBaseDir();
	#if PLATFORM_WINDOWS
		return FPaths::Combine(*BaseDir, TEXT("Source/ThirdParty/CEF3/D3D11On12"));
	#endif
		return FString();
	}

	FString GetYzgWebBrowserWidgetPath()
	{
		if(auto Plugin = IPluginManager::Get().FindPlugin(TEXT("YzgWebBrowserWidget")))
		{
			return Plugin->GetBaseDir();
		}

		return FString();
	}

    FString GetCEF3Path()
    {
       const FString BaseDir = IPluginManager::Get().FindPlugin(TEXT("YzgWebBrowserWidget"))->GetBaseDir();
#if PLATFORM_WINDOWS
       return FPaths::Combine(*BaseDir, TEXT("Source/ThirdParty/CEF3"), TEXT(CEF3_FULL_NAME));
#endif
        return FString();
    }

#if PLATFORM_WINDOWS
	YZGCEF3UTILS_API void* GetCEF3ModuleHandle()
	{
		return CEF3DLLHandle;
	}
#endif

#if PLATFORM_MAC
	FString GetCEF3ModulePath()
	{
		 return FrameworkPath;
	}
#endif

	void BackupCEF3Logfile(const FString& LogFilePath)
	{
		const FString Cef3LogFile = FPaths::Combine(*LogFilePath,TEXT("cef3.log"));
		IFileManager& FileManager = IFileManager::Get();
		if (FileManager.FileSize(*Cef3LogFile) > 0) // file exists and is not empty
		{
			FString Name, Extension;
			FString(Cef3LogFile).Split(TEXT("."), &Name, &Extension, ESearchCase::CaseSensitive, ESearchDir::FromEnd);
			FDateTime OriginalTime = FileManager.GetTimeStamp(*Cef3LogFile);
			FString BackupFilename = FString::Printf(TEXT("%s%s%s.%s"), *Name, BACKUP_LOG_FILENAME_POSTFIX, *OriginalTime.ToString(), *Extension);
			// do not retry resulting in an error if log still in use
			if (!FileManager.Move(*BackupFilename, *Cef3LogFile, false, false, false, true))
			{
				UE_LOG(LogYzgCEF3Utils, Warning, TEXT("Failed to backup cef3.log"));
			}
		}
	}
};
#endif //WITH_CEF3
