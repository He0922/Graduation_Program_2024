// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Structs/OceanologyBaseOffset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceDynamic;
class UMaterialParameterCollectionInstance;
class UNiagaraComponent;
struct FOceanologyBaseOffset;
#ifdef OCEANOLOGY_PLUGIN_OceanologyBaseOffset_generated_h
#error "OceanologyBaseOffset.generated.h already included, missing '#pragma once' in OceanologyBaseOffset.h"
#endif
#define OCEANOLOGY_PLUGIN_OceanologyBaseOffset_generated_h

#define FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyBaseOffset_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOceanologyBaseOffset_Statics; \
	OCEANOLOGY_PLUGIN_API static class UScriptStruct* StaticStruct();


template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<struct FOceanologyBaseOffset>();

#define FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyBaseOffset_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLerpBaseOffset); \
	DECLARE_FUNCTION(execSetNiagaraVariables); \
	DECLARE_FUNCTION(execSetMaterialParameterCollections); \
	DECLARE_FUNCTION(execSetMaterialParameters);


#define FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyBaseOffset_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOceanologyBaseOffsetHelper(); \
	friend struct Z_Construct_UClass_UOceanologyBaseOffsetHelper_Statics; \
public: \
	DECLARE_CLASS(UOceanologyBaseOffsetHelper, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Oceanology_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UOceanologyBaseOffsetHelper)


#define FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyBaseOffset_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOceanologyBaseOffsetHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOceanologyBaseOffsetHelper(UOceanologyBaseOffsetHelper&&); \
	UOceanologyBaseOffsetHelper(const UOceanologyBaseOffsetHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOceanologyBaseOffsetHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOceanologyBaseOffsetHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOceanologyBaseOffsetHelper) \
	NO_API virtual ~UOceanologyBaseOffsetHelper();


#define FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyBaseOffset_h_40_PROLOG
#define FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyBaseOffset_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyBaseOffset_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyBaseOffset_h_43_INCLASS_NO_PURE_DECLS \
	FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyBaseOffset_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<class UOceanologyBaseOffsetHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyBaseOffset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
