// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyFlipbook.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyFlipbook() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyFlipbookHelper();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyFlipbookHelper_NoRegister();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyFlipbook();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin ScriptStruct FOceanologyFlipbook
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OceanologyFlipbook;
class UScriptStruct* FOceanologyFlipbook::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyFlipbook.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OceanologyFlipbook.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOceanologyFlipbook, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("OceanologyFlipbook"));
	}
	return Z_Registration_Info_UScriptStruct_OceanologyFlipbook.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<FOceanologyFlipbook>()
{
	return FOceanologyFlipbook::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOceanologyFlipbook_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\n * Generated at: 10 March 2024\n **/" },
#endif
		{ "ModuleRelativePath", "Public/Structs/OceanologyFlipbook.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\nGenerated at: 10 March 2024" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistantWaterScale_MetaData[] = {
		{ "Category", "Flipbook" },
		{ "DisplayName", "DistantWaterScale" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFlipbook.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FarNormalFresnelPower_MetaData[] = {
		{ "Category", "Flipbook" },
		{ "DisplayName", "FarNormalFresnelPower" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFlipbook.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRateFar_MetaData[] = {
		{ "Category", "Flipbook" },
		{ "DisplayName", "FrameRateFar" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFlipbook.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRateNear_MetaData[] = {
		{ "Category", "Flipbook" },
		{ "DisplayName", "FrameRateNear" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFlipbook.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NearNormalStrength_MetaData[] = {
		{ "Category", "Flipbook" },
		{ "DisplayName", "NearNormalStrength" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFlipbook.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NearWaterScale_MetaData[] = {
		{ "Category", "Flipbook" },
		{ "DisplayName", "NearWaterScale" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFlipbook.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalLongDistanceStrength_MetaData[] = {
		{ "Category", "Flipbook" },
		{ "DisplayName", "NormalLongDistanceStrength" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFlipbook.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalMidDistanceForce_MetaData[] = {
		{ "Category", "Flipbook" },
		{ "DisplayName", "NormalMidDistanceForce" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFlipbook.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_T_FarNormalWater_MetaData[] = {
		{ "Category", "Flipbook" },
		{ "DisplayName", "T_FarNormalWater" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFlipbook.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_T_WaterNormals_MetaData[] = {
		{ "Category", "Flipbook" },
		{ "DisplayName", "T_WaterNormals" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFlipbook.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DistantWaterScale;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FarNormalFresnelPower;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FrameRateFar;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FrameRateNear;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_NearNormalStrength;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_NearWaterScale;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_NormalLongDistanceStrength;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_NormalMidDistanceForce;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_T_FarNormalWater;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_T_WaterNormals;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOceanologyFlipbook>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyFlipbook_Statics::NewProp_DistantWaterScale = { "DistantWaterScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFlipbook, DistantWaterScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistantWaterScale_MetaData), NewProp_DistantWaterScale_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyFlipbook_Statics::NewProp_FarNormalFresnelPower = { "FarNormalFresnelPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFlipbook, FarNormalFresnelPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FarNormalFresnelPower_MetaData), NewProp_FarNormalFresnelPower_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyFlipbook_Statics::NewProp_FrameRateFar = { "FrameRateFar", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFlipbook, FrameRateFar), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRateFar_MetaData), NewProp_FrameRateFar_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyFlipbook_Statics::NewProp_FrameRateNear = { "FrameRateNear", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFlipbook, FrameRateNear), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRateNear_MetaData), NewProp_FrameRateNear_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyFlipbook_Statics::NewProp_NearNormalStrength = { "NearNormalStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFlipbook, NearNormalStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NearNormalStrength_MetaData), NewProp_NearNormalStrength_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyFlipbook_Statics::NewProp_NearWaterScale = { "NearWaterScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFlipbook, NearWaterScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NearWaterScale_MetaData), NewProp_NearWaterScale_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyFlipbook_Statics::NewProp_NormalLongDistanceStrength = { "NormalLongDistanceStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFlipbook, NormalLongDistanceStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalLongDistanceStrength_MetaData), NewProp_NormalLongDistanceStrength_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyFlipbook_Statics::NewProp_NormalMidDistanceForce = { "NormalMidDistanceForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFlipbook, NormalMidDistanceForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalMidDistanceForce_MetaData), NewProp_NormalMidDistanceForce_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOceanologyFlipbook_Statics::NewProp_T_FarNormalWater = { "T_FarNormalWater", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFlipbook, T_FarNormalWater), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_T_FarNormalWater_MetaData), NewProp_T_FarNormalWater_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOceanologyFlipbook_Statics::NewProp_T_WaterNormals = { "T_WaterNormals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFlipbook, T_WaterNormals), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_T_WaterNormals_MetaData), NewProp_T_WaterNormals_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOceanologyFlipbook_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFlipbook_Statics::NewProp_DistantWaterScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFlipbook_Statics::NewProp_FarNormalFresnelPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFlipbook_Statics::NewProp_FrameRateFar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFlipbook_Statics::NewProp_FrameRateNear,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFlipbook_Statics::NewProp_NearNormalStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFlipbook_Statics::NewProp_NearWaterScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFlipbook_Statics::NewProp_NormalLongDistanceStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFlipbook_Statics::NewProp_NormalMidDistanceForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFlipbook_Statics::NewProp_T_FarNormalWater,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFlipbook_Statics::NewProp_T_WaterNormals,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyFlipbook_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOceanologyFlipbook_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	&NewStructOps,
	"OceanologyFlipbook",
	Z_Construct_UScriptStruct_FOceanologyFlipbook_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyFlipbook_Statics::PropPointers),
	sizeof(FOceanologyFlipbook),
	alignof(FOceanologyFlipbook),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyFlipbook_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOceanologyFlipbook_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOceanologyFlipbook()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyFlipbook.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OceanologyFlipbook.InnerSingleton, Z_Construct_UScriptStruct_FOceanologyFlipbook_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OceanologyFlipbook.InnerSingleton;
}
// End ScriptStruct FOceanologyFlipbook

// Begin Class UOceanologyFlipbookHelper Function LerpFlipbook
struct Z_Construct_UFunction_UOceanologyFlipbookHelper_LerpFlipbook_Statics
{
	struct OceanologyFlipbookHelper_eventLerpFlipbook_Parms
	{
		FOceanologyFlipbook A;
		FOceanologyFlipbook B;
		double Alpha;
		FOceanologyFlipbook OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flipbook" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFlipbook.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyFlipbookHelper_LerpFlipbook_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyFlipbookHelper_eventLerpFlipbook_Parms, A), Z_Construct_UScriptStruct_FOceanologyFlipbook, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1692283366
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyFlipbookHelper_LerpFlipbook_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyFlipbookHelper_eventLerpFlipbook_Parms, B), Z_Construct_UScriptStruct_FOceanologyFlipbook, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 1692283366
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyFlipbookHelper_LerpFlipbook_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyFlipbookHelper_eventLerpFlipbook_Parms, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyFlipbookHelper_LerpFlipbook_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyFlipbookHelper_eventLerpFlipbook_Parms, OutResult), Z_Construct_UScriptStruct_FOceanologyFlipbook, METADATA_PARAMS(0, nullptr) }; // 1692283366
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyFlipbookHelper_LerpFlipbook_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyFlipbookHelper_LerpFlipbook_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyFlipbookHelper_LerpFlipbook_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyFlipbookHelper_LerpFlipbook_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyFlipbookHelper_LerpFlipbook_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyFlipbookHelper_LerpFlipbook_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyFlipbookHelper_LerpFlipbook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyFlipbookHelper, nullptr, "LerpFlipbook", nullptr, nullptr, Z_Construct_UFunction_UOceanologyFlipbookHelper_LerpFlipbook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyFlipbookHelper_LerpFlipbook_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyFlipbookHelper_LerpFlipbook_Statics::OceanologyFlipbookHelper_eventLerpFlipbook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyFlipbookHelper_LerpFlipbook_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyFlipbookHelper_LerpFlipbook_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyFlipbookHelper_LerpFlipbook_Statics::OceanologyFlipbookHelper_eventLerpFlipbook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyFlipbookHelper_LerpFlipbook()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyFlipbookHelper_LerpFlipbook_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyFlipbookHelper::execLerpFlipbook)
{
	P_GET_STRUCT_REF(FOceanologyFlipbook,Z_Param_Out_A);
	P_GET_STRUCT_REF(FOceanologyFlipbook,Z_Param_Out_B);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Alpha);
	P_GET_STRUCT_REF(FOceanologyFlipbook,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyFlipbookHelper::LerpFlipbook(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Alpha,Z_Param_Out_OutResult);
	P_NATIVE_END;
}
// End Class UOceanologyFlipbookHelper Function LerpFlipbook

// Begin Class UOceanologyFlipbookHelper Function SetMaterialParameters
struct Z_Construct_UFunction_UOceanologyFlipbookHelper_SetMaterialParameters_Statics
{
	struct OceanologyFlipbookHelper_eventSetMaterialParameters_Parms
	{
		UMaterialInstanceDynamic* MID;
		FOceanologyFlipbook Flipbook;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flipbook" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFlipbook.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flipbook_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Flipbook;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyFlipbookHelper_SetMaterialParameters_Statics::NewProp_MID = { "MID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyFlipbookHelper_eventSetMaterialParameters_Parms, MID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyFlipbookHelper_SetMaterialParameters_Statics::NewProp_Flipbook = { "Flipbook", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyFlipbookHelper_eventSetMaterialParameters_Parms, Flipbook), Z_Construct_UScriptStruct_FOceanologyFlipbook, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flipbook_MetaData), NewProp_Flipbook_MetaData) }; // 1692283366
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyFlipbookHelper_SetMaterialParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyFlipbookHelper_SetMaterialParameters_Statics::NewProp_MID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyFlipbookHelper_SetMaterialParameters_Statics::NewProp_Flipbook,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyFlipbookHelper_SetMaterialParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyFlipbookHelper_SetMaterialParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyFlipbookHelper, nullptr, "SetMaterialParameters", nullptr, nullptr, Z_Construct_UFunction_UOceanologyFlipbookHelper_SetMaterialParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyFlipbookHelper_SetMaterialParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyFlipbookHelper_SetMaterialParameters_Statics::OceanologyFlipbookHelper_eventSetMaterialParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyFlipbookHelper_SetMaterialParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyFlipbookHelper_SetMaterialParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyFlipbookHelper_SetMaterialParameters_Statics::OceanologyFlipbookHelper_eventSetMaterialParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyFlipbookHelper_SetMaterialParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyFlipbookHelper_SetMaterialParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyFlipbookHelper::execSetMaterialParameters)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MID);
	P_GET_STRUCT_REF(FOceanologyFlipbook,Z_Param_Out_Flipbook);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyFlipbookHelper::SetMaterialParameters(Z_Param_MID,Z_Param_Out_Flipbook);
	P_NATIVE_END;
}
// End Class UOceanologyFlipbookHelper Function SetMaterialParameters

// Begin Class UOceanologyFlipbookHelper
void UOceanologyFlipbookHelper::StaticRegisterNativesUOceanologyFlipbookHelper()
{
	UClass* Class = UOceanologyFlipbookHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LerpFlipbook", &UOceanologyFlipbookHelper::execLerpFlipbook },
		{ "SetMaterialParameters", &UOceanologyFlipbookHelper::execSetMaterialParameters },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanologyFlipbookHelper);
UClass* Z_Construct_UClass_UOceanologyFlipbookHelper_NoRegister()
{
	return UOceanologyFlipbookHelper::StaticClass();
}
struct Z_Construct_UClass_UOceanologyFlipbookHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\n * Generated at: 10 March 2024\n **/" },
#endif
		{ "IncludePath", "Structs/OceanologyFlipbook.h" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFlipbook.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\nGenerated at: 10 March 2024" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOceanologyFlipbookHelper_LerpFlipbook, "LerpFlipbook" }, // 2857880706
		{ &Z_Construct_UFunction_UOceanologyFlipbookHelper_SetMaterialParameters, "SetMaterialParameters" }, // 1558703108
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanologyFlipbookHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOceanologyFlipbookHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyFlipbookHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanologyFlipbookHelper_Statics::ClassParams = {
	&UOceanologyFlipbookHelper::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyFlipbookHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanologyFlipbookHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanologyFlipbookHelper()
{
	if (!Z_Registration_Info_UClass_UOceanologyFlipbookHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanologyFlipbookHelper.OuterSingleton, Z_Construct_UClass_UOceanologyFlipbookHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanologyFlipbookHelper.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanologyFlipbookHelper>()
{
	return UOceanologyFlipbookHelper::StaticClass();
}
UOceanologyFlipbookHelper::UOceanologyFlipbookHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanologyFlipbookHelper);
UOceanologyFlipbookHelper::~UOceanologyFlipbookHelper() {}
// End Class UOceanologyFlipbookHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyFlipbook_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOceanologyFlipbook::StaticStruct, Z_Construct_UScriptStruct_FOceanologyFlipbook_Statics::NewStructOps, TEXT("OceanologyFlipbook"), &Z_Registration_Info_UScriptStruct_OceanologyFlipbook, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOceanologyFlipbook), 1692283366U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanologyFlipbookHelper, UOceanologyFlipbookHelper::StaticClass, TEXT("UOceanologyFlipbookHelper"), &Z_Registration_Info_UClass_UOceanologyFlipbookHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanologyFlipbookHelper), 1469507324U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyFlipbook_h_25987059(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyFlipbook_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyFlipbook_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyFlipbook_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyFlipbook_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
