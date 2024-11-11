// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Attributes/PlayerAttributesUW.h"
#include "../DebugHelper.h"
#include "Interface/PlayerAttributesInterface.h"

#include "Kismet/GameplayStatics.h"


void UPlayerAttributesUW::NativeConstruct()
{
	Super::NativeConstruct();
	PlayerAttributesInterface = Cast<IPlayerAttributesInterface>(GetOwningPlayerPawn());
}


void UPlayerAttributesUW::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
	SetHPUI();

}

void UPlayerAttributesUW::SetHPUI()
{
	if (PlayerAttributesInterface)
	{
		playerHealthMax = PlayerAttributesInterface->GetHealth_MAX();
		Debug::PrintFloat("UI--HPMax: ", playerHealthMax, 0.f, false, FColor::Green);

		playerEnergyMax = PlayerAttributesInterface->GetEnergy_MAX();
		Debug::PrintFloat("UI--EnergyMax: ", playerEnergyMax, 0.f, false, FColor::Green);

		playerHealth = PlayerAttributesInterface->GetHealth();
		Debug::PrintFloat("UI--HP: ", playerHealth, 0.f, false, FColor::Green);

		playerEnergy = PlayerAttributesInterface->GetEnergy();
		Debug::PrintFloat("UI--Energy: ", playerEnergy, 0.f, false, FColor::Green);

		playerDamage = PlayerAttributesInterface->GetDamage();
		Debug::PrintFloat("UI--Damage: ", playerDamage, 0.f, false, FColor::Green);

		playerMoveSpeed = PlayerAttributesInterface->GetMoveSpeed();
		Debug::PrintFloat("UI--MoveSpeed: ", playerMoveSpeed, 0.f, false, FColor::Green);
	}
}



