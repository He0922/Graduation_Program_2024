// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PlayerAttributesInterface.generated.h"


/**
 * 
 */
UINTERFACE(MinimalAPI)
class UPlayerAttributesInterface : public UInterface
{
	GENERATED_BODY()

};


class IPlayerAttributesInterface
{
	GENERATED_BODY()

public:
	virtual float GetHealth() const = 0;
	virtual void SetHealth(float AddHP) = 0;

	virtual float GetEnergy() const = 0;
	virtual void SetEnergy(float AddEnergy) = 0;

	virtual float GetAttack() const = 0;
	virtual void SetAttack(float AddAttack) = 0;

	virtual float GetMoveSpeed() const = 0;
	virtual void SetMoveSpeed(float AddMoveSpeed) = 0;
};
