// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/OceanologyLakeActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UMaterialInstanceDynamic;
class UOceanologyLakePreset;
class UPrimitiveComponent;
struct FHitResult;
#ifdef OCEANOLOGY_PLUGIN_OceanologyLakeActor_generated_h
#error "OceanologyLakeActor.generated.h already included, missing '#pragma once' in OceanologyLakeActor.h"
#endif
#define OCEANOLOGY_PLUGIN_OceanologyLakeActor_generated_h

#define FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyLakeActor_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCausticsMID); \
	DECLARE_FUNCTION(execCreateOrUpdateCausticsMID); \
	DECLARE_FUNCTION(execOnUnderwater_EndOverlap); \
	DECLARE_FUNCTION(execOnUnderwater_BeginOverlap); \
	DECLARE_FUNCTION(execRegisterUnderwaterOverlapEvents); \
	DECLARE_FUNCTION(execLoadPreset); \
	DECLARE_FUNCTION(execInitAudio); \
	DECLARE_FUNCTION(execInitCaustics);


#define FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyLakeActor_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOceanologyLake(); \
	friend struct Z_Construct_UClass_AOceanologyLake_Statics; \
public: \
	DECLARE_CLASS(AOceanologyLake, AOceanologyWaterParent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Oceanology_Plugin"), NO_API) \
	DECLARE_SERIALIZER(AOceanologyLake) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GroundCaustics=NETFIELD_REP_START, \
		WaterProjection, \
		NETFIELD_REP_END=WaterProjection	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyLakeActor_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AOceanologyLake(AOceanologyLake&&); \
	AOceanologyLake(const AOceanologyLake&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOceanologyLake); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOceanologyLake); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOceanologyLake) \
	NO_API virtual ~AOceanologyLake();


#define FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyLakeActor_h_29_PROLOG
#define FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyLakeActor_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyLakeActor_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyLakeActor_h_32_INCLASS_NO_PURE_DECLS \
	FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyLakeActor_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<class AOceanologyLake>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyLakeActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
