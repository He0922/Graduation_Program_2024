// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Attributes/PlayerAttributesUW.h"
#include "Character/PlayerCharacter.h"
#include "../DebugHelper.h"

#include "Kismet/GameplayStatics.h"


void UPlayerAttributesUW::NativeConstruct()
{
	Super::NativeConstruct();

	if ((playerCharacter = Cast<APlayerCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), APlayerCharacter::StaticClass()))) != nullptr) { bplayerCharacterIsValid = true; }
}


void UPlayerAttributesUW::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if (bplayerCharacterIsValid)
	{
		playerHealth = playerCharacter->GetHealth();
		playerEnergy = playerCharacter->GetEnergy();
		playerAttack = playerCharacter->GetAttack();
		playerMoveSpeed = playerCharacter->GetMoveSpeed();
	}

	Debug::PrintFloat("UI--HP: ", playerHealth, 0.f, false, FColor::Green);
	Debug::PrintFloat("UI--Energy: ", playerEnergy, 0.f, false, FColor::Green);
	Debug::PrintFloat("UI--Attack: ", playerAttack, 0.f, false, FColor::Green);
	Debug::PrintFloat("UI--MoveSpeed: ", playerMoveSpeed, 0.f, false, FColor::Green);
}



