// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PlayerAttributesInterface.generated.h"


// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPlayerAttributesInterface : public UInterface
{
	GENERATED_BODY()
};


class GRADUATION_2024_API IPlayerAttributesInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual float GetHealth_MAX() const = 0;
	virtual void SetHealth_MAX(float MaxHealth) = 0;

	virtual float GetEnergy_MAX() const = 0;
	virtual void SetEnergy_MAX(float MaxEnergy) = 0;

	virtual float GetHealth() const = 0;
	virtual void SetHealth(float AddHealth) = 0;

	virtual float GetEnergy() const = 0;
	virtual void SetEnergy(float AddEnergy) = 0;

	virtual float GetDamage() const = 0;
	virtual void SetDamage(float AddDamage) = 0;

	virtual float GetMoveSpeed() const = 0;
	virtual void SetMoveSpeed(float AddMoveSpeed) = 0;
};
