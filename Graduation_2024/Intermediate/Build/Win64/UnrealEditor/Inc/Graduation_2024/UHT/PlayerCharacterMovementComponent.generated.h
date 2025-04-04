// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovementComponent/PlayerCharacterMovementComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
#ifdef GRADUATION_2024_PlayerCharacterMovementComponent_generated_h
#error "PlayerCharacterMovementComponent.generated.h already included, missing '#pragma once' in PlayerCharacterMovementComponent.h"
#endif
#define GRADUATION_2024_PlayerCharacterMovementComponent_generated_h

#define FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_MovementComponent_PlayerCharacterMovementComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnClimbMontageEnded);


#define FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_MovementComponent_PlayerCharacterMovementComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UPlayerCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UPlayerCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Graduation_2024"), NO_API) \
	DECLARE_SERIALIZER(UPlayerCharacterMovementComponent)


#define FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_MovementComponent_PlayerCharacterMovementComponent_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerCharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerCharacterMovementComponent(UPlayerCharacterMovementComponent&&); \
	UPlayerCharacterMovementComponent(const UPlayerCharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerCharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerCharacterMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerCharacterMovementComponent) \
	NO_API virtual ~UPlayerCharacterMovementComponent();


#define FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_MovementComponent_PlayerCharacterMovementComponent_h_24_PROLOG
#define FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_MovementComponent_PlayerCharacterMovementComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_MovementComponent_PlayerCharacterMovementComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_MovementComponent_PlayerCharacterMovementComponent_h_27_INCLASS_NO_PURE_DECLS \
	FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_MovementComponent_PlayerCharacterMovementComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADUATION_2024_API UClass* StaticClass<class UPlayerCharacterMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHubThing_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_MovementComponent_PlayerCharacterMovementComponent_h


#define FOREACH_ENUM_ECUSTOMMOVEMENTMODE(op) \
	op(ECustomMovementMode::MOVE_Climb) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
