// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graduation_2024/Public/Character/Player/PlayerCharacter.h"
#include "Graduation_2024/Public/Character/Player/PlayerAttributes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GRADUATION_2024_API UClass* Z_Construct_UClass_APlayerCharacter();
GRADUATION_2024_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
GRADUATION_2024_API UClass* Z_Construct_UClass_UArchivalUW_NoRegister();
GRADUATION_2024_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
GRADUATION_2024_API UClass* Z_Construct_UClass_UPlayerAttributesInterface_NoRegister();
GRADUATION_2024_API UClass* Z_Construct_UClass_UPlayerAttributesUW_NoRegister();
GRADUATION_2024_API UClass* Z_Construct_UClass_UPlayerCharacterMovementComponent_NoRegister();
GRADUATION_2024_API UClass* Z_Construct_UClass_UPlayerSkillComponent_NoRegister();
GRADUATION_2024_API UEnum* Z_Construct_UEnum_Graduation_2024_EArchiveID();
GRADUATION_2024_API UEnum* Z_Construct_UEnum_Graduation_2024_ECustomPlayerStatus();
GRADUATION_2024_API UEnum* Z_Construct_UEnum_Graduation_2024_EPlayerAttributes();
GRADUATION_2024_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerAttributes();
UPackage* Z_Construct_UPackage__Script_Graduation_2024();
// End Cross Module References

// Begin Class APlayerCharacter Function DisablePlayerInput
struct Z_Construct_UFunction_APlayerCharacter_DisablePlayerInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Custom Controller Function" },
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_DisablePlayerInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "DisablePlayerInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_DisablePlayerInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_DisablePlayerInput_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerCharacter_DisablePlayerInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_DisablePlayerInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execDisablePlayerInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisablePlayerInput();
	P_NATIVE_END;
}
// End Class APlayerCharacter Function DisablePlayerInput

// Begin Class APlayerCharacter Function EnablePlayerInput
struct Z_Construct_UFunction_APlayerCharacter_EnablePlayerInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Custom Controller Function" },
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_EnablePlayerInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "EnablePlayerInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_EnablePlayerInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_EnablePlayerInput_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerCharacter_EnablePlayerInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_EnablePlayerInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execEnablePlayerInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnablePlayerInput();
	P_NATIVE_END;
}
// End Class APlayerCharacter Function EnablePlayerInput

// Begin Class APlayerCharacter Function FaceActor
struct Z_Construct_UFunction_APlayerCharacter_FaceActor_Statics
{
	struct PlayerCharacter_eventFaceActor_Parms
	{
		AActor* TargetActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_FaceActor_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventFaceActor_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_FaceActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_FaceActor_Statics::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_FaceActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_FaceActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "FaceActor", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_FaceActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_FaceActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_FaceActor_Statics::PlayerCharacter_eventFaceActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_FaceActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_FaceActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_FaceActor_Statics::PlayerCharacter_eventFaceActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_FaceActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_FaceActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execFaceActor)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FaceActor(Z_Param_TargetActor);
	P_NATIVE_END;
}
// End Class APlayerCharacter Function FaceActor

// Begin Class APlayerCharacter Function GetInventoryComponent
struct Z_Construct_UFunction_APlayerCharacter_GetInventoryComponent_Statics
{
	struct PlayerCharacter_eventGetInventoryComponent_Parms
	{
		UInventoryComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_GetInventoryComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventGetInventoryComponent_Parms, ReturnValue), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_GetInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_GetInventoryComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetInventoryComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_GetInventoryComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "GetInventoryComponent", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_GetInventoryComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetInventoryComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_GetInventoryComponent_Statics::PlayerCharacter_eventGetInventoryComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetInventoryComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_GetInventoryComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_GetInventoryComponent_Statics::PlayerCharacter_eventGetInventoryComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_GetInventoryComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_GetInventoryComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execGetInventoryComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInventoryComponent**)Z_Param__Result=P_THIS->GetInventoryComponent();
	P_NATIVE_END;
}
// End Class APlayerCharacter Function GetInventoryComponent

// Begin Class APlayerCharacter Function InitArchivalUW
struct Z_Construct_UFunction_APlayerCharacter_InitArchivalUW_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_InitArchivalUW_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "InitArchivalUW", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_InitArchivalUW_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_InitArchivalUW_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerCharacter_InitArchivalUW()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_InitArchivalUW_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execInitArchivalUW)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitArchivalUW();
	P_NATIVE_END;
}
// End Class APlayerCharacter Function InitArchivalUW

// Begin Class APlayerCharacter Function InitArttributesUW
struct Z_Construct_UFunction_APlayerCharacter_InitArttributesUW_Statics
{
	struct PlayerCharacter_eventInitArttributesUW_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerCharacter_InitArttributesUW_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventInitArttributesUW_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_InitArttributesUW_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_InitArttributesUW_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_InitArttributesUW_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_InitArttributesUW_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "InitArttributesUW", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_InitArttributesUW_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_InitArttributesUW_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_InitArttributesUW_Statics::PlayerCharacter_eventInitArttributesUW_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_InitArttributesUW_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_InitArttributesUW_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_InitArttributesUW_Statics::PlayerCharacter_eventInitArttributesUW_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_InitArttributesUW()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_InitArttributesUW_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execInitArttributesUW)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->InitArttributesUW();
	P_NATIVE_END;
}
// End Class APlayerCharacter Function InitArttributesUW

// Begin Class APlayerCharacter Function MontageToPlay
struct Z_Construct_UFunction_APlayerCharacter_MontageToPlay_Statics
{
	struct PlayerCharacter_eventMontageToPlay_Parms
	{
		UAnimMontage* MonteageToPlay;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Custom Function" },
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MonteageToPlay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_MontageToPlay_Statics::NewProp_MonteageToPlay = { "MonteageToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventMontageToPlay_Parms, MonteageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_MontageToPlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_MontageToPlay_Statics::NewProp_MonteageToPlay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_MontageToPlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_MontageToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "MontageToPlay", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_MontageToPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_MontageToPlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_MontageToPlay_Statics::PlayerCharacter_eventMontageToPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_MontageToPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_MontageToPlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_MontageToPlay_Statics::PlayerCharacter_eventMontageToPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_MontageToPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_MontageToPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execMontageToPlay)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_MonteageToPlay);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MontageToPlay(Z_Param_MonteageToPlay);
	P_NATIVE_END;
}
// End Class APlayerCharacter Function MontageToPlay

// Begin Class APlayerCharacter Function MoveToTarget
struct Z_Construct_UFunction_APlayerCharacter_MoveToTarget_Statics
{
	struct PlayerCharacter_eventMoveToTarget_Parms
	{
		FVector TargetLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION()\n//void Move(const FInputActionValue& Value);\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION()\nvoid Move(const FInputActionValue& Value);" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCharacter_MoveToTarget_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventMoveToTarget_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_MoveToTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_MoveToTarget_Statics::NewProp_TargetLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_MoveToTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_MoveToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "MoveToTarget", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_MoveToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_MoveToTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_MoveToTarget_Statics::PlayerCharacter_eventMoveToTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_MoveToTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_MoveToTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_MoveToTarget_Statics::PlayerCharacter_eventMoveToTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_MoveToTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_MoveToTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execMoveToTarget)
{
	P_GET_STRUCT(FVector,Z_Param_TargetLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveToTarget(Z_Param_TargetLocation);
	P_NATIVE_END;
}
// End Class APlayerCharacter Function MoveToTarget

// Begin Class APlayerCharacter Function ObjectInteraction
struct Z_Construct_UFunction_APlayerCharacter_ObjectInteraction_Statics
{
	struct PlayerCharacter_eventObjectInteraction_Parms
	{
		APawn* ControllerCurrentControlObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION()\n//void Look(const FInputActionValue& Value);\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION()\nvoid Look(const FInputActionValue& Value);" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControllerCurrentControlObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_ObjectInteraction_Statics::NewProp_ControllerCurrentControlObject = { "ControllerCurrentControlObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventObjectInteraction_Parms, ControllerCurrentControlObject), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_ObjectInteraction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_ObjectInteraction_Statics::NewProp_ControllerCurrentControlObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_ObjectInteraction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_ObjectInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "ObjectInteraction", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_ObjectInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_ObjectInteraction_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_ObjectInteraction_Statics::PlayerCharacter_eventObjectInteraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_ObjectInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_ObjectInteraction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_ObjectInteraction_Statics::PlayerCharacter_eventObjectInteraction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_ObjectInteraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_ObjectInteraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execObjectInteraction)
{
	P_GET_OBJECT(APawn,Z_Param_ControllerCurrentControlObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ObjectInteraction(Z_Param_ControllerCurrentControlObject);
	P_NATIVE_END;
}
// End Class APlayerCharacter Function ObjectInteraction

// Begin Class APlayerCharacter Function OnTimelineUpdate
struct Z_Construct_UFunction_APlayerCharacter_OnTimelineUpdate_Statics
{
	struct PlayerCharacter_eventOnTimelineUpdate_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCharacter_OnTimelineUpdate_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventOnTimelineUpdate_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_OnTimelineUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnTimelineUpdate_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnTimelineUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_OnTimelineUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "OnTimelineUpdate", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_OnTimelineUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnTimelineUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_OnTimelineUpdate_Statics::PlayerCharacter_eventOnTimelineUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnTimelineUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_OnTimelineUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_OnTimelineUpdate_Statics::PlayerCharacter_eventOnTimelineUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_OnTimelineUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_OnTimelineUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execOnTimelineUpdate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTimelineUpdate(Z_Param_Value);
	P_NATIVE_END;
}
// End Class APlayerCharacter Function OnTimelineUpdate

// Begin Class APlayerCharacter Function StartInput
struct Z_Construct_UFunction_APlayerCharacter_StartInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_StartInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "StartInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_StartInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_StartInput_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerCharacter_StartInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_StartInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execStartInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartInput();
	P_NATIVE_END;
}
// End Class APlayerCharacter Function StartInput

// Begin Class APlayerCharacter Function StopInput
struct Z_Construct_UFunction_APlayerCharacter_StopInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_StopInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "StopInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_StopInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_StopInput_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerCharacter_StopInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_StopInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execStopInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopInput();
	P_NATIVE_END;
}
// End Class APlayerCharacter Function StopInput

// Begin Class APlayerCharacter
void APlayerCharacter::StaticRegisterNativesAPlayerCharacter()
{
	UClass* Class = APlayerCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DisablePlayerInput", &APlayerCharacter::execDisablePlayerInput },
		{ "EnablePlayerInput", &APlayerCharacter::execEnablePlayerInput },
		{ "FaceActor", &APlayerCharacter::execFaceActor },
		{ "GetInventoryComponent", &APlayerCharacter::execGetInventoryComponent },
		{ "InitArchivalUW", &APlayerCharacter::execInitArchivalUW },
		{ "InitArttributesUW", &APlayerCharacter::execInitArttributesUW },
		{ "MontageToPlay", &APlayerCharacter::execMontageToPlay },
		{ "MoveToTarget", &APlayerCharacter::execMoveToTarget },
		{ "ObjectInteraction", &APlayerCharacter::execObjectInteraction },
		{ "OnTimelineUpdate", &APlayerCharacter::execOnTimelineUpdate },
		{ "StartInput", &APlayerCharacter::execStartInput },
		{ "StopInput", &APlayerCharacter::execStopInput },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerCharacter);
UClass* Z_Construct_UClass_APlayerCharacter_NoRegister()
{
	return APlayerCharacter::StaticClass();
}
struct Z_Construct_UClass_APlayerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/Player/PlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_eplayerStatus_MetaData[] = {
		{ "Category", "Player State" },
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerHealthMax_MetaData[] = {
		{ "Category", "Player Attributes" },
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerEnergyMax_MetaData[] = {
		{ "Category", "Player Attributes" },
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerHealth_MetaData[] = {
		{ "Category", "Player Attributes" },
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerEnergy_MetaData[] = {
		{ "Category", "Player Attributes" },
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerDamage_MetaData[] = {
		{ "Category", "Player Attributes" },
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerMoveSpeed_MetaData[] = {
		{ "Category", "Player Attributes" },
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mainMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_cameraBoom_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_camera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerCMC_MetaData[] = {
		{ "Category", "Player Movement Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_fplayerAttributes_MetaData[] = {
		{ "Category", "Player Attribute" },
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_eplayerAttributes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimelineComponent_MetaData[] = {
		{ "Category", "TimeLine" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerAttributesUWClass_MetaData[] = {
		{ "Category", "UW|AttributesUW" },
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerAttributesUW_MetaData[] = {
		{ "Category", "UW|AttributesUW" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_archivalUWClass_MetaData[] = {
		{ "Category", "UW|ArchivalUW" },
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_archivalUW_MetaData[] = {
		{ "Category", "UW|ArchivalUW" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomRaftComponent_MetaData[] = {
		{ "Category", "Raft Colider" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_unlockedArchivalPointsIDArray_MetaData[] = {
		{ "Category", "Archival|Archival Point ID" },
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_unlockedArchivalPointsLocationArray_MetaData[] = {
		{ "Category", "Archival|Archival Ponit Location" },
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerSkillComponent_MetaData[] = {
		{ "Category", "Player Skill Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraCurve_MetaData[] = {
		{ "Category", "ShoulderCamera" },
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetCameraPos_MetaData[] = {
		{ "Category", "ShoulderCamera" },
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugLine_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceDistance_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryComponent_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerAnimInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScanToMontage_MetaData[] = {
		{ "Category", "Player Anim: Montage" },
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MayflyLocation_MetaData[] = {
		{ "Category", "Mayfly" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/Player/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_eplayerStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_eplayerStatus;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_playerHealthMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_playerEnergyMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_playerHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_playerEnergy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_playerDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_playerMoveSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mainMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_cameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_playerCMC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_fplayerAttributes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_eplayerAttributes_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_eplayerAttributes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TimelineComponent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_playerAttributesUWClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_playerAttributesUW;
	static const UECodeGen_Private::FClassPropertyParams NewProp_archivalUWClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_archivalUW;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomRaftComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_unlockedArchivalPointsIDArray_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_unlockedArchivalPointsIDArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_unlockedArchivalPointsIDArray;
	static const UECodeGen_Private::FStructPropertyParams NewProp_unlockedArchivalPointsLocationArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_unlockedArchivalPointsLocationArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_playerSkillComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetCameraPos;
	static void NewProp_bDrawDebugLine_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugLine;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerAnimInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScanToMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MayflyLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerCharacter_DisablePlayerInput, "DisablePlayerInput" }, // 418359345
		{ &Z_Construct_UFunction_APlayerCharacter_EnablePlayerInput, "EnablePlayerInput" }, // 3279759745
		{ &Z_Construct_UFunction_APlayerCharacter_FaceActor, "FaceActor" }, // 208253556
		{ &Z_Construct_UFunction_APlayerCharacter_GetInventoryComponent, "GetInventoryComponent" }, // 1754294199
		{ &Z_Construct_UFunction_APlayerCharacter_InitArchivalUW, "InitArchivalUW" }, // 606118510
		{ &Z_Construct_UFunction_APlayerCharacter_InitArttributesUW, "InitArttributesUW" }, // 1114154882
		{ &Z_Construct_UFunction_APlayerCharacter_MontageToPlay, "MontageToPlay" }, // 3923151444
		{ &Z_Construct_UFunction_APlayerCharacter_MoveToTarget, "MoveToTarget" }, // 103290349
		{ &Z_Construct_UFunction_APlayerCharacter_ObjectInteraction, "ObjectInteraction" }, // 3578676206
		{ &Z_Construct_UFunction_APlayerCharacter_OnTimelineUpdate, "OnTimelineUpdate" }, // 2055019603
		{ &Z_Construct_UFunction_APlayerCharacter_StartInput, "StartInput" }, // 2604429461
		{ &Z_Construct_UFunction_APlayerCharacter_StopInput, "StopInput" }, // 2672281633
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_eplayerStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_eplayerStatus = { "eplayerStatus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, eplayerStatus), Z_Construct_UEnum_Graduation_2024_ECustomPlayerStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_eplayerStatus_MetaData), NewProp_eplayerStatus_MetaData) }; // 1372204461
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerHealthMax = { "playerHealthMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, playerHealthMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerHealthMax_MetaData), NewProp_playerHealthMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerEnergyMax = { "playerEnergyMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, playerEnergyMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerEnergyMax_MetaData), NewProp_playerEnergyMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerHealth = { "playerHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, playerHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerHealth_MetaData), NewProp_playerHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerEnergy = { "playerEnergy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, playerEnergy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerEnergy_MetaData), NewProp_playerEnergy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerDamage = { "playerDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, playerDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerDamage_MetaData), NewProp_playerDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerMoveSpeed = { "playerMoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, playerMoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerMoveSpeed_MetaData), NewProp_playerMoveSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_mainMappingContext = { "mainMappingContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, mainMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mainMappingContext_MetaData), NewProp_mainMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_cameraBoom = { "cameraBoom", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, cameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_cameraBoom_MetaData), NewProp_cameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_camera = { "camera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_camera_MetaData), NewProp_camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerCMC = { "playerCMC", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, playerCMC), Z_Construct_UClass_UPlayerCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerCMC_MetaData), NewProp_playerCMC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_fplayerAttributes = { "fplayerAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, fplayerAttributes), Z_Construct_UScriptStruct_FPlayerAttributes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fplayerAttributes_MetaData), NewProp_fplayerAttributes_MetaData) }; // 114646632
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_eplayerAttributes_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_eplayerAttributes = { "eplayerAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, eplayerAttributes), Z_Construct_UEnum_Graduation_2024_EPlayerAttributes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_eplayerAttributes_MetaData), NewProp_eplayerAttributes_MetaData) }; // 144009962
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_TimelineComponent = { "TimelineComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, TimelineComponent), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimelineComponent_MetaData), NewProp_TimelineComponent_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerAttributesUWClass = { "playerAttributesUWClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, playerAttributesUWClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPlayerAttributesUW_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerAttributesUWClass_MetaData), NewProp_playerAttributesUWClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerAttributesUW = { "playerAttributesUW", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, playerAttributesUW), Z_Construct_UClass_UPlayerAttributesUW_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerAttributesUW_MetaData), NewProp_playerAttributesUW_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_archivalUWClass = { "archivalUWClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, archivalUWClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UArchivalUW_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_archivalUWClass_MetaData), NewProp_archivalUWClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_archivalUW = { "archivalUW", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, archivalUW), Z_Construct_UClass_UArchivalUW_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_archivalUW_MetaData), NewProp_archivalUW_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CustomRaftComponent = { "CustomRaftComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, CustomRaftComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomRaftComponent_MetaData), NewProp_CustomRaftComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_unlockedArchivalPointsIDArray_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_unlockedArchivalPointsIDArray_Inner = { "unlockedArchivalPointsIDArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Graduation_2024_EArchiveID, METADATA_PARAMS(0, nullptr) }; // 1920841488
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_unlockedArchivalPointsIDArray = { "unlockedArchivalPointsIDArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, unlockedArchivalPointsIDArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_unlockedArchivalPointsIDArray_MetaData), NewProp_unlockedArchivalPointsIDArray_MetaData) }; // 1920841488
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_unlockedArchivalPointsLocationArray_Inner = { "unlockedArchivalPointsLocationArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_unlockedArchivalPointsLocationArray = { "unlockedArchivalPointsLocationArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, unlockedArchivalPointsLocationArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_unlockedArchivalPointsLocationArray_MetaData), NewProp_unlockedArchivalPointsLocationArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerSkillComponent = { "playerSkillComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, playerSkillComponent), Z_Construct_UClass_UPlayerSkillComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerSkillComponent_MetaData), NewProp_playerSkillComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CameraCurve = { "CameraCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, CameraCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraCurve_MetaData), NewProp_CameraCurve_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_TargetCameraPos = { "TargetCameraPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, TargetCameraPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetCameraPos_MetaData), NewProp_TargetCameraPos_MetaData) };
void Z_Construct_UClass_APlayerCharacter_Statics::NewProp_bDrawDebugLine_SetBit(void* Obj)
{
	((APlayerCharacter*)Obj)->bDrawDebugLine = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_bDrawDebugLine = { "bDrawDebugLine", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlayerCharacter), &Z_Construct_UClass_APlayerCharacter_Statics::NewProp_bDrawDebugLine_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugLine_MetaData), NewProp_bDrawDebugLine_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, TraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceDistance_MetaData), NewProp_TraceDistance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_InventoryComponent = { "InventoryComponent", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, InventoryComponent), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryComponent_MetaData), NewProp_InventoryComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, TileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSize_MetaData), NewProp_TileSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_PlayerAnimInstance = { "PlayerAnimInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, PlayerAnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerAnimInstance_MetaData), NewProp_PlayerAnimInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ScanToMontage = { "ScanToMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, ScanToMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScanToMontage_MetaData), NewProp_ScanToMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MayflyLocation = { "MayflyLocation", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, MayflyLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MayflyLocation_MetaData), NewProp_MayflyLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_eplayerStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_eplayerStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerHealthMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerEnergyMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerEnergy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerMoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_mainMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_cameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerCMC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_fplayerAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_eplayerAttributes_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_eplayerAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_TimelineComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerAttributesUWClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerAttributesUW,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_archivalUWClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_archivalUW,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CustomRaftComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_unlockedArchivalPointsIDArray_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_unlockedArchivalPointsIDArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_unlockedArchivalPointsIDArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_unlockedArchivalPointsLocationArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_unlockedArchivalPointsLocationArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerSkillComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CameraCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_TargetCameraPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_bDrawDebugLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_TraceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_InventoryComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_TileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_PlayerAnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ScanToMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MayflyLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Graduation_2024,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APlayerCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UPlayerAttributesInterface_NoRegister, (int32)VTABLE_OFFSET(APlayerCharacter, IPlayerAttributesInterface), false },  // 2585127547
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCharacter_Statics::ClassParams = {
	&APlayerCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APlayerCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerCharacter()
{
	if (!Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton, Z_Construct_UClass_APlayerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton;
}
template<> GRADUATION_2024_API UClass* StaticClass<APlayerCharacter>()
{
	return APlayerCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCharacter);
APlayerCharacter::~APlayerCharacter() {}
// End Class APlayerCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Character_Player_PlayerCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCharacter, APlayerCharacter::StaticClass, TEXT("APlayerCharacter"), &Z_Registration_Info_UClass_APlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCharacter), 4091128071U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Character_Player_PlayerCharacter_h_4256282944(TEXT("/Script/Graduation_2024"),
	Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Character_Player_PlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Programes_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Character_Player_PlayerCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
