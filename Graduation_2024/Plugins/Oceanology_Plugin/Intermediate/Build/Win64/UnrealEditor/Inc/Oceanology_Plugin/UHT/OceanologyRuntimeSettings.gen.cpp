// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/OceanologyRuntimeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyRuntimeSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UVirtualTextureBuilder_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyRuntimeSettings();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyRuntimeSettings_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyWaveSolverComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin Class UOceanologyRuntimeSettings
void UOceanologyRuntimeSettings::StaticRegisterNativesUOceanologyRuntimeSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanologyRuntimeSettings);
UClass* Z_Construct_UClass_UOceanologyRuntimeSettings_NoRegister()
{
	return UOceanologyRuntimeSettings::StaticClass();
}
struct Z_Construct_UClass_UOceanologyRuntimeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Implements the runtime settings for the Water plugin.\n */" },
#endif
		{ "DisplayName", "Oceanology" },
		{ "IncludePath", "OceanologyRuntimeSettings.h" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements the runtime settings for the Water plugin." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LakeWaveSolverClass_MetaData[] = {
		{ "Category", "Waves" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OceanWaveSolverClass_MetaData[] = {
		{ "Category", "Waves" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LakeMesh_MetaData[] = {
		{ "Category", "Mesh|Lake" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LakeBubblesMaterial_MetaData[] = {
		{ "Category", "Material|Lake" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LakeGerstnerWaveMaterial_MetaData[] = {
		{ "Category", "Material|Lake" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LakeGerstnerWaveFarMaterial_MetaData[] = {
		{ "Category", "Material|OLake" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LakeUnderwaterMaterial_MetaData[] = {
		{ "Category", "Material|Lake" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LakeUnderwaterColorlessMaterial_MetaData[] = {
		{ "Category", "Material|Lake" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LakeVolumetricFogMaterial_MetaData[] = {
		{ "Category", "Material|Lake" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LakeCausticsMaterial_MetaData[] = {
		{ "Category", "Material|Lake" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OceanBubblesMaterial_MetaData[] = {
		{ "Category", "Material|Ocean" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OceanGerstnerWaveMaterial_MetaData[] = {
		{ "Category", "Material|Ocean" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OceanGerstnerWaveFarMaterial_MetaData[] = {
		{ "Category", "Material|Ocean" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OceanUnderwaterMaterial_MetaData[] = {
		{ "Category", "Material|Ocean" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OceanUnderwaterColorlessMaterial_MetaData[] = {
		{ "Category", "Material|Ocean" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OceanVolumetricFogMaterial_MetaData[] = {
		{ "Category", "Material|Ocean" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OceanShorelineWetnessMaterial_MetaData[] = {
		{ "Category", "Material|Ocean" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MPC_Waves_MetaData[] = {
		{ "Category", "Gerstner Waves" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cue_Wave_Ocean_MetaData[] = {
		{ "Category", "Wave Sounds" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cue_Underwater_Ocean_MetaData[] = {
		{ "Category", "Wave Sounds" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cue_Wave_Lake_MetaData[] = {
		{ "Category", "Wave Sounds" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cue_Underwater_Lake_MetaData[] = {
		{ "Category", "Wave Sounds" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RVT_Heightmap_MetaData[] = {
		{ "Category", "DO NOT EDIT - Internal Factory Default|Landscape Heightmap" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RVT_Heightmap_Builder_MetaData[] = {
		{ "Category", "DO NOT EDIT - Internal Factory Default|Landscape Heightmap" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RT_SDF_CopyUVs_MetaData[] = {
		{ "Category", "DO NOT EDIT - Internal Factory Default|Landscape Heightmap|Material" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RT_SDF_JumpFlood_MetaData[] = {
		{ "Category", "DO NOT EDIT - Internal Factory Default|Landscape Heightmap|Material" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RT_SDF_ComputeSDF_MetaData[] = {
		{ "Category", "DO NOT EDIT - Internal Factory Default|Landscape Heightmap|Material" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RT_SDF_Blur_MetaData[] = {
		{ "Category", "DO NOT EDIT - Internal Factory Default|Landscape Heightmap|Material" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RT_SDF_Compose_MetaData[] = {
		{ "Category", "DO NOT EDIT - Internal Factory Default|Landscape Heightmap|Material" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LakeBubblesEffect_MetaData[] = {
		{ "Category", "Effects|Lake|Bubbles" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OceanBubblesEffect_MetaData[] = {
		{ "Category", "Effects|Ocean|Bubbles" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeadBubblesEffectNiagara_MetaData[] = {
		{ "Category", "Effects|Swimming|Bubbles" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightFootBubblesEffectNiagara_MetaData[] = {
		{ "Category", "Effects|Swimming|Bubbles" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftFootBubblesEffectNiagara_MetaData[] = {
		{ "Category", "Effects|Swimming|Bubbles" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwimFastTrailEffectNiagara_MetaData[] = {
		{ "Category", "Effects|Swimming|Bubbles" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwimFastTrailSound_MetaData[] = {
		{ "Category", "Effects|Swimming|Sound" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraGerstnerWavesEffect_MetaData[] = {
		{ "Category", "Effects|Wave" },
		{ "ModuleRelativePath", "Public/OceanologyRuntimeSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_LakeWaveSolverClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OceanWaveSolverClass;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LakeMesh;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_VolumetricFogMesh;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LakeBubblesMaterial;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LakeGerstnerWaveMaterial;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LakeGerstnerWaveFarMaterial;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LakeUnderwaterMaterial;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LakeUnderwaterColorlessMaterial;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LakeVolumetricFogMaterial;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LakeCausticsMaterial;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OceanBubblesMaterial;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OceanGerstnerWaveMaterial;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OceanGerstnerWaveFarMaterial;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OceanUnderwaterMaterial;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OceanUnderwaterColorlessMaterial;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OceanVolumetricFogMaterial;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OceanShorelineWetnessMaterial;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MPC_Waves;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Cue_Wave_Ocean;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Cue_Underwater_Ocean;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Cue_Wave_Lake;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Cue_Underwater_Lake;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RVT_Heightmap;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RVT_Heightmap_Builder;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RT_SDF_CopyUVs;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RT_SDF_JumpFlood;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RT_SDF_ComputeSDF;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RT_SDF_Blur;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RT_SDF_Compose;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LakeBubblesEffect;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OceanBubblesEffect;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_HeadBubblesEffectNiagara;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RightFootBubblesEffectNiagara;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LeftFootBubblesEffectNiagara;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SwimFastTrailEffectNiagara;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SwimFastTrailSound;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_NiagaraGerstnerWavesEffect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanologyRuntimeSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_LakeWaveSolverClass = { "LakeWaveSolverClass", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, LakeWaveSolverClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UOceanologyWaveSolverComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LakeWaveSolverClass_MetaData), NewProp_LakeWaveSolverClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_OceanWaveSolverClass = { "OceanWaveSolverClass", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, OceanWaveSolverClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UOceanologyWaveSolverComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OceanWaveSolverClass_MetaData), NewProp_OceanWaveSolverClass_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_LakeMesh = { "LakeMesh", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, LakeMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LakeMesh_MetaData), NewProp_LakeMesh_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_VolumetricFogMesh = { "VolumetricFogMesh", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, VolumetricFogMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumetricFogMesh_MetaData), NewProp_VolumetricFogMesh_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_LakeBubblesMaterial = { "LakeBubblesMaterial", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, LakeBubblesMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LakeBubblesMaterial_MetaData), NewProp_LakeBubblesMaterial_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_LakeGerstnerWaveMaterial = { "LakeGerstnerWaveMaterial", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, LakeGerstnerWaveMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LakeGerstnerWaveMaterial_MetaData), NewProp_LakeGerstnerWaveMaterial_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_LakeGerstnerWaveFarMaterial = { "LakeGerstnerWaveFarMaterial", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, LakeGerstnerWaveFarMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LakeGerstnerWaveFarMaterial_MetaData), NewProp_LakeGerstnerWaveFarMaterial_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_LakeUnderwaterMaterial = { "LakeUnderwaterMaterial", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, LakeUnderwaterMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LakeUnderwaterMaterial_MetaData), NewProp_LakeUnderwaterMaterial_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_LakeUnderwaterColorlessMaterial = { "LakeUnderwaterColorlessMaterial", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, LakeUnderwaterColorlessMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LakeUnderwaterColorlessMaterial_MetaData), NewProp_LakeUnderwaterColorlessMaterial_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_LakeVolumetricFogMaterial = { "LakeVolumetricFogMaterial", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, LakeVolumetricFogMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LakeVolumetricFogMaterial_MetaData), NewProp_LakeVolumetricFogMaterial_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_LakeCausticsMaterial = { "LakeCausticsMaterial", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, LakeCausticsMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LakeCausticsMaterial_MetaData), NewProp_LakeCausticsMaterial_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_OceanBubblesMaterial = { "OceanBubblesMaterial", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, OceanBubblesMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OceanBubblesMaterial_MetaData), NewProp_OceanBubblesMaterial_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_OceanGerstnerWaveMaterial = { "OceanGerstnerWaveMaterial", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, OceanGerstnerWaveMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OceanGerstnerWaveMaterial_MetaData), NewProp_OceanGerstnerWaveMaterial_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_OceanGerstnerWaveFarMaterial = { "OceanGerstnerWaveFarMaterial", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, OceanGerstnerWaveFarMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OceanGerstnerWaveFarMaterial_MetaData), NewProp_OceanGerstnerWaveFarMaterial_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_OceanUnderwaterMaterial = { "OceanUnderwaterMaterial", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, OceanUnderwaterMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OceanUnderwaterMaterial_MetaData), NewProp_OceanUnderwaterMaterial_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_OceanUnderwaterColorlessMaterial = { "OceanUnderwaterColorlessMaterial", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, OceanUnderwaterColorlessMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OceanUnderwaterColorlessMaterial_MetaData), NewProp_OceanUnderwaterColorlessMaterial_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_OceanVolumetricFogMaterial = { "OceanVolumetricFogMaterial", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, OceanVolumetricFogMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OceanVolumetricFogMaterial_MetaData), NewProp_OceanVolumetricFogMaterial_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_OceanShorelineWetnessMaterial = { "OceanShorelineWetnessMaterial", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, OceanShorelineWetnessMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OceanShorelineWetnessMaterial_MetaData), NewProp_OceanShorelineWetnessMaterial_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_MPC_Waves = { "MPC_Waves", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, MPC_Waves), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MPC_Waves_MetaData), NewProp_MPC_Waves_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_Cue_Wave_Ocean = { "Cue_Wave_Ocean", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, Cue_Wave_Ocean), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cue_Wave_Ocean_MetaData), NewProp_Cue_Wave_Ocean_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_Cue_Underwater_Ocean = { "Cue_Underwater_Ocean", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, Cue_Underwater_Ocean), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cue_Underwater_Ocean_MetaData), NewProp_Cue_Underwater_Ocean_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_Cue_Wave_Lake = { "Cue_Wave_Lake", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, Cue_Wave_Lake), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cue_Wave_Lake_MetaData), NewProp_Cue_Wave_Lake_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_Cue_Underwater_Lake = { "Cue_Underwater_Lake", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, Cue_Underwater_Lake), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cue_Underwater_Lake_MetaData), NewProp_Cue_Underwater_Lake_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_RVT_Heightmap = { "RVT_Heightmap", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, RVT_Heightmap), Z_Construct_UClass_URuntimeVirtualTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RVT_Heightmap_MetaData), NewProp_RVT_Heightmap_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_RVT_Heightmap_Builder = { "RVT_Heightmap_Builder", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, RVT_Heightmap_Builder), Z_Construct_UClass_UVirtualTextureBuilder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RVT_Heightmap_Builder_MetaData), NewProp_RVT_Heightmap_Builder_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_RT_SDF_CopyUVs = { "RT_SDF_CopyUVs", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, RT_SDF_CopyUVs), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RT_SDF_CopyUVs_MetaData), NewProp_RT_SDF_CopyUVs_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_RT_SDF_JumpFlood = { "RT_SDF_JumpFlood", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, RT_SDF_JumpFlood), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RT_SDF_JumpFlood_MetaData), NewProp_RT_SDF_JumpFlood_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_RT_SDF_ComputeSDF = { "RT_SDF_ComputeSDF", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, RT_SDF_ComputeSDF), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RT_SDF_ComputeSDF_MetaData), NewProp_RT_SDF_ComputeSDF_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_RT_SDF_Blur = { "RT_SDF_Blur", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, RT_SDF_Blur), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RT_SDF_Blur_MetaData), NewProp_RT_SDF_Blur_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_RT_SDF_Compose = { "RT_SDF_Compose", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, RT_SDF_Compose), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RT_SDF_Compose_MetaData), NewProp_RT_SDF_Compose_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_LakeBubblesEffect = { "LakeBubblesEffect", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, LakeBubblesEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LakeBubblesEffect_MetaData), NewProp_LakeBubblesEffect_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_OceanBubblesEffect = { "OceanBubblesEffect", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, OceanBubblesEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OceanBubblesEffect_MetaData), NewProp_OceanBubblesEffect_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_HeadBubblesEffectNiagara = { "HeadBubblesEffectNiagara", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, HeadBubblesEffectNiagara), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeadBubblesEffectNiagara_MetaData), NewProp_HeadBubblesEffectNiagara_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_RightFootBubblesEffectNiagara = { "RightFootBubblesEffectNiagara", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, RightFootBubblesEffectNiagara), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightFootBubblesEffectNiagara_MetaData), NewProp_RightFootBubblesEffectNiagara_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_LeftFootBubblesEffectNiagara = { "LeftFootBubblesEffectNiagara", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, LeftFootBubblesEffectNiagara), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftFootBubblesEffectNiagara_MetaData), NewProp_LeftFootBubblesEffectNiagara_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_SwimFastTrailEffectNiagara = { "SwimFastTrailEffectNiagara", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, SwimFastTrailEffectNiagara), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwimFastTrailEffectNiagara_MetaData), NewProp_SwimFastTrailEffectNiagara_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_SwimFastTrailSound = { "SwimFastTrailSound", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, SwimFastTrailSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwimFastTrailSound_MetaData), NewProp_SwimFastTrailSound_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_NiagaraGerstnerWavesEffect = { "NiagaraGerstnerWavesEffect", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOceanologyRuntimeSettings, NiagaraGerstnerWavesEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraGerstnerWavesEffect_MetaData), NewProp_NiagaraGerstnerWavesEffect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_LakeWaveSolverClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_OceanWaveSolverClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_LakeMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_VolumetricFogMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_LakeBubblesMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_LakeGerstnerWaveMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_LakeGerstnerWaveFarMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_LakeUnderwaterMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_LakeUnderwaterColorlessMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_LakeVolumetricFogMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_LakeCausticsMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_OceanBubblesMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_OceanGerstnerWaveMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_OceanGerstnerWaveFarMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_OceanUnderwaterMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_OceanUnderwaterColorlessMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_OceanVolumetricFogMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_OceanShorelineWetnessMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_MPC_Waves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_Cue_Wave_Ocean,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_Cue_Underwater_Ocean,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_Cue_Wave_Lake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_Cue_Underwater_Lake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_RVT_Heightmap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_RVT_Heightmap_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_RT_SDF_CopyUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_RT_SDF_JumpFlood,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_RT_SDF_ComputeSDF,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_RT_SDF_Blur,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_RT_SDF_Compose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_LakeBubblesEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_OceanBubblesEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_HeadBubblesEffectNiagara,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_RightFootBubblesEffectNiagara,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_LeftFootBubblesEffectNiagara,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_SwimFastTrailEffectNiagara,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_SwimFastTrailSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::NewProp_NiagaraGerstnerWavesEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::ClassParams = {
	&UOceanologyRuntimeSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanologyRuntimeSettings()
{
	if (!Z_Registration_Info_UClass_UOceanologyRuntimeSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanologyRuntimeSettings.OuterSingleton, Z_Construct_UClass_UOceanologyRuntimeSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanologyRuntimeSettings.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanologyRuntimeSettings>()
{
	return UOceanologyRuntimeSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanologyRuntimeSettings);
UOceanologyRuntimeSettings::~UOceanologyRuntimeSettings() {}
// End Class UOceanologyRuntimeSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_OceanologyRuntimeSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanologyRuntimeSettings, UOceanologyRuntimeSettings::StaticClass, TEXT("UOceanologyRuntimeSettings"), &Z_Registration_Info_UClass_UOceanologyRuntimeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanologyRuntimeSettings), 2012980862U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_OceanologyRuntimeSettings_h_3501717314(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_OceanologyRuntimeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_OceanologyRuntimeSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
