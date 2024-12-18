// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyRVT.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyRVT() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyRVTHelper();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyRVTHelper_NoRegister();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyRVT();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin ScriptStruct FOceanologyRVT
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OceanologyRVT;
class UScriptStruct* FOceanologyRVT::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyRVT.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OceanologyRVT.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOceanologyRVT, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("OceanologyRVT"));
	}
	return Z_Registration_Info_UScriptStruct_OceanologyRVT.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<FOceanologyRVT>()
{
	return FOceanologyRVT::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOceanologyRVT_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\n * Generated at: 10 March 2024\n **/" },
#endif
		{ "ModuleRelativePath", "Public/Structs/OceanologyRVT.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\nGenerated at: 10 March 2024" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxMaxEdgeFalloff_MetaData[] = {
		{ "Category", "RVT" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.02" },
		{ "DisplayName", "Box Max Edge Falloff" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyRVT.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DepthForDFFoam_MetaData[] = {
		{ "Category", "RVT" },
		{ "DisplayName", "Depth For DF Foam" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyRVT.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DepthForMask_MetaData[] = {
		{ "Category", "RVT" },
		{ "DisplayName", "Depth For Mask" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyRVT.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DepthForStillShore_MetaData[] = {
		{ "Category", "RVT" },
		{ "DisplayName", "Depth For Still Shore" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyRVT.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DepthForSurfaceScattering_MetaData[] = {
		{ "Category", "RVT" },
		{ "DisplayName", "Depth For Surface Scattering" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyRVT.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterZMax_MetaData[] = {
		{ "Category", "RVT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Lake */" },
#endif
		{ "DisplayName", "WaterZMax" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyRVT.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lake" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterZMin_MetaData[] = {
		{ "Category", "RVT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Lake */" },
#endif
		{ "DisplayName", "WaterZMin" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyRVT.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lake" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShorelineSurfaceScatteringColor_MetaData[] = {
		{ "Category", "RVT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Determines the surface scattering color of the shore based on RVT shore texture. (T_Heightmap) */" },
#endif
		{ "DisplayName", "Shoreline Surface Scattering Color" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyRVT.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines the surface scattering color of the shore based on RVT shore texture. (T_Heightmap)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_T_Heightmap_MetaData[] = {
		{ "Category", "RVT" },
		{ "DisplayName", "T_Heightmap" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyRVT.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_BoxMaxEdgeFalloff;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DepthForDFFoam;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DepthForMask;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DepthForStillShore;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DepthForSurfaceScattering;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WaterZMax;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WaterZMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShorelineSurfaceScatteringColor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_T_Heightmap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOceanologyRVT>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyRVT_Statics::NewProp_BoxMaxEdgeFalloff = { "BoxMaxEdgeFalloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyRVT, BoxMaxEdgeFalloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxMaxEdgeFalloff_MetaData), NewProp_BoxMaxEdgeFalloff_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyRVT_Statics::NewProp_DepthForDFFoam = { "DepthForDFFoam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyRVT, DepthForDFFoam), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DepthForDFFoam_MetaData), NewProp_DepthForDFFoam_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyRVT_Statics::NewProp_DepthForMask = { "DepthForMask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyRVT, DepthForMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DepthForMask_MetaData), NewProp_DepthForMask_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyRVT_Statics::NewProp_DepthForStillShore = { "DepthForStillShore", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyRVT, DepthForStillShore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DepthForStillShore_MetaData), NewProp_DepthForStillShore_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyRVT_Statics::NewProp_DepthForSurfaceScattering = { "DepthForSurfaceScattering", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyRVT, DepthForSurfaceScattering), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DepthForSurfaceScattering_MetaData), NewProp_DepthForSurfaceScattering_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyRVT_Statics::NewProp_WaterZMax = { "WaterZMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyRVT, WaterZMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterZMax_MetaData), NewProp_WaterZMax_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyRVT_Statics::NewProp_WaterZMin = { "WaterZMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyRVT, WaterZMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterZMin_MetaData), NewProp_WaterZMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOceanologyRVT_Statics::NewProp_ShorelineSurfaceScatteringColor = { "ShorelineSurfaceScatteringColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyRVT, ShorelineSurfaceScatteringColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShorelineSurfaceScatteringColor_MetaData), NewProp_ShorelineSurfaceScatteringColor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOceanologyRVT_Statics::NewProp_T_Heightmap = { "T_Heightmap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyRVT, T_Heightmap), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_T_Heightmap_MetaData), NewProp_T_Heightmap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOceanologyRVT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyRVT_Statics::NewProp_BoxMaxEdgeFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyRVT_Statics::NewProp_DepthForDFFoam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyRVT_Statics::NewProp_DepthForMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyRVT_Statics::NewProp_DepthForStillShore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyRVT_Statics::NewProp_DepthForSurfaceScattering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyRVT_Statics::NewProp_WaterZMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyRVT_Statics::NewProp_WaterZMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyRVT_Statics::NewProp_ShorelineSurfaceScatteringColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyRVT_Statics::NewProp_T_Heightmap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyRVT_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOceanologyRVT_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	&NewStructOps,
	"OceanologyRVT",
	Z_Construct_UScriptStruct_FOceanologyRVT_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyRVT_Statics::PropPointers),
	sizeof(FOceanologyRVT),
	alignof(FOceanologyRVT),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyRVT_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOceanologyRVT_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOceanologyRVT()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyRVT.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OceanologyRVT.InnerSingleton, Z_Construct_UScriptStruct_FOceanologyRVT_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OceanologyRVT.InnerSingleton;
}
// End ScriptStruct FOceanologyRVT

// Begin Class UOceanologyRVTHelper Function LerpRVT
struct Z_Construct_UFunction_UOceanologyRVTHelper_LerpRVT_Statics
{
	struct OceanologyRVTHelper_eventLerpRVT_Parms
	{
		FOceanologyRVT A;
		FOceanologyRVT B;
		double Alpha;
		FOceanologyRVT OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RVT" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyRVT.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyRVTHelper_LerpRVT_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyRVTHelper_eventLerpRVT_Parms, A), Z_Construct_UScriptStruct_FOceanologyRVT, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1549818250
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyRVTHelper_LerpRVT_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyRVTHelper_eventLerpRVT_Parms, B), Z_Construct_UScriptStruct_FOceanologyRVT, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 1549818250
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyRVTHelper_LerpRVT_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyRVTHelper_eventLerpRVT_Parms, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyRVTHelper_LerpRVT_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyRVTHelper_eventLerpRVT_Parms, OutResult), Z_Construct_UScriptStruct_FOceanologyRVT, METADATA_PARAMS(0, nullptr) }; // 1549818250
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyRVTHelper_LerpRVT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyRVTHelper_LerpRVT_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyRVTHelper_LerpRVT_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyRVTHelper_LerpRVT_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyRVTHelper_LerpRVT_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyRVTHelper_LerpRVT_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyRVTHelper_LerpRVT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyRVTHelper, nullptr, "LerpRVT", nullptr, nullptr, Z_Construct_UFunction_UOceanologyRVTHelper_LerpRVT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyRVTHelper_LerpRVT_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyRVTHelper_LerpRVT_Statics::OceanologyRVTHelper_eventLerpRVT_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyRVTHelper_LerpRVT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyRVTHelper_LerpRVT_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyRVTHelper_LerpRVT_Statics::OceanologyRVTHelper_eventLerpRVT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyRVTHelper_LerpRVT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyRVTHelper_LerpRVT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyRVTHelper::execLerpRVT)
{
	P_GET_STRUCT_REF(FOceanologyRVT,Z_Param_Out_A);
	P_GET_STRUCT_REF(FOceanologyRVT,Z_Param_Out_B);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Alpha);
	P_GET_STRUCT_REF(FOceanologyRVT,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyRVTHelper::LerpRVT(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Alpha,Z_Param_Out_OutResult);
	P_NATIVE_END;
}
// End Class UOceanologyRVTHelper Function LerpRVT

// Begin Class UOceanologyRVTHelper Function SetMaterialParameters
struct Z_Construct_UFunction_UOceanologyRVTHelper_SetMaterialParameters_Statics
{
	struct OceanologyRVTHelper_eventSetMaterialParameters_Parms
	{
		UMaterialInstanceDynamic* MID;
		FOceanologyRVT RVT;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RVT" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyRVT.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RVT_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RVT;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyRVTHelper_SetMaterialParameters_Statics::NewProp_MID = { "MID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyRVTHelper_eventSetMaterialParameters_Parms, MID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyRVTHelper_SetMaterialParameters_Statics::NewProp_RVT = { "RVT", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyRVTHelper_eventSetMaterialParameters_Parms, RVT), Z_Construct_UScriptStruct_FOceanologyRVT, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RVT_MetaData), NewProp_RVT_MetaData) }; // 1549818250
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyRVTHelper_SetMaterialParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyRVTHelper_SetMaterialParameters_Statics::NewProp_MID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyRVTHelper_SetMaterialParameters_Statics::NewProp_RVT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyRVTHelper_SetMaterialParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyRVTHelper_SetMaterialParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyRVTHelper, nullptr, "SetMaterialParameters", nullptr, nullptr, Z_Construct_UFunction_UOceanologyRVTHelper_SetMaterialParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyRVTHelper_SetMaterialParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyRVTHelper_SetMaterialParameters_Statics::OceanologyRVTHelper_eventSetMaterialParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyRVTHelper_SetMaterialParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyRVTHelper_SetMaterialParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyRVTHelper_SetMaterialParameters_Statics::OceanologyRVTHelper_eventSetMaterialParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyRVTHelper_SetMaterialParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyRVTHelper_SetMaterialParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyRVTHelper::execSetMaterialParameters)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MID);
	P_GET_STRUCT_REF(FOceanologyRVT,Z_Param_Out_RVT);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyRVTHelper::SetMaterialParameters(Z_Param_MID,Z_Param_Out_RVT);
	P_NATIVE_END;
}
// End Class UOceanologyRVTHelper Function SetMaterialParameters

// Begin Class UOceanologyRVTHelper
void UOceanologyRVTHelper::StaticRegisterNativesUOceanologyRVTHelper()
{
	UClass* Class = UOceanologyRVTHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LerpRVT", &UOceanologyRVTHelper::execLerpRVT },
		{ "SetMaterialParameters", &UOceanologyRVTHelper::execSetMaterialParameters },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanologyRVTHelper);
UClass* Z_Construct_UClass_UOceanologyRVTHelper_NoRegister()
{
	return UOceanologyRVTHelper::StaticClass();
}
struct Z_Construct_UClass_UOceanologyRVTHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\n * Generated at: 10 March 2024\n **/" },
#endif
		{ "IncludePath", "Structs/OceanologyRVT.h" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyRVT.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\nGenerated at: 10 March 2024" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOceanologyRVTHelper_LerpRVT, "LerpRVT" }, // 121010949
		{ &Z_Construct_UFunction_UOceanologyRVTHelper_SetMaterialParameters, "SetMaterialParameters" }, // 2868086312
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanologyRVTHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOceanologyRVTHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyRVTHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanologyRVTHelper_Statics::ClassParams = {
	&UOceanologyRVTHelper::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyRVTHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanologyRVTHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanologyRVTHelper()
{
	if (!Z_Registration_Info_UClass_UOceanologyRVTHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanologyRVTHelper.OuterSingleton, Z_Construct_UClass_UOceanologyRVTHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanologyRVTHelper.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanologyRVTHelper>()
{
	return UOceanologyRVTHelper::StaticClass();
}
UOceanologyRVTHelper::UOceanologyRVTHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanologyRVTHelper);
UOceanologyRVTHelper::~UOceanologyRVTHelper() {}
// End Class UOceanologyRVTHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyRVT_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOceanologyRVT::StaticStruct, Z_Construct_UScriptStruct_FOceanologyRVT_Statics::NewStructOps, TEXT("OceanologyRVT"), &Z_Registration_Info_UScriptStruct_OceanologyRVT, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOceanologyRVT), 1549818250U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanologyRVTHelper, UOceanologyRVTHelper::StaticClass, TEXT("UOceanologyRVTHelper"), &Z_Registration_Info_UClass_UOceanologyRVTHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanologyRVTHelper), 4052880168U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyRVT_h_1477086164(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyRVT_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyRVT_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyRVT_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Data_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyRVT_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
