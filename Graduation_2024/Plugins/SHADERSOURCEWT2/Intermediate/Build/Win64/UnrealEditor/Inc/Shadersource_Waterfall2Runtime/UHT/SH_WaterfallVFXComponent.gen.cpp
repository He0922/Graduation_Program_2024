// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shadersource_Waterfall2Runtime/Public/Components/SH_WaterfallVFXComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSH_WaterfallVFXComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent();
SHADERSOURCE_WATERFALL2RUNTIME_API UClass* Z_Construct_UClass_USH_WaterfallFxComponent_NoRegister();
SHADERSOURCE_WATERFALL2RUNTIME_API UClass* Z_Construct_UClass_USH_WaterfallVFXComponent();
SHADERSOURCE_WATERFALL2RUNTIME_API UClass* Z_Construct_UClass_USH_WaterfallVFXComponent_NoRegister();
SHADERSOURCE_WATERFALL2RUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSH_VfxPointData();
UPackage* Z_Construct_UPackage__Script_Shadersource_Waterfall2Runtime();
// End Cross Module References

// Begin ScriptStruct FSH_VfxPointData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SH_VfxPointData;
class UScriptStruct* FSH_VfxPointData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SH_VfxPointData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SH_VfxPointData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSH_VfxPointData, (UObject*)Z_Construct_UPackage__Script_Shadersource_Waterfall2Runtime(), TEXT("SH_VfxPointData"));
	}
	return Z_Registration_Info_UScriptStruct_SH_VfxPointData.OuterSingleton;
}
template<> SHADERSOURCE_WATERFALL2RUNTIME_API UScriptStruct* StaticStruct<FSH_VfxPointData>()
{
	return FSH_VfxPointData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSH_VfxPointData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/SH_WaterfallVFXComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Waterfall" },
		{ "ModuleRelativePath", "Public/Components/SH_WaterfallVFXComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardDirection_MetaData[] = {
		{ "Category", "Waterfall" },
		{ "ModuleRelativePath", "Public/Components/SH_WaterfallVFXComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpDirection_MetaData[] = {
		{ "Category", "Waterfall" },
		{ "ModuleRelativePath", "Public/Components/SH_WaterfallVFXComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightDirection_MetaData[] = {
		{ "Category", "Waterfall" },
		{ "ModuleRelativePath", "Public/Components/SH_WaterfallVFXComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForwardDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RightDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSH_VfxPointData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSH_VfxPointData_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSH_VfxPointData, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSH_VfxPointData_Statics::NewProp_ForwardDirection = { "ForwardDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSH_VfxPointData, ForwardDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardDirection_MetaData), NewProp_ForwardDirection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSH_VfxPointData_Statics::NewProp_UpDirection = { "UpDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSH_VfxPointData, UpDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpDirection_MetaData), NewProp_UpDirection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSH_VfxPointData_Statics::NewProp_RightDirection = { "RightDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSH_VfxPointData, RightDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightDirection_MetaData), NewProp_RightDirection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSH_VfxPointData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSH_VfxPointData_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSH_VfxPointData_Statics::NewProp_ForwardDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSH_VfxPointData_Statics::NewProp_UpDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSH_VfxPointData_Statics::NewProp_RightDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSH_VfxPointData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSH_VfxPointData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Shadersource_Waterfall2Runtime,
	nullptr,
	&NewStructOps,
	"SH_VfxPointData",
	Z_Construct_UScriptStruct_FSH_VfxPointData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSH_VfxPointData_Statics::PropPointers),
	sizeof(FSH_VfxPointData),
	alignof(FSH_VfxPointData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSH_VfxPointData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSH_VfxPointData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSH_VfxPointData()
{
	if (!Z_Registration_Info_UScriptStruct_SH_VfxPointData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SH_VfxPointData.InnerSingleton, Z_Construct_UScriptStruct_FSH_VfxPointData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SH_VfxPointData.InnerSingleton;
}
// End ScriptStruct FSH_VfxPointData

// Begin Class USH_WaterfallVFXComponent Function DrawPoints
#if WITH_EDITOR
struct Z_Construct_UFunction_USH_WaterfallVFXComponent_DrawPoints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Waterfall" },
		{ "ModuleRelativePath", "Public/Components/SH_WaterfallVFXComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USH_WaterfallVFXComponent_DrawPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USH_WaterfallVFXComponent, nullptr, "DrawPoints", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallVFXComponent_DrawPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_USH_WaterfallVFXComponent_DrawPoints_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USH_WaterfallVFXComponent_DrawPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USH_WaterfallVFXComponent_DrawPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(USH_WaterfallVFXComponent::execDrawPoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawPoints();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class USH_WaterfallVFXComponent Function DrawPoints

// Begin Class USH_WaterfallVFXComponent Function GetPathIndex
struct Z_Construct_UFunction_USH_WaterfallVFXComponent_GetPathIndex_Statics
{
	struct SH_WaterfallVFXComponent_eventGetPathIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Waterfall" },
		{ "ModuleRelativePath", "Public/Components/SH_WaterfallVFXComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USH_WaterfallVFXComponent_GetPathIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SH_WaterfallVFXComponent_eventGetPathIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USH_WaterfallVFXComponent_GetPathIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USH_WaterfallVFXComponent_GetPathIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallVFXComponent_GetPathIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USH_WaterfallVFXComponent_GetPathIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USH_WaterfallVFXComponent, nullptr, "GetPathIndex", nullptr, nullptr, Z_Construct_UFunction_USH_WaterfallVFXComponent_GetPathIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallVFXComponent_GetPathIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_USH_WaterfallVFXComponent_GetPathIndex_Statics::SH_WaterfallVFXComponent_eventGetPathIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallVFXComponent_GetPathIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USH_WaterfallVFXComponent_GetPathIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USH_WaterfallVFXComponent_GetPathIndex_Statics::SH_WaterfallVFXComponent_eventGetPathIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USH_WaterfallVFXComponent_GetPathIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USH_WaterfallVFXComponent_GetPathIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USH_WaterfallVFXComponent::execGetPathIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPathIndex();
	P_NATIVE_END;
}
// End Class USH_WaterfallVFXComponent Function GetPathIndex

// Begin Class USH_WaterfallVFXComponent Function GetPointIndex
struct Z_Construct_UFunction_USH_WaterfallVFXComponent_GetPointIndex_Statics
{
	struct SH_WaterfallVFXComponent_eventGetPointIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Waterfall" },
		{ "ModuleRelativePath", "Public/Components/SH_WaterfallVFXComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USH_WaterfallVFXComponent_GetPointIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SH_WaterfallVFXComponent_eventGetPointIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USH_WaterfallVFXComponent_GetPointIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USH_WaterfallVFXComponent_GetPointIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallVFXComponent_GetPointIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USH_WaterfallVFXComponent_GetPointIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USH_WaterfallVFXComponent, nullptr, "GetPointIndex", nullptr, nullptr, Z_Construct_UFunction_USH_WaterfallVFXComponent_GetPointIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallVFXComponent_GetPointIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_USH_WaterfallVFXComponent_GetPointIndex_Statics::SH_WaterfallVFXComponent_eventGetPointIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallVFXComponent_GetPointIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USH_WaterfallVFXComponent_GetPointIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USH_WaterfallVFXComponent_GetPointIndex_Statics::SH_WaterfallVFXComponent_eventGetPointIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USH_WaterfallVFXComponent_GetPointIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USH_WaterfallVFXComponent_GetPointIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USH_WaterfallVFXComponent::execGetPointIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPointIndex();
	P_NATIVE_END;
}
// End Class USH_WaterfallVFXComponent Function GetPointIndex

// Begin Class USH_WaterfallVFXComponent Function SetVFXBounds
struct Z_Construct_UFunction_USH_WaterfallVFXComponent_SetVFXBounds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Waterfall" },
		{ "ModuleRelativePath", "Public/Components/SH_WaterfallVFXComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USH_WaterfallVFXComponent_SetVFXBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USH_WaterfallVFXComponent, nullptr, "SetVFXBounds", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallVFXComponent_SetVFXBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_USH_WaterfallVFXComponent_SetVFXBounds_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USH_WaterfallVFXComponent_SetVFXBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USH_WaterfallVFXComponent_SetVFXBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USH_WaterfallVFXComponent::execSetVFXBounds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVFXBounds();
	P_NATIVE_END;
}
// End Class USH_WaterfallVFXComponent Function SetVFXBounds

// Begin Class USH_WaterfallVFXComponent Function UpdateComponentParams
struct Z_Construct_UFunction_USH_WaterfallVFXComponent_UpdateComponentParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Waterfall" },
		{ "ModuleRelativePath", "Public/Components/SH_WaterfallVFXComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USH_WaterfallVFXComponent_UpdateComponentParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USH_WaterfallVFXComponent, nullptr, "UpdateComponentParams", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USH_WaterfallVFXComponent_UpdateComponentParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_USH_WaterfallVFXComponent_UpdateComponentParams_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USH_WaterfallVFXComponent_UpdateComponentParams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USH_WaterfallVFXComponent_UpdateComponentParams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USH_WaterfallVFXComponent::execUpdateComponentParams)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateComponentParams();
	P_NATIVE_END;
}
// End Class USH_WaterfallVFXComponent Function UpdateComponentParams

// Begin Class USH_WaterfallVFXComponent
void USH_WaterfallVFXComponent::StaticRegisterNativesUSH_WaterfallVFXComponent()
{
	UClass* Class = USH_WaterfallVFXComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
#if WITH_EDITOR
		{ "DrawPoints", &USH_WaterfallVFXComponent::execDrawPoints },
#endif // WITH_EDITOR
		{ "GetPathIndex", &USH_WaterfallVFXComponent::execGetPathIndex },
		{ "GetPointIndex", &USH_WaterfallVFXComponent::execGetPointIndex },
		{ "SetVFXBounds", &USH_WaterfallVFXComponent::execSetVFXBounds },
		{ "UpdateComponentParams", &USH_WaterfallVFXComponent::execUpdateComponentParams },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USH_WaterfallVFXComponent);
UClass* Z_Construct_UClass_USH_WaterfallVFXComponent_NoRegister()
{
	return USH_WaterfallVFXComponent::StaticClass();
}
struct Z_Construct_UClass_USH_WaterfallVFXComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "SHADERSOURCE" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* A custom Niagara component that stores the path and point indexes of the parent waterfall. */" },
#endif
		{ "DisplayName", "SH Waterfall VFX Component" },
		{ "HideCategories", "Object Physics Collision Mobility VirtualTexture" },
		{ "IncludePath", "Components/SH_WaterfallVFXComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/SH_WaterfallVFXComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A custom Niagara component that stores the path and point indexes of the parent waterfall." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointData_MetaData[] = {
		{ "Category", "Waterfall" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Points that will be passed to \"SpawnPositions\" variable in UpdateParticleSystemParams()\n\x09Note: These points are expected to be in World Space. They will be converted to local when set.*/" },
#endif
		{ "ModuleRelativePath", "Public/Components/SH_WaterfallVFXComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Points that will be passed to \"SpawnPositions\" variable in UpdateParticleSystemParams()\n       Note: These points are expected to be in World Space. They will be converted to local when set." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VFXBoundsBox_MetaData[] = {
		{ "Category", "Waterfall" },
		{ "ModuleRelativePath", "Public/Components/SH_WaterfallVFXComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PointData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VFXBoundsBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_USH_WaterfallVFXComponent_DrawPoints, "DrawPoints" }, // 1177664922
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_USH_WaterfallVFXComponent_GetPathIndex, "GetPathIndex" }, // 1693000345
		{ &Z_Construct_UFunction_USH_WaterfallVFXComponent_GetPointIndex, "GetPointIndex" }, // 502237330
		{ &Z_Construct_UFunction_USH_WaterfallVFXComponent_SetVFXBounds, "SetVFXBounds" }, // 1828058592
		{ &Z_Construct_UFunction_USH_WaterfallVFXComponent_UpdateComponentParams, "UpdateComponentParams" }, // 1282568170
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USH_WaterfallVFXComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USH_WaterfallVFXComponent_Statics::NewProp_PointData_Inner = { "PointData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSH_VfxPointData, METADATA_PARAMS(0, nullptr) }; // 3379544252
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USH_WaterfallVFXComponent_Statics::NewProp_PointData = { "PointData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallVFXComponent, PointData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointData_MetaData), NewProp_PointData_MetaData) }; // 3379544252
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USH_WaterfallVFXComponent_Statics::NewProp_VFXBoundsBox = { "VFXBoundsBox", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallVFXComponent, VFXBoundsBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VFXBoundsBox_MetaData), NewProp_VFXBoundsBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USH_WaterfallVFXComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallVFXComponent_Statics::NewProp_PointData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallVFXComponent_Statics::NewProp_PointData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallVFXComponent_Statics::NewProp_VFXBoundsBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USH_WaterfallVFXComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USH_WaterfallVFXComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Shadersource_Waterfall2Runtime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USH_WaterfallVFXComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USH_WaterfallVFXComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USH_WaterfallFxComponent_NoRegister, (int32)VTABLE_OFFSET(USH_WaterfallVFXComponent, ISH_WaterfallFxComponent), false },  // 1337201197
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_USH_WaterfallVFXComponent_Statics::ClassParams = {
	&USH_WaterfallVFXComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USH_WaterfallVFXComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USH_WaterfallVFXComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USH_WaterfallVFXComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USH_WaterfallVFXComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USH_WaterfallVFXComponent()
{
	if (!Z_Registration_Info_UClass_USH_WaterfallVFXComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USH_WaterfallVFXComponent.OuterSingleton, Z_Construct_UClass_USH_WaterfallVFXComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USH_WaterfallVFXComponent.OuterSingleton;
}
template<> SHADERSOURCE_WATERFALL2RUNTIME_API UClass* StaticClass<USH_WaterfallVFXComponent>()
{
	return USH_WaterfallVFXComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USH_WaterfallVFXComponent);
USH_WaterfallVFXComponent::~USH_WaterfallVFXComponent() {}
// End Class USH_WaterfallVFXComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_Components_SH_WaterfallVFXComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSH_VfxPointData::StaticStruct, Z_Construct_UScriptStruct_FSH_VfxPointData_Statics::NewStructOps, TEXT("SH_VfxPointData"), &Z_Registration_Info_UScriptStruct_SH_VfxPointData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSH_VfxPointData), 3379544252U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USH_WaterfallVFXComponent, USH_WaterfallVFXComponent::StaticClass, TEXT("USH_WaterfallVFXComponent"), &Z_Registration_Info_UClass_USH_WaterfallVFXComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USH_WaterfallVFXComponent), 800348428U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_Components_SH_WaterfallVFXComponent_h_2804844127(TEXT("/Script/Shadersource_Waterfall2Runtime"),
	Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_Components_SH_WaterfallVFXComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_Components_SH_WaterfallVFXComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_Components_SH_WaterfallVFXComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_Components_SH_WaterfallVFXComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
