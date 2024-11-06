// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"


#include "Character/PlayerAttributes.h"
#include "UI/Attributes/PlayerAttributesUW.h"
#include "Interface/PlayerAttributesInterface.h"


#include "PlayerCharacter.generated.h"



UCLASS()
class GRADUATION_2024_API APlayerCharacter : public ACharacter, public IPlayerAttributesInterface
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


#pragma region Interface
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Attributes")
	float playerHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Attributes")
	float playerEnergy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Attributes")
	float playerDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Attributes")
	float playerMoveSpeed;


	virtual float GetHealth() const override;
	virtual void SetHealth(float AddHealth) override;

	virtual float GetEnergy() const override;
	virtual void SetEnergy(float AddEnergy) override;

	virtual float GetDamage() const override;
	virtual void SetDamage(float AddDamage) override;

	virtual float GetMoveSpeed() const override;
	virtual void SetMoveSpeed(float AddMoveSpeed) override;
#pragma endregion


// ��������ӳ�䡢���붯��
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
	// ���ڿ������ǰ�������ƶ�
	UFUNCTION()
	void Move(const FInputActionValue& Value);

	// ���ڿ�������ӽ���ת
	UFUNCTION()
	void Look(const FInputActionValue& Value);
#pragma endregion


#pragma region Player Behavior Control Value
	// �ƶ���ǰ�����ҷ����float
	float moveFBDirection;
	float moveLRDirection;

	// �ӽǵ����ҷ����float
	float lookLRDirection;
#pragma endregion


#pragma region Camera And SpringArm
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class USpringArmComponent* cameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class UCameraComponent* camera;
#pragma endregion


// ������ɫ�ƶ��������
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
#pragma endregion


#pragma region Debug Print
	void PrintAttributes(const TMap<EPlayerAttributes, float>& Attributes);
#pragma endregion


#pragma region UI
public:
	UFUNCTION()
	int InitHUD();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Attributes UW")
	TSubclassOf<UPlayerAttributesUW> playerAttributesUWClass;

	UPROPERTY()
	class UPlayerAttributesUW* playerAttributesUW;
#pragma endregion
};


