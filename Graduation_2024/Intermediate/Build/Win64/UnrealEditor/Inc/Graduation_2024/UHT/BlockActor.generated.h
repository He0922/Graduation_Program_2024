// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterectBlock/BlockActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef GRADUATION_2024_BlockActor_generated_h
#error "BlockActor.generated.h already included, missing '#pragma once' in BlockActor.h"
#endif
#define GRADUATION_2024_BlockActor_generated_h

#define FID_UE_Data_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_InterectBlock_BlockActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_UE_Data_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_InterectBlock_BlockActor_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlockActor(); \
	friend struct Z_Construct_UClass_ABlockActor_Statics; \
public: \
	DECLARE_CLASS(ABlockActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Graduation_2024"), NO_API) \
	DECLARE_SERIALIZER(ABlockActor)


#define FID_UE_Data_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_InterectBlock_BlockActor_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABlockActor(ABlockActor&&); \
	ABlockActor(const ABlockActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlockActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlockActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABlockActor) \
	NO_API virtual ~ABlockActor();


#define FID_UE_Data_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_InterectBlock_BlockActor_h_18_PROLOG
#define FID_UE_Data_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_InterectBlock_BlockActor_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Data_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_InterectBlock_BlockActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Data_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_InterectBlock_BlockActor_h_21_INCLASS_NO_PURE_DECLS \
	FID_UE_Data_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_InterectBlock_BlockActor_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADUATION_2024_API UClass* StaticClass<class ABlockActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Data_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_InterectBlock_BlockActor_h


#define FOREACH_ENUM_EBLOCKTYPE(op) \
	op(EBlockType::Red) \
	op(EBlockType::Blue) \
	op(EBlockType::Yellow) \
	op(EBlockType::Green) 

enum class EBlockType : uint8;
template<> struct TIsUEnumClass<EBlockType> { enum { Value = true }; };
template<> GRADUATION_2024_API UEnum* StaticEnum<EBlockType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
