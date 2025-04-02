// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/Pawn/FloorRaft.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorRaft() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
GRADUATION_2024_API UClass* Z_Construct_UClass_AFloorRaft();
GRADUATION_2024_API UClass* Z_Construct_UClass_AFloorRaft_NoRegister();
GRADUATION_2024_API UClass* Z_Construct_UClass_UCustomFloatingPawnMovement_NoRegister();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Class AFloorRaft Function OnCurveUpdate
struct Z_Construct_UFunction_AFloorRaft_OnCurveUpdate_Statics
{
	struct FloorRaft_eventOnCurveUpdate_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pawn/FloorRaft.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFloorRaft_OnCurveUpdate_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloorRaft_eventOnCurveUpdate_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFloorRaft_OnCurveUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorRaft_OnCurveUpdate_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorRaft_OnCurveUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorRaft_OnCurveUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorRaft, nullptr, "OnCurveUpdate", nullptr, nullptr, Z_Construct_UFunction_AFloorRaft_OnCurveUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorRaft_OnCurveUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFloorRaft_OnCurveUpdate_Statics::FloorRaft_eventOnCurveUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorRaft_OnCurveUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFloorRaft_OnCurveUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFloorRaft_OnCurveUpdate_Statics::FloorRaft_eventOnCurveUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFloorRaft_OnCurveUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFloorRaft_OnCurveUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFloorRaft::execOnCurveUpdate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCurveUpdate(Z_Param_Value);
	P_NATIVE_END;
}
// End Class AFloorRaft Function OnCurveUpdate

// Begin Class AFloorRaft Function StartAddRowForce
struct Z_Construct_UFunction_AFloorRaft_StartAddRowForce_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Pawn/FloorRaft.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorRaft_StartAddRowForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorRaft, nullptr, "StartAddRowForce", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorRaft_StartAddRowForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFloorRaft_StartAddRowForce_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFloorRaft_StartAddRowForce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFloorRaft_StartAddRowForce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFloorRaft::execStartAddRowForce)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartAddRowForce();
	P_NATIVE_END;
}
// End Class AFloorRaft Function StartAddRowForce

// Begin Class AFloorRaft Function StopAddRowForce
struct Z_Construct_UFunction_AFloorRaft_StopAddRowForce_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Pawn/FloorRaft.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorRaft_StopAddRowForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorRaft, nullptr, "StopAddRowForce", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorRaft_StopAddRowForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFloorRaft_StopAddRowForce_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFloorRaft_StopAddRowForce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFloorRaft_StopAddRowForce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFloorRaft::execStopAddRowForce)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopAddRowForce();
	P_NATIVE_END;
}
// End Class AFloorRaft Function StopAddRowForce

// Begin Class AFloorRaft
void AFloorRaft::StaticRegisterNativesAFloorRaft()
{
	UClass* Class = AFloorRaft::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnCurveUpdate", &AFloorRaft::execOnCurveUpdate },
		{ "StartAddRowForce", &AFloorRaft::execStartAddRowForce },
		{ "StopAddRowForce", &AFloorRaft::execStopAddRowForce },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFloorRaft);
UClass* Z_Construct_UClass_AFloorRaft_NoRegister()
{
	return AFloorRaft::StaticClass();
}
struct Z_Construct_UClass_AFloorRaft_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Pawn/FloorRaft.h" },
		{ "ModuleRelativePath", "Public/Pawn/FloorRaft.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnMovementComponent_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawn/FloorRaft.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_cameraBoom_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawn/FloorRaft.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_camera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawn/FloorRaft.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_floorRafteMesh_MetaData[] = {
		{ "Category", "FloorRaft Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawn/FloorRaft.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_floorRaftCollision_MetaData[] = {
		{ "Category", "FloorRaft Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawn/FloorRaft.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerStandLocation_MetaData[] = {
		{ "Category", "FloorRaft Player Stand Location" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawn/FloorRaft.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimelineComponent_MetaData[] = {
		{ "Category", "Timeline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawn/FloorRaft.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Pawn/FloorRaft.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Pawn/FloorRaft.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateMinSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Pawn/FloorRaft.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sinkForce_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Pawn/FloorRaft.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecelerationCurve_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Pawn/FloorRaft.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatCurve_MetaData[] = {
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "Public/Pawn/FloorRaft.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowAnimeState_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Pawn/FloorRaft.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnMovementComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_cameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_floorRafteMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_floorRaftCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerStandLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TimelineComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateMinSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_sinkForce;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DecelerationCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FloatCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RowAnimeState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFloorRaft_OnCurveUpdate, "OnCurveUpdate" }, // 2407869789
		{ &Z_Construct_UFunction_AFloorRaft_StartAddRowForce, "StartAddRowForce" }, // 106371192
		{ &Z_Construct_UFunction_AFloorRaft_StopAddRowForce, "StopAddRowForce" }, // 436793117
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloorRaft>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorRaft_Statics::NewProp_PawnMovementComponent = { "PawnMovementComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorRaft, PawnMovementComponent), Z_Construct_UClass_UCustomFloatingPawnMovement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnMovementComponent_MetaData), NewProp_PawnMovementComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorRaft_Statics::NewProp_cameraBoom = { "cameraBoom", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorRaft, cameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_cameraBoom_MetaData), NewProp_cameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorRaft_Statics::NewProp_camera = { "camera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorRaft, camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_camera_MetaData), NewProp_camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorRaft_Statics::NewProp_floorRafteMesh = { "floorRafteMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorRaft, floorRafteMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_floorRafteMesh_MetaData), NewProp_floorRafteMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorRaft_Statics::NewProp_floorRaftCollision = { "floorRaftCollision", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorRaft, floorRaftCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_floorRaftCollision_MetaData), NewProp_floorRaftCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorRaft_Statics::NewProp_PlayerStandLocation = { "PlayerStandLocation", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorRaft, PlayerStandLocation), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerStandLocation_MetaData), NewProp_PlayerStandLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorRaft_Statics::NewProp_TimelineComponent = { "TimelineComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorRaft, TimelineComponent), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimelineComponent_MetaData), NewProp_TimelineComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFloorRaft_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorRaft, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFloorRaft_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorRaft, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeed_MetaData), NewProp_MovementSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFloorRaft_Statics::NewProp_RotateMinSpeed = { "RotateMinSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorRaft, RotateMinSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateMinSpeed_MetaData), NewProp_RotateMinSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFloorRaft_Statics::NewProp_sinkForce = { "sinkForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorRaft, sinkForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sinkForce_MetaData), NewProp_sinkForce_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorRaft_Statics::NewProp_DecelerationCurve = { "DecelerationCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorRaft, DecelerationCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecelerationCurve_MetaData), NewProp_DecelerationCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorRaft_Statics::NewProp_FloatCurve = { "FloatCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorRaft, FloatCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatCurve_MetaData), NewProp_FloatCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFloorRaft_Statics::NewProp_RowAnimeState = { "RowAnimeState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorRaft, RowAnimeState), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowAnimeState_MetaData), NewProp_RowAnimeState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloorRaft_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorRaft_Statics::NewProp_PawnMovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorRaft_Statics::NewProp_cameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorRaft_Statics::NewProp_camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorRaft_Statics::NewProp_floorRafteMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorRaft_Statics::NewProp_floorRaftCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorRaft_Statics::NewProp_PlayerStandLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorRaft_Statics::NewProp_TimelineComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorRaft_Statics::NewProp_RotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorRaft_Statics::NewProp_MovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorRaft_Statics::NewProp_RotateMinSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorRaft_Statics::NewProp_sinkForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorRaft_Statics::NewProp_DecelerationCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorRaft_Statics::NewProp_FloatCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorRaft_Statics::NewProp_RowAnimeState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorRaft_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFloorRaft_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorRaft_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFloorRaft_Statics::ClassParams = {
	&AFloorRaft::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFloorRaft_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFloorRaft_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorRaft_Statics::Class_MetaDataParams), Z_Construct_UClass_AFloorRaft_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFloorRaft()
{
	if (!Z_Registration_Info_UClass_AFloorRaft.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFloorRaft.OuterSingleton, Z_Construct_UClass_AFloorRaft_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFloorRaft.OuterSingleton;
}
template<> GRADUATION_2024_API UClass* StaticClass<AFloorRaft>()
{
	return AFloorRaft::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFloorRaft);
AFloorRaft::~AFloorRaft() {}
// End Class AFloorRaft

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Pawn_FloorRaft_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFloorRaft, AFloorRaft::StaticClass, TEXT("AFloorRaft"), &Z_Registration_Info_UClass_AFloorRaft, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFloorRaft), 1024376205U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Pawn_FloorRaft_h_1366208434(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Pawn_FloorRaft_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Pawn_FloorRaft_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
