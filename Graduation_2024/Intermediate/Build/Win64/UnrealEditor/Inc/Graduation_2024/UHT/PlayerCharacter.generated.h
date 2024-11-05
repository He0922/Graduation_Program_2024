// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/PlayerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef GRADUATION_2024_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define GRADUATION_2024_PlayerCharacter_generated_h

#define FID_Graduation_2024_Source_Graduation_2024_Public_Character_PlayerCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInitHUD); \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execMove);


#define FID_Graduation_2024_Source_Graduation_2024_Public_Character_PlayerCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Graduation_2024"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<APlayerCharacter*>(this); }


#define FID_Graduation_2024_Source_Graduation_2024_Public_Character_PlayerCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayerCharacter(APlayerCharacter&&); \
	APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacter) \
	NO_API virtual ~APlayerCharacter();


#define FID_Graduation_2024_Source_Graduation_2024_Public_Character_PlayerCharacter_h_20_PROLOG
#define FID_Graduation_2024_Source_Graduation_2024_Public_Character_PlayerCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Graduation_2024_Source_Graduation_2024_Public_Character_PlayerCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Graduation_2024_Source_Graduation_2024_Public_Character_PlayerCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_Graduation_2024_Source_Graduation_2024_Public_Character_PlayerCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADUATION_2024_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Graduation_2024_Source_Graduation_2024_Public_Character_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
