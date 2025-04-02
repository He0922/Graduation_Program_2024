// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shadersource_Waterfall2Runtime/Public/EditorComponents/SH_WaterfallPathComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSH_WaterfallPathComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent();
SHADERSOURCE_WATERFALL2RUNTIME_API UClass* Z_Construct_UClass_USH_WaterfallPathComponent();
SHADERSOURCE_WATERFALL2RUNTIME_API UClass* Z_Construct_UClass_USH_WaterfallPathComponent_NoRegister();
SHADERSOURCE_WATERFALL2RUNTIME_API UEnum* Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_SimulatedPointState();
SHADERSOURCE_WATERFALL2RUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSH_SimulatedPoint();
SHADERSOURCE_WATERFALL2RUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSH_WaterfallSample();
UPackage* Z_Construct_UPackage__Script_Shadersource_Waterfall2Runtime();
// End Cross Module References

// Begin Enum ESH_SimulatedPointState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESH_SimulatedPointState;
static UEnum* ESH_SimulatedPointState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESH_SimulatedPointState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESH_SimulatedPointState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_SimulatedPointState, (UObject*)Z_Construct_UPackage__Script_Shadersource_Waterfall2Runtime(), TEXT("ESH_SimulatedPointState"));
	}
	return Z_Registration_Info_UEnum_ESH_SimulatedPointState.OuterSingleton;
}
template<> SHADERSOURCE_WATERFALL2RUNTIME_API UEnum* StaticEnum<ESH_SimulatedPointState>()
{
	return ESH_SimulatedPointState_StaticEnum();
}
struct Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_SimulatedPointState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Airborn.Name", "ESH_SimulatedPointState::Airborn" },
		{ "Blocked.Name", "ESH_SimulatedPointState::Blocked" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* For path generation - the various states that a point can be when simulating. */" },
#endif
		{ "Died.Name", "ESH_SimulatedPointState::Died" },
		{ "Hit.Name", "ESH_SimulatedPointState::Hit" },
		{ "Killed.Name", "ESH_SimulatedPointState::Killed" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallPathComponent.h" },
		{ "Slide.Name", "ESH_SimulatedPointState::Slide" },
		{ "Stalled.Name", "ESH_SimulatedPointState::Stalled" },
		{ "Start.Name", "ESH_SimulatedPointState::Start" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For path generation - the various states that a point can be when simulating." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESH_SimulatedPointState::Start", (int64)ESH_SimulatedPointState::Start },
		{ "ESH_SimulatedPointState::Airborn", (int64)ESH_SimulatedPointState::Airborn },
		{ "ESH_SimulatedPointState::Hit", (int64)ESH_SimulatedPointState::Hit },
		{ "ESH_SimulatedPointState::Slide", (int64)ESH_SimulatedPointState::Slide },
		{ "ESH_SimulatedPointState::Stalled", (int64)ESH_SimulatedPointState::Stalled },
		{ "ESH_SimulatedPointState::Killed", (int64)ESH_SimulatedPointState::Killed },
		{ "ESH_SimulatedPointState::Blocked", (int64)ESH_SimulatedPointState::Blocked },
		{ "ESH_SimulatedPointState::Died", (int64)ESH_SimulatedPointState::Died },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_SimulatedPointState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Shadersource_Waterfall2Runtime,
	nullptr,
	"ESH_SimulatedPointState",
	"ESH_SimulatedPointState",
	Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_SimulatedPointState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_SimulatedPointState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_SimulatedPointState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_SimulatedPointState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_SimulatedPointState()
{
	if (!Z_Registration_Info_UEnum_ESH_SimulatedPointState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESH_SimulatedPointState.InnerSingleton, Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_SimulatedPointState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESH_SimulatedPointState.InnerSingleton;
}
// End Enum ESH_SimulatedPointState

// Begin ScriptStruct FSH_SimulatedPoint
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SH_SimulatedPoint;
class UScriptStruct* FSH_SimulatedPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SH_SimulatedPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SH_SimulatedPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSH_SimulatedPoint, (UObject*)Z_Construct_UPackage__Script_Shadersource_Waterfall2Runtime(), TEXT("SH_SimulatedPoint"));
	}
	return Z_Registration_Info_UScriptStruct_SH_SimulatedPoint.OuterSingleton;
}
template<> SHADERSOURCE_WATERFALL2RUNTIME_API UScriptStruct* StaticStruct<FSH_SimulatedPoint>()
{
	return FSH_SimulatedPoint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSH_SimulatedPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* All of the generated data for a single simulated point. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallPathComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All of the generated data for a single simulated point." },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallPathComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallPathComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallPathComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitNormal_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallPathComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitForce_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallPathComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Age_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallPathComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleDeviation_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallPathComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlowDeviation_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallPathComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasFxAttached_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallPathComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallPathComponent.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitNormal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HitForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Age;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstacleDeviation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlowDeviation;
	static void NewProp_bHasFxAttached_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasFxAttached;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSH_SimulatedPoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSH_SimulatedPoint_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSH_SimulatedPoint, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSH_SimulatedPoint_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSH_SimulatedPoint_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSH_SimulatedPoint, State), Z_Construct_UEnum_Shadersource_Waterfall2Runtime_ESH_SimulatedPointState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 3912817628
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSH_SimulatedPoint_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSH_SimulatedPoint, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSH_SimulatedPoint_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSH_SimulatedPoint, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitNormal_MetaData), NewProp_HitNormal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSH_SimulatedPoint_Statics::NewProp_HitForce = { "HitForce", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSH_SimulatedPoint, HitForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitForce_MetaData), NewProp_HitForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSH_SimulatedPoint_Statics::NewProp_Age = { "Age", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSH_SimulatedPoint, Age), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Age_MetaData), NewProp_Age_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSH_SimulatedPoint_Statics::NewProp_ObstacleDeviation = { "ObstacleDeviation", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSH_SimulatedPoint, ObstacleDeviation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleDeviation_MetaData), NewProp_ObstacleDeviation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSH_SimulatedPoint_Statics::NewProp_FlowDeviation = { "FlowDeviation", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSH_SimulatedPoint, FlowDeviation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlowDeviation_MetaData), NewProp_FlowDeviation_MetaData) };
void Z_Construct_UScriptStruct_FSH_SimulatedPoint_Statics::NewProp_bHasFxAttached_SetBit(void* Obj)
{
	((FSH_SimulatedPoint*)Obj)->bHasFxAttached = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSH_SimulatedPoint_Statics::NewProp_bHasFxAttached = { "bHasFxAttached", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSH_SimulatedPoint), &Z_Construct_UScriptStruct_FSH_SimulatedPoint_Statics::NewProp_bHasFxAttached_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasFxAttached_MetaData), NewProp_bHasFxAttached_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSH_SimulatedPoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSH_SimulatedPoint, PointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointIndex_MetaData), NewProp_PointIndex_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSH_SimulatedPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSH_SimulatedPoint_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSH_SimulatedPoint_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSH_SimulatedPoint_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSH_SimulatedPoint_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSH_SimulatedPoint_Statics::NewProp_HitNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSH_SimulatedPoint_Statics::NewProp_HitForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSH_SimulatedPoint_Statics::NewProp_Age,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSH_SimulatedPoint_Statics::NewProp_ObstacleDeviation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSH_SimulatedPoint_Statics::NewProp_FlowDeviation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSH_SimulatedPoint_Statics::NewProp_bHasFxAttached,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSH_SimulatedPoint_Statics::NewProp_PointIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSH_SimulatedPoint_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSH_SimulatedPoint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Shadersource_Waterfall2Runtime,
	nullptr,
	&NewStructOps,
	"SH_SimulatedPoint",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FSH_SimulatedPoint_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSH_SimulatedPoint_Statics::PropPointers), 0),
	sizeof(FSH_SimulatedPoint),
	alignof(FSH_SimulatedPoint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSH_SimulatedPoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSH_SimulatedPoint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSH_SimulatedPoint()
{
	if (!Z_Registration_Info_UScriptStruct_SH_SimulatedPoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SH_SimulatedPoint.InnerSingleton, Z_Construct_UScriptStruct_FSH_SimulatedPoint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SH_SimulatedPoint.InnerSingleton;
}
// End ScriptStruct FSH_SimulatedPoint

// Begin ScriptStruct FSH_WaterfallSample
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SH_WaterfallSample;
class UScriptStruct* FSH_WaterfallSample::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SH_WaterfallSample.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SH_WaterfallSample.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSH_WaterfallSample, (UObject*)Z_Construct_UPackage__Script_Shadersource_Waterfall2Runtime(), TEXT("SH_WaterfallSample"));
	}
	return Z_Registration_Info_UScriptStruct_SH_WaterfallSample.OuterSingleton;
}
template<> SHADERSOURCE_WATERFALL2RUNTIME_API UScriptStruct* StaticStruct<FSH_WaterfallSample>()
{
	return FSH_WaterfallSample::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSH_WaterfallSample_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Represents a point between simulated points. */" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallPathComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a point between simulated points." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSH_WaterfallSample>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSH_WaterfallSample_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Shadersource_Waterfall2Runtime,
	nullptr,
	&NewStructOps,
	"SH_WaterfallSample",
	nullptr,
	0,
	sizeof(FSH_WaterfallSample),
	alignof(FSH_WaterfallSample),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSH_WaterfallSample_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSH_WaterfallSample_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSH_WaterfallSample()
{
	if (!Z_Registration_Info_UScriptStruct_SH_WaterfallSample.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SH_WaterfallSample.InnerSingleton, Z_Construct_UScriptStruct_FSH_WaterfallSample_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SH_WaterfallSample.InnerSingleton;
}
// End ScriptStruct FSH_WaterfallSample

// Begin Class USH_WaterfallPathComponent
void USH_WaterfallPathComponent::StaticRegisterNativesUSH_WaterfallPathComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USH_WaterfallPathComponent);
UClass* Z_Construct_UClass_USH_WaterfallPathComponent_NoRegister()
{
	return USH_WaterfallPathComponent::StaticClass();
}
struct Z_Construct_UClass_USH_WaterfallPathComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* A Spline Component that represents a single simulated path for the waterfall.\n* Note: This component is currently editor-only and not available at runtime. */" },
#endif
		{ "HideCategories", "Physics Collision Lighting Rendering Mobile Trigger VirtualTexture" },
		{ "IncludePath", "EditorComponents/SH_WaterfallPathComponent.h" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallPathComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A Spline Component that represents a single simulated path for the waterfall.\n* Note: This component is currently editor-only and not available at runtime." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathIndex_MetaData[] = {
		{ "Category", "Waterfall" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The index of the path along the Top Spline from left to right\n" },
#endif
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallPathComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The index of the path along the Top Spline from left to right" },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedPathSeed_MetaData[] = {
		{ "Category", "Waterfall" },
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallPathComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallPathComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalisedSplineDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallPathComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVSeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallPathComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSimulated_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallPathComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulatedPoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallPathComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulationBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallPathComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulationMaxHitForce_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallPathComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulationMaxSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorComponents/SH_WaterfallPathComponent.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PathIndex;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GeneratedPathSeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SplineDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalisedSplineDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UVSeed;
	static void NewProp_bIsSimulated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSimulated;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimulatedPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SimulatedPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimulationBounds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SimulationMaxHitForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SimulationMaxSpeed;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USH_WaterfallPathComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USH_WaterfallPathComponent_Statics::NewProp_PathIndex = { "PathIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallPathComponent, PathIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathIndex_MetaData), NewProp_PathIndex_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallPathComponent_Statics::NewProp_GeneratedPathSeed = { "GeneratedPathSeed", nullptr, (EPropertyFlags)0x0010000800020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallPathComponent, GeneratedPathSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedPathSeed_MetaData), NewProp_GeneratedPathSeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallPathComponent_Statics::NewProp_SplineDistance = { "SplineDistance", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallPathComponent, SplineDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineDistance_MetaData), NewProp_SplineDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallPathComponent_Statics::NewProp_NormalisedSplineDistance = { "NormalisedSplineDistance", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallPathComponent, NormalisedSplineDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalisedSplineDistance_MetaData), NewProp_NormalisedSplineDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallPathComponent_Statics::NewProp_UVSeed = { "UVSeed", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallPathComponent, UVSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVSeed_MetaData), NewProp_UVSeed_MetaData) };
void Z_Construct_UClass_USH_WaterfallPathComponent_Statics::NewProp_bIsSimulated_SetBit(void* Obj)
{
	((USH_WaterfallPathComponent*)Obj)->bIsSimulated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USH_WaterfallPathComponent_Statics::NewProp_bIsSimulated = { "bIsSimulated", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USH_WaterfallPathComponent), &Z_Construct_UClass_USH_WaterfallPathComponent_Statics::NewProp_bIsSimulated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSimulated_MetaData), NewProp_bIsSimulated_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USH_WaterfallPathComponent_Statics::NewProp_SimulatedPoints_Inner = { "SimulatedPoints", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSH_SimulatedPoint, METADATA_PARAMS(0, nullptr) }; // 2451538423
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USH_WaterfallPathComponent_Statics::NewProp_SimulatedPoints = { "SimulatedPoints", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallPathComponent, SimulatedPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulatedPoints_MetaData), NewProp_SimulatedPoints_MetaData) }; // 2451538423
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USH_WaterfallPathComponent_Statics::NewProp_SimulationBounds = { "SimulationBounds", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallPathComponent, SimulationBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulationBounds_MetaData), NewProp_SimulationBounds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallPathComponent_Statics::NewProp_SimulationMaxHitForce = { "SimulationMaxHitForce", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallPathComponent, SimulationMaxHitForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulationMaxHitForce_MetaData), NewProp_SimulationMaxHitForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_WaterfallPathComponent_Statics::NewProp_SimulationMaxSpeed = { "SimulationMaxSpeed", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USH_WaterfallPathComponent, SimulationMaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulationMaxSpeed_MetaData), NewProp_SimulationMaxSpeed_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USH_WaterfallPathComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallPathComponent_Statics::NewProp_PathIndex,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallPathComponent_Statics::NewProp_GeneratedPathSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallPathComponent_Statics::NewProp_SplineDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallPathComponent_Statics::NewProp_NormalisedSplineDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallPathComponent_Statics::NewProp_UVSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallPathComponent_Statics::NewProp_bIsSimulated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallPathComponent_Statics::NewProp_SimulatedPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallPathComponent_Statics::NewProp_SimulatedPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallPathComponent_Statics::NewProp_SimulationBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallPathComponent_Statics::NewProp_SimulationMaxHitForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_WaterfallPathComponent_Statics::NewProp_SimulationMaxSpeed,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USH_WaterfallPathComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USH_WaterfallPathComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USplineComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Shadersource_Waterfall2Runtime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USH_WaterfallPathComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USH_WaterfallPathComponent_Statics::ClassParams = {
	&USH_WaterfallPathComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USH_WaterfallPathComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USH_WaterfallPathComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USH_WaterfallPathComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USH_WaterfallPathComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USH_WaterfallPathComponent()
{
	if (!Z_Registration_Info_UClass_USH_WaterfallPathComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USH_WaterfallPathComponent.OuterSingleton, Z_Construct_UClass_USH_WaterfallPathComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USH_WaterfallPathComponent.OuterSingleton;
}
template<> SHADERSOURCE_WATERFALL2RUNTIME_API UClass* StaticClass<USH_WaterfallPathComponent>()
{
	return USH_WaterfallPathComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USH_WaterfallPathComponent);
USH_WaterfallPathComponent::~USH_WaterfallPathComponent() {}
// End Class USH_WaterfallPathComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_EditorComponents_SH_WaterfallPathComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESH_SimulatedPointState_StaticEnum, TEXT("ESH_SimulatedPointState"), &Z_Registration_Info_UEnum_ESH_SimulatedPointState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3912817628U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSH_SimulatedPoint::StaticStruct, Z_Construct_UScriptStruct_FSH_SimulatedPoint_Statics::NewStructOps, TEXT("SH_SimulatedPoint"), &Z_Registration_Info_UScriptStruct_SH_SimulatedPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSH_SimulatedPoint), 2451538423U) },
		{ FSH_WaterfallSample::StaticStruct, Z_Construct_UScriptStruct_FSH_WaterfallSample_Statics::NewStructOps, TEXT("SH_WaterfallSample"), &Z_Registration_Info_UScriptStruct_SH_WaterfallSample, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSH_WaterfallSample), 200716683U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USH_WaterfallPathComponent, USH_WaterfallPathComponent::StaticClass, TEXT("USH_WaterfallPathComponent"), &Z_Registration_Info_UClass_USH_WaterfallPathComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USH_WaterfallPathComponent), 1309626521U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_EditorComponents_SH_WaterfallPathComponent_h_652520476(TEXT("/Script/Shadersource_Waterfall2Runtime"),
	Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_EditorComponents_SH_WaterfallPathComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_EditorComponents_SH_WaterfallPathComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_EditorComponents_SH_WaterfallPathComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_EditorComponents_SH_WaterfallPathComponent_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_EditorComponents_SH_WaterfallPathComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Plugins_SHADERSOURCEWT2_Source_Shadersource_Waterfall2Runtime_Public_EditorComponents_SH_WaterfallPathComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
