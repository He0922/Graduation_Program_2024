// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Player/CustomPlayerStatus.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRADUATION_2024_CustomPlayerStatus_generated_h
#error "CustomPlayerStatus.generated.h already included, missing '#pragma once' in CustomPlayerStatus.h"
#endif
#define GRADUATION_2024_CustomPlayerStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Graduation_2024_Source_Graduation_2024_Public_Character_Player_CustomPlayerStatus_h


#define FOREACH_ENUM_ECUSTOMPLAYERSTATUS(op) \
	op(ECustomPlayerStatus::eidle) \
	op(ECustomPlayerStatus::emove) \
	op(ECustomPlayerStatus::erun) \
	op(ECustomPlayerStatus::ejump) \
	op(ECustomPlayerStatus::edodge) \
	op(ECustomPlayerStatus::eattack) \
	op(ECustomPlayerStatus::erowing) \
	op(ECustomPlayerStatus::eclimbing) \
	op(ECustomPlayerStatus::efalling) 

enum class ECustomPlayerStatus : uint8;
template<> struct TIsUEnumClass<ECustomPlayerStatus> { enum { Value = true }; };
template<> GRADUATION_2024_API UEnum* StaticEnum<ECustomPlayerStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
