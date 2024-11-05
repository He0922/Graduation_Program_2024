// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"


#include "Character/PlayerAttributes.h"


#include "PlayerCharacter.generated.h"



UCLASS()
class GRADUATION_2024_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter(const FObjectInitializer& ObjectInitializer);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


// 创建输入映射、输入动作
#pragma region Player Behavior Control
public:
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = "Input")
	class UInputMappingContext* mainMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = "Input")
	class UInputAction* moveAction;

	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = "Input")
	class UInputAction* lookAction;

	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = "Input")
	class UInputAction* jumpAction;

#pragma endregion


#pragma region Player Behavior Control Function
public:
	// 用于控制玩家前后左右移动
	UFUNCTION()
	void Move(const FInputActionValue& Value);

	// 用于控制玩家视角旋转
	UFUNCTION()
	void Look(const FInputActionValue& Value);
#pragma endregion


#pragma region Player Behavior Control Value
	// 移动的前后左右方向的float
	float moveFBDirection;
	float moveLRDirection;

	// 视角的左右方向的float
	float lookLRDirection;
#pragma endregion


#pragma region Camera And SpringArm
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class USpringArmComponent* cameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class UCameraComponent* camera;
#pragma endregion


// 创建角色移动组件变量
#pragma region MovementComponent
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Player Movement Component")
	class UPlayerCharacterMovementComponent* playerCMC;

#pragma endregion


#pragma region Player Attribute
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Attribute")
	FPlayerAttributes fplayerAttributes;

	UPROPERTY()
	EPlayerAttributes eplayerAttributes;

	void PrintAttributes(const TMap<EPlayerAttributes, float>& Attributes);
#pragma endregion

#pragma region Player Vector
public:
	
#pragma endregion
};


