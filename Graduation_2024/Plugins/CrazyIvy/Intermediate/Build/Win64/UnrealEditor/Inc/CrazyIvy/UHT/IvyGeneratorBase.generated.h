// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IvyGeneratorBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UPrimitiveComponent;
#ifdef CRAZYIVY_IvyGeneratorBase_generated_h
#error "IvyGeneratorBase.generated.h already included, missing '#pragma once' in IvyGeneratorBase.h"
#endif
#define CRAZYIVY_IvyGeneratorBase_generated_h

#define FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_CrazyIvy_Source_CrazyIvy_Public_IvyGeneratorBase_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIvyNode(); \
	friend struct Z_Construct_UClass_UIvyNode_Statics; \
public: \
	DECLARE_CLASS(UIvyNode, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CrazyIvy"), NO_API) \
	DECLARE_SERIALIZER(UIvyNode)


#define FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_CrazyIvy_Source_CrazyIvy_Public_IvyGeneratorBase_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIvyNode(UIvyNode&&); \
	UIvyNode(const UIvyNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIvyNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIvyNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIvyNode) \
	NO_API virtual ~UIvyNode();


#define FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_CrazyIvy_Source_CrazyIvy_Public_IvyGeneratorBase_h_31_PROLOG
#define FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_CrazyIvy_Source_CrazyIvy_Public_IvyGeneratorBase_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_CrazyIvy_Source_CrazyIvy_Public_IvyGeneratorBase_h_34_INCLASS_NO_PURE_DECLS \
	FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_CrazyIvy_Source_CrazyIvy_Public_IvyGeneratorBase_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRAZYIVY_API UClass* StaticClass<class UIvyNode>();

#define FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_CrazyIvy_Source_CrazyIvy_Public_IvyGeneratorBase_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIvyRoot(); \
	friend struct Z_Construct_UClass_UIvyRoot_Statics; \
public: \
	DECLARE_CLASS(UIvyRoot, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CrazyIvy"), NO_API) \
	DECLARE_SERIALIZER(UIvyRoot)


#define FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_CrazyIvy_Source_CrazyIvy_Public_IvyGeneratorBase_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIvyRoot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIvyRoot(UIvyRoot&&); \
	UIvyRoot(const UIvyRoot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIvyRoot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIvyRoot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIvyRoot) \
	NO_API virtual ~UIvyRoot();


#define FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_CrazyIvy_Source_CrazyIvy_Public_IvyGeneratorBase_h_65_PROLOG
#define FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_CrazyIvy_Source_CrazyIvy_Public_IvyGeneratorBase_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_CrazyIvy_Source_CrazyIvy_Public_IvyGeneratorBase_h_68_INCLASS_NO_PURE_DECLS \
	FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_CrazyIvy_Source_CrazyIvy_Public_IvyGeneratorBase_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRAZYIVY_API UClass* StaticClass<class UIvyRoot>();

#define FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_CrazyIvy_Source_CrazyIvy_Public_IvyGeneratorBase_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateMesh); \
	DECLARE_FUNCTION(execResetSettings); \
	DECLARE_FUNCTION(execComputeRandomLeafMaterialIndex); \
	DECLARE_FUNCTION(execStopGrowth); \
	DECLARE_FUNCTION(execStartGrowth); \
	DECLARE_FUNCTION(execIvyDeleteAsset); \
	DECLARE_FUNCTION(execBirth); \
	DECLARE_FUNCTION(execIvySuccessfulDone); \
	DECLARE_FUNCTION(execClearAll); \
	DECLARE_FUNCTION(execSetGrowthStateValue);


#define FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_CrazyIvy_Source_CrazyIvy_Public_IvyGeneratorBase_h_90_CALLBACK_WRAPPERS
#define FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_CrazyIvy_Source_CrazyIvy_Public_IvyGeneratorBase_h_90_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIvyGeneratorBase(); \
	friend struct Z_Construct_UClass_AIvyGeneratorBase_Statics; \
public: \
	DECLARE_CLASS(AIvyGeneratorBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CrazyIvy"), NO_API) \
	DECLARE_SERIALIZER(AIvyGeneratorBase)


#define FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_CrazyIvy_Source_CrazyIvy_Public_IvyGeneratorBase_h_90_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AIvyGeneratorBase(AIvyGeneratorBase&&); \
	AIvyGeneratorBase(const AIvyGeneratorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIvyGeneratorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIvyGeneratorBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AIvyGeneratorBase) \
	NO_API virtual ~AIvyGeneratorBase();


#define FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_CrazyIvy_Source_CrazyIvy_Public_IvyGeneratorBase_h_86_PROLOG
#define FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_CrazyIvy_Source_CrazyIvy_Public_IvyGeneratorBase_h_90_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_CrazyIvy_Source_CrazyIvy_Public_IvyGeneratorBase_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_CrazyIvy_Source_CrazyIvy_Public_IvyGeneratorBase_h_90_CALLBACK_WRAPPERS \
	FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_CrazyIvy_Source_CrazyIvy_Public_IvyGeneratorBase_h_90_INCLASS_NO_PURE_DECLS \
	FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_CrazyIvy_Source_CrazyIvy_Public_IvyGeneratorBase_h_90_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRAZYIVY_API UClass* StaticClass<class AIvyGeneratorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_CrazyIvy_Source_CrazyIvy_Public_IvyGeneratorBase_h


#define FOREACH_ENUM_EBUTTONSTATE(op) \
	op(Reset) \
	op(Grow) \
	op(Stop) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
