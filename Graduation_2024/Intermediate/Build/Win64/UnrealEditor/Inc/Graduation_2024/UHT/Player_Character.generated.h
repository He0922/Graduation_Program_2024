// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Player_Character.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRADUATION_2024_Player_Character_generated_h
#error "Player_Character.generated.h already included, missing '#pragma once' in Player_Character.h"
#endif
#define GRADUATION_2024_Player_Character_generated_h

#define FID_Graduation_2024_Source_Graduation_2024_Public_Character_Player_Character_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayer_Character(); \
	friend struct Z_Construct_UClass_APlayer_Character_Statics; \
public: \
	DECLARE_CLASS(APlayer_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Graduation_2024"), NO_API) \
	DECLARE_SERIALIZER(APlayer_Character)


#define FID_Graduation_2024_Source_Graduation_2024_Public_Character_Player_Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayer_Character(APlayer_Character&&); \
	APlayer_Character(const APlayer_Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayer_Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayer_Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayer_Character) \
	NO_API virtual ~APlayer_Character();


#define FID_Graduation_2024_Source_Graduation_2024_Public_Character_Player_Character_h_9_PROLOG
#define FID_Graduation_2024_Source_Graduation_2024_Public_Character_Player_Character_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Graduation_2024_Source_Graduation_2024_Public_Character_Player_Character_h_12_INCLASS_NO_PURE_DECLS \
	FID_Graduation_2024_Source_Graduation_2024_Public_Character_Player_Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADUATION_2024_API UClass* StaticClass<class APlayer_Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Graduation_2024_Source_Graduation_2024_Public_Character_Player_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
