// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Character/Player/CustomPlayerStatus.h"
#include "InputActionValue.h"
#include "Interface/CustomPlayerStatusInterface.h"

#include "FloorRaft.generated.h"

UCLASS()
class GRADUATION_2024_API AFloorRaft : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AFloorRaft(const FObjectInitializer& ObjectInitializer);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	virtual void NotifyActorEndOverlap(AActor* OtherActor) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Movement")
	class UCustomFloatingPawnMovement* PawnMovementComponent;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class USpringArmComponent* cameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class UCameraComponent* camera;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FloorRaft Mesh")
	class UStaticMeshComponent* floorRafteMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FloorRaft Collision")
	class UBoxComponent* floorRaftCollision;


#pragma region Movement status
public:
	// 目标旋转
	FRotator TargetRotation;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Movement")
	float RotationSpeed = 1.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Movement")
	float MovementSpeed = 1.0f;

	//获取船的“朝前向量”，到时候要是模型改过来就直接把这个改成GetForwardVector就行
	FVector GetBoatForward() { return -floorRafteMesh->GetRightVector(); }

	void FloorRaftMove(float deltaTime);

	// 让船朝向相机
	void RotateTowardsCamera(float DeltaTime);

#pragma endregion


#pragma region PlayerStatusInterface

#pragma endregion
};
