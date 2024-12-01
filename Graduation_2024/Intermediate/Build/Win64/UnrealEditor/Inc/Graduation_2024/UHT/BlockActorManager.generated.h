// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterectBlock/BlockActorManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef GRADUATION_2024_BlockActorManager_generated_h
#error "BlockActorManager.generated.h already included, missing '#pragma once' in BlockActorManager.h"
#endif
#define GRADUATION_2024_BlockActorManager_generated_h

#define FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_InterectBlock_BlockActorManager_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlockSettings_Statics; \
	GRADUATION_2024_API static class UScriptStruct* StaticStruct();


template<> GRADUATION_2024_API UScriptStruct* StaticStruct<struct FBlockSettings>();

#define FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_InterectBlock_BlockActorManager_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTriangleOnOverlapEnd); \
	DECLARE_FUNCTION(execOnTriangleOverlapBegin);


#define FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_InterectBlock_BlockActorManager_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlockActorManager(); \
	friend struct Z_Construct_UClass_ABlockActorManager_Statics; \
public: \
	DECLARE_CLASS(ABlockActorManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Graduation_2024"), NO_API) \
	DECLARE_SERIALIZER(ABlockActorManager)


#define FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_InterectBlock_BlockActorManager_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABlockActorManager(ABlockActorManager&&); \
	ABlockActorManager(const ABlockActorManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlockActorManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlockActorManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABlockActorManager) \
	NO_API virtual ~ABlockActorManager();


#define FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_InterectBlock_BlockActorManager_h_37_PROLOG
#define FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_InterectBlock_BlockActorManager_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_InterectBlock_BlockActorManager_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_InterectBlock_BlockActorManager_h_40_INCLASS_NO_PURE_DECLS \
	FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_InterectBlock_BlockActorManager_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADUATION_2024_API UClass* StaticClass<class ABlockActorManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_InterectBlock_BlockActorManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
