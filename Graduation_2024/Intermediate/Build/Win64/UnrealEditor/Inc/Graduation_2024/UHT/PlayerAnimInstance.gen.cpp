// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/Animation/PlayerAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAnimInstance() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
GRADUATION_2024_API UClass* Z_Construct_UClass_AFloorRaft_NoRegister();
GRADUATION_2024_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
GRADUATION_2024_API UClass* Z_Construct_UClass_UPlayerAnimInstance();
GRADUATION_2024_API UClass* Z_Construct_UClass_UPlayerAnimInstance_NoRegister();
GRADUATION_2024_API UClass* Z_Construct_UClass_UPlayerCharacterMovementComponent_NoRegister();
GRADUATION_2024_API UEnum* Z_Construct_UEnum_Graduation_2024_ECustomPlayerStatus();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Class UPlayerAnimInstance Function OnStartAddRowForceNotify
struct Z_Construct_UFunction_UPlayerAnimInstance_OnStartAddRowForceNotify_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/PlayerAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnimInstance_OnStartAddRowForceNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnimInstance, nullptr, "OnStartAddRowForceNotify", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_OnStartAddRowForceNotify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAnimInstance_OnStartAddRowForceNotify_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerAnimInstance_OnStartAddRowForceNotify()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAnimInstance_OnStartAddRowForceNotify_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerAnimInstance::execOnStartAddRowForceNotify)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStartAddRowForceNotify();
	P_NATIVE_END;
}
// End Class UPlayerAnimInstance Function OnStartAddRowForceNotify

// Begin Class UPlayerAnimInstance Function OnStopAddRowForceNotify
struct Z_Construct_UFunction_UPlayerAnimInstance_OnStopAddRowForceNotify_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/PlayerAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnimInstance_OnStopAddRowForceNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnimInstance, nullptr, "OnStopAddRowForceNotify", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_OnStopAddRowForceNotify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAnimInstance_OnStopAddRowForceNotify_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerAnimInstance_OnStopAddRowForceNotify()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAnimInstance_OnStopAddRowForceNotify_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerAnimInstance::execOnStopAddRowForceNotify)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStopAddRowForceNotify();
	P_NATIVE_END;
}
// End Class UPlayerAnimInstance Function OnStopAddRowForceNotify

// Begin Class UPlayerAnimInstance
void UPlayerAnimInstance::StaticRegisterNativesUPlayerAnimInstance()
{
	UClass* Class = UPlayerAnimInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnStartAddRowForceNotify", &UPlayerAnimInstance::execOnStartAddRowForceNotify },
		{ "OnStopAddRowForceNotify", &UPlayerAnimInstance::execOnStopAddRowForceNotify },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerAnimInstance);
UClass* Z_Construct_UClass_UPlayerAnimInstance_NoRegister()
{
	return UPlayerAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UPlayerAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/PlayerAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animation/PlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/PlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCMC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Animation/PlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorRaft_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/PlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundSpeed_MetaData[] = {
		{ "Category", "Reference" },
		{ "ModuleRelativePath", "Public/Animation/PlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundDirection_MetaData[] = {
		{ "Category", "Reference" },
		{ "ModuleRelativePath", "Public/Animation/PlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirSpeed_MetaData[] = {
		{ "Category", "Reference" },
		{ "ModuleRelativePath", "Public/Animation/PlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldMove_MetaData[] = {
		{ "Category", "Reference" },
		{ "ModuleRelativePath", "Public/Animation/PlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFalling_MetaData[] = {
		{ "Category", "Reference" },
		{ "ModuleRelativePath", "Public/Animation/PlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsClimbing_MetaData[] = {
		{ "Category", "Reference" },
		{ "ModuleRelativePath", "Public/Animation/PlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbVelocity_MetaData[] = {
		{ "Category", "Reference" },
		{ "ModuleRelativePath", "Public/Animation/PlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCurrentStatus_MetaData[] = {
		{ "Category", "Reference" },
		{ "ModuleRelativePath", "Public/Animation/PlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowlingState_MetaData[] = {
		{ "Category", "Reference" },
		{ "ModuleRelativePath", "Public/Animation/PlayerAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCMC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FloorRaft;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AirSpeed;
	static void NewProp_bShouldMove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldMove;
	static void NewProp_bIsFalling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFalling;
	static void NewProp_bIsClimbing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsClimbing;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClimbVelocity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlayerCurrentStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlayerCurrentStatus;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RowlingState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerAnimInstance_OnStartAddRowForceNotify, "OnStartAddRowForceNotify" }, // 3444394216
		{ &Z_Construct_UFunction_UPlayerAnimInstance_OnStopAddRowForceNotify, "OnStopAddRowForceNotify" }, // 2839056301
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, Player), Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Player_MetaData), NewProp_Player_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_PlayerCMC = { "PlayerCMC", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, PlayerCMC), Z_Construct_UClass_UPlayerCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCMC_MetaData), NewProp_PlayerCMC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_FloorRaft = { "FloorRaft", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, FloorRaft), Z_Construct_UClass_AFloorRaft_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorRaft_MetaData), NewProp_FloorRaft_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_GroundSpeed = { "GroundSpeed", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, GroundSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundSpeed_MetaData), NewProp_GroundSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_GroundDirection = { "GroundDirection", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, GroundDirection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundDirection_MetaData), NewProp_GroundDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_AirSpeed = { "AirSpeed", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, AirSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirSpeed_MetaData), NewProp_AirSpeed_MetaData) };
void Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_bShouldMove_SetBit(void* Obj)
{
	((UPlayerAnimInstance*)Obj)->bShouldMove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_bShouldMove = { "bShouldMove", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlayerAnimInstance), &Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_bShouldMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldMove_MetaData), NewProp_bShouldMove_MetaData) };
void Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_bIsFalling_SetBit(void* Obj)
{
	((UPlayerAnimInstance*)Obj)->bIsFalling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_bIsFalling = { "bIsFalling", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlayerAnimInstance), &Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_bIsFalling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFalling_MetaData), NewProp_bIsFalling_MetaData) };
void Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_bIsClimbing_SetBit(void* Obj)
{
	((UPlayerAnimInstance*)Obj)->bIsClimbing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_bIsClimbing = { "bIsClimbing", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlayerAnimInstance), &Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_bIsClimbing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsClimbing_MetaData), NewProp_bIsClimbing_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_ClimbVelocity = { "ClimbVelocity", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, ClimbVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbVelocity_MetaData), NewProp_ClimbVelocity_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_PlayerCurrentStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_PlayerCurrentStatus = { "PlayerCurrentStatus", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, PlayerCurrentStatus), Z_Construct_UEnum_Graduation_2024_ECustomPlayerStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCurrentStatus_MetaData), NewProp_PlayerCurrentStatus_MetaData) }; // 1372204461
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_RowlingState = { "RowlingState", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, RowlingState), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowlingState_MetaData), NewProp_RowlingState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_PlayerCMC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_FloorRaft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_GroundSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_GroundDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_AirSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_bShouldMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_bIsFalling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_bIsClimbing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_ClimbVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_PlayerCurrentStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_PlayerCurrentStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_RowlingState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAnimInstance_Statics::ClassParams = {
	&UPlayerAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerAnimInstance()
{
	if (!Z_Registration_Info_UClass_UPlayerAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerAnimInstance.OuterSingleton, Z_Construct_UClass_UPlayerAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerAnimInstance.OuterSingleton;
}
template<> GRADUATION_2024_API UClass* StaticClass<UPlayerAnimInstance>()
{
	return UPlayerAnimInstance::StaticClass();
}
UPlayerAnimInstance::UPlayerAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAnimInstance);
UPlayerAnimInstance::~UPlayerAnimInstance() {}
// End Class UPlayerAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Animation_PlayerAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerAnimInstance, UPlayerAnimInstance::StaticClass, TEXT("UPlayerAnimInstance"), &Z_Registration_Info_UClass_UPlayerAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerAnimInstance), 2470649203U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Animation_PlayerAnimInstance_h_2231212898(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Animation_PlayerAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Animation_PlayerAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
