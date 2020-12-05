// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MyTestMP : ModuleRules
{
	public MyTestMP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
