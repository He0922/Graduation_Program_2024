// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"

#include "../Character/Player/CustomPlayerStatus.h"

#include "PlayerAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class GRADUATION_2024_API UPlayerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	virtual void NativeInitializeAnimation() override;
	
	virtual void NativeUpdateAnimation(float DeltaSeconds)override;

private:
	UPROPERTY()
	class APlayerCharacter* Player;

	UPROPERTY()
	class UPlayerCharacterMovementComponent* PlayerCMC;

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Reference)
	float GroundSpeed;
	void GetGroundSpeed();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Reference)
	float GroundDirection;
	float GetGroundDirection();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Reference)
	float AirSpeed;
	void GetAirSpeed();

	UPROPERTY(VIsibleAnywhere, BlueprintReadOnly, Category = Reference)
	bool bShouldMove;
	void GetShouldMove();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Reference)
	bool bIsFalling;
	void GetIsFalling();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Reference)
	bool bIsClimbing;
	void GetIsClimbing();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Reference)
	FVector ClimbVelocity;
	void GetClimbVelocity();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Reference)
	ECustomPlayerStatus PlayerCurrentStatus;
	void GetPlayerCurrentStatus();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Reference)
	float RowlingState;
	void GetRowlingState();

	UFUNCTION(BlueprintCallable, Category = "Animation")
	void OnStartAddRowForceNotify();
	UFUNCTION(BlueprintCallable, Category = "Animation")
	void OnStopAddRowForceNotify();

};
