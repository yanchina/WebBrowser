// Copyright 2025 YZG. All Rights Reserved.

using UnrealBuildTool;

public class YzgCEF3Utils : ModuleRules
{
	public YzgCEF3Utils(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
                "YzgCEF3",
                "Projects"
            }
		);
    }
}
