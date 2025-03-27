// Copyright 2025 YZG. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

namespace UnrealBuildTool.Rules
{
    public class YzgWebBrowserWidget : ModuleRules
    {
        public YzgWebBrowserWidget(ReadOnlyTargetRules Target) : base(Target)
        {
            PublicDependencyModuleNames.AddRange(
                new string[]
                {
                    "Core",
                    "CoreUObject",
                    "RenderCore",
                    "RHI",
                    "YzgWebBrowser",
                    "Slate",
                    "SlateCore",
                    "UMG",
                    "Engine"
                }
            );

            if (Target.bBuildEditor == true)
            {
                PrivateIncludePathModuleNames.AddRange(
                    new string[]
                    {
                        "UnrealEd",
                    }
                );
                PrivateDependencyModuleNames.AddRange(
                    new string[]
                    {
						"EditorFramework",
                        "UnrealEd",
                    }
                );
            }

            if (Target.bBuildEditor || Target.Platform == UnrealTargetPlatform.Android || Target.Platform == UnrealTargetPlatform.IOS)
			{
                PrivateIncludePathModuleNames.AddRange(
                    new string[]
                    {
                       "YzgWebBrowserTexture",
                    }
                );
                PrivateDependencyModuleNames.AddRange(
                    new string[]
                    {
                        "YzgWebBrowserTexture",
                    }
                );
			}
        }
    }
}