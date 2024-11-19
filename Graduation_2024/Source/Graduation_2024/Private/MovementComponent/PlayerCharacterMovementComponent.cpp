// Fill out your copyright notice in the Description page of Project Settings.


#include "MovementComponent/PlayerCharacterMovementComponent.h"

void UPlayerCharacterMovementComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UPlayerCharacterMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}
