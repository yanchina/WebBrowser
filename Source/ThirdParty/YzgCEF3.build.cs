// Copyright 2025 YZG. All Rights Reserved.

using UnrealBuildTool;
using System.IO;
using System.Collections.Generic;
using EpicGames.Core;
using System;

public class YzgCEF3 : ModuleRules
{
	public YzgCEF3(ReadOnlyTargetRules Target) : base(Target)
	{
		/** Mark the current version of the library */
		string CEFVersion = "";
		string CEFPlatform = "";
        //PublicDefinitions.Add("WITH_CEF3");

        Type = ModuleType.External;

		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
            CEFVersion = "131.4.1+g437feba+chromium-131.0.6778.265";
            CEFPlatform = "windows64";
		}

		if (CEFPlatform.Length > 0 && CEFVersion.Length > 0 && Target.bCompileCEF3)
		{
            string CEFFullName = "cef_binary_" + CEFVersion + "_" + CEFPlatform;
            string PlatformPath = Path.Combine(ModuleDirectory, "CEF3", CEFFullName).Replace('\\', '/');

            PublicSystemIncludePaths.Add(PlatformPath);

            string LibraryPath = PlatformPath.Replace('\\', '/') + "/Release";
            PublicDefinitions.Add("CEF3_LIB_VERSION=\"" + CEFVersion + "\"");
            PublicDefinitions.Add("CEF3_FULL_NAME=\"" + CEFFullName + "\"");

            if (Target.Platform == UnrealTargetPlatform.Win64)
			{
                RuntimeDependencies.Add(LibraryPath + "/snapshot_blob.bin");
                RuntimeDependencies.Add(LibraryPath + "/v8_context_snapshot.bin");
                RuntimeDependencies.Add(LibraryPath + "/vk_swiftshader_icd.json");
                RuntimeDependencies.Add(LibraryPath + "/icudtl.dat");

                foreach (string FileName in Directory.EnumerateFiles(LibraryPath, "*.pak", SearchOption.AllDirectories))
                {
                    RuntimeDependencies.Add(FileName.Replace('\\', '/'));
                }

                foreach (string FileName in Directory.EnumerateFiles(LibraryPath, "*.lib", SearchOption.TopDirectoryOnly))
                {
                    PublicAdditionalLibraries.Add(FileName.Replace('\\', '/'));
                }

                foreach (string FileName in Directory.EnumerateFiles(LibraryPath, "*.dll", SearchOption.TopDirectoryOnly))
                {
                    PublicDelayLoadDLLs.Add(System.IO.Path.GetFileName(FileName.Replace('\\', '/')));
                    RuntimeDependencies.Add(FileName);
                }
            }

            if (Target.Type != TargetType.Server)
            {
                if (Target.Platform == UnrealTargetPlatform.Win64)
                {
                    RuntimeDependencies.Add(LibraryPath + "/cefclient.exe");
                }
            }
        }

        if (Directory.Exists(Path.Combine(ModuleDirectory, "YzgWebBrowser")))
        {
            foreach (string FileName in Directory.EnumerateFiles(Path.Combine(ModuleDirectory, "YzgWebBrowser"), "*.*", SearchOption.AllDirectories))
            {
                RuntimeDependencies.Add(FileName.Replace('\\', '/'));
            }
        }
    }
}
