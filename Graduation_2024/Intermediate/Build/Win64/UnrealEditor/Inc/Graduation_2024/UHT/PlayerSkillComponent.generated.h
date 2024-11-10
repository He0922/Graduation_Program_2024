// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkillComponent/PlayerSkillComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRADUATION_2024_PlayerSkillComponent_generated_h
#error "PlayerSkillComponent.generated.h already included, missing '#pragma once' in PlayerSkillComponent.h"
#endif
#define GRADUATION_2024_PlayerSkillComponent_generated_h

#define FID_Graduation_2024_Source_Graduation_2024_Public_SkillComponent_PlayerSkillComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndScan); \
	DECLARE_FUNCTION(execStartScan);


#define FID_Graduation_2024_Source_Graduation_2024_Public_SkillComponent_PlayerSkillComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerSkillComponent(); \
	friend struct Z_Construct_UClass_UPlayerSkillComponent_Statics; \
public: \
	DECLARE_CLASS(UPlayerSkillComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Graduation_2024"), NO_API) \
	DECLARE_SERIALIZER(UPlayerSkillComponent)


#define FID_Graduation_2024_Source_Graduation_2024_Public_SkillComponent_PlayerSkillComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerSkillComponent(UPlayerSkillComponent&&); \
	UPlayerSkillComponent(const UPlayerSkillComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerSkillComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerSkillComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerSkillComponent) \
	NO_API virtual ~UPlayerSkillComponent();


#define FID_Graduation_2024_Source_Graduation_2024_Public_SkillComponent_PlayerSkillComponent_h_10_PROLOG
#define FID_Graduation_2024_Source_Graduation_2024_Public_SkillComponent_PlayerSkillComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Graduation_2024_Source_Graduation_2024_Public_SkillComponent_PlayerSkillComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Graduation_2024_Source_Graduation_2024_Public_SkillComponent_PlayerSkillComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_Graduation_2024_Source_Graduation_2024_Public_SkillComponent_PlayerSkillComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADUATION_2024_API UClass* StaticClass<class UPlayerSkillComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Graduation_2024_Source_Graduation_2024_Public_SkillComponent_PlayerSkillComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
