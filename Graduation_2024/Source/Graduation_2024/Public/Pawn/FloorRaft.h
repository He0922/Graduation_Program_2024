// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Character/Player/CustomPlayerStatus.h"
#include "InputActionValue.h"
#include "Interface/CustomPlayerStatusInterface.h"
#include "Components/TimelineComponent.h"

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


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FloorRaft Player Stand Location")
	class UStaticMeshComponent* PlayerStandLocation;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Timeline")
	UTimelineComponent* TimelineComponent;

#pragma region Movement status
public:
	// 目标旋转
	FRotator TargetRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float RotationSpeed = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float MovementSpeed = 1.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float RotateMinSpeed = 500.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float sinkForce = 10.0f;

	UPROPERTY(EditAnywhere, Category = "Movement")
	UCurveFloat* DecelerationCurve;

	//获取船的“朝前向量”，到时候要是模型改过来就直接把这个改成GetForwardVector就行
	FVector GetBoatForward() {return floorRafteMesh->GetForwardVector(); }

	void FloorRaftMove(float deltaTime);

	// 让船朝向相机
	void RotateTowardsCamera(float DeltaTime);

	UPROPERTY(EditAnywhere, Category = "Curve")
	UCurveFloat* FloatCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float RowAnimeState;

	float FloorRaftSpeed;
	float GetFloorRaftSpeed();

	UFUNCTION(BlueprintCallable, Category = "Animation")
	void StartAddRowForce() { IfAddRowForce = true; }
	UFUNCTION(BlueprintCallable, Category = "Animation")
	void StopAddRowForce() { IfAddRowForce = false; }

	void StartRow();
	void StopRow();

private:
	bool IfAddRowForce;
	float CurrentTime;
	bool IfHasStartRow;

	FOnTimelineFloat OnTimelineUpdate;

	UFUNCTION()
	void OnCurveUpdate(float Value);

	void MoveForward(float deltaTime = 0.1f);


#pragma endregion


#pragma region PlayerStatusInterface

#pragma endregion
};
