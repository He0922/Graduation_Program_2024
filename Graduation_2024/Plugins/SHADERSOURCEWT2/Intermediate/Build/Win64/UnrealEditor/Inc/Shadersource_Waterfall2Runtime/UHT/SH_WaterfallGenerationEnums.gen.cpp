// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shadersource_Waterfall2Runtime/Public/EditorComponents/SH_WaterfallGenerationEnums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSH_WaterfallGenerationEnums() {}

// Begin Cross Module References
SHADERSOURCE_WATERFALL2RUNTIME_API UEnum* Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_MeshGenerationType();
SHADERSOURCE_WATERFALL2RUNTIME_API UEnum* Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_MeshProjectionType();
SHADERSOURCE_WATERFALL2RUNTIME_API UEnum* Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_W2_Interpolation();
UPackage* Z_Construct_UPackage__Script_Shadersource_Waterfall2Runtime();
// End Cross Module References

// Begin Enum ESH_MeshGenerationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESH_MeshGenerationType;
static UEnum* ESH_MeshGenerationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESH_MeshGenerationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESH_MeshGenerationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_MeshGenerationType, (UObject*)Z_Construct_UPackage__Script_Shadersource_Waterfall2Runtime(), TEXT("ESH_MeshGenerationType"));
	}
	return Z_Registration_Info_UEnum_ESH_MeshGenerationType.OuterSingleton;
}
template<> SHADERSOURCE_WATERFALL2RUNTIME_API UEnum* StaticEnum<ESH_MeshGenerationType>()
{
	return ESH_MeshGenerationType_StaticEnum();
}
struct Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_MeshGenerationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The different mesh types. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallGenerationEnums.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The different mesh types." },
#endif
		{ "W2_MG_All.Hidden", "" },
		{ "W2_MG_All.Name", "ESH_MeshGenerationType::W2_MG_All" },
		{ "W2_MG_Cross.DisplayName", "Plane" },
		{ "W2_MG_Cross.Name", "ESH_MeshGenerationType::W2_MG_Cross" },
		{ "W2_MG_PerPath.DisplayName", "Per Path" },
		{ "W2_MG_PerPath.Name", "ESH_MeshGenerationType::W2_MG_PerPath" },
		{ "W2_MG_Singular.DisplayName", "Singular" },
		{ "W2_MG_Singular.Name", "ESH_MeshGenerationType::W2_MG_Singular" },
		{ "W2_MG_Splash.DisplayName", "Splash" },
		{ "W2_MG_Splash.Name", "ESH_MeshGenerationType::W2_MG_Splash" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESH_MeshGenerationType::W2_MG_Singular", (int64)ESH_MeshGenerationType::W2_MG_Singular },
		{ "ESH_MeshGenerationType::W2_MG_PerPath", (int64)ESH_MeshGenerationType::W2_MG_PerPath },
		{ "ESH_MeshGenerationType::W2_MG_Cross", (int64)ESH_MeshGenerationType::W2_MG_Cross },
		{ "ESH_MeshGenerationType::W2_MG_Splash", (int64)ESH_MeshGenerationType::W2_MG_Splash },
		{ "ESH_MeshGenerationType::W2_MG_All", (int64)ESH_MeshGenerationType::W2_MG_All },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_MeshGenerationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Shadersource_Waterfall2Runtime,
	nullptr,
	"ESH_MeshGenerationType",
	"ESH_MeshGenerationType",
	Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_MeshGenerationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_MeshGenerationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_MeshGenerationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_MeshGenerationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_MeshGenerationType()
{
	if (!Z_Registration_Info_UEnum_ESH_MeshGenerationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESH_MeshGenerationType.InnerSingleton, Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_MeshGenerationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESH_MeshGenerationType.InnerSingleton;
}
// End Enum ESH_MeshGenerationType

// Begin Enum ESH_W2_Interpolation
#if WITH_EDITORONLY_DATA
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESH_W2_Interpolation;
static UEnum* ESH_W2_Interpolation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESH_W2_Interpolation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESH_W2_Interpolation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_W2_Interpolation, (UObject*)Z_Construct_UPackage__Script_Shadersource_Waterfall2Runtime(), TEXT("ESH_W2_Interpolation"));
	}
	return Z_Registration_Info_UEnum_ESH_W2_Interpolation.OuterSingleton;
}
template<> SHADERSOURCE_WATERFALL2RUNTIME_API UEnum* StaticEnum<ESH_W2_Interpolation>()
{
	return ESH_W2_Interpolation_StaticEnum();
}
struct Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_W2_Interpolation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* General Interp Type */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallGenerationEnums.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "General Interp Type" },
#endif
		{ "W2_IN_Cubic.DisplayName", "Cubic" },
		{ "W2_IN_Cubic.Name", "ESH_W2_Interpolation::W2_IN_Cubic" },
		{ "W2_IN_Linear.DisplayName", "Linear" },
		{ "W2_IN_Linear.Name", "ESH_W2_Interpolation::W2_IN_Linear" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESH_W2_Interpolation::W2_IN_Linear", (int64)ESH_W2_Interpolation::W2_IN_Linear },
		{ "ESH_W2_Interpolation::W2_IN_Cubic", (int64)ESH_W2_Interpolation::W2_IN_Cubic },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_W2_Interpolation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Shadersource_Waterfall2Runtime,
	nullptr,
	"ESH_W2_Interpolation",
	"ESH_W2_Interpolation",
	Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_W2_Interpolation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_W2_Interpolation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_W2_Interpolation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_W2_Interpolation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_W2_Interpolation()
{
	if (!Z_Registration_Info_UEnum_ESH_W2_Interpolation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESH_W2_Interpolation.InnerSingleton, Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_W2_Interpolation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESH_W2_Interpolation.InnerSingleton;
}
#endif // WITH_EDITORONLY_DATA
// End Enum ESH_W2_Interpolation

// Begin Enum ESH_MeshProjectionType
#if WITH_EDITORONLY_DATA
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESH_MeshProjectionType;
static UEnum* ESH_MeshProjectionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESH_MeshProjectionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESH_MeshProjectionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_MeshProjectionType, (UObject*)Z_Construct_UPackage__Script_Shadersource_Waterfall2Runtime(), TEXT("ESH_MeshProjectionType"));
	}
	return Z_Registration_Info_UEnum_ESH_MeshProjectionType.OuterSingleton;
}
template<> SHADERSOURCE_WATERFALL2RUNTIME_API UEnum* StaticEnum<ESH_MeshProjectionType>()
{
	return ESH_MeshProjectionType_StaticEnum();
}
struct Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_MeshProjectionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Used in the create mesh buffers functions. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallGenerationEnums.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used in the create mesh buffers functions." },
#endif
		{ "W2_MP_Both.Comment", "/* Vertices are nudged away from any impact point, and then nudged towards the  impact point. */" },
		{ "W2_MP_Both.DisplayName", "Both" },
		{ "W2_MP_Both.Name", "ESH_MeshProjectionType::W2_MP_Both" },
		{ "W2_MP_Both.ToolTip", "Vertices are nudged away from any impact point, and then nudged towards the  impact point." },
		{ "W2_MP_Negative.Comment", "/* Vertices are nudged towards any impact point. */" },
		{ "W2_MP_Negative.DisplayName", "Negative" },
		{ "W2_MP_Negative.Name", "ESH_MeshProjectionType::W2_MP_Negative" },
		{ "W2_MP_Negative.ToolTip", "Vertices are nudged towards any impact point." },
		{ "W2_MP_Positive.Comment", "/* Vertices are nudged away from any impact point. */" },
		{ "W2_MP_Positive.DisplayName", "Positive" },
		{ "W2_MP_Positive.Name", "ESH_MeshProjectionType::W2_MP_Positive" },
		{ "W2_MP_Positive.ToolTip", "Vertices are nudged away from any impact point." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESH_MeshProjectionType::W2_MP_Positive", (int64)ESH_MeshProjectionType::W2_MP_Positive },
		{ "ESH_MeshProjectionType::W2_MP_Negative", (int64)ESH_MeshProjectionType::W2_MP_Negative },
		{ "ESH_MeshProjectionType::W2_MP_Both", (int64)ESH_MeshProjectionType::W2_MP_Both },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_MeshProjectionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Shadersource_Waterfall2Runtime,
	nullptr,
	"ESH_MeshProjectionType",
	"ESH_MeshProjectionType",
	Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_MeshProjectionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_MeshProjectionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_MeshProjectionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_MeshProjectionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_MeshProjectionType()
{
	if (!Z_Registration_Info_UEnum_ESH_MeshProjectionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESH_MeshProjectionType.InnerSingleton, Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_MeshProjectionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESH_MeshProjectionType.InnerSingleton;
}
#endif // WITH_EDITORONLY_DATA
// End Enum ESH_MeshProjectionType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_EditorComponents_SH_WaterfallGenerationEnums_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESH_MeshGenerationType_StaticEnum, TEXT("ESH_MeshGenerationType"), &Z_Registration_Info_UEnum_ESH_MeshGenerationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 406542764U) },
#if WITH_EDITORONLY_DATA
		{ ESH_W2_Interpolation_StaticEnum, TEXT("ESH_W2_Interpolation"), &Z_Registration_Info_UEnum_ESH_W2_Interpolation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 458548596U) },
		{ ESH_MeshProjectionType_StaticEnum, TEXT("ESH_MeshProjectionType"), &Z_Registration_Info_UEnum_ESH_MeshProjectionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3283005238U) },
#endif // WITH_EDITORONLY_DATA
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_EditorComponents_SH_WaterfallGenerationEnums_h_105872736(TEXT("/Script/Shadersource_Waterfall2Runtime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_EditorComponents_SH_WaterfallGenerationEnums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_EditorComponents_SH_WaterfallGenerationEnums_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
