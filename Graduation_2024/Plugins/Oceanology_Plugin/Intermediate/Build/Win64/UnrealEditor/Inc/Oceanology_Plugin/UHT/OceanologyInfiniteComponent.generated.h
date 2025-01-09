// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/OceanologyInfiniteComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UWorld;
#ifdef OCEANOLOGY_PLUGIN_OceanologyInfiniteComponent_generated_h
#error "OceanologyInfiniteComponent.generated.h already included, missing '#pragma once' in OceanologyInfiniteComponent.h"
#endif
#define OCEANOLOGY_PLUGIN_OceanologyInfiniteComponent_generated_h

#define FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanologyInfiniteComponent_h_21_DELEGATE \
OCEANOLOGY_PLUGIN_API void FOceanInfiniteLocationChanged_DelegateWrapper(const FMulticastScriptDelegate& OceanInfiniteLocationChanged, FVector CameraLocation, FVector LastLocation, FVector NewParentLocation);


#define FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanologyInfiniteComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetParentActor); \
	DECLARE_FUNCTION(execInitDefaultOrigin); \
	DECLARE_FUNCTION(execSetOrigin); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execFollow); \
	DECLARE_FUNCTION(execForceFollow);


#define FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanologyInfiniteComponent_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOceanologyInfiniteComponent(); \
	friend struct Z_Construct_UClass_UOceanologyInfiniteComponent_Statics; \
public: \
	DECLARE_CLASS(UOceanologyInfiniteComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Oceanology_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UOceanologyInfiniteComponent)


#define FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanologyInfiniteComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOceanologyInfiniteComponent(UOceanologyInfiniteComponent&&); \
	UOceanologyInfiniteComponent(const UOceanologyInfiniteComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOceanologyInfiniteComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOceanologyInfiniteComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOceanologyInfiniteComponent) \
	NO_API virtual ~UOceanologyInfiniteComponent();


#define FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanologyInfiniteComponent_h_26_PROLOG
#define FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanologyInfiniteComponent_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanologyInfiniteComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanologyInfiniteComponent_h_29_INCLASS_NO_PURE_DECLS \
	FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanologyInfiniteComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<class UOceanologyInfiniteComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanologyInfiniteComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
