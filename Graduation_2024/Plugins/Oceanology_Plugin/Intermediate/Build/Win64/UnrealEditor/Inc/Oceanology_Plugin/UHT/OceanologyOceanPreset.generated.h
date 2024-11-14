// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataAsset/OceanologyOceanPreset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOceanologyOceanPreset;
struct FOceanologyOceanPresetResult;
struct FOceanologyWaterPresetResult;
#ifdef OCEANOLOGY_PLUGIN_OceanologyOceanPreset_generated_h
#error "OceanologyOceanPreset.generated.h already included, missing '#pragma once' in OceanologyOceanPreset.h"
#endif
#define OCEANOLOGY_PLUGIN_OceanologyOceanPreset_generated_h

#define FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_DataAsset_OceanologyOceanPreset_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLerpPreset);


#define FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_DataAsset_OceanologyOceanPreset_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOceanologyOceanPreset(); \
	friend struct Z_Construct_UClass_UOceanologyOceanPreset_Statics; \
public: \
	DECLARE_CLASS(UOceanologyOceanPreset, UOceanologyWaterPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Oceanology_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UOceanologyOceanPreset)


#define FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_DataAsset_OceanologyOceanPreset_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOceanologyOceanPreset(UOceanologyOceanPreset&&); \
	UOceanologyOceanPreset(const UOceanologyOceanPreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOceanologyOceanPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOceanologyOceanPreset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOceanologyOceanPreset) \
	NO_API virtual ~UOceanologyOceanPreset();


#define FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_DataAsset_OceanologyOceanPreset_h_17_PROLOG
#define FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_DataAsset_OceanologyOceanPreset_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_DataAsset_OceanologyOceanPreset_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_DataAsset_OceanologyOceanPreset_h_20_INCLASS_NO_PURE_DECLS \
	FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_DataAsset_OceanologyOceanPreset_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<class UOceanologyOceanPreset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_DataAsset_OceanologyOceanPreset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
