// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataAsset/OceanologyLakePreset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOceanologyLakePreset;
struct FOceanologyLakePresetResult;
struct FOceanologyWaterPresetResult;
#ifdef OCEANOLOGY_PLUGIN_OceanologyLakePreset_generated_h
#error "OceanologyLakePreset.generated.h already included, missing '#pragma once' in OceanologyLakePreset.h"
#endif
#define OCEANOLOGY_PLUGIN_OceanologyLakePreset_generated_h

#define FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_DataAsset_OceanologyLakePreset_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLerpPreset);


#define FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_DataAsset_OceanologyLakePreset_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOceanologyLakePreset(); \
	friend struct Z_Construct_UClass_UOceanologyLakePreset_Statics; \
public: \
	DECLARE_CLASS(UOceanologyLakePreset, UOceanologyWaterPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Oceanology_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UOceanologyLakePreset)


#define FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_DataAsset_OceanologyLakePreset_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOceanologyLakePreset(UOceanologyLakePreset&&); \
	UOceanologyLakePreset(const UOceanologyLakePreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOceanologyLakePreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOceanologyLakePreset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOceanologyLakePreset) \
	NO_API virtual ~UOceanologyLakePreset();


#define FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_DataAsset_OceanologyLakePreset_h_17_PROLOG
#define FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_DataAsset_OceanologyLakePreset_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_DataAsset_OceanologyLakePreset_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_DataAsset_OceanologyLakePreset_h_20_INCLASS_NO_PURE_DECLS \
	FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_DataAsset_OceanologyLakePreset_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<class UOceanologyLakePreset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_DataAsset_OceanologyLakePreset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
