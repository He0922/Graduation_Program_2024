// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enums/OceanologyWaterPresetMode.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OCEANOLOGY_PLUGIN_OceanologyWaterPresetMode_generated_h
#error "OceanologyWaterPresetMode.generated.h already included, missing '#pragma once' in OceanologyWaterPresetMode.h"
#endif
#define OCEANOLOGY_PLUGIN_OceanologyWaterPresetMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Enums_OceanologyWaterPresetMode_h


#define FOREACH_ENUM_EOCEANOLOGYWATERPRESETMODE(op) \
	op(EOceanologyWaterPresetMode::UsePresetDirectly) \
	op(EOceanologyWaterPresetMode::ApplyPresetToCurrentSettings) 

enum class EOceanologyWaterPresetMode : uint8;
template<> struct TIsUEnumClass<EOceanologyWaterPresetMode> { enum { Value = true }; };
template<> OCEANOLOGY_PLUGIN_API UEnum* StaticEnum<EOceanologyWaterPresetMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
