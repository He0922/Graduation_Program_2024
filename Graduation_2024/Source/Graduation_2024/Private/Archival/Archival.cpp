// Fill out your copyright notice in the Description page of Project Settings.


#include "Archival/Archival.h"
#include "../DebugHelper.h"
#include "Character/PlayerCharacter.h"


#include "Kismet/GameplayStatics.h"


// Sets default values
AArchival::AArchival()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AArchival::BeginPlay()
{
	Super::BeginPlay();
	

	playerCharacter = Cast<APlayerCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), APlayerCharacter::StaticClass()));

}


void AArchival::NotifyActorBeginOverlap(AActor* OtherActor)
{
	playerCharacter->SetHealth(-10.f);
	playerCharacter->SetEnergy(-1.f);
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

