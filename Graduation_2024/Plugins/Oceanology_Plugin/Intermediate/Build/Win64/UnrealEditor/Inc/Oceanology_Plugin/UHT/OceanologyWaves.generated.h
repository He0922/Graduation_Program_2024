// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Structs/OceanologyWaves.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceDynamic;
class UMaterialParameterCollectionInstance;
class UNiagaraComponent;
struct FOceanologyWave_1;
struct FOceanologyWave_2;
struct FOceanologyWave_3;
struct FOceanologyWave_4;
#ifdef OCEANOLOGY_PLUGIN_OceanologyWaves_generated_h
#error "OceanologyWaves.generated.h already included, missing '#pragma once' in OceanologyWaves.h"
#endif
#define OCEANOLOGY_PLUGIN_OceanologyWaves_generated_h

#define FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWaves_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOceanologyWave_1_Statics; \
	OCEANOLOGY_PLUGIN_API static class UScriptStruct* StaticStruct();


template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<struct FOceanologyWave_1>();

#define FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWaves_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOceanologyWave_2_Statics; \
	OCEANOLOGY_PLUGIN_API static class UScriptStruct* StaticStruct();


template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<struct FOceanologyWave_2>();

#define FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWaves_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOceanologyWave_3_Statics; \
	OCEANOLOGY_PLUGIN_API static class UScriptStruct* StaticStruct();


template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<struct FOceanologyWave_3>();

#define FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWaves_h_86_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOceanologyWave_4_Statics; \
	OCEANOLOGY_PLUGIN_API static class UScriptStruct* StaticStruct();


template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<struct FOceanologyWave_4>();

#define FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWaves_h_112_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLerpWave_4); \
	DECLARE_FUNCTION(execSetNiagaraVariablesWave_4); \
	DECLARE_FUNCTION(execSetMaterialParameterCollectionsWave_4); \
	DECLARE_FUNCTION(execSetMaterialParametersWave_4); \
	DECLARE_FUNCTION(execLerpWave_3); \
	DECLARE_FUNCTION(execSetNiagaraVariablesWave_3); \
	DECLARE_FUNCTION(execSetMaterialParameterCollectionsWave_3); \
	DECLARE_FUNCTION(execSetMaterialParametersWave_3); \
	DECLARE_FUNCTION(execLerpWave_2); \
	DECLARE_FUNCTION(execSetNiagaraVariablesWave_2); \
	DECLARE_FUNCTION(execSetMaterialParameterCollectionsWave_2); \
	DECLARE_FUNCTION(execSetMaterialParametersWave_2); \
	DECLARE_FUNCTION(execLerpWave_1); \
	DECLARE_FUNCTION(execSetNiagaraVariablesWave_1); \
	DECLARE_FUNCTION(execSetMaterialParameterCollectionsWave_1); \
	DECLARE_FUNCTION(execSetMaterialParametersWave_1);


#define FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWaves_h_112_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOceanologyWavesHelper(); \
	friend struct Z_Construct_UClass_UOceanologyWavesHelper_Statics; \
public: \
	DECLARE_CLASS(UOceanologyWavesHelper, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Oceanology_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UOceanologyWavesHelper)


#define FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWaves_h_112_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOceanologyWavesHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOceanologyWavesHelper(UOceanologyWavesHelper&&); \
	UOceanologyWavesHelper(const UOceanologyWavesHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOceanologyWavesHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOceanologyWavesHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOceanologyWavesHelper) \
	NO_API virtual ~UOceanologyWavesHelper();


#define FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWaves_h_109_PROLOG
#define FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWaves_h_112_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWaves_h_112_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWaves_h_112_INCLASS_NO_PURE_DECLS \
	FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWaves_h_112_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<class UOceanologyWavesHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyWaves_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
