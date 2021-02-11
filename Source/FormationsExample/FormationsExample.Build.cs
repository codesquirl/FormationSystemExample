// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FormationsExample : ModuleRules
{
	public FormationsExample(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "FormationSystem" });

		PrivateIncludePathModuleNames.AddRange(new string[] { "FormationSystem" });
	}
}
