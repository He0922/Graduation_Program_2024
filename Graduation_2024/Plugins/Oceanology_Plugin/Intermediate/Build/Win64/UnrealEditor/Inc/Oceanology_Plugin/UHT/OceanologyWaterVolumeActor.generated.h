// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/OceanologyWaterVolumeActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef OCEANOLOGY_PLUGIN_OceanologyWaterVolumeActor_generated_h
#error "OceanologyWaterVolumeActor.generated.h already included, missing '#pragma once' in OceanologyWaterVolumeActor.h"
#endif
#define OCEANOLOGY_PLUGIN_OceanologyWaterVolumeActor_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyWaterVolumeActor_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void NetMulticast_ChangeOverlapStatus_Implementation(const AActor* OtherActor, bool Active); \
	virtual void Server_ChangeOverlapStatus_Implementation(const AActor* OtherActor, bool Active); \
	DECLARE_FUNCTION(execNetMulticast_ChangeOverlapStatus); \
	DECLARE_FUNCTION(execServer_ChangeOverlapStatus); \
	DECLARE_FUNCTION(execOnVolume_EndOverlap); \
	DECLARE_FUNCTION(execOnVolume_BeginOverlap); \
	DECLARE_FUNCTION(execInitialOverlappingCheck); \
	DECLARE_FUNCTION(execRegisterOverlapEvents);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyWaterVolumeActor_h_22_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyWaterVolumeActor_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOceanologyWaterVolume(); \
	friend struct Z_Construct_UClass_AOceanologyWaterVolume_Statics; \
public: \
	DECLARE_CLASS(AOceanologyWaterVolume, APhysicsVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Oceanology_Plugin"), NO_API) \
	DECLARE_SERIALIZER(AOceanologyWaterVolume) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OceanologyWater=NETFIELD_REP_START, \
		NETFIELD_REP_END=OceanologyWater	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyWaterVolumeActor_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AOceanologyWaterVolume(AOceanologyWaterVolume&&); \
	AOceanologyWaterVolume(const AOceanologyWaterVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOceanologyWaterVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOceanologyWaterVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOceanologyWaterVolume) \
	NO_API virtual ~AOceanologyWaterVolume();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyWaterVolumeActor_h_19_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyWaterVolumeActor_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyWaterVolumeActor_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyWaterVolumeActor_h_22_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyWaterVolumeActor_h_22_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyWaterVolumeActor_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<class AOceanologyWaterVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyWaterVolumeActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
