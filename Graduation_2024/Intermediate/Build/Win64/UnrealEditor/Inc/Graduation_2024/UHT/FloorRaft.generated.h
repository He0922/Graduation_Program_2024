// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pawn/FloorRaft.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRADUATION_2024_FloorRaft_generated_h
#error "FloorRaft.generated.h already included, missing '#pragma once' in FloorRaft.h"
#endif
#define GRADUATION_2024_FloorRaft_generated_h

#define FID_BS_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Pawn_FloorRaft_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCurveUpdate); \
	DECLARE_FUNCTION(execStopAddRowForce); \
	DECLARE_FUNCTION(execStartAddRowForce);


#define FID_BS_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Pawn_FloorRaft_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFloorRaft(); \
	friend struct Z_Construct_UClass_AFloorRaft_Statics; \
public: \
	DECLARE_CLASS(AFloorRaft, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Graduation_2024"), NO_API) \
	DECLARE_SERIALIZER(AFloorRaft)


#define FID_BS_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Pawn_FloorRaft_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFloorRaft(AFloorRaft&&); \
	AFloorRaft(const AFloorRaft&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloorRaft); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloorRaft); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFloorRaft) \
	NO_API virtual ~AFloorRaft();


#define FID_BS_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Pawn_FloorRaft_h_14_PROLOG
#define FID_BS_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Pawn_FloorRaft_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BS_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Pawn_FloorRaft_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BS_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Pawn_FloorRaft_h_17_INCLASS_NO_PURE_DECLS \
	FID_BS_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Pawn_FloorRaft_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADUATION_2024_API UClass* StaticClass<class AFloorRaft>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BS_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Pawn_FloorRaft_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
