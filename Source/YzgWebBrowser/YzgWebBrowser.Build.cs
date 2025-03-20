// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;
using System;

public class YzgWebBrowser : ModuleRules
{
	public YzgWebBrowser(ReadOnlyTargetRules Target) : base(Target)
	{
		// CEF3 does not compile with C++20 on all platforms, remove if updated
		CppStandard = CppStandardVersion.Cpp20;

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"ApplicationCore",
				"RHI",
				"InputCore",
				"Serialization",
				"HTTP",
                "Json",
                "JsonUtilities"
            }
		);

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
				"Slate",
				"SlateCore",
                "DeveloperSettings"
            }
        );

        if (Target.Platform == UnrealTargetPlatform.Android ||
		    Target.Platform == UnrealTargetPlatform.IOS ||
		    Target.Platform == UnrealTargetPlatform.TVOS)
		{
			// We need these on mobile for external texture support
			PrivateDependencyModuleNames.AddRange(
				new string[]
				{
					"Engine",
					"Launch",
					"YzgWebBrowserTexture"
				}
			);

			// We need this one on Android for URL decoding
			PrivateDependencyModuleNames.Add("HTTP");

			CircularlyReferencedDependentModules.Add("YzgWebBrowserTexture");
		}

        bool bCEFMultiThreadedMessageLoop = false;

        if ( Target.Type != TargetType.Program && Target.Platform == UnrealTargetPlatform.Win64)
        {
			PrivateDependencyModuleNames.AddRange(
				new string[]
				{
					"Engine",
					"RenderCore",
                    "RHICore",
                    "D3D12RHI",
					"D3D11RHI"
                }
			);

			bCEFMultiThreadedMessageLoop = true;
        }

        AddEngineThirdPartyPrivateStaticDependencies(Target, "DX12");

        foreach (string FileName in Directory.EnumerateFiles(Path.Combine(PluginDirectory, "Content", "Html"), "*.*", SearchOption.TopDirectoryOnly))
        {
            RuntimeDependencies.Add(FileName.Replace('\\', '/'));
        }

        if (Target.Platform == UnrealTargetPlatform.Android)
		{
			PublicSystemLibraries.Add("libjnigraphics");
		}

		if (Target.Platform == UnrealTargetPlatform.Win64
		|| Target.Platform == UnrealTargetPlatform.Mac
		|| Target.Platform == UnrealTargetPlatform.Linux)
		{
			PrivateDependencyModuleNames.Add("YzgCEF3Utils");
			PrivateDependencyModuleNames.Add("YzgCEF3");
        }

        bPrecompile = false;
        bUsePrecompiled = true;

		if (bUsePrecompiled)
		{
			CopyPrecompileFile();
		}

        PrivateDefinitions.Add("PLATFORM_SPECIFIC_WEB_BROWSER=" + (bPlatformSpecificWebBrowser ? "1" : "0"));
        PrivateDefinitions.Add("CEF_USE_MULTI_THREADED_MESSAGE_LOOP=" + (bCEFMultiThreadedMessageLoop ? "1" : "0"));

		void CopyPrecompileFile()
		{
            string TargetConfiguration = "";
            if (Target.Configuration == UnrealTargetConfiguration.Development || Target.Configuration == UnrealTargetConfiguration.Shipping)
            {
                TargetConfiguration = Target.Configuration.ToString();
            }

            string ModuleName = "YzgWebBrowser";
            string BuildPlatform = Target.Platform.ToString();
            string ExtraPath = "";
            if (Target.Platform == UnrealTargetPlatform.Win64)
            {
                ExtraPath = "x64";
            }

            if (!Target.bBuildEditor)
            {
                if (Target.ProjectFile != null)
                {
                    string ProjectName = Path.GetFileNameWithoutExtension(Target.ProjectFile.FullName);
                    string DirectoryName = Path.GetDirectoryName(Target.ProjectFile.FullName);

                    string PrecompileBuildPathTarget = Path.Combine(DirectoryName, "Intermediate/Build", BuildPlatform, ProjectName, TargetConfiguration, ModuleName, "YzgWebBrowser.precompiled").Replace('\\', '/');
                    string PrecompileBuildPathSource = Path.Combine(ModuleDirectory, "../../Intermediate/Build", BuildPlatform, "UnrealGame", TargetConfiguration, ModuleName, "YzgWebBrowser.precompiled").Replace('\\', '/');
                    if (File.Exists(PrecompileBuildPathSource) && !File.Exists(PrecompileBuildPathTarget))
                    {
                        CopyFile(PrecompileBuildPathSource, PrecompileBuildPathTarget);
                    }

                    string PrecompileModuleObjPathTarget = Path.Combine(DirectoryName, "Intermediate/Build", BuildPlatform, ExtraPath, "UnrealGame", TargetConfiguration, ModuleName, "Module.YzgWebBrowser.cpp.obj").Replace('\\', '/');
                    string PrecompileModuleObjPathSource = Path.Combine(ModuleDirectory, "../../Intermediate/Build", BuildPlatform, ExtraPath, "UnrealGame", TargetConfiguration, ModuleName, "Module.YzgWebBrowser.cpp.obj").Replace('\\', '/');

                    if (File.Exists(PrecompileModuleObjPathSource) && !File.Exists(PrecompileModuleObjPathTarget))
                    {
                        CopyFile(PrecompileModuleObjPathSource, PrecompileModuleObjPathTarget);
                    }
                }
            }
        }

        void CopyFile(string SourePath,string DestPath)
		{
			if(!Directory.Exists(Path.GetDirectoryName(DestPath)))
			{
                Directory.CreateDirectory(Path.GetDirectoryName(DestPath));
            }
            Console.WriteLine("CopyFile: " + SourePath + " --> " + DestPath);
            File.Copy(SourePath, DestPath, overwrite: true);
        }

    }

    protected virtual bool bPlatformSpecificWebBrowser { get { return false; } }
}
