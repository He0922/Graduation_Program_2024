// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Archival.generated.h"



UCLASS()
class GRADUATION_2024_API AArchival : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AArchival();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	virtual void NotifyActorEndOverlap(AActor* OtherActor) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


#pragma region Player Inormation
public:
	class APlayerCharacter* playerCharacter;
#pragma endregion
};
