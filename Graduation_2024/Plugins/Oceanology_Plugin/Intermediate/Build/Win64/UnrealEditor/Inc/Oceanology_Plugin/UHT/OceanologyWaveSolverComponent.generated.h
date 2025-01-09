// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Wave/OceanologyWaveSolverComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AOceanologyWaterParent;
struct FOceanologyWaterPresetResult;
#ifdef OCEANOLOGY_PLUGIN_OceanologyWaveSolverComponent_generated_h
#error "OceanologyWaveSolverComponent.generated.h already included, missing '#pragma once' in OceanologyWaveSolverComponent.h"
#endif
#define OCEANOLOGY_PLUGIN_OceanologyWaveSolverComponent_generated_h

#define FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_Wave_OceanologyWaveSolverComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual double GetGlobalWaveDirection_Implementation(); \
	virtual double GetMaxWaveHeight_Implementation(); \
	virtual double GetMinWaveHeight_Implementation(); \
	virtual FVector GetWaveHeightAtLocation_Implementation(FVector const& Location); \
	virtual void UpdateWavesByPresetResult_Implementation(AOceanologyWaterParent* Water, FOceanologyWaterPresetResult const& WaterPresetResult); \
	virtual void UpdateWaves_Implementation(); \
	virtual void InitWaves_Implementation(AOceanologyWaterParent* InOwner, bool InUsingMPC_Waves); \
	DECLARE_FUNCTION(execStopWaveSimulation); \
	DECLARE_FUNCTION(execStartWaveSimulation); \
	DECLARE_FUNCTION(execIsUsingMPC_Waves); \
	DECLARE_FUNCTION(execGetGlobalWaveDirection); \
	DECLARE_FUNCTION(execGetMaxWaveHeight); \
	DECLARE_FUNCTION(execGetMinWaveHeight); \
	DECLARE_FUNCTION(execGetWaveHeightAtLocation); \
	DECLARE_FUNCTION(execUpdateWavesByPresetResult); \
	DECLARE_FUNCTION(execUpdateWaves); \
	DECLARE_FUNCTION(execInitWaves);


#define FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_Wave_OceanologyWaveSolverComponent_h_34_CALLBACK_WRAPPERS
#define FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_Wave_OceanologyWaveSolverComponent_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOceanologyWaveSolverComponent(); \
	friend struct Z_Construct_UClass_UOceanologyWaveSolverComponent_Statics; \
public: \
	DECLARE_CLASS(UOceanologyWaveSolverComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Oceanology_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UOceanologyWaveSolverComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Owner=NETFIELD_REP_START, \
		NETFIELD_REP_END=Owner	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_Wave_OceanologyWaveSolverComponent_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOceanologyWaveSolverComponent(UOceanologyWaveSolverComponent&&); \
	UOceanologyWaveSolverComponent(const UOceanologyWaveSolverComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOceanologyWaveSolverComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOceanologyWaveSolverComponent); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UOceanologyWaveSolverComponent) \
	NO_API virtual ~UOceanologyWaveSolverComponent();


#define FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_Wave_OceanologyWaveSolverComponent_h_31_PROLOG
#define FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_Wave_OceanologyWaveSolverComponent_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_Wave_OceanologyWaveSolverComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_Wave_OceanologyWaveSolverComponent_h_34_CALLBACK_WRAPPERS \
	FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_Wave_OceanologyWaveSolverComponent_h_34_INCLASS_NO_PURE_DECLS \
	FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_Wave_OceanologyWaveSolverComponent_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<class UOceanologyWaveSolverComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_Wave_OceanologyWaveSolverComponent_h


#define FOREACH_ENUM_EOCEANOLOGYWAVETIMEMODE(op) \
	op(EOceanologyWaveTimeMode::LocalTime) \
	op(EOceanologyWaveTimeMode::ServerTimeForReplication) 

enum class EOceanologyWaveTimeMode : uint8;
template<> struct TIsUEnumClass<EOceanologyWaveTimeMode> { enum { Value = true }; };
template<> OCEANOLOGY_PLUGIN_API UEnum* StaticEnum<EOceanologyWaveTimeMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
