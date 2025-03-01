// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/MovementComponent/PlayerCharacterMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCharacterMovementComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
GRADUATION_2024_API UClass* Z_Construct_UClass_UPlayerCharacterMovementComponent();
GRADUATION_2024_API UClass* Z_Construct_UClass_UPlayerCharacterMovementComponent_NoRegister();
GRADUATION_2024_API UEnum* Z_Construct_UEnum_Graduation_2024_ECustomMovementMode();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Enum ECustomMovementMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECustomMovementMode;
static UEnum* ECustomMovementMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECustomMovementMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECustomMovementMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Graduation_2024_ECustomMovementMode, (UObject*)Z_Construct_UPackage__Script_Graduation_2024(), TEXT("ECustomMovementMode"));
	}
	return Z_Registration_Info_UEnum_ECustomMovementMode.OuterSingleton;
}
template<> GRADUATION_2024_API UEnum* StaticEnum<ECustomMovementMode::Type>()
{
	return ECustomMovementMode_StaticEnum();
}
struct Z_Construct_UEnum_Graduation_2024_ECustomMovementMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovementComponent/PlayerCharacterMovementComponent.h" },
		{ "MOVE_Climb.DisplayName", "Climb Mode" },
		{ "MOVE_Climb.Name", "ECustomMovementMode::MOVE_Climb" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECustomMovementMode::MOVE_Climb", (int64)ECustomMovementMode::MOVE_Climb },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Graduation_2024_ECustomMovementMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Graduation_2024,
	nullptr,
	"ECustomMovementMode",
	"ECustomMovementMode::Type",
	Z_Construct_UEnum_Graduation_2024_ECustomMovementMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Graduation_2024_ECustomMovementMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Graduation_2024_ECustomMovementMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Graduation_2024_ECustomMovementMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Graduation_2024_ECustomMovementMode()
{
	if (!Z_Registration_Info_UEnum_ECustomMovementMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECustomMovementMode.InnerSingleton, Z_Construct_UEnum_Graduation_2024_ECustomMovementMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECustomMovementMode.InnerSingleton;
}
// End Enum ECustomMovementMode

// Begin Class UPlayerCharacterMovementComponent Function OnClimbMontageEnded
struct Z_Construct_UFunction_UPlayerCharacterMovementComponent_OnClimbMontageEnded_Statics
{
	struct PlayerCharacterMovementComponent_eventOnClimbMontageEnded_Parms
	{
		UAnimMontage* Montage;
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovementComponent/PlayerCharacterMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerCharacterMovementComponent_OnClimbMontageEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacterMovementComponent_eventOnClimbMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayerCharacterMovementComponent_OnClimbMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((PlayerCharacterMovementComponent_eventOnClimbMontageEnded_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerCharacterMovementComponent_OnClimbMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerCharacterMovementComponent_eventOnClimbMontageEnded_Parms), &Z_Construct_UFunction_UPlayerCharacterMovementComponent_OnClimbMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerCharacterMovementComponent_OnClimbMontageEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerCharacterMovementComponent_OnClimbMontageEnded_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerCharacterMovementComponent_OnClimbMontageEnded_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterMovementComponent_OnClimbMontageEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacterMovementComponent_OnClimbMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacterMovementComponent, nullptr, "OnClimbMontageEnded", nullptr, nullptr, Z_Construct_UFunction_UPlayerCharacterMovementComponent_OnClimbMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterMovementComponent_OnClimbMontageEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerCharacterMovementComponent_OnClimbMontageEnded_Statics::PlayerCharacterMovementComponent_eventOnClimbMontageEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterMovementComponent_OnClimbMontageEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerCharacterMovementComponent_OnClimbMontageEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerCharacterMovementComponent_OnClimbMontageEnded_Statics::PlayerCharacterMovementComponent_eventOnClimbMontageEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerCharacterMovementComponent_OnClimbMontageEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerCharacterMovementComponent_OnClimbMontageEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerCharacterMovementComponent::execOnClimbMontageEnded)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_UBOOL(Z_Param_bInterrupted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnClimbMontageEnded(Z_Param_Montage,Z_Param_bInterrupted);
	P_NATIVE_END;
}
// End Class UPlayerCharacterMovementComponent Function OnClimbMontageEnded

// Begin Class UPlayerCharacterMovementComponent
void UPlayerCharacterMovementComponent::StaticRegisterNativesUPlayerCharacterMovementComponent()
{
	UClass* Class = UPlayerCharacterMovementComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnClimbMontageEnded", &UPlayerCharacterMovementComponent::execOnClimbMontageEnded },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerCharacterMovementComponent);
UClass* Z_Construct_UClass_UPlayerCharacterMovementComponent_NoRegister()
{
	return UPlayerCharacterMovementComponent::StaticClass();
}
struct Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MovementComponent/PlayerCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/MovementComponent/PlayerCharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningPlayerAnimInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovementComponent/PlayerCharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleTraceClimbableSurfaceTraceTypes_MetaData[] = {
		{ "Category", "Character Movement: Climbing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xe6\xb4\xa2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe2\xb5\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MovementComponent/PlayerCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xe6\xb4\xa2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe2\xb5\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineTraceClibableSurfaceTraceTypes_MetaData[] = {
		{ "Category", "Character Movement: Climbing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xe6\xb4\xa2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xbc\xef\xbf\xbd\xe2\xb5\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MovementComponent/PlayerCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xe6\xb4\xa2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xbc\xef\xbf\xbd\xe2\xb5\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbCapsuleTraceRadius_MetaData[] = {
		{ "Category", "Character Movement: Climbing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xeb\xbe\xb6\n" },
#endif
		{ "ModuleRelativePath", "Public/MovementComponent/PlayerCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xeb\xbe\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClibCapsuleTraceHalfHeight_MetaData[] = {
		{ "Category", "Character Movement: Climbing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MovementComponent/PlayerCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxBreakClimbDeceleration_MetaData[] = {
		{ "Category", "Character Movement: Climbing" },
		{ "ModuleRelativePath", "Public/MovementComponent/PlayerCharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxClimbSpeed_MetaData[] = {
		{ "Category", "Character Movement: Climbing" },
		{ "ModuleRelativePath", "Public/MovementComponent/PlayerCharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxClimbAcceleration_MetaData[] = {
		{ "Category", "Character Movement: Climbing" },
		{ "ModuleRelativePath", "Public/MovementComponent/PlayerCharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdleToClimbMontage_MetaData[] = {
		{ "Category", "Character Movement: Climbing|Montage" },
		{ "ModuleRelativePath", "Public/MovementComponent/PlayerCharacterMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPlayerAnimInstance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CapsuleTraceClimbableSurfaceTraceTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CapsuleTraceClimbableSurfaceTraceTypes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LineTraceClibableSurfaceTraceTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LineTraceClibableSurfaceTraceTypes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClimbCapsuleTraceRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClibCapsuleTraceHalfHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxBreakClimbDeceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxClimbSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxClimbAcceleration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IdleToClimbMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerCharacterMovementComponent_OnClimbMontageEnded, "OnClimbMontageEnded" }, // 1844727055
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerCharacterMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::NewProp_OwningPlayerAnimInstance = { "OwningPlayerAnimInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerCharacterMovementComponent, OwningPlayerAnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningPlayerAnimInstance_MetaData), NewProp_OwningPlayerAnimInstance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::NewProp_CapsuleTraceClimbableSurfaceTraceTypes_Inner = { "CapsuleTraceClimbableSurfaceTraceTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::NewProp_CapsuleTraceClimbableSurfaceTraceTypes = { "CapsuleTraceClimbableSurfaceTraceTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerCharacterMovementComponent, CapsuleTraceClimbableSurfaceTraceTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleTraceClimbableSurfaceTraceTypes_MetaData), NewProp_CapsuleTraceClimbableSurfaceTraceTypes_MetaData) }; // 1798967895
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::NewProp_LineTraceClibableSurfaceTraceTypes_Inner = { "LineTraceClibableSurfaceTraceTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::NewProp_LineTraceClibableSurfaceTraceTypes = { "LineTraceClibableSurfaceTraceTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerCharacterMovementComponent, LineTraceClibableSurfaceTraceTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineTraceClibableSurfaceTraceTypes_MetaData), NewProp_LineTraceClibableSurfaceTraceTypes_MetaData) }; // 1798967895
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::NewProp_ClimbCapsuleTraceRadius = { "ClimbCapsuleTraceRadius", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerCharacterMovementComponent, ClimbCapsuleTraceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbCapsuleTraceRadius_MetaData), NewProp_ClimbCapsuleTraceRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::NewProp_ClibCapsuleTraceHalfHeight = { "ClibCapsuleTraceHalfHeight", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerCharacterMovementComponent, ClibCapsuleTraceHalfHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClibCapsuleTraceHalfHeight_MetaData), NewProp_ClibCapsuleTraceHalfHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::NewProp_MaxBreakClimbDeceleration = { "MaxBreakClimbDeceleration", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerCharacterMovementComponent, MaxBreakClimbDeceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBreakClimbDeceleration_MetaData), NewProp_MaxBreakClimbDeceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::NewProp_MaxClimbSpeed = { "MaxClimbSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerCharacterMovementComponent, MaxClimbSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxClimbSpeed_MetaData), NewProp_MaxClimbSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::NewProp_MaxClimbAcceleration = { "MaxClimbAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerCharacterMovementComponent, MaxClimbAcceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxClimbAcceleration_MetaData), NewProp_MaxClimbAcceleration_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::NewProp_IdleToClimbMontage = { "IdleToClimbMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerCharacterMovementComponent, IdleToClimbMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdleToClimbMontage_MetaData), NewProp_IdleToClimbMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::NewProp_OwningPlayerAnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::NewProp_CapsuleTraceClimbableSurfaceTraceTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::NewProp_CapsuleTraceClimbableSurfaceTraceTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::NewProp_LineTraceClibableSurfaceTraceTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::NewProp_LineTraceClibableSurfaceTraceTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::NewProp_ClimbCapsuleTraceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::NewProp_ClibCapsuleTraceHalfHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::NewProp_MaxBreakClimbDeceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::NewProp_MaxClimbSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::NewProp_MaxClimbAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::NewProp_IdleToClimbMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::ClassParams = {
	&UPlayerCharacterMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerCharacterMovementComponent()
{
	if (!Z_Registration_Info_UClass_UPlayerCharacterMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerCharacterMovementComponent.OuterSingleton;
}
template<> GRADUATION_2024_API UClass* StaticClass<UPlayerCharacterMovementComponent>()
{
	return UPlayerCharacterMovementComponent::StaticClass();
}
UPlayerCharacterMovementComponent::UPlayerCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerCharacterMovementComponent);
UPlayerCharacterMovementComponent::~UPlayerCharacterMovementComponent() {}
// End Class UPlayerCharacterMovementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_MovementComponent_PlayerCharacterMovementComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECustomMovementMode_StaticEnum, TEXT("ECustomMovementMode"), &Z_Registration_Info_UEnum_ECustomMovementMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1900158893U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerCharacterMovementComponent, UPlayerCharacterMovementComponent::StaticClass, TEXT("UPlayerCharacterMovementComponent"), &Z_Registration_Info_UClass_UPlayerCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerCharacterMovementComponent), 197021557U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_MovementComponent_PlayerCharacterMovementComponent_h_1760642040(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_MovementComponent_PlayerCharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_MovementComponent_PlayerCharacterMovementComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_MovementComponent_PlayerCharacterMovementComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_2024_Source_Graduation_2024_Public_MovementComponent_PlayerCharacterMovementComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
