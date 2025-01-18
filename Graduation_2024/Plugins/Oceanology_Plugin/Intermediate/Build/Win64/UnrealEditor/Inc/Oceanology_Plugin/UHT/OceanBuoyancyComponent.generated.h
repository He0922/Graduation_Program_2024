// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/OceanBuoyancyComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AOceanologyWaterParent;
class AOceanologyWaterVolume;
class UCharacterMovementComponent;
class UPrimitiveComponent;
class USplineComponent;
#ifdef OCEANOLOGY_PLUGIN_OceanBuoyancyComponent_generated_h
#error "OceanBuoyancyComponent.generated.h already included, missing '#pragma once' in OceanBuoyancyComponent.h"
#endif
#define OCEANOLOGY_PLUGIN_OceanBuoyancyComponent_generated_h

#define FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanBuoyancyComponent_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOceanBuoyancyPontoon_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<struct FOceanBuoyancyPontoon>();

#define FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanBuoyancyComponent_h_71_DELEGATE \
OCEANOLOGY_PLUGIN_API void FOceanOnEnteredWater_DelegateWrapper(const FMulticastScriptDelegate& OceanOnEnteredWater, FName Socket, bool Underwater);


#define FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanBuoyancyComponent_h_73_DELEGATE \
OCEANOLOGY_PLUGIN_API void FOceanOnExitedWater_DelegateWrapper(const FMulticastScriptDelegate& OceanOnExitedWater, FName Socket, bool Underwater);


#define FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanBuoyancyComponent_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UCharacterMovementComponent* GetCharacterMovement_Implementation(); \
	virtual UPrimitiveComponent* GetOwnerMesh_Implementation() const; \
	DECLARE_FUNCTION(execGetFlowControlSpline); \
	DECLARE_FUNCTION(execSetFlowControlSpline); \
	DECLARE_FUNCTION(execGetCharacterMovement); \
	DECLARE_FUNCTION(execGetCurrentWaterVolume); \
	DECLARE_FUNCTION(execGetCurrentWater); \
	DECLARE_FUNCTION(execGetOwnerMesh); \
	DECLARE_FUNCTION(execGetVelocityAtLocation); \
	DECLARE_FUNCTION(execAddForceAtLocation); \
	DECLARE_FUNCTION(execGetOwnerWaveHeightDistance); \
	DECLARE_FUNCTION(execGetCurrentWaveHeight); \
	DECLARE_FUNCTION(execDebugPontoons); \
	DECLARE_FUNCTION(execToggleDebug);


#define FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanBuoyancyComponent_h_78_CALLBACK_WRAPPERS
#define FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanBuoyancyComponent_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOceanBuoyancyComponent(); \
	friend struct Z_Construct_UClass_UOceanBuoyancyComponent_Statics; \
public: \
	DECLARE_CLASS(UOceanBuoyancyComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Oceanology_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UOceanBuoyancyComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EnteredWaterVolume=NETFIELD_REP_START, \
		OceanologyWater, \
		OceanologyWaterVolume, \
		CurrentWaveHeight, \
		NETFIELD_REP_END=CurrentWaveHeight	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanBuoyancyComponent_h_78_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOceanBuoyancyComponent(UOceanBuoyancyComponent&&); \
	UOceanBuoyancyComponent(const UOceanBuoyancyComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOceanBuoyancyComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOceanBuoyancyComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOceanBuoyancyComponent) \
	NO_API virtual ~UOceanBuoyancyComponent();


#define FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanBuoyancyComponent_h_75_PROLOG
#define FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanBuoyancyComponent_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanBuoyancyComponent_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanBuoyancyComponent_h_78_CALLBACK_WRAPPERS \
	FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanBuoyancyComponent_h_78_INCLASS_NO_PURE_DECLS \
	FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanBuoyancyComponent_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<class UOceanBuoyancyComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Programes_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanBuoyancyComponent_h


#define FOREACH_ENUM_EOCEANBUOYANCYPONTOONMODE(op) \
	op(Buoyancy) \
	op(WaterEnterExitEventOnly) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
