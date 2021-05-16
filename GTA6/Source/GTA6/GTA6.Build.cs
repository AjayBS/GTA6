// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GTA6 : ModuleRules
{
	public GTA6(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "GameplayTasks" });
	}
}
