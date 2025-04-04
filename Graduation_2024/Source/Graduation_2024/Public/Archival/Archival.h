// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interface/ArchivalInterface.h"
#include "ArchiveID.h"

#include "Archival.generated.h"



UCLASS()
class GRADUATION_2024_API AArchival : public AActor, public IArchivalInterface
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Archive Point Mesh")
	class UStaticMeshComponent* archiveMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stand in Postion")
	class UStaticMeshComponent* playerStandSphere;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Archive Collision")
	class UBoxComponent* archiveCollision;

#pragma endregion


#pragma region Interaction Interface
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Archive Information")
	EArchiveID archiveID = EArchiveID::None;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Archive Information")
	FVector archivePlayerStandLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Archive Information")
	FVector archiveLocation;


	virtual void RefreshPlayerStatus()override;

	virtual EArchiveID GetArchiveID() override;

	virtual FVector GetPlayerStandLocation() override;

	virtual FVector GetArchiveLocation() override;
#pragma endregion


#pragma region refresh Player Statue
public:
	// ������Ա���
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Attributes")
	float playerHealthMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Attributes")
	float playerEnergyMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Attributes")
	float playerHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Attributes")
	float playerEnergy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Attributes")
	float playerDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Attributes")
	float playerMoveSpeed;
#pragma endregion
};
