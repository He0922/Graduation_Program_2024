// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Player/PlayerAttributes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRADUATION_2024_PlayerAttributes_generated_h
#error "PlayerAttributes.generated.h already included, missing '#pragma once' in PlayerAttributes.h"
#endif
#define GRADUATION_2024_PlayerAttributes_generated_h

#define FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Character_Player_PlayerAttributes_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerAttributes_Statics; \
	GRADUATION_2024_API static class UScriptStruct* StaticStruct();


template<> GRADUATION_2024_API UScriptStruct* StaticStruct<struct FPlayerAttributes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Character_Player_PlayerAttributes_h


#define FOREACH_ENUM_EPLAYERATTRIBUTES(op) \
	op(EPlayerAttributes::ehealthMax) \
	op(EPlayerAttributes::eenergyMax) \
	op(EPlayerAttributes::ehealth) \
	op(EPlayerAttributes::eenergy) \
	op(EPlayerAttributes::edamage) \
	op(EPlayerAttributes::emoveSpeed) 

enum class EPlayerAttributes : uint8;
template<> struct TIsUEnumClass<EPlayerAttributes> { enum { Value = true }; };
template<> GRADUATION_2024_API UEnum* StaticEnum<EPlayerAttributes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
