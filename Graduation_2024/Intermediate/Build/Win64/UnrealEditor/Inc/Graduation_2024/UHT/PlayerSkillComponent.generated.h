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

#define FID_Graduation_2024_Source_Graduation_2024_Public_SkillComponent_PlayerSkillComponent_h_24_DELEGATE \
GRADUATION_2024_API void FStartScan_DelegateWrapper(const FMulticastScriptDelegate& StartScan);


#define FID_Graduation_2024_Source_Graduation_2024_Public_SkillComponent_PlayerSkillComponent_h_25_DELEGATE \
GRADUATION_2024_API void FEndScan_DelegateWrapper(const FMulticastScriptDelegate& EndScan);


#define FID_Graduation_2024_Source_Graduation_2024_Public_SkillComponent_PlayerSkillComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPerformConeShockwave); \
	DECLARE_FUNCTION(execGetScanColdState); \
	DECLARE_FUNCTION(execGetNowScanState); \
	DECLARE_FUNCTION(execGetScanDistance); \
	DECLARE_FUNCTION(execGetPlayerNowEnergy); \
	DECLARE_FUNCTION(execEndScan); \
	DECLARE_FUNCTION(execStartScan);


#define FID_Graduation_2024_Source_Graduation_2024_Public_SkillComponent_PlayerSkillComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerSkillComponent(); \
	friend struct Z_Construct_UClass_UPlayerSkillComponent_Statics; \
public: \
	DECLARE_CLASS(UPlayerSkillComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Graduation_2024"), NO_API) \
	DECLARE_SERIALIZER(UPlayerSkillComponent)


#define FID_Graduation_2024_Source_Graduation_2024_Public_SkillComponent_PlayerSkillComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerSkillComponent(UPlayerSkillComponent&&); \
	UPlayerSkillComponent(const UPlayerSkillComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerSkillComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerSkillComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerSkillComponent) \
	NO_API virtual ~UPlayerSkillComponent();


#define FID_Graduation_2024_Source_Graduation_2024_Public_SkillComponent_PlayerSkillComponent_h_27_PROLOG
#define FID_Graduation_2024_Source_Graduation_2024_Public_SkillComponent_PlayerSkillComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Graduation_2024_Source_Graduation_2024_Public_SkillComponent_PlayerSkillComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Graduation_2024_Source_Graduation_2024_Public_SkillComponent_PlayerSkillComponent_h_30_INCLASS_NO_PURE_DECLS \
	FID_Graduation_2024_Source_Graduation_2024_Public_SkillComponent_PlayerSkillComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADUATION_2024_API UClass* StaticClass<class UPlayerSkillComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Graduation_2024_Source_Graduation_2024_Public_SkillComponent_PlayerSkillComponent_h


#define FOREACH_ENUM_ESKILLTYPE(op) \
	op(ESkillType::Common) \
	op(ESkillType::Scan) \
	op(ESkillType::Inter) \
	op(ESkillType::KickFire) \
	op(ESkillType::Count) 

enum class ESkillType : uint8;
template<> struct TIsUEnumClass<ESkillType> { enum { Value = true }; };
template<> GRADUATION_2024_API UEnum* StaticEnum<ESkillType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
