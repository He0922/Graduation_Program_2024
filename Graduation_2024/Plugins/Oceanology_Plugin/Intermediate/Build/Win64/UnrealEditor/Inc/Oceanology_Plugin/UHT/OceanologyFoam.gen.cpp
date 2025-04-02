// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oceanology_Plugin/Public/Structs/OceanologyFoam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanologyFoam() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyFoamHelper();
OCEANOLOGY_PLUGIN_API UClass* Z_Construct_UClass_UOceanologyFoamHelper_NoRegister();
OCEANOLOGY_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOceanologyFoam();
UPackage* Z_Construct_UPackage__Script_Oceanology_Plugin();
// End Cross Module References

// Begin ScriptStruct FOceanologyFoam
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OceanologyFoam;
class UScriptStruct* FOceanologyFoam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyFoam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OceanologyFoam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOceanologyFoam, (UObject*)Z_Construct_UPackage__Script_Oceanology_Plugin(), TEXT("OceanologyFoam"));
	}
	return Z_Registration_Info_UScriptStruct_OceanologyFoam.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UScriptStruct* StaticStruct<FOceanologyFoam>()
{
	return FOceanologyFoam::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOceanologyFoam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\n * Generated at: 10 March 2024\n **/" },
#endif
		{ "ModuleRelativePath", "Public/Structs/OceanologyFoam.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\nGenerated at: 10 March 2024" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoamDistortionIntensity_MetaData[] = {
		{ "Category", "Foam" },
		{ "DisplayName", "FoamDistortionIntensity" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFoam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoamDistortionScale_MetaData[] = {
		{ "Category", "Foam" },
		{ "DisplayName", "FoamDistortionScale" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFoam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoamDistortionSpeed_MetaData[] = {
		{ "Category", "Foam" },
		{ "DisplayName", "FoamDistortionSpeed" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFoam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoamNormals_MetaData[] = {
		{ "Category", "Foam" },
		{ "DisplayName", "FoamNormals" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFoam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVBubbles_MetaData[] = {
		{ "Category", "Foam" },
		{ "DisplayName", "UVBubbles" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFoam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVFoam_MetaData[] = {
		{ "Category", "Foam" },
		{ "DisplayName", "UVFoam" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFoam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BubblesNormals_MetaData[] = {
		{ "Category", "Foam" },
		{ "DisplayName", "BubblesNormals" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFoam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_T_BubblesColor_MetaData[] = {
		{ "Category", "Foam" },
		{ "DisplayName", "T_BubblesColor" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFoam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_T_BubblesNormals_MetaData[] = {
		{ "Category", "Foam" },
		{ "DisplayName", "T_BubblesNormals" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFoam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_T_FoamColor_MetaData[] = {
		{ "Category", "Foam" },
		{ "DisplayName", "T_FoamColor" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFoam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_T_FoamNormals_MetaData[] = {
		{ "Category", "Foam" },
		{ "DisplayName", "T_FoamNormals" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFoam.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FoamDistortionIntensity;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FoamDistortionScale;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FoamDistortionSpeed;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FoamNormals;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_UVBubbles;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_UVFoam;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_BubblesNormals;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_T_BubblesColor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_T_BubblesNormals;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_T_FoamColor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_T_FoamNormals;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOceanologyFoam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyFoam_Statics::NewProp_FoamDistortionIntensity = { "FoamDistortionIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFoam, FoamDistortionIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoamDistortionIntensity_MetaData), NewProp_FoamDistortionIntensity_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyFoam_Statics::NewProp_FoamDistortionScale = { "FoamDistortionScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFoam, FoamDistortionScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoamDistortionScale_MetaData), NewProp_FoamDistortionScale_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyFoam_Statics::NewProp_FoamDistortionSpeed = { "FoamDistortionSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFoam, FoamDistortionSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoamDistortionSpeed_MetaData), NewProp_FoamDistortionSpeed_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyFoam_Statics::NewProp_FoamNormals = { "FoamNormals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFoam, FoamNormals), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoamNormals_MetaData), NewProp_FoamNormals_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyFoam_Statics::NewProp_UVBubbles = { "UVBubbles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFoam, UVBubbles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVBubbles_MetaData), NewProp_UVBubbles_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyFoam_Statics::NewProp_UVFoam = { "UVFoam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFoam, UVFoam), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVFoam_MetaData), NewProp_UVFoam_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FOceanologyFoam_Statics::NewProp_BubblesNormals = { "BubblesNormals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFoam, BubblesNormals), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BubblesNormals_MetaData), NewProp_BubblesNormals_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOceanologyFoam_Statics::NewProp_T_BubblesColor = { "T_BubblesColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFoam, T_BubblesColor), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_T_BubblesColor_MetaData), NewProp_T_BubblesColor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOceanologyFoam_Statics::NewProp_T_BubblesNormals = { "T_BubblesNormals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFoam, T_BubblesNormals), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_T_BubblesNormals_MetaData), NewProp_T_BubblesNormals_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOceanologyFoam_Statics::NewProp_T_FoamColor = { "T_FoamColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFoam, T_FoamColor), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_T_FoamColor_MetaData), NewProp_T_FoamColor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOceanologyFoam_Statics::NewProp_T_FoamNormals = { "T_FoamNormals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOceanologyFoam, T_FoamNormals), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_T_FoamNormals_MetaData), NewProp_T_FoamNormals_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOceanologyFoam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFoam_Statics::NewProp_FoamDistortionIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFoam_Statics::NewProp_FoamDistortionScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFoam_Statics::NewProp_FoamDistortionSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFoam_Statics::NewProp_FoamNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFoam_Statics::NewProp_UVBubbles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFoam_Statics::NewProp_UVFoam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFoam_Statics::NewProp_BubblesNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFoam_Statics::NewProp_T_BubblesColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFoam_Statics::NewProp_T_BubblesNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFoam_Statics::NewProp_T_FoamColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOceanologyFoam_Statics::NewProp_T_FoamNormals,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyFoam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOceanologyFoam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
	nullptr,
	&NewStructOps,
	"OceanologyFoam",
	Z_Construct_UScriptStruct_FOceanologyFoam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyFoam_Statics::PropPointers),
	sizeof(FOceanologyFoam),
	alignof(FOceanologyFoam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOceanologyFoam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOceanologyFoam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOceanologyFoam()
{
	if (!Z_Registration_Info_UScriptStruct_OceanologyFoam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OceanologyFoam.InnerSingleton, Z_Construct_UScriptStruct_FOceanologyFoam_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OceanologyFoam.InnerSingleton;
}
// End ScriptStruct FOceanologyFoam

// Begin Class UOceanologyFoamHelper Function LerpFoam
struct Z_Construct_UFunction_UOceanologyFoamHelper_LerpFoam_Statics
{
	struct OceanologyFoamHelper_eventLerpFoam_Parms
	{
		FOceanologyFoam A;
		FOceanologyFoam B;
		double Alpha;
		FOceanologyFoam OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Foam" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFoam.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyFoamHelper_LerpFoam_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyFoamHelper_eventLerpFoam_Parms, A), Z_Construct_UScriptStruct_FOceanologyFoam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1484821047
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyFoamHelper_LerpFoam_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyFoamHelper_eventLerpFoam_Parms, B), Z_Construct_UScriptStruct_FOceanologyFoam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 1484821047
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOceanologyFoamHelper_LerpFoam_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyFoamHelper_eventLerpFoam_Parms, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyFoamHelper_LerpFoam_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyFoamHelper_eventLerpFoam_Parms, OutResult), Z_Construct_UScriptStruct_FOceanologyFoam, METADATA_PARAMS(0, nullptr) }; // 1484821047
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyFoamHelper_LerpFoam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyFoamHelper_LerpFoam_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyFoamHelper_LerpFoam_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyFoamHelper_LerpFoam_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyFoamHelper_LerpFoam_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyFoamHelper_LerpFoam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyFoamHelper_LerpFoam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyFoamHelper, nullptr, "LerpFoam", nullptr, nullptr, Z_Construct_UFunction_UOceanologyFoamHelper_LerpFoam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyFoamHelper_LerpFoam_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyFoamHelper_LerpFoam_Statics::OceanologyFoamHelper_eventLerpFoam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyFoamHelper_LerpFoam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyFoamHelper_LerpFoam_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyFoamHelper_LerpFoam_Statics::OceanologyFoamHelper_eventLerpFoam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyFoamHelper_LerpFoam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyFoamHelper_LerpFoam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyFoamHelper::execLerpFoam)
{
	P_GET_STRUCT_REF(FOceanologyFoam,Z_Param_Out_A);
	P_GET_STRUCT_REF(FOceanologyFoam,Z_Param_Out_B);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Alpha);
	P_GET_STRUCT_REF(FOceanologyFoam,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyFoamHelper::LerpFoam(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Alpha,Z_Param_Out_OutResult);
	P_NATIVE_END;
}
// End Class UOceanologyFoamHelper Function LerpFoam

// Begin Class UOceanologyFoamHelper Function SetMaterialParameters
struct Z_Construct_UFunction_UOceanologyFoamHelper_SetMaterialParameters_Statics
{
	struct OceanologyFoamHelper_eventSetMaterialParameters_Parms
	{
		UMaterialInstanceDynamic* MID;
		FOceanologyFoam Foam;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Foam" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFoam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Foam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Foam;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOceanologyFoamHelper_SetMaterialParameters_Statics::NewProp_MID = { "MID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyFoamHelper_eventSetMaterialParameters_Parms, MID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOceanologyFoamHelper_SetMaterialParameters_Statics::NewProp_Foam = { "Foam", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OceanologyFoamHelper_eventSetMaterialParameters_Parms, Foam), Z_Construct_UScriptStruct_FOceanologyFoam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Foam_MetaData), NewProp_Foam_MetaData) }; // 1484821047
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOceanologyFoamHelper_SetMaterialParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyFoamHelper_SetMaterialParameters_Statics::NewProp_MID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOceanologyFoamHelper_SetMaterialParameters_Statics::NewProp_Foam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyFoamHelper_SetMaterialParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOceanologyFoamHelper_SetMaterialParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOceanologyFoamHelper, nullptr, "SetMaterialParameters", nullptr, nullptr, Z_Construct_UFunction_UOceanologyFoamHelper_SetMaterialParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyFoamHelper_SetMaterialParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOceanologyFoamHelper_SetMaterialParameters_Statics::OceanologyFoamHelper_eventSetMaterialParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOceanologyFoamHelper_SetMaterialParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOceanologyFoamHelper_SetMaterialParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOceanologyFoamHelper_SetMaterialParameters_Statics::OceanologyFoamHelper_eventSetMaterialParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOceanologyFoamHelper_SetMaterialParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOceanologyFoamHelper_SetMaterialParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOceanologyFoamHelper::execSetMaterialParameters)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MID);
	P_GET_STRUCT_REF(FOceanologyFoam,Z_Param_Out_Foam);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOceanologyFoamHelper::SetMaterialParameters(Z_Param_MID,Z_Param_Out_Foam);
	P_NATIVE_END;
}
// End Class UOceanologyFoamHelper Function SetMaterialParameters

// Begin Class UOceanologyFoamHelper
void UOceanologyFoamHelper::StaticRegisterNativesUOceanologyFoamHelper()
{
	UClass* Class = UOceanologyFoamHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LerpFoam", &UOceanologyFoamHelper::execLerpFoam },
		{ "SetMaterialParameters", &UOceanologyFoamHelper::execSetMaterialParameters },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanologyFoamHelper);
UClass* Z_Construct_UClass_UOceanologyFoamHelper_NoRegister()
{
	return UOceanologyFoamHelper::StaticClass();
}
struct Z_Construct_UClass_UOceanologyFoamHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\n * Generated at: 10 March 2024\n **/" },
#endif
		{ "IncludePath", "Structs/OceanologyFoam.h" },
		{ "ModuleRelativePath", "Public/Structs/OceanologyFoam.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an auto-generated class from Material Parameters via AOceanologyMaterialToStructConverter. DO NOT EDIT BY HAND EVER! Your changes will be lost. Edit the material itself instead!\nGenerated at: 10 March 2024" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOceanologyFoamHelper_LerpFoam, "LerpFoam" }, // 1410304297
		{ &Z_Construct_UFunction_UOceanologyFoamHelper_SetMaterialParameters, "SetMaterialParameters" }, // 1064940007
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanologyFoamHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOceanologyFoamHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Oceanology_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyFoamHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanologyFoamHelper_Statics::ClassParams = {
	&UOceanologyFoamHelper::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOceanologyFoamHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UOceanologyFoamHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOceanologyFoamHelper()
{
	if (!Z_Registration_Info_UClass_UOceanologyFoamHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanologyFoamHelper.OuterSingleton, Z_Construct_UClass_UOceanologyFoamHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOceanologyFoamHelper.OuterSingleton;
}
template<> OCEANOLOGY_PLUGIN_API UClass* StaticClass<UOceanologyFoamHelper>()
{
	return UOceanologyFoamHelper::StaticClass();
}
UOceanologyFoamHelper::UOceanologyFoamHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanologyFoamHelper);
UOceanologyFoamHelper::~UOceanologyFoamHelper() {}
// End Class UOceanologyFoamHelper

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyFoam_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOceanologyFoam::StaticStruct, Z_Construct_UScriptStruct_FOceanologyFoam_Statics::NewStructOps, TEXT("OceanologyFoam"), &Z_Registration_Info_UScriptStruct_OceanologyFoam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOceanologyFoam), 1484821047U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOceanologyFoamHelper, UOceanologyFoamHelper::StaticClass, TEXT("UOceanologyFoamHelper"), &Z_Registration_Info_UClass_UOceanologyFoamHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanologyFoamHelper), 3938436668U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyFoam_h_937750352(TEXT("/Script/Oceanology_Plugin"),
	Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyFoam_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyFoam_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyFoam_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_Oceanology_Plugin_Source_Oceanology_Plugin_Public_Structs_OceanologyFoam_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
