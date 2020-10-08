// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HitBoxes : ModuleRules
{
	public HitBoxes(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
