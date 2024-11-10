// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Archival/Archival.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRADUATION_2024_Archival_generated_h
#error "Archival.generated.h already included, missing '#pragma once' in Archival.h"
#endif
#define GRADUATION_2024_Archival_generated_h

#define FID_Graduation_2024_Source_Graduation_2024_Public_Archival_Archival_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArchival(); \
	friend struct Z_Construct_UClass_AArchival_Statics; \
public: \
	DECLARE_CLASS(AArchival, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Graduation_2024"), NO_API) \
	DECLARE_SERIALIZER(AArchival) \
	virtual UObject* _getUObject() const override { return const_cast<AArchival*>(this); }


#define FID_Graduation_2024_Source_Graduation_2024_Public_Archival_Archival_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AArchival(AArchival&&); \
	AArchival(const AArchival&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArchival); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArchival); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArchival) \
	NO_API virtual ~AArchival();


#define FID_Graduation_2024_Source_Graduation_2024_Public_Archival_Archival_h_13_PROLOG
#define FID_Graduation_2024_Source_Graduation_2024_Public_Archival_Archival_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Graduation_2024_Source_Graduation_2024_Public_Archival_Archival_h_16_INCLASS_NO_PURE_DECLS \
	FID_Graduation_2024_Source_Graduation_2024_Public_Archival_Archival_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADUATION_2024_API UClass* StaticClass<class AArchival>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Graduation_2024_Source_Graduation_2024_Public_Archival_Archival_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
