// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MultiSem7Parcial1 : ModuleRules
{
	public MultiSem7Parcial1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
