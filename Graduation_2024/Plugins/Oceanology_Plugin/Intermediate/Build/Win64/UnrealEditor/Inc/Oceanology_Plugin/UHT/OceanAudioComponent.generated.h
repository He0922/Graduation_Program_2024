// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/OceanAudioComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OCEANOLOGY_PLUGIN_OceanAudioComponent_generated_h
#error "OceanAudioComponent.generated.h already included, missing '#pragma once' in OceanAudioComponent.h"
#endif
#define OCEANOLOGY_PLUGIN_OceanAudioComponent_generated_h

#define FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanAudioComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPlaySoundFX);


#define FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanAudioComponent_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOceanAudioComponent(); \
	friend struct Z_Construct_UClass_UOceanAudioComponent_Statics; \
public: \
	DECLARE_CLASS(UOceanAudioComponent, UAudioComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Oceanology_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UOceanAudioComponent)


#define FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanAudioComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOceanAudioComponent(UOceanAudioComponent&&); \
	UOceanAudioComponent(const UOceanAudioComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOceanAudioComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOceanAudioComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOceanAudioComponent) \
	NO_API virtual ~UOceanAudioComponent();


#define FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanAudioComponent_h_25_PROLOG
#define FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanAudioComponent_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanAudioComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanAudioComponent_h_28_INCLASS_NO_PURE_DECLS \
	FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanAudioComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<class UOceanAudioComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Components_OceanAudioComponent_h


#define FOREACH_ENUM_EOCEANAUDIOMODE(op) \
	op(EOceanAudioMode::None) \
	op(EOceanAudioMode::Underwater) \
	op(EOceanAudioMode::Wave) 

enum class EOceanAudioMode : uint8;
template<> struct TIsUEnumClass<EOceanAudioMode> { enum { Value = true }; };
template<> OCEANOLOGY_PLUGIN_API UEnum* StaticEnum<EOceanAudioMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
