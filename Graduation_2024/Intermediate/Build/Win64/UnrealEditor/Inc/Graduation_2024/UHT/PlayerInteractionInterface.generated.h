// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/PlayerInteractionInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRADUATION_2024_PlayerInteractionInterface_generated_h
#error "PlayerInteractionInterface.generated.h already included, missing '#pragma once' in PlayerInteractionInterface.h"
#endif
#define GRADUATION_2024_PlayerInteractionInterface_generated_h

#define FID_Graduation_2024_Source_Graduation_2024_Public_Interface_PlayerInteractionInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GRADUATION_2024_API UPlayerInteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerInteractionInterface(UPlayerInteractionInterface&&); \
	UPlayerInteractionInterface(const UPlayerInteractionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GRADUATION_2024_API, UPlayerInteractionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerInteractionInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerInteractionInterface) \
	GRADUATION_2024_API virtual ~UPlayerInteractionInterface();


#define FID_Graduation_2024_Source_Graduation_2024_Public_Interface_PlayerInteractionInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPlayerInteractionInterface(); \
	friend struct Z_Construct_UClass_UPlayerInteractionInterface_Statics; \
public: \
	DECLARE_CLASS(UPlayerInteractionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Graduation_2024"), GRADUATION_2024_API) \
	DECLARE_SERIALIZER(UPlayerInteractionInterface)


#define FID_Graduation_2024_Source_Graduation_2024_Public_Interface_PlayerInteractionInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Graduation_2024_Source_Graduation_2024_Public_Interface_PlayerInteractionInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Graduation_2024_Source_Graduation_2024_Public_Interface_PlayerInteractionInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Graduation_2024_Source_Graduation_2024_Public_Interface_PlayerInteractionInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPlayerInteractionInterface() {} \
public: \
	typedef UPlayerInteractionInterface UClassType; \
	typedef IPlayerInteractionInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Graduation_2024_Source_Graduation_2024_Public_Interface_PlayerInteractionInterface_h_10_PROLOG
#define FID_Graduation_2024_Source_Graduation_2024_Public_Interface_PlayerInteractionInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Graduation_2024_Source_Graduation_2024_Public_Interface_PlayerInteractionInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADUATION_2024_API UClass* StaticClass<class UPlayerInteractionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Graduation_2024_Source_Graduation_2024_Public_Interface_PlayerInteractionInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
