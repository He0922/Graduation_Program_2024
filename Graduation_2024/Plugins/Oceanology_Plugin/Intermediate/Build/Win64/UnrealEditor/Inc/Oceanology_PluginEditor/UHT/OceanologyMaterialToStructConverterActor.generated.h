// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/OceanologyMaterialToStructConverterActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OCEANOLOGY_PLUGINEDITOR_OceanologyMaterialToStructConverterActor_generated_h
#error "OceanologyMaterialToStructConverterActor.generated.h already included, missing '#pragma once' in OceanologyMaterialToStructConverterActor.h"
#endif
#define OCEANOLOGY_PLUGINEDITOR_OceanologyMaterialToStructConverterActor_generated_h

#define FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_PluginEditor_Public_Actors_OceanologyMaterialToStructConverterActor_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOceanMIDFile_Statics; \
	OCEANOLOGY_PLUGINEDITOR_API static class UScriptStruct* StaticStruct();


template<> OCEANOLOGY_PLUGINEDITOR_API UScriptStruct* StaticStruct<struct FOceanMIDFile>();

#define FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_PluginEditor_Public_Actors_OceanologyMaterialToStructConverterActor_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOceanMaterialParameter_Statics; \
	OCEANOLOGY_PLUGINEDITOR_API static class UScriptStruct* StaticStruct();


template<> OCEANOLOGY_PLUGINEDITOR_API UScriptStruct* StaticStruct<struct FOceanMaterialParameter>();

#define FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_PluginEditor_Public_Actors_OceanologyMaterialToStructConverterActor_h_207_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDumpMaterialParametersToStructs);


#define FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_PluginEditor_Public_Actors_OceanologyMaterialToStructConverterActor_h_207_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOceanologyMaterialToStructConverter(); \
	friend struct Z_Construct_UClass_AOceanologyMaterialToStructConverter_Statics; \
public: \
	DECLARE_CLASS(AOceanologyMaterialToStructConverter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Oceanology_PluginEditor"), NO_API) \
	DECLARE_SERIALIZER(AOceanologyMaterialToStructConverter)


#define FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_PluginEditor_Public_Actors_OceanologyMaterialToStructConverterActor_h_207_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AOceanologyMaterialToStructConverter(AOceanologyMaterialToStructConverter&&); \
	AOceanologyMaterialToStructConverter(const AOceanologyMaterialToStructConverter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOceanologyMaterialToStructConverter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOceanologyMaterialToStructConverter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOceanologyMaterialToStructConverter) \
	NO_API virtual ~AOceanologyMaterialToStructConverter();


#define FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_PluginEditor_Public_Actors_OceanologyMaterialToStructConverterActor_h_204_PROLOG
#define FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_PluginEditor_Public_Actors_OceanologyMaterialToStructConverterActor_h_207_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_PluginEditor_Public_Actors_OceanologyMaterialToStructConverterActor_h_207_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_PluginEditor_Public_Actors_OceanologyMaterialToStructConverterActor_h_207_INCLASS_NO_PURE_DECLS \
	FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_PluginEditor_Public_Actors_OceanologyMaterialToStructConverterActor_h_207_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCEANOLOGY_PLUGINEDITOR_API UClass* StaticClass<class AOceanologyMaterialToStructConverter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_PluginEditor_Public_Actors_OceanologyMaterialToStructConverterActor_h


#define FOREACH_ENUM_EOCEANMATERIALPARAMETERTYPE(op) \
	op(None) \
	op(StaticSwitch) \
	op(Vector) \
	op(Scalar) \
	op(Texture) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
