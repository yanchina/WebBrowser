// Copyright 2025 YZG. All Rights Reserved.

using UnrealBuildTool;
using System.IO;
using System;

public class YzgWebBrowser : ModuleRules
{
	public YzgWebBrowser(ReadOnlyTargetRules Target) : base(Target)
	{
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
			PrivateDependencyModuleNames.AddRange(
				new string[]
				{
					"Engine",
					"Launch",
					"YzgWebBrowserTexture"
				}
			);

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
            CopyBuildDirectory();

            string TargetConfiguration = Target.Configuration.ToString();
            string ModuleName = "YzgWebBrowser";
            string BuildPlatform = Target.Platform.ToString();
            string ExtraPath = "";
            if (Target.Platform == UnrealTargetPlatform.Win64)
            {
                ExtraPath = "x64";
            }

            if (Target.BuildEnvironment == TargetBuildEnvironment.Unique)
            {
                if (!Target.bBuildEditor)
                {
                    string ProjectName = Path.GetFileNameWithoutExtension(Target.ProjectFile.FullName);
                    string ProjectBuildDirectory = Path.GetDirectoryName(Target.ProjectFile.FullName);

                    // Copy Precompiled Files
                    string PrecompilePathSource = Path.Combine(ModuleDirectory, "../ThirdParty", ModuleName, "Build", BuildPlatform, "UnrealGame", TargetConfiguration, ModuleName, "YzgWebBrowser.precompiled").Replace('\\', '/');
                    string PrecompilePathTarget = Path.Combine(ProjectBuildDirectory, "Intermediate/Build", BuildPlatform, ProjectName, TargetConfiguration, ModuleName, "YzgWebBrowser.precompiled").Replace('\\', '/');
                    
                    if (File.Exists(PrecompilePathSource) && !File.Exists(PrecompilePathTarget))
                    {
                        CopyFile(PrecompilePathSource, PrecompilePathTarget);
                    }

                    // Copy Compile OBJ File
                    string PrecompileObjPathSource = Path.Combine(ModuleDirectory, "../ThirdParty", ModuleName, "Build", BuildPlatform, ExtraPath, "UnrealGame", TargetConfiguration, ModuleName, "Module.YzgWebBrowser.cpp.obj").Replace('\\', '/');
                    string PrecompileObjPathTarget = Path.Combine(ProjectBuildDirectory, "Intermediate/Build", BuildPlatform, ExtraPath, "UnrealGame", TargetConfiguration, ModuleName, "Module.YzgWebBrowser.cpp.obj").Replace('\\', '/');
                   
                    if (File.Exists(PrecompileObjPathSource) && !File.Exists(PrecompileObjPathTarget))
                    {
                        CopyFile(PrecompileObjPathSource, PrecompileObjPathTarget);
                    }
                    
                    // Copy Inc UHT
                    string SourceIncPath = Path.Combine(ModuleDirectory, "../ThirdParty", ModuleName,"Build",BuildPlatform, "UnrealGame/Inc", ModuleName).Replace('\\', '/');
                    string TargetIncPath = Path.Combine(ProjectBuildDirectory, "Intermediate/Build", BuildPlatform, ProjectName, "Inc").Replace('\\', '/');
                    CopyDirectory(SourceIncPath, TargetIncPath);

                    // DebugGame Use Development Precompile File
                    if (Target.Configuration == UnrealTargetConfiguration.DebugGame)
                    {
                        string SourecePath = Path.Combine(ModuleDirectory, "../ThirdParty", ModuleName, "Build", BuildPlatform, "UnrealGame/Development", ModuleName, "YzgWebBrowser.precompiled").Replace('\\', '/');
                        Console.WriteLine(SourecePath);
                        string TargetPath = Path.Combine(ProjectBuildDirectory, "Intermediate/Build/", BuildPlatform, ProjectName, TargetConfiguration, ModuleName, "YzgWebBrowser.precompiled").Replace('\\', '/');
                        CopyFile(SourecePath, TargetPath);

                        SourecePath = Path.Combine(ModuleDirectory, "../ThirdParty", ModuleName, "Build", BuildPlatform, ExtraPath, "UnrealGame/Development", ModuleName, "Module.YzgWebBrowser.cpp.obj").Replace('\\', '/');
                        TargetPath = Path.Combine(ProjectBuildDirectory, "Intermediate/Build", BuildPlatform, ExtraPath, "UnrealGame/Development", ModuleName, "Module.YzgWebBrowser.cpp.obj").Replace('\\', '/');
                        CopyFile(SourecePath, TargetPath);
                    }
                }
            }
            else
            {
                if (!Target.bBuildEditor)
                {
                    if (Target.Configuration == UnrealTargetConfiguration.DebugGame)
                    {
                        string SourecePath = Path.Combine(ModuleDirectory, "../ThirdParty/YzgWebBrowser/Build/", BuildPlatform, "UnrealGame/Development", ModuleName, "YzgWebBrowser.precompiled").Replace('\\', '/');
                        string TargetPath = Path.Combine(ModuleDirectory, "../../Intermediate/Build/", BuildPlatform, "UnrealGame", TargetConfiguration, ModuleName, "YzgWebBrowser.precompiled").Replace('\\', '/');
                        CopyFile(SourecePath, TargetPath);
                    }
                }
            }
		}

        PrivateDefinitions.Add("PLATFORM_SPECIFIC_WEB_BROWSER=" + (bPlatformSpecificWebBrowser ? "1" : "0"));
        PrivateDefinitions.Add("CEF_USE_MULTI_THREADED_MESSAGE_LOOP=" + (bCEFMultiThreadedMessageLoop ? "1" : "0"));

        void CopyBuildDirectory()
        {
            string PreBuildPath = Path.Combine(ModuleDirectory, "../ThirdParty/YzgWebBrowser/Build").Replace('\\', '/');
            string TargetBuildPath = Path.Combine(ModuleDirectory, "../../Intermediate").Replace('\\', '/');

            CopyDirectory(PreBuildPath, TargetBuildPath);

            PreBuildPath = Path.Combine(ModuleDirectory, "../ThirdParty/YzgWebBrowser/Binaries").Replace('\\', '/');
            TargetBuildPath = Path.Combine(ModuleDirectory, "../../").Replace('\\', '/');
            CopyDirectory(PreBuildPath, TargetBuildPath);
        }

        void CopyFile(string SourePath,string DestPath)
		{
			if(!Directory.Exists(Path.GetDirectoryName(DestPath)))
			{
                Directory.CreateDirectory(Path.GetDirectoryName(DestPath));
            }

            if (File.Exists(SourePath) && !File.Exists(DestPath))
            {
                File.Copy(SourePath, DestPath, overwrite: true);
            }
        }

        void CopyDirectory(string sourcePath, string destPath)
        {
            if (!Directory.Exists(sourcePath))
            {
                return;
            }

            string floderName = Path.GetFileName(sourcePath);
            DirectoryInfo di = Directory.CreateDirectory(Path.Combine(destPath, floderName));
            string[] files = Directory.GetFileSystemEntries(sourcePath);

            foreach (string file in files)
            {
                if (Directory.Exists(file))
                {
                    CopyDirectory(file, di.FullName);
                }
                else
                {
                    if (!File.Exists(Path.Combine(di.FullName, Path.GetFileName(file))))
                    {
                        File.Copy(file, Path.Combine(di.FullName, Path.GetFileName(file)), false);
                    }
                }
            }
        }
    }
    protected virtual bool bPlatformSpecificWebBrowser { get { return false; } }
}
