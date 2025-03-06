// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/OceanologyInfiniteOceanActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceDynamic;
class UOceanologyOceanPreset;
#ifdef OCEANOLOGY_PLUGIN_OceanologyInfiniteOceanActor_generated_h
#error "OceanologyInfiniteOceanActor.generated.h already included, missing '#pragma once' in OceanologyInfiniteOceanActor.h"
#endif
#define OCEANOLOGY_PLUGIN_OceanologyInfiniteOceanActor_generated_h

#define FID_BS_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyInfiniteOceanActor_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetShorelineWetnessMID); \
	DECLARE_FUNCTION(execCreateOrUpdateShorelineWetnessMID); \
	DECLARE_FUNCTION(execLoadPreset); \
	DECLARE_FUNCTION(execInitShorelineWetness); \
	DECLARE_FUNCTION(execForceFollow);


#define FID_BS_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyInfiniteOceanActor_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOceanologyInfiniteOcean(); \
	friend struct Z_Construct_UClass_AOceanologyInfiniteOcean_Statics; \
public: \
	DECLARE_CLASS(AOceanologyInfiniteOcean, AOceanologyWaterParent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Oceanology_Plugin"), NO_API) \
	DECLARE_SERIALIZER(AOceanologyInfiniteOcean) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Wetness=NETFIELD_REP_START, \
		NETFIELD_REP_END=Wetness	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_BS_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyInfiniteOceanActor_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AOceanologyInfiniteOcean(AOceanologyInfiniteOcean&&); \
	AOceanologyInfiniteOcean(const AOceanologyInfiniteOcean&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOceanologyInfiniteOcean); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOceanologyInfiniteOcean); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOceanologyInfiniteOcean) \
	NO_API virtual ~AOceanologyInfiniteOcean();


#define FID_BS_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyInfiniteOceanActor_h_32_PROLOG
#define FID_BS_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyInfiniteOceanActor_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BS_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyInfiniteOceanActor_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BS_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyInfiniteOceanActor_h_35_INCLASS_NO_PURE_DECLS \
	FID_BS_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyInfiniteOceanActor_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<class AOceanologyInfiniteOcean>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BS_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyInfiniteOceanActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
