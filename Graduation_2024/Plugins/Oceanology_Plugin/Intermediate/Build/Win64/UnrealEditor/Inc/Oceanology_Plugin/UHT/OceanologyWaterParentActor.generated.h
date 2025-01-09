// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/OceanologyWaterParentActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UMaterialInstanceDynamic;
class UOceanologyWaveSolverComponent;
class UTexture;
struct FLinearColor;
#ifdef OCEANOLOGY_PLUGIN_OceanologyWaterParentActor_generated_h
#error "OceanologyWaterParentActor.generated.h already included, missing '#pragma once' in OceanologyWaterParentActor.h"
#endif
#define OCEANOLOGY_PLUGIN_OceanologyWaterParentActor_generated_h

#define FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyWaterParentActor_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void InitSurface_Implementation(); \
	DECLARE_FUNCTION(execGetWaterDensity); \
	DECLARE_FUNCTION(execGetWaveHeightAtLocation); \
	DECLARE_FUNCTION(execGetValidWaveSolverByClass); \
	DECLARE_FUNCTION(execGetWaveSolver); \
	DECLARE_FUNCTION(execGetWaterFarDistanceMID); \
	DECLARE_FUNCTION(execCreateOrUpdateWaterFarDistanceMID); \
	DECLARE_FUNCTION(execGetWaterMID); \
	DECLARE_FUNCTION(execCreateOrUpdateWaterMID); \
	DECLARE_FUNCTION(execSetWaterMaterialParameters); \
	DECLARE_FUNCTION(execSetTextureParameterValue); \
	DECLARE_FUNCTION(execSetScalarParameterValue); \
	DECLARE_FUNCTION(execSetVectorParameterValue); \
	DECLARE_FUNCTION(execSetupWaveSolvers); \
	DECLARE_FUNCTION(execGetWaveSolverClass); \
	DECLARE_FUNCTION(execInitSurface); \
	DECLARE_FUNCTION(execReloadSettings);


#define FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyWaterParentActor_h_44_CALLBACK_WRAPPERS
#define FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyWaterParentActor_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOceanologyWaterParent(); \
	friend struct Z_Construct_UClass_AOceanologyWaterParent_Statics; \
public: \
	DECLARE_CLASS(AOceanologyWaterParent, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Oceanology_Plugin"), NO_API) \
	DECLARE_SERIALIZER(AOceanologyWaterParent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SurfaceScattering=NETFIELD_REP_START, \
		Caustics, \
		Refraction, \
		HorizonCorrection, \
		Flipbook, \
		Foam, \
		Folding, \
		Procedural, \
		RVT, \
		Mask, \
		ActorHeight, \
		GGX, \
		NETFIELD_REP_END=GGX	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyWaterParentActor_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AOceanologyWaterParent(AOceanologyWaterParent&&); \
	AOceanologyWaterParent(const AOceanologyWaterParent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOceanologyWaterParent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOceanologyWaterParent); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AOceanologyWaterParent) \
	NO_API virtual ~AOceanologyWaterParent();


#define FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyWaterParentActor_h_41_PROLOG
#define FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyWaterParentActor_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyWaterParentActor_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyWaterParentActor_h_44_CALLBACK_WRAPPERS \
	FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyWaterParentActor_h_44_INCLASS_NO_PURE_DECLS \
	FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyWaterParentActor_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<class AOceanologyWaterParent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Actors_OceanologyWaterParentActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
