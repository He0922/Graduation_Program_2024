// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorComponents/SH_WaterfallGenerationEnums.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHADERSOURCE_WATERFALL2RUNTIME_SH_WaterfallGenerationEnums_generated_h
#error "SH_WaterfallGenerationEnums.generated.h already included, missing '#pragma once' in SH_WaterfallGenerationEnums.h"
#endif
#define SHADERSOURCE_WATERFALL2RUNTIME_SH_WaterfallGenerationEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_EditorComponents_SH_WaterfallGenerationEnums_h


#define FOREACH_ENUM_ESH_MESHGENERATIONTYPE(op) \
	op(ESH_MeshGenerationType::W2_MG_Singular) \
	op(ESH_MeshGenerationType::W2_MG_PerPath) \
	op(ESH_MeshGenerationType::W2_MG_Cross) \
	op(ESH_MeshGenerationType::W2_MG_Splash) \
	op(ESH_MeshGenerationType::W2_MG_All) 

enum class ESH_MeshGenerationType : uint8;
template<> struct TIsUEnumClass<ESH_MeshGenerationType> { enum { Value = true }; };
template<> SHADERSOURCE_WATERFALL2RUNTIME_API UEnum* StaticEnum<ESH_MeshGenerationType>();

#define FOREACH_ENUM_ESH_W2_INTERPOLATION(op) \
	op(ESH_W2_Interpolation::W2_IN_Linear) \
	op(ESH_W2_Interpolation::W2_IN_Cubic) 

enum class ESH_W2_Interpolation : uint8;
template<> struct TIsUEnumClass<ESH_W2_Interpolation> { enum { Value = true }; };
template<> SHADERSOURCE_WATERFALL2RUNTIME_API UEnum* StaticEnum<ESH_W2_Interpolation>();

#define FOREACH_ENUM_ESH_MESHPROJECTIONTYPE(op) \
	op(ESH_MeshProjectionType::W2_MP_Positive) \
	op(ESH_MeshProjectionType::W2_MP_Negative) \
	op(ESH_MeshProjectionType::W2_MP_Both) 

enum class ESH_MeshProjectionType : uint8;
template<> struct TIsUEnumClass<ESH_MeshProjectionType> { enum { Value = true }; };
template<> SHADERSOURCE_WATERFALL2RUNTIME_API UEnum* StaticEnum<ESH_MeshProjectionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
