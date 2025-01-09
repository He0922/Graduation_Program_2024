// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enums/OceanologyUnderwaterMode.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OCEANOLOGY_PLUGIN_OceanologyUnderwaterMode_generated_h
#error "OceanologyUnderwaterMode.generated.h already included, missing '#pragma once' in OceanologyUnderwaterMode.h"
#endif
#define OCEANOLOGY_PLUGIN_OceanologyUnderwaterMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEDocument_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Enums_OceanologyUnderwaterMode_h


#define FOREACH_ENUM_EOCEANOLOGYUNDERWATERMODE(op) \
	op(EOceanologyUnderwaterMode::None) \
	op(EOceanologyUnderwaterMode::Underwater) \
	op(EOceanologyUnderwaterMode::VolumetricFog) 

enum class EOceanologyUnderwaterMode : uint8;
template<> struct TIsUEnumClass<EOceanologyUnderwaterMode> { enum { Value = true }; };
template<> OCEANOLOGY_PLUGIN_API UEnum* StaticEnum<EOceanologyUnderwaterMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
