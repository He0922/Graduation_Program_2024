// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/OceanSwimmingComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AOceanologyWaterParent;
class AOceanologyWaterVolume;
class UCharacterMovementComponent;
#ifdef OCEANOLOGY_PLUGIN_OceanSwimmingComponent_generated_h
#error "OceanSwimmingComponent.generated.h already included, missing '#pragma once' in OceanSwimmingComponent.h"
#endif
#define OCEANOLOGY_PLUGIN_OceanSwimmingComponent_generated_h

#define FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanSwimmingComponent_h_27_DELEGATE \
OCEANOLOGY_PLUGIN_API void FOceanOnStartSwimming_DelegateWrapper(const FMulticastScriptDelegate& OceanOnStartSwimming);


#define FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanSwimmingComponent_h_29_DELEGATE \
OCEANOLOGY_PLUGIN_API void FOceanOnStopSwimming_DelegateWrapper(const FMulticastScriptDelegate& OceanOnStopSwimming);


#define FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanSwimmingComponent_h_31_DELEGATE \
OCEANOLOGY_PLUGIN_API void FOceanOnUnderwaterTask_DelegateWrapper(const FMulticastScriptDelegate& OceanOnUnderwaterTask, int32 TimeUnderwaterInSeconds);


#define FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanSwimmingComponent_h_33_DELEGATE \
OCEANOLOGY_PLUGIN_API void FOceanOnUnderwaterEnter_DelegateWrapper(const FMulticastScriptDelegate& OceanOnUnderwaterEnter);


#define FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanSwimmingComponent_h_35_DELEGATE \
OCEANOLOGY_PLUGIN_API void FOceanOnUnderwaterExit_DelegateWrapper(const FMulticastScriptDelegate& OceanOnUnderwaterExit);


#define FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanSwimmingComponent_h_37_DELEGATE \
OCEANOLOGY_PLUGIN_API void FOceanOnStartDrowning_DelegateWrapper(const FMulticastScriptDelegate& OceanOnStartDrowning);


#define FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanSwimmingComponent_h_39_DELEGATE \
OCEANOLOGY_PLUGIN_API void FOceanOnStopDrowning_DelegateWrapper(const FMulticastScriptDelegate& OceanOnStopDrowning);


#define FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanSwimmingComponent_h_41_DELEGATE \
OCEANOLOGY_PLUGIN_API void FOceanOnDrowningTask_DelegateWrapper(const FMulticastScriptDelegate& OceanOnDrowningTask, int32 TimeDrowningInSeconds);


#define FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanSwimmingComponent_h_43_DELEGATE \
OCEANOLOGY_PLUGIN_API void FOceanOnDrownDeath_DelegateWrapper(const FMulticastScriptDelegate& OceanOnDrownDeath);


#define FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanSwimmingComponent_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CanAlterState_Implementation(); \
	virtual bool CanStopSwim_Implementation(); \
	virtual bool CanStartSwim_Implementation(); \
	virtual bool CanExitWater_Implementation(const FName Socket, bool Underwater); \
	virtual bool CanEnterWater_Implementation(const FName Socket, bool Underwater); \
	virtual UCharacterMovementComponent* GetCharacterMovement_Implementation(); \
	virtual void NetMulticast_MoveLeftRight_Implementation(const double AxisValue); \
	virtual bool Server_MoveLeftRight_Validate(const double ); \
	virtual void Server_MoveLeftRight_Implementation(const double AxisValue); \
	virtual void NetMulticast_MoveForwardBackward_Implementation(const double AxisValue); \
	virtual bool Server_MoveForwardBackward_Validate(const double ); \
	virtual void Server_MoveForwardBackward_Implementation(const double AxisValue); \
	virtual void NetMulticast_LookUp_Implementation(const double AxisValue); \
	virtual bool Server_LookUp_Validate(const double ); \
	virtual void Server_LookUp_Implementation(const double AxisValue); \
	virtual void NetMulticast_SwimUpOrDown_Implementation(bool Value, const double AxisValue); \
	virtual bool Server_SwimUpOrDown_Validate(bool , const double ); \
	virtual void Server_SwimUpOrDown_Implementation(bool Value, const double AxisValue); \
	virtual void NetMulticast_SwimFast_Implementation(bool Value); \
	virtual bool Server_SwimFast_Validate(bool ); \
	virtual void Server_SwimFast_Implementation(bool Value); \
	virtual void NetMulticast_SurfaceLockedSwimming_Implementation(bool Value); \
	virtual bool Server_SurfaceLockedSwimming_Validate(bool ); \
	virtual void Server_SurfaceLockedSwimming_Implementation(bool Value); \
	DECLARE_FUNCTION(execDrownToDeath); \
	DECLARE_FUNCTION(execDrowningTask); \
	DECLARE_FUNCTION(execUnderwaterTask); \
	DECLARE_FUNCTION(execComputeWaterFloorHeight); \
	DECLARE_FUNCTION(execOnExitedWater); \
	DECLARE_FUNCTION(execOnEnteredWater); \
	DECLARE_FUNCTION(execCanAlterState); \
	DECLARE_FUNCTION(execCanStopSwim); \
	DECLARE_FUNCTION(execCanStartSwim); \
	DECLARE_FUNCTION(execCanExitWater); \
	DECLARE_FUNCTION(execCanEnterWater); \
	DECLARE_FUNCTION(execGetCharacterMovement); \
	DECLARE_FUNCTION(execIsSurfaceLockedSwimming); \
	DECLARE_FUNCTION(execNetMulticast_MoveLeftRight); \
	DECLARE_FUNCTION(execServer_MoveLeftRight); \
	DECLARE_FUNCTION(execNetMulticast_MoveForwardBackward); \
	DECLARE_FUNCTION(execServer_MoveForwardBackward); \
	DECLARE_FUNCTION(execNetMulticast_LookUp); \
	DECLARE_FUNCTION(execServer_LookUp); \
	DECLARE_FUNCTION(execNetMulticast_SwimUpOrDown); \
	DECLARE_FUNCTION(execServer_SwimUpOrDown); \
	DECLARE_FUNCTION(execNetMulticast_SwimFast); \
	DECLARE_FUNCTION(execServer_SwimFast); \
	DECLARE_FUNCTION(execNetMulticast_SurfaceLockedSwimming); \
	DECLARE_FUNCTION(execServer_SurfaceLockedSwimming); \
	DECLARE_FUNCTION(execToggleDebug); \
	DECLARE_FUNCTION(execGetCurrentWaterVolume); \
	DECLARE_FUNCTION(execGetCurrentWater);


#define FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanSwimmingComponent_h_48_CALLBACK_WRAPPERS
#define FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanSwimmingComponent_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOceanSwimmingComponent(); \
	friend struct Z_Construct_UClass_UOceanSwimmingComponent_Statics; \
public: \
	DECLARE_CLASS(UOceanSwimmingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Oceanology_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UOceanSwimmingComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EnteredWaterVolume=NETFIELD_REP_START, \
		EnteredWater, \
		Submerged, \
		Swimming, \
		UnderwaterTimeCounter, \
		UnderwaterTaskRunning, \
		DrowningTimeCounter, \
		DrowningTaskRunning, \
		DrownedToDeath, \
		SurfaceLockedSwimming, \
		SwimDown, \
		SwimUp, \
		SwimFast, \
		SwimUpOrDownAxis, \
		LookUpAxis, \
		MoveForwardBackwardAxis, \
		MoveLeftRightAxis, \
		OceanologyWater, \
		OceanologyWaterVolume, \
		FindFloorResult, \
		OriginalMaxWalkSpeed, \
		OriginalMaxSwimSpeed, \
		OriginalOrientRotationToMovement, \
		OriginalUseControllerRotationYaw, \
		OriginalBuoyancy, \
		EffectiveSwimmingBuoyancyForce, \
		EffectiveSurfaceLockedSwimming, \
		LastMovementMode, \
		NETFIELD_REP_END=LastMovementMode	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanSwimmingComponent_h_48_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOceanSwimmingComponent(UOceanSwimmingComponent&&); \
	UOceanSwimmingComponent(const UOceanSwimmingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOceanSwimmingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOceanSwimmingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOceanSwimmingComponent) \
	NO_API virtual ~UOceanSwimmingComponent();


#define FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanSwimmingComponent_h_45_PROLOG
#define FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanSwimmingComponent_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanSwimmingComponent_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanSwimmingComponent_h_48_CALLBACK_WRAPPERS \
	FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanSwimmingComponent_h_48_INCLASS_NO_PURE_DECLS \
	FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanSwimmingComponent_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<class UOceanSwimmingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanSwimmingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
