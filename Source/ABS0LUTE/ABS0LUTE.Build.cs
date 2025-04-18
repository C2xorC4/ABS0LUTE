// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ABS0LUTE : ModuleRules
{
	public ABS0LUTE(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
