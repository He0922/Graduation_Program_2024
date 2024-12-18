// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Structs/OceanologyCaustics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceDynamic;
struct FOceanologyCaustics;
#ifdef OCEANOLOGY_PLUGIN_OceanologyCaustics_generated_h
#error "OceanologyCaustics.generated.h already included, missing '#pragma once' in OceanologyCaustics.h"
#endif
#define OCEANOLOGY_PLUGIN_OceanologyCaustics_generated_h

#define FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyCaustics_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOceanologyCaustics_Statics; \
	OCEANOLOGY_PLUGIN_API static class UScriptStruct* StaticStruct();


template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<struct FOceanologyCaustics>();

#define FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyCaustics_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLerpCaustics); \
	DECLARE_FUNCTION(execSetMaterialParameters);


#define FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyCaustics_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOceanologyCausticsHelper(); \
	friend struct Z_Construct_UClass_UOceanologyCausticsHelper_Statics; \
public: \
	DECLARE_CLASS(UOceanologyCausticsHelper, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Oceanology_Plugin"), NO_API) \
	DECLARE_SERIALIZER(UOceanologyCausticsHelper)


#define FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyCaustics_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOceanologyCausticsHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOceanologyCausticsHelper(UOceanologyCausticsHelper&&); \
	UOceanologyCausticsHelper(const UOceanologyCausticsHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOceanologyCausticsHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOceanologyCausticsHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOceanologyCausticsHelper) \
	NO_API virtual ~UOceanologyCausticsHelper();


#define FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyCaustics_h_48_PROLOG
#define FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyCaustics_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyCaustics_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyCaustics_h_51_INCLASS_NO_PURE_DECLS \
	FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyCaustics_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<class UOceanologyCausticsHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyCaustics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
