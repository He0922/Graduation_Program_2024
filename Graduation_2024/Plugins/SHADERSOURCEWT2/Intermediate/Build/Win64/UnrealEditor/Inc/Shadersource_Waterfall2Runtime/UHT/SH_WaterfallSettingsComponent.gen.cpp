// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shadersource_Waterfall2Runtime/Public/EditorComponents/SH_WaterfallSettingsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSH_WaterfallSettingsComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector2();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
SHADERSOURCE_WATERFALL2RUNTIME_API UClass* Z_Construct_UClass_USH_WaterfallSettingsComponent();
SHADERSOURCE_WATERFALL2RUNTIME_API UClass* Z_Construct_UClass_USH_WaterfallSettingsComponent_NoRegister();
SHADERSOURCE_WATERFALL2RUNTIME_API UEnum* Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_MeshGenerationType();
SHADERSOURCE_WATERFALL2RUNTIME_API UEnum* Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_MeshProjectionType();
SHADERSOURCE_WATERFALL2RUNTIME_API UEnum* Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_W2_Interpolation();
UPackage* Z_Construct_UPackage__Script_Shadersource_Waterfall2Runtime();
// End Cross Module References

// Begin Class USH_WaterfallSettingsComponent Function GetDebugPointsShowOnlyThesePointsX
struct Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetDebugPointsShowOnlyThesePointsX_Statics
{
	struct SH_WaterfallSettingsComponent_eventGetDebugPointsShowOnlyThesePointsX_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetDebugPointsShowOnlyThesePointsX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SH_WaterfallSettingsComponent_eventGetDebugPointsShowOnlyThesePointsX_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetDebugPointsShowOnlyThesePointsX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetDebugPointsShowOnlyThesePointsX_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetDebugPointsShowOnlyThesePointsX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetDebugPointsShowOnlyThesePointsX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USH_WaterfallSettingsComponent, nullptr, "GetDebugPointsShowOnlyThesePointsX", nullptr, nullptr, Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetDebugPointsShowOnlyThesePointsX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetDebugPointsShowOnlyThesePointsX_Statics::PropPointers), sizeof(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetDebugPointsShowOnlyThesePointsX_Statics::SH_WaterfallSettingsComponent_eventGetDebugPointsShowOnlyThesePointsX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetDebugPointsShowOnlyThesePointsX_Statics::Function_MetaDataParams), Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetDebugPointsShowOnlyThesePointsX_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetDebugPointsShowOnlyThesePointsX_Statics::SH_WaterfallSettingsComponent_eventGetDebugPointsShowOnlyThesePointsX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetDebugPointsShowOnlyThesePointsX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetDebugPointsShowOnlyThesePointsX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USH_WaterfallSettingsComponent::execGetDebugPointsShowOnlyThesePointsX)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetDebugPointsShowOnlyThesePointsX();
	P_NATIVE_END;
}
// End Class USH_WaterfallSettingsComponent Function GetDebugPointsShowOnlyThesePointsX

// Begin Class USH_WaterfallSettingsComponent Function GetDebugPointsShowOnlyThesePointsY
struct Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetDebugPointsShowOnlyThesePointsY_Statics
{
	struct SH_WaterfallSettingsComponent_eventGetDebugPointsShowOnlyThesePointsY_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetDebugPointsShowOnlyThesePointsY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SH_WaterfallSettingsComponent_eventGetDebugPointsShowOnlyThesePointsY_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetDebugPointsShowOnlyThesePointsY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetDebugPointsShowOnlyThesePointsY_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetDebugPointsShowOnlyThesePointsY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetDebugPointsShowOnlyThesePointsY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USH_WaterfallSettingsComponent, nullptr, "GetDebugPointsShowOnlyThesePointsY", nullptr, nullptr, Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetDebugPointsShowOnlyThesePointsY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetDebugPointsShowOnlyThesePointsY_Statics::PropPointers), sizeof(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetDebugPointsShowOnlyThesePointsY_Statics::SH_WaterfallSettingsComponent_eventGetDebugPointsShowOnlyThesePointsY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetDebugPointsShowOnlyThesePointsY_Statics::Function_MetaDataParams), Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetDebugPointsShowOnlyThesePointsY_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetDebugPointsShowOnlyThesePointsY_Statics::SH_WaterfallSettingsComponent_eventGetDebugPointsShowOnlyThesePointsY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetDebugPointsShowOnlyThesePointsY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetDebugPointsShowOnlyThesePointsY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USH_WaterfallSettingsComponent::execGetDebugPointsShowOnlyThesePointsY)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetDebugPointsShowOnlyThesePointsY();
	P_NATIVE_END;
}
// End Class USH_WaterfallSettingsComponent Function GetDebugPointsShowOnlyThesePointsY

// Begin Class USH_WaterfallSettingsComponent Function GetPathRangeX
struct Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPathRangeX_Statics
{
	struct SH_WaterfallSettingsComponent_eventGetPathRangeX_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPathRangeX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SH_WaterfallSettingsComponent_eventGetPathRangeX_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPathRangeX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPathRangeX_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPathRangeX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPathRangeX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USH_WaterfallSettingsComponent, nullptr, "GetPathRangeX", nullptr, nullptr, Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPathRangeX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPathRangeX_Statics::PropPointers), sizeof(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPathRangeX_Statics::SH_WaterfallSettingsComponent_eventGetPathRangeX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPathRangeX_Statics::Function_MetaDataParams), Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPathRangeX_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPathRangeX_Statics::SH_WaterfallSettingsComponent_eventGetPathRangeX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPathRangeX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPathRangeX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USH_WaterfallSettingsComponent::execGetPathRangeX)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPathRangeX();
	P_NATIVE_END;
}
// End Class USH_WaterfallSettingsComponent Function GetPathRangeX

// Begin Class USH_WaterfallSettingsComponent Function GetPathRangeY
struct Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPathRangeY_Statics
{
	struct SH_WaterfallSettingsComponent_eventGetPathRangeY_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPathRangeY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SH_WaterfallSettingsComponent_eventGetPathRangeY_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPathRangeY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPathRangeY_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPathRangeY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPathRangeY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USH_WaterfallSettingsComponent, nullptr, "GetPathRangeY", nullptr, nullptr, Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPathRangeY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPathRangeY_Statics::PropPointers), sizeof(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPathRangeY_Statics::SH_WaterfallSettingsComponent_eventGetPathRangeY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPathRangeY_Statics::Function_MetaDataParams), Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPathRangeY_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPathRangeY_Statics::SH_WaterfallSettingsComponent_eventGetPathRangeY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPathRangeY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPathRangeY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USH_WaterfallSettingsComponent::execGetPathRangeY)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPathRangeY();
	P_NATIVE_END;
}
// End Class USH_WaterfallSettingsComponent Function GetPathRangeY

// Begin Class USH_WaterfallSettingsComponent Function GetPointRangeX
struct Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPointRangeX_Statics
{
	struct SH_WaterfallSettingsComponent_eventGetPointRangeX_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPointRangeX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SH_WaterfallSettingsComponent_eventGetPointRangeX_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPointRangeX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPointRangeX_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPointRangeX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPointRangeX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USH_WaterfallSettingsComponent, nullptr, "GetPointRangeX", nullptr, nullptr, Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPointRangeX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPointRangeX_Statics::PropPointers), sizeof(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPointRangeX_Statics::SH_WaterfallSettingsComponent_eventGetPointRangeX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPointRangeX_Statics::Function_MetaDataParams), Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPointRangeX_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPointRangeX_Statics::SH_WaterfallSettingsComponent_eventGetPointRangeX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPointRangeX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPointRangeX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USH_WaterfallSettingsComponent::execGetPointRangeX)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPointRangeX();
	P_NATIVE_END;
}
// End Class USH_WaterfallSettingsComponent Function GetPointRangeX

// Begin Class USH_WaterfallSettingsComponent Function GetPointRangeY
struct Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPointRangeY_Statics
{
	struct SH_WaterfallSettingsComponent_eventGetPointRangeY_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPointRangeY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SH_WaterfallSettingsComponent_eventGetPointRangeY_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPointRangeY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPointRangeY_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPointRangeY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPointRangeY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USH_WaterfallSettingsComponent, nullptr, "GetPointRangeY", nullptr, nullptr, Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPointRangeY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPointRangeY_Statics::PropPointers), sizeof(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPointRangeY_Statics::SH_WaterfallSettingsComponent_eventGetPointRangeY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPointRangeY_Statics::Function_MetaDataParams), Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPointRangeY_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPointRangeY_Statics::SH_WaterfallSettingsComponent_eventGetPointRangeY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPointRangeY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPointRangeY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USH_WaterfallSettingsComponent::execGetPointRangeY)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPointRangeY();
	P_NATIVE_END;
}
// End Class USH_WaterfallSettingsComponent Function GetPointRangeY

// Begin Class USH_WaterfallSettingsComponent Function GetSingularMeshSubdivisionsX
struct Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetSingularMeshSubdivisionsX_Statics
{
	struct SH_WaterfallSettingsComponent_eventGetSingularMeshSubdivisionsX_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetSingularMeshSubdivisionsX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SH_WaterfallSettingsComponent_eventGetSingularMeshSubdivisionsX_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetSingularMeshSubdivisionsX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetSingularMeshSubdivisionsX_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetSingularMeshSubdivisionsX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetSingularMeshSubdivisionsX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USH_WaterfallSettingsComponent, nullptr, "GetSingularMeshSubdivisionsX", nullptr, nullptr, Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetSingularMeshSubdivisionsX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetSingularMeshSubdivisionsX_Statics::PropPointers), sizeof(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetSingularMeshSubdivisionsX_Statics::SH_WaterfallSettingsComponent_eventGetSingularMeshSubdivisionsX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetSingularMeshSubdivisionsX_Statics::Function_MetaDataParams), Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetSingularMeshSubdivisionsX_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetSingularMeshSubdivisionsX_Statics::SH_WaterfallSettingsComponent_eventGetSingularMeshSubdivisionsX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetSingularMeshSubdivisionsX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetSingularMeshSubdivisionsX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USH_WaterfallSettingsComponent::execGetSingularMeshSubdivisionsX)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSingularMeshSubdivisionsX();
	P_NATIVE_END;
}
// End Class USH_WaterfallSettingsComponent Function GetSingularMeshSubdivisionsX

// Begin Class USH_WaterfallSettingsComponent Function GetSingularMeshSubdivisionsY
struct Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetSingularMeshSubdivisionsY_Statics
{
	struct SH_WaterfallSettingsComponent_eventGetSingularMeshSubdivisionsY_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetSingularMeshSubdivisionsY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SH_WaterfallSettingsComponent_eventGetSingularMeshSubdivisionsY_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetSingularMeshSubdivisionsY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetSingularMeshSubdivisionsY_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetSingularMeshSubdivisionsY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetSingularMeshSubdivisionsY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USH_WaterfallSettingsComponent, nullptr, "GetSingularMeshSubdivisionsY", nullptr, nullptr, Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetSingularMeshSubdivisionsY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetSingularMeshSubdivisionsY_Statics::PropPointers), sizeof(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetSingularMeshSubdivisionsY_Statics::SH_WaterfallSettingsComponent_eventGetSingularMeshSubdivisionsY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetSingularMeshSubdivisionsY_Statics::Function_MetaDataParams), Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetSingularMeshSubdivisionsY_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetSingularMeshSubdivisionsY_Statics::SH_WaterfallSettingsComponent_eventGetSingularMeshSubdivisionsY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetSingularMeshSubdivisionsY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetSingularMeshSubdivisionsY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USH_WaterfallSettingsComponent::execGetSingularMeshSubdivisionsY)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSingularMeshSubdivisionsY();
	P_NATIVE_END;
}
// End Class USH_WaterfallSettingsComponent Function GetSingularMeshSubdivisionsY

// Begin Class USH_WaterfallSettingsComponent Function SetDebugPointsShowOnlyThesePoints
struct Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetDebugPointsShowOnlyThesePoints_Statics
{
	struct SH_WaterfallSettingsComponent_eventSetDebugPointsShowOnlyThesePoints_Parms
	{
		int32 X;
		int32 Y;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetDebugPointsShowOnlyThesePoints_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SH_WaterfallSettingsComponent_eventSetDebugPointsShowOnlyThesePoints_Parms, X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetDebugPointsShowOnlyThesePoints_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SH_WaterfallSettingsComponent_eventSetDebugPointsShowOnlyThesePoints_Parms, Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetDebugPointsShowOnlyThesePoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetDebugPointsShowOnlyThesePoints_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetDebugPointsShowOnlyThesePoints_Statics::NewProp_Y,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetDebugPointsShowOnlyThesePoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetDebugPointsShowOnlyThesePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USH_WaterfallSettingsComponent, nullptr, "SetDebugPointsShowOnlyThesePoints", nullptr, nullptr, Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetDebugPointsShowOnlyThesePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetDebugPointsShowOnlyThesePoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetDebugPointsShowOnlyThesePoints_Statics::SH_WaterfallSettingsComponent_eventSetDebugPointsShowOnlyThesePoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetDebugPointsShowOnlyThesePoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetDebugPointsShowOnlyThesePoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetDebugPointsShowOnlyThesePoints_Statics::SH_WaterfallSettingsComponent_eventSetDebugPointsShowOnlyThesePoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetDebugPointsShowOnlyThesePoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetDebugPointsShowOnlyThesePoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USH_WaterfallSettingsComponent::execSetDebugPointsShowOnlyThesePoints)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_X);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Y);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDebugPointsShowOnlyThesePoints(Z_Param_Out_X,Z_Param_Out_Y);
	P_NATIVE_END;
}
// End Class USH_WaterfallSettingsComponent Function SetDebugPointsShowOnlyThesePoints

// Begin Class USH_WaterfallSettingsComponent Function SetPathRange
struct Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetPathRange_Statics
{
	struct SH_WaterfallSettingsComponent_eventSetPathRange_Parms
	{
		int32 X;
		int32 Y;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetPathRange_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SH_WaterfallSettingsComponent_eventSetPathRange_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetPathRange_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SH_WaterfallSettingsComponent_eventSetPathRange_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetPathRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetPathRange_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetPathRange_Statics::NewProp_Y,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetPathRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetPathRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USH_WaterfallSettingsComponent, nullptr, "SetPathRange", nullptr, nullptr, Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetPathRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetPathRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetPathRange_Statics::SH_WaterfallSettingsComponent_eventSetPathRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetPathRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetPathRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetPathRange_Statics::SH_WaterfallSettingsComponent_eventSetPathRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetPathRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetPathRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USH_WaterfallSettingsComponent::execSetPathRange)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPathRange(Z_Param_X,Z_Param_Y);
	P_NATIVE_END;
}
// End Class USH_WaterfallSettingsComponent Function SetPathRange

// Begin Class USH_WaterfallSettingsComponent Function SetPointRange
struct Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetPointRange_Statics
{
	struct SH_WaterfallSettingsComponent_eventSetPointRange_Parms
	{
		int32 X;
		int32 Y;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetPointRange_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SH_WaterfallSettingsComponent_eventSetPointRange_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetPointRange_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SH_WaterfallSettingsComponent_eventSetPointRange_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetPointRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetPointRange_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetPointRange_Statics::NewProp_Y,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetPointRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetPointRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USH_WaterfallSettingsComponent, nullptr, "SetPointRange", nullptr, nullptr, Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetPointRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetPointRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetPointRange_Statics::SH_WaterfallSettingsComponent_eventSetPointRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetPointRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetPointRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetPointRange_Statics::SH_WaterfallSettingsComponent_eventSetPointRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetPointRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetPointRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USH_WaterfallSettingsComponent::execSetPointRange)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPointRange(Z_Param_X,Z_Param_Y);
	P_NATIVE_END;
}
// End Class USH_WaterfallSettingsComponent Function SetPointRange

// Begin Class USH_WaterfallSettingsComponent Function SetSingularMeshSubdivisions
struct Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetSingularMeshSubdivisions_Statics
{
	struct SH_WaterfallSettingsComponent_eventSetSingularMeshSubdivisions_Parms
	{
		int32 X;
		int32 Y;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetSingularMeshSubdivisions_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SH_WaterfallSettingsComponent_eventSetSingularMeshSubdivisions_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetSingularMeshSubdivisions_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SH_WaterfallSettingsComponent_eventSetSingularMeshSubdivisions_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetSingularMeshSubdivisions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetSingularMeshSubdivisions_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetSingularMeshSubdivisions_Statics::NewProp_Y,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetSingularMeshSubdivisions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetSingularMeshSubdivisions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USH_WaterfallSettingsComponent, nullptr, "SetSingularMeshSubdivisions", nullptr, nullptr, Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetSingularMeshSubdivisions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetSingularMeshSubdivisions_Statics::PropPointers), sizeof(Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetSingularMeshSubdivisions_Statics::SH_WaterfallSettingsComponent_eventSetSingularMeshSubdivisions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetSingularMeshSubdivisions_Statics::Function_MetaDataParams), Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetSingularMeshSubdivisions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetSingularMeshSubdivisions_Statics::SH_WaterfallSettingsComponent_eventSetSingularMeshSubdivisions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetSingularMeshSubdivisions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetSingularMeshSubdivisions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USH_WaterfallSettingsComponent::execSetSingularMeshSubdivisions)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSingularMeshSubdivisions(Z_Param_X,Z_Param_Y);
	P_NATIVE_END;
}
// End Class USH_WaterfallSettingsComponent Function SetSingularMeshSubdivisions

// Begin Class USH_WaterfallSettingsComponent
void USH_WaterfallSettingsComponent::StaticRegisterNativesUSH_WaterfallSettingsComponent()
{
	UClass* Class = USH_WaterfallSettingsComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDebugPointsShowOnlyThesePointsX", &USH_WaterfallSettingsComponent::execGetDebugPointsShowOnlyThesePointsX },
		{ "GetDebugPointsShowOnlyThesePointsY", &USH_WaterfallSettingsComponent::execGetDebugPointsShowOnlyThesePointsY },
		{ "GetPathRangeX", &USH_WaterfallSettingsComponent::execGetPathRangeX },
		{ "GetPathRangeY", &USH_WaterfallSettingsComponent::execGetPathRangeY },
		{ "GetPointRangeX", &USH_WaterfallSettingsComponent::execGetPointRangeX },
		{ "GetPointRangeY", &USH_WaterfallSettingsComponent::execGetPointRangeY },
		{ "GetSingularMeshSubdivisionsX", &USH_WaterfallSettingsComponent::execGetSingularMeshSubdivisionsX },
		{ "GetSingularMeshSubdivisionsY", &USH_WaterfallSettingsComponent::execGetSingularMeshSubdivisionsY },
		{ "SetDebugPointsShowOnlyThesePoints", &USH_WaterfallSettingsComponent::execSetDebugPointsShowOnlyThesePoints },
		{ "SetPathRange", &USH_WaterfallSettingsComponent::execSetPathRange },
		{ "SetPointRange", &USH_WaterfallSettingsComponent::execSetPointRange },
		{ "SetSingularMeshSubdivisions", &USH_WaterfallSettingsComponent::execSetSingularMeshSubdivisions },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USH_WaterfallSettingsComponent);
UClass* Z_Construct_UClass_USH_WaterfallSettingsComponent_NoRegister()
{
	return USH_WaterfallSettingsComponent::StaticClass();
}
struct Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoCollapseCategories", "Simulation Speed Direction Physics Avoidance Flow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* A component that contains the Editor Only settings for the Waterfall Ed Mode.\n* None of these settings are needed/available at runtime.\n* It's also not a BlueprintSpawnable Component because it shouldn't be able to be added to Blueprints */" },
#endif
		{ "IncludePath", "EditorComponents/SH_WaterfallSettingsComponent.h" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A component that contains the Editor Only settings for the Waterfall Ed Mode.\n* None of these settings are needed/available at runtime.\n* It's also not a BlueprintSpawnable Component because it shouldn't be able to be added to Blueprints" },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "Random" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Random seed for the generation of the waterfall. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Random seed for the generation of the waterfall." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugPointsDuration_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* How long to show the debug lines/points for. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How long to show the debug lines/points for." },
#endif
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugPointsShowOnlyThesePoints_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Limit the points shown when using the debug buttons. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Limit the points shown when using the debug buttons." },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumPaths_MetaData[] = {
		{ "Category", "InitialSpawn" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The number of paths to generate along the spline. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of paths to generate along the spline." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Substeps_MetaData[] = {
		{ "Category", "Simulation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Number of iterations per frame for the simulation. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of iterations per frame for the simulation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResampleSpline_MetaData[] = {
		{ "Category", "InitialSpawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Set the number of spline points on each waterfall path to a specific number. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the number of spline points on each waterfall path to a specific number." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSplinePoints_MetaData[] = {
		{ "Category", "InitialSpawn" },
		{ "ClampMin", "2" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* If on, after the path is generated, it will resample the path to exactly this many spline points. */" },
#endif
		{ "EditCondition", "bResampleSpline" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If on, after the path is generated, it will resample the path to exactly this many spline points." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulationDeltaTime_MetaData[] = {
		{ "Category", "InitialSpawn" },
		{ "ClampMax", "0.5" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The closer to 0, the more points are going to spawn, the further away from 0, the less points are going to spawn.\n\x09* This is taken into account BEFORE any resampling. */" },
#endif
		{ "DisplayName", "Point Grouping" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The closer to 0, the more points are going to spawn, the further away from 0, the less points are going to spawn.\n      * This is taken into account BEFORE any resampling." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SinglePathPosition_MetaData[] = {
		{ "Category", "InitialSpawn" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* If only one path is required to spawn, this will be the 0-1 offset on the spline */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If only one path is required to spawn, this will be the 0-1 offset on the spline" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathSpawnRange_MetaData[] = {
		{ "Category", "InitialSpawn" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*If more than one path is required to spawn, this will confine the spawning to a range from the end\n\x09* Eg, If the spline distance is 100 and the PathSpawnRange is set to (0.2, 0.8), then the\n\x09* paths will only spawn between distances 20-80 and none will spawn on the distance < 20 or > 80\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If more than one path is required to spawn, this will confine the spawning to a range from the end\n       * Eg, If the spline distance is 100 and the PathSpawnRange is set to (0.2, 0.8), then the\n       * paths will only spawn between distances 20-80 and none will spawn on the distance < 20 or > 80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddSpawnJitter_MetaData[] = {
		{ "Category", "InitialSpawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Whether to add directional jitter to the start of the waterfall paths or not. */" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to add directional jitter to the start of the waterfall paths or not." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnJitterRange_MetaData[] = {
		{ "Category", "InitialSpawn" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Affects the initial direction of the path by adding a randomised jitter to the yaw in this range. */" },
#endif
		{ "EditCondition", "bAddSpawnJitter" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Affects the initial direction of the path by adding a randomised jitter to the yaw in this range." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTraceDistance_MetaData[] = {
		{ "Category", "InitialSpawn" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTraceOffset_MetaData[] = {
		{ "Category", "InitialSpawn" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTraceAlpha_MetaData[] = {
		{ "Category", "InitialSpawn" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulationTraceChannel_MetaData[] = {
		{ "Category", "Simulation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Which channel should the simulation run traces on (1 is visibility). */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Which channel should the simulation run traces on (1 is visibility)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalKillActors_MetaData[] = {
		{ "Category", "Kill" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Additional actors that terminate path simulations other than the kill plane. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional actors that terminate path simulations other than the kill plane." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KillPlaneScaleOffset_MetaData[] = {
		{ "Category", "Kill" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Additional scale offset for the kill plane. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional scale offset for the kill plane." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Speed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Simulation speed of the particle for the path generation. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simulation speed of the particle for the path generation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Speed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Maximum simulation speed of the particle for the path generation. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum simulation speed of the particle for the path generation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedRandom_MetaData[] = {
		{ "Category", "Speed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Additional random speed of the particle for the path generation. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional random speed of the particle for the path generation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KillSpeed_MetaData[] = {
		{ "Category", "Speed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* If the particle moves slower than this speed in the simulation,\n\x09* the path will terminate even if it's not touching a kill actor/kill plane. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the particle moves slower than this speed in the simulation,\n      * the path will terminate even if it's not touching a kill actor/kill plane." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlipSplineDirection_MetaData[] = {
		{ "Category", "Direction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Changes the velocity to work in the opposite direction on the spline. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Changes the velocity to work in the opposite direction on the spline." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[] = {
		{ "Category", "Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Particle simulation gravity. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Particle simulation gravity." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Drag_MetaData[] = {
		{ "Category", "Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Particle simulation drag. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Particle simulation drag." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Friction_MetaData[] = {
		{ "Category", "Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Particle simulation friction. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Particle simulation friction." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bounce_MetaData[] = {
		{ "Category", "Physics" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Particle simulation bounce. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Particle simulation bounce." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lifetime_MetaData[] = {
		{ "Category", "Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Particle simulation lifetime. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Particle simulation lifetime." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleAvoidanceWeight_MetaData[] = {
		{ "Category", "Avoidance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Particle simulation obstacle avoidance. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Particle simulation obstacle avoidance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleAvoidanceDistance_MetaData[] = {
		{ "Category", "Avoidance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Particle simulation avoidance distance. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Particle simulation avoidance distance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleAvoidanceFalloff_MetaData[] = {
		{ "Category", "Avoidance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Particle simulation avoidance falloff. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Particle simulation avoidance falloff." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleRepulsionWeight_MetaData[] = {
		{ "Category", "Avoidance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Particle simulation obstacle repulsion. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Particle simulation obstacle repulsion." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleRepulsionDistance_MetaData[] = {
		{ "Category", "Avoidance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Particle simulation obstacle repulsion distance. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Particle simulation obstacle repulsion distance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleRepulsionFalloff_MetaData[] = {
		{ "Category", "Avoidance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Particle simulation obstacle repulsion falloff. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Particle simulation obstacle repulsion falloff." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreActorsForAvoidance_MetaData[] = {
		{ "Category", "Simulation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Actors to ignore for collision detection and physics. */" },
#endif
		{ "DisplayName", "Ignore Actors" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actors to ignore for collision detection and physics." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlowRepulsionWeight_MetaData[] = {
		{ "Category", "Flow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Particle simulation flow repulsion (how much each path pushes the paths around it away from it). */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Particle simulation flow repulsion (how much each path pushes the paths around it away from it)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlowRepulsionDistance_MetaData[] = {
		{ "Category", "Flow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Particle simulation flow repulsion distance. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Particle simulation flow repulsion distance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlowRepulsionFalloff_MetaData[] = {
		{ "Category", "Flow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Particle simulation flow repulsion falloff. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Particle simulation flow repulsion falloff." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlowAlignmentWeight_MetaData[] = {
		{ "Category", "Flow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Particle simulation flow alignment (how much each path attracts the paths around it towards it). */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Particle simulation flow alignment (how much each path attracts the paths around it towards it)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlowAlignmentDistance_MetaData[] = {
		{ "Category", "Flow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Particle simulation flow alignment distance. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Particle simulation flow alignment distance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlowAlignmentFalloff_MetaData[] = {
		{ "Category", "Flow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Particle simulation flow alignment falloff. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Particle simulation flow alignment falloff." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedMesh_MetaData[] = {
		{ "Category", "MeshSelection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The mesh to generate/modify. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The mesh to generate/modify." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateMeshForPathsInRange_MetaData[] = {
		{ "Category", "GenerationSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Limit the mesh generation to specific paths only. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Limit the mesh generation to specific paths only." },
#endif
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathRange_MetaData[] = {
		{ "Category", "GenerationSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Limit the mesh generation to specific paths only. */" },
#endif
		{ "EditCondition", "bGenerateMeshForPathsInRange" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Limit the mesh generation to specific paths only." },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceIncludeHits_MetaData[] = {
		{ "Category", "GenerationSettings" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceIncludeHitsTheshold_MetaData[] = {
		{ "Category", "GenerationSettings" },
		{ "EditCondition", "bForceIncludeHits" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachingSubsteps_MetaData[] = {
		{ "Category", "GenerationSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Maximum number of caching operations on a path per tick to spread the work out across multiple ticks. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of caching operations on a path per tick to spread the work out across multiple ticks." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SegmentLength_MetaData[] = {
		{ "Category", "MeshSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* How long each segment on the path should be. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How long each segment on the path should be." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSegments_MetaData[] = {
		{ "Category", "MeshSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The maximum number of segments each path should have. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum number of segments each path should have." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplePath_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Limit the spline sample between distance 0:1. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Limit the spline sample between distance 0:1." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingIterations_MetaData[] = {
		{ "Category", "Positions" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Number of times the post-processing smoothing will be applied to cached waterfall positions\n" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of times the post-processing smoothing will be applied to cached waterfall positions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionSmoothingPerAxis_MetaData[] = {
		{ "Category", "Positions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//How much smoothing to apply in each iteration\n" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much smoothing to apply in each iteration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshTraceAlpha_MetaData[] = {
		{ "Category", "Positions|MeshTrace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* 0:1 for how much the mesh should be projected. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "0:1 for how much the mesh should be projected." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshTraceDistance_MetaData[] = {
		{ "Category", "Positions|MeshTrace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Maximum distance for a vertex to trace for nearby obstacle checks. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum distance for a vertex to trace for nearby obstacle checks." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshTraceOffset_MetaData[] = {
		{ "Category", "Positions|MeshTrace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* How far a vertex is offset from a surface if the trace returns true (uses hit normal). */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How far a vertex is offset from a surface if the trace returns true (uses hit normal)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMeshTraceProjection_MetaData[] = {
		{ "Category", "Positions|MeshTrace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Whether the vertices should be placed at the end of the obstacle traces regardless of whether it hit ot not. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the vertices should be placed at the end of the obstacle traces regardless of whether it hit ot not." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshTraceMode_MetaData[] = {
		{ "Category", "Positions|MeshTrace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* No Description */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "No Description" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoComputeNormals_MetaData[] = {
		{ "Category", "Normals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*The geometry scripting can auto compute the normals, discarding all the normals that were computed manually.\n\x09Note: normals will still be calculated for tangent and position calculations, they'll just be discarded at the very end when the actual mesh is generated.*/" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The geometry scripting can auto compute the normals, discarding all the normals that were computed manually.\n       Note: normals will still be calculated for tangent and position calculations, they'll just be discarded at the very end when the actual mesh is generated." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlipNormals_MetaData[] = {
		{ "Category", "Normals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Whether to flip the normals on the generated dynamic meshes. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to flip the normals on the generated dynamic meshes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshNormalOffset_MetaData[] = {
		{ "Category", "Normals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Offset to add to the generated dynamic mesh normals. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset to add to the generated dynamic mesh normals." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshNormalOffsetCurve_MetaData[] = {
		{ "Category", "Normals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Offset to add to the generated dynamic mesh normals. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset to add to the generated dynamic mesh normals." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothNormalsIteration_MetaData[] = {
		{ "Category", "Normals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* How many smoothing iterations should be performed on the dynamic mesh normals. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many smoothing iterations should be performed on the dynamic mesh normals." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothNormalsAlpha_MetaData[] = {
		{ "Category", "Normals" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Percentage of smoothed normals to apply to the normals of the dynamic meshes. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Percentage of smoothed normals to apply to the normals of the dynamic meshes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CylinderNormal_MetaData[] = {
		{ "Category", "Normals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Treat the normals in a curve like a cylinder. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Treat the normals in a curve like a cylinder." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CylinderNormalCurve_MetaData[] = {
		{ "Category", "Normals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Treat the normals in a curve like a cylinder. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Treat the normals in a curve like a cylinder." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideNormal_MetaData[] = {
		{ "Category", "Normals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The alpha for how much the Override Normal Direction should be applied. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The alpha for how much the Override Normal Direction should be applied." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideNormalDirection_MetaData[] = {
		{ "Category", "Normals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The direction of the overwritten normals. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The direction of the overwritten normals." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceWaterNormalDistZ_MetaData[] = {
		{ "Category", "Normals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The alpha of how much to force the normals towards (0, 0, 1). */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The alpha of how much to force the normals towards (0, 0, 1)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothTangentsIteration_MetaData[] = {
		{ "Category", "Tangents" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* How many smoothing iterations should be performed on the dynamic mesh tangents. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many smoothing iterations should be performed on the dynamic mesh tangents." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothTangentsAlpha_MetaData[] = {
		{ "Category", "Tangents" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Percentage of smoothed tangents to apply to the tangents of the dynamic meshes. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Percentage of smoothed tangents to apply to the tangents of the dynamic meshes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseUVsScale_MetaData[] = {
		{ "Category", "UVs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The scale of the UVs of the generated dynamic meshes. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The scale of the UVs of the generated dynamic meshes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTurbulenceIncludesSplash_MetaData[] = {
		{ "Category", "Turbulence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Include the kill (splash) impact in the turbulance calculation for the last points in the paths. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Include the kill (splash) impact in the turbulance calculation for the last points in the paths." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurbulenceRange_MetaData[] = {
		{ "Category", "Turbulence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Remaps the hit force to a 0:1 range in order to then convert it to turbulence. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remaps the hit force to a 0:1 range in order to then convert it to turbulence." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurbulenceObstacleWeight_MetaData[] = {
		{ "Category", "Turbulence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* How much obstacle collision calculations affect turbulence. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much obstacle collision calculations affect turbulence." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurbulenceFlowWeight_MetaData[] = {
		{ "Category", "Turbulence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* How much flow calculations  affect turbulence. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much flow calculations  affect turbulence." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurbulenceSpreadUpStream_MetaData[] = {
		{ "Category", "Turbulence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* How far turbulence is added upstream. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How far turbulence is added upstream." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurbulenceSpreadDownStream_MetaData[] = {
		{ "Category", "Turbulence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* How far turbulence is added downstream. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How far turbulence is added downstream." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurbulenceFalloff_MetaData[] = {
		{ "Category", "Turbulence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* How fast turbulence increases when added upstream/downstream. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How fast turbulence increases when added upstream/downstream." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateMaterialsInBakedMeshToo_MetaData[] = {
		{ "Category", "Materials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*If the static mesh has been baked and set, update the material for the slot too\n\x09Note: This will ignore any combined slots\n\x09Note: This only sets them in the level, not in the Static Mesh asset*/" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the static mesh has been baked and set, update the material for the slot too\n       Note: This will ignore any combined slots\n       Note: This only sets them in the level, not in the Static Mesh asset" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SingularMeshMaterial_MetaData[] = {
		{ "Category", "Materials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The material for the generated singular mesh. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The material for the generated singular mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSortPoints_MetaData[] = {
		{ "Category", "SingularMeshSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Whether to try sorting points in the singular mesh so that overlapping paths don't generate weird geo.\n\x09Note: This feature is not perfect yet and doesn't always work in 100% of test cases.*/" },
#endif
		{ "DisplayName", "EXPERIMENTAL: Sort Points" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to try sorting points in the singular mesh so that overlapping paths don't generate weird geo.\n      Note: This feature is not perfect yet and doesn't always work in 100% of test cases." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSingularMeshSubdivide_MetaData[] = {
		{ "Category", "SingularMeshSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Whether to subdivide the singular mesh or just use the path data for vertex generation. */" },
#endif
		{ "DisplayName", "Subdivide" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to subdivide the singular mesh or just use the path data for vertex generation." },
#endif
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SingularMeshSubdivisions_MetaData[] = {
		{ "Category", "SingularMeshSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The number of subdivisions applied to the singular mesh for vertex generation. */" },
#endif
		{ "DisplayName", "Subdivisions" },
		{ "EditCondition", "bSingularMeshSubdivide" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of subdivisions applied to the singular mesh for vertex generation." },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SingularMeshSubdivisionSplineInterpolation_MetaData[] = {
		{ "Category", "SingularMeshSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* How points are interpolated between two paths. */" },
#endif
		{ "DisplayName", "Subdivision Spline Interpolation" },
		{ "EditCondition", "bSingularMeshSubdivide" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How points are interpolated between two paths." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SingularMeshAdditionalGeo_MetaData[] = {
		{ "Category", "SingularMeshSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Applies additional geometry to each side of the waterfall past the start and end of the Top Spline. */" },
#endif
		{ "DisplayName", "Additional Geo" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies additional geometry to each side of the waterfall past the start and end of the Top Spline." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SingularMeshAdditionalGeoCurve_MetaData[] = {
		{ "Category", "SingularMeshSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Applies additional geometry to each side of the waterfall past the start and end of the Top Spline. */" },
#endif
		{ "DisplayName", "Additional Geo Curve" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies additional geometry to each side of the waterfall past the start and end of the Top Spline." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SingularMeshAdditionalGeoSpreadCurve_MetaData[] = {
		{ "Category", "SingularMeshSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Applies additional geometry to each side of the waterfall past the start and end of the Top Spline. */" },
#endif
		{ "DisplayName", "Additional Geo Spread Curve" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies additional geometry to each side of the waterfall past the start and end of the Top Spline." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerPathMeshMaterial_MetaData[] = {
		{ "Category", "Materials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The material to apply to the PerPath meshes. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The material to apply to the PerPath meshes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerPathWidthCurve_MetaData[] = {
		{ "Category", "PerPathSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Width of an individual path's mesh. */" },
#endif
		{ "DisplayName", "Width Curve" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Width of an individual path's mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerPathWidth_MetaData[] = {
		{ "Category", "PerPathSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Width of an individual path's mesh. */" },
#endif
		{ "DisplayName", "Width" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Width of an individual path's mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerPathSubdivisions_MetaData[] = {
		{ "Category", "PerPathSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The subdivisions to use for the individual path meshes. */" },
#endif
		{ "DisplayName", "Subdivisions" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The subdivisions to use for the individual path meshes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerPathSplineRoll_MetaData[] = {
		{ "Category", "PerPathSettings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* How much the first two vertices can roll to match the Top Spline's slope (otherwise flattened in the Z-axis). */" },
#endif
		{ "DisplayName", "Spline Roll" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much the first two vertices can roll to match the Top Spline's slope (otherwise flattened in the Z-axis)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerPathBulge_MetaData[] = {
		{ "Category", "Bulge" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Additional bulge to add to the dynamic mesh.\n\x09* Bulge is used for Per Path, Plane, and Splash Meshes */" },
#endif
		{ "DisplayName", "Bulge" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional bulge to add to the dynamic mesh.\n      * Bulge is used for Per Path, Plane, and Splash Meshes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerPathBulgeCurve_MetaData[] = {
		{ "Category", "Bulge" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Additional bulge to add to the dynamic mesh. */" },
#endif
		{ "DisplayName", "Bulge Curve" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional bulge to add to the dynamic mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerPathBulgeProfileCurve_MetaData[] = {
		{ "Category", "Bulge" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Additional bulge to add to the dynamic mesh. */" },
#endif
		{ "DisplayName", "Bulge Profile Curve" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional bulge to add to the dynamic mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPerPathFlattenFirstRowBulge_MetaData[] = {
		{ "Category", "Bulge" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* If Bulge Curve == nullptr, whether to apply the bulge to the first row of vertices or to flatten them to conform with the top spline */" },
#endif
		{ "DisplayName", "Flatten First Row Bulge" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If Bulge Curve == nullptr, whether to apply the bulge to the first row of vertices or to flatten them to conform with the top spline" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrossMeshMaterial_MetaData[] = {
		{ "Category", "Materials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The material for the Plane meshes. */" },
#endif
		{ "DisplayName", "Plane Mesh Material" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The material for the Plane meshes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrossPlaneWidthCurve_MetaData[] = {
		{ "Category", "PlaneMeshSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Width of an individual path's mesh. */" },
#endif
		{ "DisplayName", "Width Curve" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Width of an individual path's mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrossPlaneWidth_MetaData[] = {
		{ "Category", "PlaneMeshSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Width of an individual path's mesh. */" },
#endif
		{ "DisplayName", "Width" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Width of an individual path's mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrossPlaneSubdivisions_MetaData[] = {
		{ "Category", "PlaneMeshSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The subdivisions to use for the individual path meshes. */" },
#endif
		{ "DisplayName", "Subdivisions" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The subdivisions to use for the individual path meshes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrossPlaneOffsetCurve_MetaData[] = {
		{ "Category", "PlaneMeshSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* -1:1 Offset applied to the vertices along the path's normal. */" },
#endif
		{ "DisplayName", "Offset Curve" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-1:1 Offset applied to the vertices along the path's normal." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrossPlaneOffset_MetaData[] = {
		{ "Category", "PlaneMeshSettings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "-1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* -1:1 Offset applied to the vertices along the path's normal. */" },
#endif
		{ "DisplayName", "Offset" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-1:1 Offset applied to the vertices along the path's normal." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrossPlaneSplineRoll_MetaData[] = {
		{ "Category", "PlaneMeshSettings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* How much the first two vertices can roll to match the Top Spline's slope (otherwise flattened in the Z-axis). */" },
#endif
		{ "DisplayName", "Spline Roll" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much the first two vertices can roll to match the Top Spline's slope (otherwise flattened in the Z-axis)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrossPlaneAlignNormal_MetaData[] = {
		{ "Category", "PlaneMeshSettings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Forces the Cross mesh's normals to point towards the path's normal (overrides both OverrideNormal and CylinderNormal). */" },
#endif
		{ "DisplayName", "Align Normal" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Forces the Cross mesh's normals to point towards the path's normal (overrides both OverrideNormal and CylinderNormal)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplashMeshMaterial_MetaData[] = {
		{ "Category", "Materials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The material used for the generated Splash meshes. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The material used for the generated Splash meshes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplashMeshOverrideSubdivisions_MetaData[] = {
		{ "Category", "SplashMeshSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The subdivisions to use for the individual splash meshes. */" },
#endif
		{ "DisplayName", "Subdivisions" },
		{ "EditCondition", "bSplashOverrideSubdivisions" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The subdivisions to use for the individual splash meshes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplashFrontRadius_MetaData[] = {
		{ "Category", "SplashMeshSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The radius of the front part of the generated splash mesh. */" },
#endif
		{ "DisplayName", "Front Radius" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The radius of the front part of the generated splash mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplashBackRadius_MetaData[] = {
		{ "Category", "SplashMeshSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The radius of the back part of the generated splash mesh. */" },
#endif
		{ "DisplayName", "Back Radius" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The radius of the back part of the generated splash mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplashRadiusSubdivisions_MetaData[] = {
		{ "Category", "SplashMeshSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The subdivisions to use for the generated splash path (circumferance). */" },
#endif
		{ "DisplayName", "Radius Subdivision" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The subdivisions to use for the generated splash path (circumferance)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplashScale_MetaData[] = {
		{ "Category", "SplashMeshSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Simple scale of the generated splash meshes. */" },
#endif
		{ "DisplayName", "Scale" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple scale of the generated splash meshes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplashSegments_MetaData[] = {
		{ "Category", "SplashMeshSettings" },
		{ "ClampMin", "-1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* How many segments to make between the last point of the path and the outer circumference of the splash mesh. */" },
#endif
		{ "DisplayName", "Segments" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many segments to make between the last point of the path and the outer circumference of the splash mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplashDistanceFalloff_MetaData[] = {
		{ "Category", "SplashMeshSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Distribution of vertices along the distance. */" },
#endif
		{ "DisplayName", "Distance Falloff" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distribution of vertices along the distance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplashUVFalloff_MetaData[] = {
		{ "Category", "SplashMeshSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* How UV0 is distributed between the path point and the circumference. */" },
#endif
		{ "DisplayName", "UV Falloff" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How UV0 is distributed between the path point and the circumference." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimpleGenerateSingleMesh_MetaData[] = {
		{ "Category", "MeshGenerationSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Should the Single mesh be generated? */" },
#endif
		{ "DisplayName", "Single" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should the Single mesh be generated?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimpleGeneratePerPathMesh_MetaData[] = {
		{ "Category", "MeshGenerationSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Should the Per Path meshes be generated? */" },
#endif
		{ "DisplayName", "Paths" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should the Per Path meshes be generated?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimpleGenerateSplashMesh_MetaData[] = {
		{ "Category", "MeshGenerationSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Should the Splash mesh be generated? */" },
#endif
		{ "DisplayName", "Splash" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should the Splash mesh be generated?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimpleGeneratePlaneMesh_MetaData[] = {
		{ "Category", "MeshGenerationSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Should the Plane meshes be generated? */" },
#endif
		{ "DisplayName", "Planes" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should the Plane meshes be generated?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTopVFX_MetaData[] = {
		{ "Category", "Top VFX Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Should the Top VFX be generated? */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should the Top VFX be generated?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopVfxSystem_MetaData[] = {
		{ "Category", "Top VFX Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The Niagara System to use for the Top VFX */" },
#endif
		{ "DisplayName", "Top VFX System" },
		{ "EditCondition", "bTopVFX" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Niagara System to use for the Top VFX" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBottomVFX_MetaData[] = {
		{ "Category", "Bottom VFX Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Should the Bottom VFX be generated? */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should the Bottom VFX be generated?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BottomVfxSystem_MetaData[] = {
		{ "Category", "Bottom VFX Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The Niagara System to use for the Bottom VFX */" },
#endif
		{ "DisplayName", "Bottom VFX System" },
		{ "EditCondition", "bBottomVFX" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Niagara System to use for the Bottom VFX" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMiddleVFX_MetaData[] = {
		{ "Category", "Middle VFX Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Should the Middle VFX be generated? */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should the Middle VFX be generated?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MiddleVfxSystem_MetaData[] = {
		{ "Category", "Middle VFX Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The Niagara System to use for the Middle VFX */" },
#endif
		{ "DisplayName", "Middle VFX System" },
		{ "EditCondition", "bMiddleVFX" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Niagara System to use for the Middle VFX" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMiddleUsesDistance_MetaData[] = {
		{ "Category", "Middle VFX Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Whether the Middle VFX uses a Z-Distance to calculate where the VFX points on the waterfall are, or whether it uses spline points. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the Middle VFX uses a Z-Distance to calculate where the VFX points on the waterfall are, or whether it uses spline points." },
#endif
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointRange_MetaData[] = {
		{ "Category", "Middle VFX Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The spline point range for all paths on the waterfall to use for the Middle VFX points. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The spline point range for all paths on the waterfall to use for the Middle VFX points." },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowArrowComponents_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponentLength_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceRange_MetaData[] = {
		{ "Category", "Middle VFX Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The world-space z-translation range to add the Middle FX from highest z-point to lowest z-point.\n\x09* Eg, if DistanceRange is 0.3 to 0.8, and the highest point is 100, the lowest 0, then it will find where each path crosses 30 and 80 in world space z\n\x09* and use this as the range to generate the points for the Middle VFX. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The world-space z-translation range to add the Middle FX from highest z-point to lowest z-point.\n      * Eg, if DistanceRange is 0.3 to 0.8, and the highest point is 100, the lowest 0, then it will find where each path crosses 30 and 80 in world space z\n      * and use this as the range to generate the points for the Middle VFX." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemapPoints_MetaData[] = {
		{ "Category", "Middle VFX Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The number of points to map on each path between DistanceRange (inclusive).\n\x09* This defaults to 2 if the number is < 2.\n\x09* Eg, if RemapPoints is 5, Point[0] will be DistanceRange.Max and Point[4] will be DistanceRange.Min,\n\x09* with the other three points distributed evenly along the spline path. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of points to map on each path between DistanceRange (inclusive).\n      * This defaults to 2 if the number is < 2.\n      * Eg, if RemapPoints is 5, Point[0] will be DistanceRange.Max and Point[4] will be DistanceRange.Min,\n      * with the other three points distributed evenly along the spline path." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FxPathSelected_MetaData[] = {
		{ "Category", "FX (Individual Points)" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Which path is currently selected for FX editing. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Which path is currently selected for FX editing." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCombineSameMaterials_MetaData[] = {
		{ "Category", "BakeSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Whether to combine the same materials into one material slot or keep them separate per original mesh\n" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to combine the same materials into one material slot or keep them separate per original mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastBakePath_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The last path targeted in the Content Browser for Static Mesh generation. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallSettingsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The last path targeted in the Content Browser for Static Mesh generation." },
#endif
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugPointsDuration;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugPointsShowOnlyThesePoints;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumPaths;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Substeps;
	static void NewProp_bResampleSpline_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResampleSpline;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSplinePoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SimulationDeltaTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SinglePathPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathSpawnRange;
	static void NewProp_bAddSpawnJitter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddSpawnJitter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnJitterRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnTraceDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnTraceOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnTraceAlpha;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SimulationTraceChannel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AdditionalKillActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalKillActors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KillPlaneScaleOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedRandom;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KillSpeed;
	static void NewProp_bFlipSplineDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipSplineDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Gravity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Drag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Friction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Bounce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Lifetime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstacleAvoidanceWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstacleAvoidanceDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstacleAvoidanceFalloff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstacleRepulsionWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstacleRepulsionDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstacleRepulsionFalloff;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IgnoreActorsForAvoidance_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IgnoreActorsForAvoidance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlowRepulsionWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlowRepulsionDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlowRepulsionFalloff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlowAlignmentWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlowAlignmentDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlowAlignmentFalloff;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectedMesh_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectedMesh;
	static void NewProp_bGenerateMeshForPathsInRange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateMeshForPathsInRange;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathRange;
#if WITH_EDITORONLY_DATA
	static void NewProp_bForceIncludeHits_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceIncludeHits;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForceIncludeHitsTheshold;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CachingSubsteps;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SegmentLength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSegments;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SamplePath;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SmoothingIterations;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositionSmoothingPerAxis;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshTraceAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MeshTraceDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MeshTraceOffset;
	static void NewProp_bMeshTraceProjection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMeshTraceProjection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MeshTraceMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MeshTraceMode;
	static void NewProp_bAutoComputeNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoComputeNormals;
	static void NewProp_bFlipNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipNormals;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MeshNormalOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshNormalOffsetCurve;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SmoothNormalsIteration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothNormalsAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CylinderNormal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CylinderNormalCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverrideNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideNormalDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForceWaterNormalDistZ;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SmoothTangentsIteration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothTangentsAlpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseUVsScale;
	static void NewProp_bTurbulenceIncludesSplash_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTurbulenceIncludesSplash;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurbulenceRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurbulenceObstacleWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurbulenceFlowWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurbulenceSpreadUpStream;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurbulenceSpreadDownStream;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurbulenceFalloff;
	static void NewProp_bUpdateMaterialsInBakedMeshToo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateMaterialsInBakedMeshToo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SingularMeshMaterial;
	static void NewProp_bSortPoints_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSortPoints;
	static void NewProp_bSingularMeshSubdivide_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSingularMeshSubdivide;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SingularMeshSubdivisions;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SingularMeshSubdivisionSplineInterpolation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SingularMeshSubdivisionSplineInterpolation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SingularMeshAdditionalGeo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SingularMeshAdditionalGeoCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SingularMeshAdditionalGeoSpreadCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PerPathMeshMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PerPathWidthCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PerPathWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PerPathSubdivisions;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PerPathSplineRoll;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PerPathBulge;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PerPathBulgeCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PerPathBulgeProfileCurve;
	static void NewProp_bPerPathFlattenFirstRowBulge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPerPathFlattenFirstRowBulge;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrossMeshMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrossPlaneWidthCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrossPlaneWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CrossPlaneSubdivisions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrossPlaneOffsetCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrossPlaneOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrossPlaneSplineRoll;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrossPlaneAlignNormal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplashMeshMaterial;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SplashMeshOverrideSubdivisions;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SplashFrontRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SplashBackRadius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SplashRadiusSubdivisions;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SplashScale;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SplashSegments;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SplashDistanceFalloff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SplashUVFalloff;
	static void NewProp_SimpleGenerateSingleMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SimpleGenerateSingleMesh;
	static void NewProp_SimpleGeneratePerPathMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SimpleGeneratePerPathMesh;
	static void NewProp_SimpleGenerateSplashMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SimpleGenerateSplashMesh;
	static void NewProp_SimpleGeneratePlaneMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SimpleGeneratePlaneMesh;
	static void NewProp_bTopVFX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTopVFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TopVfxSystem;
	static void NewProp_bBottomVFX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBottomVFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BottomVfxSystem;
	static void NewProp_bMiddleVFX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMiddleVFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MiddleVfxSystem;
	static void NewProp_bMiddleUsesDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMiddleUsesDistance;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointRange;
#if WITH_EDITORONLY_DATA
	static void NewProp_bShowArrowComponents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowArrowComponents;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArrowComponentLength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistanceRange;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemapPoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FxPathSelected;
	static void NewProp_bCombineSameMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCombineSameMaterials;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LastBakePath;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetDebugPointsShowOnlyThesePointsX, "GetDebugPointsShowOnlyThesePointsX" }, // 3791818482
		{ &Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetDebugPointsShowOnlyThesePointsY, "GetDebugPointsShowOnlyThesePointsY" }, // 67240193
		{ &Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPathRangeX, "GetPathRangeX" }, // 2105968435
		{ &Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPathRangeY, "GetPathRangeY" }, // 750792779
		{ &Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPointRangeX, "GetPointRangeX" }, // 1282055503
		{ &Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetPointRangeY, "GetPointRangeY" }, // 179429954
		{ &Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetSingularMeshSubdivisionsX, "GetSingularMeshSubdivisionsX" }, // 1121470451
		{ &Z_Construct_UFunction_USH_WaterfallSettingsComponent_GetSingularMeshSubdivisionsY, "GetSingularMeshSubdivisionsY" }, // 2523015571
		{ &Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetDebugPointsShowOnlyThesePoints, "SetDebugPointsShowOnlyThesePoints" }, // 413667570
		{ &Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetPathRange, "SetPathRange" }, // 4029115244
		{ &Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetPointRange, "SetPointRange" }, // 3344054312
		{ &Z_Construct_UFunction_USH_WaterfallSettingsComponent_SetSingularMeshSubdivisions, "SetSingularMeshSubdivisions" }, // 3943315831
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USH_WaterfallSettingsComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_DebugPointsDuration = { "DebugPointsDuration", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, DebugPointsDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugPointsDuration_MetaData), NewProp_DebugPointsDuration_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_DebugPointsShowOnlyThesePoints = { "DebugPointsShowOnlyThesePoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, DebugPointsShowOnlyThesePoints), Z_Construct_UScriptStruct_FIntVector2, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugPointsShowOnlyThesePoints_MetaData), NewProp_DebugPointsShowOnlyThesePoints_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_NumPaths = { "NumPaths", nullptr, (EPropertyFlags)0x0020080800000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, NumPaths), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumPaths_MetaData), NewProp_NumPaths_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_Substeps = { "Substeps", nullptr, (EPropertyFlags)0x0020080800000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, Substeps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Substeps_MetaData), NewProp_Substeps_MetaData) };
void Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bResampleSpline_SetBit(void* Obj)
{
	((USH_WaterfallSettingsComponent*)Obj)->bResampleSpline = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bResampleSpline = { "bResampleSpline", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USH_WaterfallSettingsComponent), &Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bResampleSpline_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResampleSpline_MetaData), NewProp_bResampleSpline_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_NumSplinePoints = { "NumSplinePoints", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, NumSplinePoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSplinePoints_MetaData), NewProp_NumSplinePoints_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SimulationDeltaTime = { "SimulationDeltaTime", nullptr, (EPropertyFlags)0x00200c0800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, SimulationDeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulationDeltaTime_MetaData), NewProp_SimulationDeltaTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SinglePathPosition = { "SinglePathPosition", nullptr, (EPropertyFlags)0x0020080800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, SinglePathPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SinglePathPosition_MetaData), NewProp_SinglePathPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_PathSpawnRange = { "PathSpawnRange", nullptr, (EPropertyFlags)0x0020080800000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, PathSpawnRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathSpawnRange_MetaData), NewProp_PathSpawnRange_MetaData) };
void Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bAddSpawnJitter_SetBit(void* Obj)
{
	((USH_WaterfallSettingsComponent*)Obj)->bAddSpawnJitter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bAddSpawnJitter = { "bAddSpawnJitter", nullptr, (EPropertyFlags)0x0020080800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USH_WaterfallSettingsComponent), &Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bAddSpawnJitter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddSpawnJitter_MetaData), NewProp_bAddSpawnJitter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SpawnJitterRange = { "SpawnJitterRange", nullptr, (EPropertyFlags)0x0020080800000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, SpawnJitterRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnJitterRange_MetaData), NewProp_SpawnJitterRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SpawnTraceDistance = { "SpawnTraceDistance", nullptr, (EPropertyFlags)0x00200c0800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, SpawnTraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTraceDistance_MetaData), NewProp_SpawnTraceDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SpawnTraceOffset = { "SpawnTraceOffset", nullptr, (EPropertyFlags)0x00200c0800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, SpawnTraceOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTraceOffset_MetaData), NewProp_SpawnTraceOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SpawnTraceAlpha = { "SpawnTraceAlpha", nullptr, (EPropertyFlags)0x00200c0800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, SpawnTraceAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTraceAlpha_MetaData), NewProp_SpawnTraceAlpha_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SimulationTraceChannel = { "SimulationTraceChannel", nullptr, (EPropertyFlags)0x0020080800000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, SimulationTraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulationTraceChannel_MetaData), NewProp_SimulationTraceChannel_MetaData) }; // 1673313466
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_AdditionalKillActors_Inner = { "AdditionalKillActors", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_AdditionalKillActors = { "AdditionalKillActors", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, AdditionalKillActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalKillActors_MetaData), NewProp_AdditionalKillActors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_KillPlaneScaleOffset = { "KillPlaneScaleOffset", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, KillPlaneScaleOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KillPlaneScaleOffset_MetaData), NewProp_KillPlaneScaleOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, MaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeed_MetaData), NewProp_MaxSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SpeedRandom = { "SpeedRandom", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, SpeedRandom), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedRandom_MetaData), NewProp_SpeedRandom_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_KillSpeed = { "KillSpeed", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, KillSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KillSpeed_MetaData), NewProp_KillSpeed_MetaData) };
void Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bFlipSplineDirection_SetBit(void* Obj)
{
	((USH_WaterfallSettingsComponent*)Obj)->bFlipSplineDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bFlipSplineDirection = { "bFlipSplineDirection", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USH_WaterfallSettingsComponent), &Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bFlipSplineDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlipSplineDirection_MetaData), NewProp_bFlipSplineDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, Gravity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gravity_MetaData), NewProp_Gravity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_Drag = { "Drag", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, Drag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Drag_MetaData), NewProp_Drag_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, Friction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Friction_MetaData), NewProp_Friction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_Bounce = { "Bounce", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, Bounce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bounce_MetaData), NewProp_Bounce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, Lifetime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lifetime_MetaData), NewProp_Lifetime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_ObstacleAvoidanceWeight = { "ObstacleAvoidanceWeight", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, ObstacleAvoidanceWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleAvoidanceWeight_MetaData), NewProp_ObstacleAvoidanceWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_ObstacleAvoidanceDistance = { "ObstacleAvoidanceDistance", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, ObstacleAvoidanceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleAvoidanceDistance_MetaData), NewProp_ObstacleAvoidanceDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_ObstacleAvoidanceFalloff = { "ObstacleAvoidanceFalloff", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, ObstacleAvoidanceFalloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleAvoidanceFalloff_MetaData), NewProp_ObstacleAvoidanceFalloff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_ObstacleRepulsionWeight = { "ObstacleRepulsionWeight", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, ObstacleRepulsionWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleRepulsionWeight_MetaData), NewProp_ObstacleRepulsionWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_ObstacleRepulsionDistance = { "ObstacleRepulsionDistance", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, ObstacleRepulsionDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleRepulsionDistance_MetaData), NewProp_ObstacleRepulsionDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_ObstacleRepulsionFalloff = { "ObstacleRepulsionFalloff", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, ObstacleRepulsionFalloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleRepulsionFalloff_MetaData), NewProp_ObstacleRepulsionFalloff_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_IgnoreActorsForAvoidance_Inner = { "IgnoreActorsForAvoidance", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_IgnoreActorsForAvoidance = { "IgnoreActorsForAvoidance", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, IgnoreActorsForAvoidance), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoreActorsForAvoidance_MetaData), NewProp_IgnoreActorsForAvoidance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_FlowRepulsionWeight = { "FlowRepulsionWeight", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, FlowRepulsionWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlowRepulsionWeight_MetaData), NewProp_FlowRepulsionWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_FlowRepulsionDistance = { "FlowRepulsionDistance", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, FlowRepulsionDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlowRepulsionDistance_MetaData), NewProp_FlowRepulsionDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_FlowRepulsionFalloff = { "FlowRepulsionFalloff", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, FlowRepulsionFalloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlowRepulsionFalloff_MetaData), NewProp_FlowRepulsionFalloff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_FlowAlignmentWeight = { "FlowAlignmentWeight", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, FlowAlignmentWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlowAlignmentWeight_MetaData), NewProp_FlowAlignmentWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_FlowAlignmentDistance = { "FlowAlignmentDistance", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, FlowAlignmentDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlowAlignmentDistance_MetaData), NewProp_FlowAlignmentDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_FlowAlignmentFalloff = { "FlowAlignmentFalloff", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, FlowAlignmentFalloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlowAlignmentFalloff_MetaData), NewProp_FlowAlignmentFalloff_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SelectedMesh_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SelectedMesh = { "SelectedMesh", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, SelectedMesh), Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_MeshGenerationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedMesh_MetaData), NewProp_SelectedMesh_MetaData) }; // 406542764
void Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bGenerateMeshForPathsInRange_SetBit(void* Obj)
{
	((USH_WaterfallSettingsComponent*)Obj)->bGenerateMeshForPathsInRange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bGenerateMeshForPathsInRange = { "bGenerateMeshForPathsInRange", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USH_WaterfallSettingsComponent), &Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bGenerateMeshForPathsInRange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateMeshForPathsInRange_MetaData), NewProp_bGenerateMeshForPathsInRange_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_PathRange = { "PathRange", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, PathRange), Z_Construct_UScriptStruct_FIntVector2, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathRange_MetaData), NewProp_PathRange_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bForceIncludeHits_SetBit(void* Obj)
{
	((USH_WaterfallSettingsComponent*)Obj)->bForceIncludeHits = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bForceIncludeHits = { "bForceIncludeHits", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USH_WaterfallSettingsComponent), &Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bForceIncludeHits_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceIncludeHits_MetaData), NewProp_bForceIncludeHits_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_ForceIncludeHitsTheshold = { "ForceIncludeHitsTheshold", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, ForceIncludeHitsTheshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceIncludeHitsTheshold_MetaData), NewProp_ForceIncludeHitsTheshold_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_CachingSubsteps = { "CachingSubsteps", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, CachingSubsteps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachingSubsteps_MetaData), NewProp_CachingSubsteps_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SegmentLength = { "SegmentLength", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, SegmentLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SegmentLength_MetaData), NewProp_SegmentLength_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_MaxSegments = { "MaxSegments", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, MaxSegments), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSegments_MetaData), NewProp_MaxSegments_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SamplePath = { "SamplePath", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, SamplePath), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplePath_MetaData), NewProp_SamplePath_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SmoothingIterations = { "SmoothingIterations", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, SmoothingIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingIterations_MetaData), NewProp_SmoothingIterations_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_PositionSmoothingPerAxis = { "PositionSmoothingPerAxis", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, PositionSmoothingPerAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionSmoothingPerAxis_MetaData), NewProp_PositionSmoothingPerAxis_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_MeshTraceAlpha = { "MeshTraceAlpha", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, MeshTraceAlpha), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshTraceAlpha_MetaData), NewProp_MeshTraceAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_MeshTraceDistance = { "MeshTraceDistance", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, MeshTraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshTraceDistance_MetaData), NewProp_MeshTraceDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_MeshTraceOffset = { "MeshTraceOffset", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, MeshTraceOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshTraceOffset_MetaData), NewProp_MeshTraceOffset_MetaData) };
void Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bMeshTraceProjection_SetBit(void* Obj)
{
	((USH_WaterfallSettingsComponent*)Obj)->bMeshTraceProjection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bMeshTraceProjection = { "bMeshTraceProjection", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USH_WaterfallSettingsComponent), &Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bMeshTraceProjection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMeshTraceProjection_MetaData), NewProp_bMeshTraceProjection_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_MeshTraceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_MeshTraceMode = { "MeshTraceMode", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, MeshTraceMode), Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_MeshProjectionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshTraceMode_MetaData), NewProp_MeshTraceMode_MetaData) }; // 3283005238
void Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bAutoComputeNormals_SetBit(void* Obj)
{
	((USH_WaterfallSettingsComponent*)Obj)->bAutoComputeNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bAutoComputeNormals = { "bAutoComputeNormals", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USH_WaterfallSettingsComponent), &Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bAutoComputeNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoComputeNormals_MetaData), NewProp_bAutoComputeNormals_MetaData) };
void Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bFlipNormals_SetBit(void* Obj)
{
	((USH_WaterfallSettingsComponent*)Obj)->bFlipNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bFlipNormals = { "bFlipNormals", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USH_WaterfallSettingsComponent), &Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bFlipNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlipNormals_MetaData), NewProp_bFlipNormals_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_MeshNormalOffset = { "MeshNormalOffset", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, MeshNormalOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshNormalOffset_MetaData), NewProp_MeshNormalOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_MeshNormalOffsetCurve = { "MeshNormalOffsetCurve", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, MeshNormalOffsetCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshNormalOffsetCurve_MetaData), NewProp_MeshNormalOffsetCurve_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SmoothNormalsIteration = { "SmoothNormalsIteration", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, SmoothNormalsIteration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothNormalsIteration_MetaData), NewProp_SmoothNormalsIteration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SmoothNormalsAlpha = { "SmoothNormalsAlpha", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, SmoothNormalsAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothNormalsAlpha_MetaData), NewProp_SmoothNormalsAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_CylinderNormal = { "CylinderNormal", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, CylinderNormal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CylinderNormal_MetaData), NewProp_CylinderNormal_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_CylinderNormalCurve = { "CylinderNormalCurve", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, CylinderNormalCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CylinderNormalCurve_MetaData), NewProp_CylinderNormalCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_OverrideNormal = { "OverrideNormal", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, OverrideNormal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideNormal_MetaData), NewProp_OverrideNormal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_OverrideNormalDirection = { "OverrideNormalDirection", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, OverrideNormalDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideNormalDirection_MetaData), NewProp_OverrideNormalDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_ForceWaterNormalDistZ = { "ForceWaterNormalDistZ", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, ForceWaterNormalDistZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceWaterNormalDistZ_MetaData), NewProp_ForceWaterNormalDistZ_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SmoothTangentsIteration = { "SmoothTangentsIteration", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, SmoothTangentsIteration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothTangentsIteration_MetaData), NewProp_SmoothTangentsIteration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SmoothTangentsAlpha = { "SmoothTangentsAlpha", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, SmoothTangentsAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothTangentsAlpha_MetaData), NewProp_SmoothTangentsAlpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_BaseUVsScale = { "BaseUVsScale", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, BaseUVsScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseUVsScale_MetaData), NewProp_BaseUVsScale_MetaData) };
void Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bTurbulenceIncludesSplash_SetBit(void* Obj)
{
	((USH_WaterfallSettingsComponent*)Obj)->bTurbulenceIncludesSplash = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bTurbulenceIncludesSplash = { "bTurbulenceIncludesSplash", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USH_WaterfallSettingsComponent), &Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bTurbulenceIncludesSplash_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTurbulenceIncludesSplash_MetaData), NewProp_bTurbulenceIncludesSplash_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_TurbulenceRange = { "TurbulenceRange", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, TurbulenceRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurbulenceRange_MetaData), NewProp_TurbulenceRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_TurbulenceObstacleWeight = { "TurbulenceObstacleWeight", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, TurbulenceObstacleWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurbulenceObstacleWeight_MetaData), NewProp_TurbulenceObstacleWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_TurbulenceFlowWeight = { "TurbulenceFlowWeight", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, TurbulenceFlowWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurbulenceFlowWeight_MetaData), NewProp_TurbulenceFlowWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_TurbulenceSpreadUpStream = { "TurbulenceSpreadUpStream", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, TurbulenceSpreadUpStream), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurbulenceSpreadUpStream_MetaData), NewProp_TurbulenceSpreadUpStream_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_TurbulenceSpreadDownStream = { "TurbulenceSpreadDownStream", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, TurbulenceSpreadDownStream), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurbulenceSpreadDownStream_MetaData), NewProp_TurbulenceSpreadDownStream_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_TurbulenceFalloff = { "TurbulenceFalloff", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, TurbulenceFalloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurbulenceFalloff_MetaData), NewProp_TurbulenceFalloff_MetaData) };
void Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bUpdateMaterialsInBakedMeshToo_SetBit(void* Obj)
{
	((USH_WaterfallSettingsComponent*)Obj)->bUpdateMaterialsInBakedMeshToo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bUpdateMaterialsInBakedMeshToo = { "bUpdateMaterialsInBakedMeshToo", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USH_WaterfallSettingsComponent), &Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bUpdateMaterialsInBakedMeshToo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateMaterialsInBakedMeshToo_MetaData), NewProp_bUpdateMaterialsInBakedMeshToo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SingularMeshMaterial = { "SingularMeshMaterial", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, SingularMeshMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SingularMeshMaterial_MetaData), NewProp_SingularMeshMaterial_MetaData) };
void Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bSortPoints_SetBit(void* Obj)
{
	((USH_WaterfallSettingsComponent*)Obj)->bSortPoints = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bSortPoints = { "bSortPoints", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USH_WaterfallSettingsComponent), &Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bSortPoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSortPoints_MetaData), NewProp_bSortPoints_MetaData) };
void Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bSingularMeshSubdivide_SetBit(void* Obj)
{
	((USH_WaterfallSettingsComponent*)Obj)->bSingularMeshSubdivide = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bSingularMeshSubdivide = { "bSingularMeshSubdivide", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USH_WaterfallSettingsComponent), &Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bSingularMeshSubdivide_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSingularMeshSubdivide_MetaData), NewProp_bSingularMeshSubdivide_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SingularMeshSubdivisions = { "SingularMeshSubdivisions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, SingularMeshSubdivisions), Z_Construct_UScriptStruct_FIntVector2, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SingularMeshSubdivisions_MetaData), NewProp_SingularMeshSubdivisions_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SingularMeshSubdivisionSplineInterpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SingularMeshSubdivisionSplineInterpolation = { "SingularMeshSubdivisionSplineInterpolation", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, SingularMeshSubdivisionSplineInterpolation), Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_W2_Interpolation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SingularMeshSubdivisionSplineInterpolation_MetaData), NewProp_SingularMeshSubdivisionSplineInterpolation_MetaData) }; // 458548596
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SingularMeshAdditionalGeo = { "SingularMeshAdditionalGeo", nullptr, (EPropertyFlags)0x00200c0800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, SingularMeshAdditionalGeo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SingularMeshAdditionalGeo_MetaData), NewProp_SingularMeshAdditionalGeo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SingularMeshAdditionalGeoCurve = { "SingularMeshAdditionalGeoCurve", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, SingularMeshAdditionalGeoCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SingularMeshAdditionalGeoCurve_MetaData), NewProp_SingularMeshAdditionalGeoCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SingularMeshAdditionalGeoSpreadCurve = { "SingularMeshAdditionalGeoSpreadCurve", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, SingularMeshAdditionalGeoSpreadCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SingularMeshAdditionalGeoSpreadCurve_MetaData), NewProp_SingularMeshAdditionalGeoSpreadCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_PerPathMeshMaterial = { "PerPathMeshMaterial", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, PerPathMeshMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerPathMeshMaterial_MetaData), NewProp_PerPathMeshMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_PerPathWidthCurve = { "PerPathWidthCurve", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, PerPathWidthCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerPathWidthCurve_MetaData), NewProp_PerPathWidthCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_PerPathWidth = { "PerPathWidth", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, PerPathWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerPathWidth_MetaData), NewProp_PerPathWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_PerPathSubdivisions = { "PerPathSubdivisions", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, PerPathSubdivisions), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerPathSubdivisions_MetaData), NewProp_PerPathSubdivisions_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_PerPathSplineRoll = { "PerPathSplineRoll", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, PerPathSplineRoll), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerPathSplineRoll_MetaData), NewProp_PerPathSplineRoll_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_PerPathBulge = { "PerPathBulge", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, PerPathBulge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerPathBulge_MetaData), NewProp_PerPathBulge_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_PerPathBulgeCurve = { "PerPathBulgeCurve", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, PerPathBulgeCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerPathBulgeCurve_MetaData), NewProp_PerPathBulgeCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_PerPathBulgeProfileCurve = { "PerPathBulgeProfileCurve", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, PerPathBulgeProfileCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerPathBulgeProfileCurve_MetaData), NewProp_PerPathBulgeProfileCurve_MetaData) };
void Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bPerPathFlattenFirstRowBulge_SetBit(void* Obj)
{
	((USH_WaterfallSettingsComponent*)Obj)->bPerPathFlattenFirstRowBulge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bPerPathFlattenFirstRowBulge = { "bPerPathFlattenFirstRowBulge", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USH_WaterfallSettingsComponent), &Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bPerPathFlattenFirstRowBulge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPerPathFlattenFirstRowBulge_MetaData), NewProp_bPerPathFlattenFirstRowBulge_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_CrossMeshMaterial = { "CrossMeshMaterial", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, CrossMeshMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrossMeshMaterial_MetaData), NewProp_CrossMeshMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_CrossPlaneWidthCurve = { "CrossPlaneWidthCurve", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, CrossPlaneWidthCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrossPlaneWidthCurve_MetaData), NewProp_CrossPlaneWidthCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_CrossPlaneWidth = { "CrossPlaneWidth", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, CrossPlaneWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrossPlaneWidth_MetaData), NewProp_CrossPlaneWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_CrossPlaneSubdivisions = { "CrossPlaneSubdivisions", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, CrossPlaneSubdivisions), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrossPlaneSubdivisions_MetaData), NewProp_CrossPlaneSubdivisions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_CrossPlaneOffsetCurve = { "CrossPlaneOffsetCurve", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, CrossPlaneOffsetCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrossPlaneOffsetCurve_MetaData), NewProp_CrossPlaneOffsetCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_CrossPlaneOffset = { "CrossPlaneOffset", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, CrossPlaneOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrossPlaneOffset_MetaData), NewProp_CrossPlaneOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_CrossPlaneSplineRoll = { "CrossPlaneSplineRoll", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, CrossPlaneSplineRoll), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrossPlaneSplineRoll_MetaData), NewProp_CrossPlaneSplineRoll_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_CrossPlaneAlignNormal = { "CrossPlaneAlignNormal", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, CrossPlaneAlignNormal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrossPlaneAlignNormal_MetaData), NewProp_CrossPlaneAlignNormal_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SplashMeshMaterial = { "SplashMeshMaterial", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, SplashMeshMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplashMeshMaterial_MetaData), NewProp_SplashMeshMaterial_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SplashMeshOverrideSubdivisions = { "SplashMeshOverrideSubdivisions", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, SplashMeshOverrideSubdivisions), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplashMeshOverrideSubdivisions_MetaData), NewProp_SplashMeshOverrideSubdivisions_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SplashFrontRadius = { "SplashFrontRadius", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, SplashFrontRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplashFrontRadius_MetaData), NewProp_SplashFrontRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SplashBackRadius = { "SplashBackRadius", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, SplashBackRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplashBackRadius_MetaData), NewProp_SplashBackRadius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SplashRadiusSubdivisions = { "SplashRadiusSubdivisions", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, SplashRadiusSubdivisions), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplashRadiusSubdivisions_MetaData), NewProp_SplashRadiusSubdivisions_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SplashScale = { "SplashScale", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, SplashScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplashScale_MetaData), NewProp_SplashScale_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SplashSegments = { "SplashSegments", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, SplashSegments), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplashSegments_MetaData), NewProp_SplashSegments_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SplashDistanceFalloff = { "SplashDistanceFalloff", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, SplashDistanceFalloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplashDistanceFalloff_MetaData), NewProp_SplashDistanceFalloff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SplashUVFalloff = { "SplashUVFalloff", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, SplashUVFalloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplashUVFalloff_MetaData), NewProp_SplashUVFalloff_MetaData) };
void Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SimpleGenerateSingleMesh_SetBit(void* Obj)
{
	((USH_WaterfallSettingsComponent*)Obj)->SimpleGenerateSingleMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SimpleGenerateSingleMesh = { "SimpleGenerateSingleMesh", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USH_WaterfallSettingsComponent), &Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SimpleGenerateSingleMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimpleGenerateSingleMesh_MetaData), NewProp_SimpleGenerateSingleMesh_MetaData) };
void Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SimpleGeneratePerPathMesh_SetBit(void* Obj)
{
	((USH_WaterfallSettingsComponent*)Obj)->SimpleGeneratePerPathMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SimpleGeneratePerPathMesh = { "SimpleGeneratePerPathMesh", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USH_WaterfallSettingsComponent), &Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SimpleGeneratePerPathMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimpleGeneratePerPathMesh_MetaData), NewProp_SimpleGeneratePerPathMesh_MetaData) };
void Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SimpleGenerateSplashMesh_SetBit(void* Obj)
{
	((USH_WaterfallSettingsComponent*)Obj)->SimpleGenerateSplashMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SimpleGenerateSplashMesh = { "SimpleGenerateSplashMesh", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USH_WaterfallSettingsComponent), &Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SimpleGenerateSplashMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimpleGenerateSplashMesh_MetaData), NewProp_SimpleGenerateSplashMesh_MetaData) };
void Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SimpleGeneratePlaneMesh_SetBit(void* Obj)
{
	((USH_WaterfallSettingsComponent*)Obj)->SimpleGeneratePlaneMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SimpleGeneratePlaneMesh = { "SimpleGeneratePlaneMesh", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USH_WaterfallSettingsComponent), &Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SimpleGeneratePlaneMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimpleGeneratePlaneMesh_MetaData), NewProp_SimpleGeneratePlaneMesh_MetaData) };
void Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bTopVFX_SetBit(void* Obj)
{
	((USH_WaterfallSettingsComponent*)Obj)->bTopVFX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bTopVFX = { "bTopVFX", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USH_WaterfallSettingsComponent), &Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bTopVFX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTopVFX_MetaData), NewProp_bTopVFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_TopVfxSystem = { "TopVfxSystem", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, TopVfxSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopVfxSystem_MetaData), NewProp_TopVfxSystem_MetaData) };
void Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bBottomVFX_SetBit(void* Obj)
{
	((USH_WaterfallSettingsComponent*)Obj)->bBottomVFX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bBottomVFX = { "bBottomVFX", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USH_WaterfallSettingsComponent), &Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bBottomVFX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBottomVFX_MetaData), NewProp_bBottomVFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_BottomVfxSystem = { "BottomVfxSystem", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, BottomVfxSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BottomVfxSystem_MetaData), NewProp_BottomVfxSystem_MetaData) };
void Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bMiddleVFX_SetBit(void* Obj)
{
	((USH_WaterfallSettingsComponent*)Obj)->bMiddleVFX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bMiddleVFX = { "bMiddleVFX", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USH_WaterfallSettingsComponent), &Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bMiddleVFX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMiddleVFX_MetaData), NewProp_bMiddleVFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_MiddleVfxSystem = { "MiddleVfxSystem", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, MiddleVfxSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MiddleVfxSystem_MetaData), NewProp_MiddleVfxSystem_MetaData) };
void Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bMiddleUsesDistance_SetBit(void* Obj)
{
	((USH_WaterfallSettingsComponent*)Obj)->bMiddleUsesDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bMiddleUsesDistance = { "bMiddleUsesDistance", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USH_WaterfallSettingsComponent), &Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bMiddleUsesDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMiddleUsesDistance_MetaData), NewProp_bMiddleUsesDistance_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_PointRange = { "PointRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, PointRange), Z_Construct_UScriptStruct_FIntVector2, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointRange_MetaData), NewProp_PointRange_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bShowArrowComponents_SetBit(void* Obj)
{
	((USH_WaterfallSettingsComponent*)Obj)->bShowArrowComponents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bShowArrowComponents = { "bShowArrowComponents", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USH_WaterfallSettingsComponent), &Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bShowArrowComponents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowArrowComponents_MetaData), NewProp_bShowArrowComponents_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_ArrowComponentLength = { "ArrowComponentLength", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, ArrowComponentLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowComponentLength_MetaData), NewProp_ArrowComponentLength_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_DistanceRange = { "DistanceRange", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, DistanceRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceRange_MetaData), NewProp_DistanceRange_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_RemapPoints = { "RemapPoints", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, RemapPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemapPoints_MetaData), NewProp_RemapPoints_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_FxPathSelected = { "FxPathSelected", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, FxPathSelected), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FxPathSelected_MetaData), NewProp_FxPathSelected_MetaData) };
void Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bCombineSameMaterials_SetBit(void* Obj)
{
	((USH_WaterfallSettingsComponent*)Obj)->bCombineSameMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bCombineSameMaterials = { "bCombineSameMaterials", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USH_WaterfallSettingsComponent), &Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bCombineSameMaterials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCombineSameMaterials_MetaData), NewProp_bCombineSameMaterials_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_LastBakePath = { "LastBakePath", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallSettingsComponent, LastBakePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastBakePath_MetaData), NewProp_LastBakePath_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_DebugPointsDuration,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_DebugPointsShowOnlyThesePoints,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_NumPaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_Substeps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bResampleSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_NumSplinePoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SimulationDeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SinglePathPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_PathSpawnRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bAddSpawnJitter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SpawnJitterRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SpawnTraceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SpawnTraceOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SpawnTraceAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SimulationTraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_AdditionalKillActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_AdditionalKillActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_KillPlaneScaleOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_MaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SpeedRandom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_KillSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bFlipSplineDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_Gravity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_Drag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_Friction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_Bounce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_Lifetime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_ObstacleAvoidanceWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_ObstacleAvoidanceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_ObstacleAvoidanceFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_ObstacleRepulsionWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_ObstacleRepulsionDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_ObstacleRepulsionFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_IgnoreActorsForAvoidance_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_IgnoreActorsForAvoidance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_FlowRepulsionWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_FlowRepulsionDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_FlowRepulsionFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_FlowAlignmentWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_FlowAlignmentDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_FlowAlignmentFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SelectedMesh_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SelectedMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bGenerateMeshForPathsInRange,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_PathRange,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bForceIncludeHits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_ForceIncludeHitsTheshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_CachingSubsteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SegmentLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_MaxSegments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SamplePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SmoothingIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_PositionSmoothingPerAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_MeshTraceAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_MeshTraceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_MeshTraceOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bMeshTraceProjection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_MeshTraceMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_MeshTraceMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bAutoComputeNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bFlipNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_MeshNormalOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_MeshNormalOffsetCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SmoothNormalsIteration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SmoothNormalsAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_CylinderNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_CylinderNormalCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_OverrideNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_OverrideNormalDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_ForceWaterNormalDistZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SmoothTangentsIteration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SmoothTangentsAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_BaseUVsScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bTurbulenceIncludesSplash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_TurbulenceRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_TurbulenceObstacleWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_TurbulenceFlowWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_TurbulenceSpreadUpStream,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_TurbulenceSpreadDownStream,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_TurbulenceFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bUpdateMaterialsInBakedMeshToo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SingularMeshMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bSortPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bSingularMeshSubdivide,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SingularMeshSubdivisions,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SingularMeshSubdivisionSplineInterpolation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SingularMeshSubdivisionSplineInterpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SingularMeshAdditionalGeo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SingularMeshAdditionalGeoCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SingularMeshAdditionalGeoSpreadCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_PerPathMeshMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_PerPathWidthCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_PerPathWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_PerPathSubdivisions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_PerPathSplineRoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_PerPathBulge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_PerPathBulgeCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_PerPathBulgeProfileCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bPerPathFlattenFirstRowBulge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_CrossMeshMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_CrossPlaneWidthCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_CrossPlaneWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_CrossPlaneSubdivisions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_CrossPlaneOffsetCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_CrossPlaneOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_CrossPlaneSplineRoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_CrossPlaneAlignNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SplashMeshMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SplashMeshOverrideSubdivisions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SplashFrontRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SplashBackRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SplashRadiusSubdivisions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SplashScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SplashSegments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SplashDistanceFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SplashUVFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SimpleGenerateSingleMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SimpleGeneratePerPathMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SimpleGenerateSplashMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_SimpleGeneratePlaneMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bTopVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_TopVfxSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bBottomVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_BottomVfxSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bMiddleVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_MiddleVfxSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bMiddleUsesDistance,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_PointRange,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bShowArrowComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_ArrowComponentLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_DistanceRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_RemapPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_FxPathSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_bCombineSameMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::NewProp_LastBakePath,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Shadersource_Waterfall2Runtime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::ClassParams = {
	&USH_WaterfallSettingsComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USH_WaterfallSettingsComponent()
{
	if (!Z_Registration_Info_UClass_USH_WaterfallSettingsComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USH_WaterfallSettingsComponent.OuterSingleton, Z_Construct_UClass_USH_WaterfallSettingsComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USH_WaterfallSettingsComponent.OuterSingleton;
}
template<> SHADERSOURCE_WATERFALL2RUNTIME_API UClass* StaticClass<USH_WaterfallSettingsComponent>()
{
	return USH_WaterfallSettingsComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USH_WaterfallSettingsComponent);
USH_WaterfallSettingsComponent::~USH_WaterfallSettingsComponent() {}
// End Class USH_WaterfallSettingsComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_EditorComponents_SH_WaterfallSettingsComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USH_WaterfallSettingsComponent, USH_WaterfallSettingsComponent::StaticClass, TEXT("USH_WaterfallSettingsComponent"), &Z_Registration_Info_UClass_USH_WaterfallSettingsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USH_WaterfallSettingsComponent), 488054024U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_EditorComponents_SH_WaterfallSettingsComponent_h_2773465967(TEXT("/Script/Shadersource_Waterfall2Runtime"),
	Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_EditorComponents_SH_WaterfallSettingsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_EditorComponents_SH_WaterfallSettingsComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
