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

        if (Target.Type != TargetType.Program && Target.Platform == UnrealTargetPlatform.Win64)
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

        string ProjectName = Path.GetFileNameWithoutExtension(Target.ProjectFile.FullName);
        string ProjectBuildDirectory = Path.GetDirectoryName(Target.ProjectFile.FullName);

        if (!Directory.Exists(Path.Combine(ModuleDirectory, "Private").Replace('\\', '/')))
        {
            Type = ModuleType.External;
            if (Target.Platform == UnrealTargetPlatform.Win64)
            {
                string BuildPlatform = Target.Platform.ToString();
                string TargetConfiguration = Target.Configuration.ToString();

                PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public").Replace('\\', '/'));

                if (Target.bBuildEditor)
                {
                    PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "lib/Build", BuildPlatform, "UnrealEditor", TargetConfiguration, "YzgWebBrowser/UnrealEditor-YzgWebBrowser.lib").Replace('\\', '/'));

                    CopyFile(Path.Combine(ModuleDirectory, "lib/Binaries", BuildPlatform, "UnrealEditor-YzgWebBrowser.dll").Replace('\\', '/'), Path.Combine(ModuleDirectory, "../../Binaries/Win64/UnrealEditor-YzgWebBrowser.dll").Replace('\\', '/'));
                }
                else
                {
                    string ObjPath;
                    if (Target.Configuration == UnrealTargetConfiguration.Shipping)
                    {
                        ObjPath = Path.Combine(ModuleDirectory, "lib/Build", BuildPlatform, "UnrealGame", TargetConfiguration, "YzgWebBrowser").Replace('\\', '/');
                    }
                    else
                    {
                        ObjPath = Path.Combine(ModuleDirectory, "lib/Build", BuildPlatform, "UnrealGame/Development/YzgWebBrowser").Replace('\\', '/');
                    }

                    foreach (string FileName in Directory.EnumerateFiles(ObjPath, "*.obj", SearchOption.AllDirectories))
                    {
                        PublicAdditionalLibraries.Add(FileName);
                    }
                }
            }
        }

        PrivateDefinitions.Add("PLATFORM_SPECIFIC_WEB_BROWSER=" + (bPlatformSpecificWebBrowser ? "1" : "0"));
        PrivateDefinitions.Add("CEF_USE_MULTI_THREADED_MESSAGE_LOOP=" + (bCEFMultiThreadedMessageLoop ? "1" : "0"));

        bool CopyFile(string SourePath, string DestPath)
        {
            if (!File.Exists(SourePath))
            {
                return false;
            }

            if (!Directory.Exists(Path.GetDirectoryName(DestPath)))
            {
                Directory.CreateDirectory(Path.GetDirectoryName(DestPath));
            }

            if (!File.Exists(DestPath))
            {
                File.Copy(SourePath, DestPath);
                return true;
            }

            FileInfo sourceInfo = new FileInfo(SourePath);
            FileInfo destInfo = new FileInfo(DestPath);

            if (sourceInfo.LastWriteTime != destInfo.LastWriteTime ||
            sourceInfo.Length != destInfo.Length)
            {
                if ((destInfo.Attributes & FileAttributes.ReadOnly) == FileAttributes.ReadOnly)
                {
                    destInfo.Attributes &= ~FileAttributes.ReadOnly;
                }

                File.Copy(SourePath, DestPath, true);
            }

            return true;
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
                    File.Copy(file, Path.Combine(di.FullName, Path.GetFileName(file)), true);
                }
            }
        }
    }
    protected virtual bool bPlatformSpecificWebBrowser { get { return false; } }
}
