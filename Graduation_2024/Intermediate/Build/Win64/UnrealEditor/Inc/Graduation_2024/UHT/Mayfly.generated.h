// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Mayfly.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRADUATION_2024_Mayfly_generated_h
#error "Mayfly.generated.h already included, missing '#pragma once' in Mayfly.h"
#endif
#define GRADUATION_2024_Mayfly_generated_h

#define FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Character_Mayfly_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMayfly(); \
	friend struct Z_Construct_UClass_AMayfly_Statics; \
public: \
	DECLARE_CLASS(AMayfly, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Graduation_2024"), NO_API) \
	DECLARE_SERIALIZER(AMayfly)


#define FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Character_Mayfly_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMayfly(AMayfly&&); \
	AMayfly(const AMayfly&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMayfly); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMayfly); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMayfly) \
	NO_API virtual ~AMayfly();


#define FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Character_Mayfly_h_19_PROLOG
#define FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Character_Mayfly_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Character_Mayfly_h_22_INCLASS_NO_PURE_DECLS \
	FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Character_Mayfly_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADUATION_2024_API UClass* StaticClass<class AMayfly>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Graduation_project_Graduation_Program_2024_Graduation_2024_Source_Graduation_2024_Public_Character_Mayfly_h


#define FOREACH_ENUM_EMAYFLYTYPE(op) \
	op(EMayflyType::eaddHPMAX) \
	op(EMayflyType::eaddEnergyMAX) 

enum class EMayflyType : uint8;
template<> struct TIsUEnumClass<EMayflyType> { enum { Value = true }; };
template<> GRADUATION_2024_API UEnum* StaticEnum<EMayflyType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
