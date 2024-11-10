// Fill out your copyright notice in the Description page of Project Settings.


#include "Archival/Archival.h"
#include "../DebugHelper.h"
#include "Character/PlayerCharacter.h"

#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"

#include "Kismet/GameplayStatics.h"


// Sets default values
AArchival::AArchival()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	archiveMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Archive Mesh"));
	RootComponent = archiveMesh;

	playerStandSphere = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Player Stand Postion"));
	playerStandSphere->SetupAttachment(RootComponent);

	archiveCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Archive Collision"));
	archiveCollision->SetupAttachment(RootComponent);


}

// Called when the game starts or when spawned
void AArchival::BeginPlay()
{
	Super::BeginPlay();
	
}


void AArchival::NotifyActorBeginOverlap(AActor* OtherActor)
{
	playerCharacter = Cast<APlayerCharacter>(OtherActor);
	if (playerCharacter)
	{
		playerCharacter->SetHealth(-10.f);
		playerCharacter->SetEnergy(-1.f);
		playerHealthMax = playerCharacter->GetHealth_MAX();
		playerEnergyMax = playerCharacter->GetEnergy_MAX();
		playerHealth = playerCharacter->GetHealth();
		playerEnergy = playerCharacter->GetEnergy();
		playerDamage = playerCharacter->GetDamage();
		playerMoveSpeed = playerCharacter->GetMoveSpeed();
	}

	
	
}


void AArchival::NotifyActorEndOverlap(AActor* OtherActor)
{
	//playerCharacter->SetHealth(-100.f);
}


// Called every frame
void AArchival::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


#pragma region Interaction Interface
void AArchival::InteractArchive()
{
	if (playerCharacter)
	{
		playerCharacter->fplayerAttributes.SetPlayerAttributes(EPlayerAttributes::ehealth, playerCharacter->fplayerAttributes.GetPlayerAttributes(EPlayerAttributes::ehealthMax));
	}
}

#pragma endregion
