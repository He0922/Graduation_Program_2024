// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Graduation_2024 : ModuleRules
{
	public Graduation_2024(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { 
			"Core", 
			"CoreUObject", 
			"Engine", 
			"InputCore", 
			"EnhancedInput", 
			"ProceduralMeshComponent", 
			"AIModule", 
			"NavigationSystem", 
			"Niagara",
			"PhysicsCore",
            "Chaos",
            "ChaosSolverEngine",
            "GeometryCollectionEngine",
			"UMG"
		});

		PrivateDependencyModuleNames.AddRange(new string[] {  });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
