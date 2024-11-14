// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Wave/OceanologyGerstnerWaveSolverComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FOceanologyLakePresetResult;
struct FOceanologyOceanPresetResult;
struct FOceanologyWaterPresetResult;
#ifdef OCEANOLOGY_PLUGIN_OceanologyGerstnerWaveSolverComponent_generated_h
#error "OceanologyGerstnerWaveSolverComponent.generated.h already included, missing '#pragma once' in OceanologyGerstnerWaveSolverComponent.h"
#endif
#define OCEANOLOGY_PLUGIN_OceanologyGerstnerWaveSolverComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_Wave_OceanologyGerstnerWaveSolverComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpdateOceanWavesByPresetResult_Implementation(FOceanologyWaterPresetResult const& WaterPresetResult, FOceanologyOceanPresetResult const& OceanPresetResult); \
	virtual void UpdateLakeWavesByPresetResult_Implementation(FOceanologyWaterPresetResult const& WaterPresetResult, FOceanologyLakePresetResult const& LakePresetResult); \
	DECLARE_FUNCTION(execDirectionWave); \
	DECLARE_FUNCTION(execMultiplyWave); \
	DECLARE_FUNCTION(execDivideWave); \
	DECLARE_FUNCTION(execGerstnerWave); \
	DECLARE_FUNCTION(execGerstnerWavesQuadruple); \
	DECLARE_FUNCTION(execUpdateOceanWavesByPresetResult); \
	DECLARE_FUNCTION(execUpdateLakeWavesByPresetResult);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_Wave_OceanologyGerstnerWaveSolverComponent_h_30_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_Wave_OceanologyGerstnerWaveSolverComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOceanologyGerstnerWaveSolverComponent(); \
	friend struct Z_Construct_UClass_UOceanologyGerstnerWaveSolverComponent_Statics; \
public: \
	DECLARE_CLASS(UOceanologyGerstnerWaveSolverComponent, UOceanologyWaveSolverComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Oceanology_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UOceanologyGerstnerWaveSolverComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GlobalDisplacement=NETFIELD_REP_START, \
		BaseOffset, \
		Wave_1, \
		Wave_2, \
		Wave_3, \
		Wave_4, \
		Summarize, \
		NETFIELD_REP_END=Summarize	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_Wave_OceanologyGerstnerWaveSolverComponent_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOceanologyGerstnerWaveSolverComponent(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOceanologyGerstnerWaveSolverComponent(UOceanologyGerstnerWaveSolverComponent&&); \
	UOceanologyGerstnerWaveSolverComponent(const UOceanologyGerstnerWaveSolverComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOceanologyGerstnerWaveSolverComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOceanologyGerstnerWaveSolverComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOceanologyGerstnerWaveSolverComponent) \
	NO_API virtual ~UOceanologyGerstnerWaveSolverComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_Wave_OceanologyGerstnerWaveSolverComponent_h_27_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_Wave_OceanologyGerstnerWaveSolverComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_Wave_OceanologyGerstnerWaveSolverComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_Wave_OceanologyGerstnerWaveSolverComponent_h_30_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_Wave_OceanologyGerstnerWaveSolverComponent_h_30_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_Wave_OceanologyGerstnerWaveSolverComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<class UOceanologyGerstnerWaveSolverComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_Wave_OceanologyGerstnerWaveSolverComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
