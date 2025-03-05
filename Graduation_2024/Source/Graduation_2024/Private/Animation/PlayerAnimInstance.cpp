// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/PlayerAnimInstance.h"
#include "Kismet/KismetMathLibrary.h"

#include "Character/Player/PlayerCharacter.h"
#include "MovementComponent/PlayerCharacterMovementComponent.h"


void UPlayerAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	Player = Cast<APlayerCharacter>(TryGetPawnOwner());

	if (Player)
	{
		PlayerCMC = Player->GetPlayerCMC();
	}
}

void UPlayerAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (!Player || !PlayerCMC)return;

	GetFroundSpeed();
	GetAirSpeed();
	GetShouldMove();
	GetIsFalling();
	GetIsClimbing();
	GetClimbVelocity();
}


void UPlayerAnimInstance::GetFroundSpeed()
{
	GroundSpeed = UKismetMathLibrary::VSizeXY(Player->GetVelocity());
	
}


void UPlayerAnimInstance::GetAirSpeed()
{
	AirSpeed = Player->GetVelocity().Z;
}


void UPlayerAnimInstance::GetShouldMove()
{
	bShouldMove = PlayerCMC->GetCurrentAcceleration().Size() > 0 && GroundSpeed > 5.f && !bIsFalling;
}


void UPlayerAnimInstance::GetIsFalling()
{
	bIsFalling = PlayerCMC->IsFalling();
}


void UPlayerAnimInstance::GetIsClimbing()
{
	bIsClimbing = PlayerCMC->IsClimbing();
}


void UPlayerAnimInstance::GetClimbVelocity()
{
	ClimbVelocity = PlayerCMC->GetUnrotatedClimbVelocity();
}
