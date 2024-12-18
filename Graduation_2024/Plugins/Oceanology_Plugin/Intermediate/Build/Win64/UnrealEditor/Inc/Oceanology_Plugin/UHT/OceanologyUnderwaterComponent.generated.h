// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/OceanologyUnderwaterComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceDynamic;
#ifdef OCEANOLOGY_PLUGIN_OceanologyUnderwaterComponent_generated_h
#error "OceanologyUnderwaterComponent.generated.h already included, missing '#pragma once' in OceanologyUnderwaterComponent.h"
#endif
#define OCEANOLOGY_PLUGIN_OceanologyUnderwaterComponent_generated_h

#define FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanologyUnderwaterComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBubblesMID); \
	DECLARE_FUNCTION(execCreateOrUpdateBubblesMID); \
	DECLARE_FUNCTION(execGetVolumetricFogMID); \
	DECLARE_FUNCTION(execCreateOrUpdateVolumetricFogMID); \
	DECLARE_FUNCTION(execGetUnderwaterMID); \
	DECLARE_FUNCTION(execCreateOrUpdateUnderwaterMID); \
	DECLARE_FUNCTION(execInitBubbles); \
	DECLARE_FUNCTION(execInit);


#define FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanologyUnderwaterComponent_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOceanologyUnderwaterComponent(); \
	friend struct Z_Construct_UClass_UOceanologyUnderwaterComponent_Statics; \
public: \
	DECLARE_CLASS(UOceanologyUnderwaterComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Oceanology_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UOceanologyUnderwaterComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		UnderwaterMode=NETFIELD_REP_START, \
		Underwater, \
		VolumetricFog, \
		MaskUnderwater, \
		WaterProjection, \
		BubblesSettings, \
		OceanologyWater, \
		NETFIELD_REP_END=OceanologyWater	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanologyUnderwaterComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOceanologyUnderwaterComponent(UOceanologyUnderwaterComponent&&); \
	UOceanologyUnderwaterComponent(const UOceanologyUnderwaterComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOceanologyUnderwaterComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOceanologyUnderwaterComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOceanologyUnderwaterComponent) \
	NO_API virtual ~UOceanologyUnderwaterComponent();


#define FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanologyUnderwaterComponent_h_29_PROLOG
#define FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanologyUnderwaterComponent_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanologyUnderwaterComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanologyUnderwaterComponent_h_32_INCLASS_NO_PURE_DECLS \
	FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanologyUnderwaterComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<class UOceanologyUnderwaterComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanologyUnderwaterComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
