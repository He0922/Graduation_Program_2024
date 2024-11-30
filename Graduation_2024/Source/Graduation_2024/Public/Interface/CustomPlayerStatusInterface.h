// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Character/Player/CustomPlayerStatus.h"
#include "CustomPlayerStatusInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UCustomPlayerStatusInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GRADUATION_2024_API ICustomPlayerStatusInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual ECustomPlayerStatus UpdatePlayerStatus(ECustomPlayerStatus PlayerNewStatus) = 0;
};
