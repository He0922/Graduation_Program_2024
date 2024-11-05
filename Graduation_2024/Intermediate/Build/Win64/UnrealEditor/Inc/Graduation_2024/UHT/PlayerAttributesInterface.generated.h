// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/PlayerAttributesInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRADUATION_2024_PlayerAttributesInterface_generated_h
#error "PlayerAttributesInterface.generated.h already included, missing '#pragma once' in PlayerAttributesInterface.h"
#endif
#define GRADUATION_2024_PlayerAttributesInterface_generated_h

#define FID_Graduation_2024_Source_Graduation_2024_Public_Interface_PlayerAttributesInterface_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GRADUATION_2024_API UPlayerAttributesInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerAttributesInterface(UPlayerAttributesInterface&&); \
	UPlayerAttributesInterface(const UPlayerAttributesInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GRADUATION_2024_API, UPlayerAttributesInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAttributesInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerAttributesInterface) \
	GRADUATION_2024_API virtual ~UPlayerAttributesInterface();


#define FID_Graduation_2024_Source_Graduation_2024_Public_Interface_PlayerAttributesInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPlayerAttributesInterface(); \
	friend struct Z_Construct_UClass_UPlayerAttributesInterface_Statics; \
public: \
	DECLARE_CLASS(UPlayerAttributesInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Graduation_2024"), GRADUATION_2024_API) \
	DECLARE_SERIALIZER(UPlayerAttributesInterface)


#define FID_Graduation_2024_Source_Graduation_2024_Public_Interface_PlayerAttributesInterface_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Graduation_2024_Source_Graduation_2024_Public_Interface_PlayerAttributesInterface_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Graduation_2024_Source_Graduation_2024_Public_Interface_PlayerAttributesInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Graduation_2024_Source_Graduation_2024_Public_Interface_PlayerAttributesInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPlayerAttributesInterface() {} \
public: \
	typedef UPlayerAttributesInterface UClassType; \
	typedef IPlayerAttributesInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Graduation_2024_Source_Graduation_2024_Public_Interface_PlayerAttributesInterface_h_13_PROLOG
#define FID_Graduation_2024_Source_Graduation_2024_Public_Interface_PlayerAttributesInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Graduation_2024_Source_Graduation_2024_Public_Interface_PlayerAttributesInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADUATION_2024_API UClass* StaticClass<class UPlayerAttributesInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Graduation_2024_Source_Graduation_2024_Public_Interface_PlayerAttributesInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
