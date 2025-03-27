// Copyright 2025 YZG. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class YzgWebBrowserTexture : ModuleRules
{
	public YzgWebBrowserTexture(ReadOnlyTargetRules Target) : base(Target)
	{
        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "ApplicationCore",
                "RHI",
                "InputCore",
                "Slate",
                "SlateCore",
                "Serialization",
                "MediaUtils",
                "RenderCore",
                "Engine"
            }
        );

        if (Target.Platform == UnrealTargetPlatform.Android ||
            Target.Platform == UnrealTargetPlatform.IOS ||
            Target.Platform == UnrealTargetPlatform.TVOS ||
            Target.bBuildEditor == true)
		{			
			// Needed for external texture support
			PublicIncludePathModuleNames.AddRange(
				new string[] {
					"MediaUtils"
                }
			);
		}
		else
		{
			PrecompileForTargets = ModuleRules.PrecompileTargetsType.None;
        }
    }
}
