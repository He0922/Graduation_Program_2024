// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Structs/OceanologyMask.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceDynamic;
struct FOceanologyMask;
#ifdef OCEANOLOGY_PLUGIN_OceanologyMask_generated_h
#error "OceanologyMask.generated.h already included, missing '#pragma once' in OceanologyMask.h"
#endif
#define OCEANOLOGY_PLUGIN_OceanologyMask_generated_h

#define FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyMask_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOceanologyMask_Statics; \
	OCEANOLOGY_PLUGIN_API static class UScriptStruct* StaticStruct();


template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<struct FOceanologyMask>();

#define FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyMask_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLerpMask); \
	DECLARE_FUNCTION(execSetMaterialParameters);


#define FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyMask_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOceanologyMaskHelper(); \
	friend struct Z_Construct_UClass_UOceanologyMaskHelper_Statics; \
public: \
	DECLARE_CLASS(UOceanologyMaskHelper, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Oceanology_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UOceanologyMaskHelper)


#define FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyMask_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOceanologyMaskHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOceanologyMaskHelper(UOceanologyMaskHelper&&); \
	UOceanologyMaskHelper(const UOceanologyMaskHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOceanologyMaskHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOceanologyMaskHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOceanologyMaskHelper) \
	NO_API virtual ~UOceanologyMaskHelper();


#define FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyMask_h_31_PROLOG
#define FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyMask_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyMask_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyMask_h_34_INCLASS_NO_PURE_DECLS \
	FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyMask_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<class UOceanologyMaskHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyMask_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
