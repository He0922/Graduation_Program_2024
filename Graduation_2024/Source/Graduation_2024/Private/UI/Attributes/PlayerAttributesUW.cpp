// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Attributes/PlayerAttributesUW.h"
#include "../DebugHelper.h"
#include "Interface/PlayerAttributesInterface.h"

#include "Kismet/GameplayStatics.h"


void UPlayerAttributesUW::NativeConstruct()
{
	Super::NativeConstruct();
}


void UPlayerAttributesUW::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
	SetHPUI();

}

void UPlayerAttributesUW::SetHPUI()
{
	IPlayerAttributesInterface* HealthInterface = Cast<IPlayerAttributesInterface>(GetOwningPlayerPawn());
	if (HealthInterface)
	{
		playerHealth = HealthInterface->GetHealth();
		Debug::PrintFloat("UI--HP: ", playerHealth, 0.f, false, FColor::Green);

		playerEnergy = HealthInterface->GetEnergy();
		Debug::PrintFloat("UI--Energy: ", playerEnergy, 0.f, false, FColor::Green);

		playerDamage = HealthInterface->GetDamage();
		Debug::PrintFloat("UI--Damage: ", playerDamage, 0.f, false, FColor::Green);

		playerMoveSpeed = HealthInterface->GetMoveSpeed();
		Debug::PrintFloat("UI--MoveSpeed: ", playerMoveSpeed, 0.f, false, FColor::Green);
	}
}



