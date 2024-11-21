// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"


#include "Character/PlayerAttributes.h"


#include "UI/Attributes/PlayerAttributesUW.h"
#include "UI/Archival/ArchivalUW.h"

#include "Interface/PlayerAttributesInterface.h"
#include "Interface/ArchivalInterface.h"


#include "SkillComponent/PlayerSkillComponent.h"


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


#pragma region Initialize And Check

#pragma endregion


#pragma region Collision
public:
	// ��дCollision��ײ�¼�����
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	virtual void NotifyActorEndOverlap(AActor* OtherActor) override;
#pragma endregion


#pragma region Player Attributes Interface
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


	// ʵ��������ԽӿڵĶ���
	virtual float GetHealth_MAX() const override;
	virtual void SetHealth_MAX(float MaxHealth) override;

	virtual float GetEnergy_MAX() const override;
	virtual void SetEnergy_MAX(float MaxEnergy) override;

	virtual float GetHealth() const override;
	virtual void SetHealth(float AddHealth) override;

	virtual float GetEnergy() const override;
	virtual void SetEnergy(float AddEnergy) override;

	virtual float GetDamage() const override;
	virtual void SetDamage(float AddDamage) override;

	virtual float GetMoveSpeed() const override;
	virtual void SetMoveSpeed(float AddMoveSpeed) override;
#pragma endregion


#pragma region Property To Skill
public:
	void OnEnergyEmpty();
#pragma endregion

#pragma region SkillClass
public:
	//ʵ����Ҽ��ܽӿڵĶ���
	void StartScan();
	void EndScan();

	void InterctBlock();
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

	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = "Input")
	class UInputAction* ScanAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	class UInputAction* objectInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	class UInputAction* IterctBlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	class UInputAction* climbAction;

#pragma endregion


#pragma region Player Behavior Control Function
public:
	// ���ڿ������ǰ�������ƶ�
	UFUNCTION()
	void Move(const FInputActionValue& Value);

	UFUNCTION()
	void MoveToTarget(FVector TargetLocation);

	// ���ڿ�������ӽ���ת
	UFUNCTION()
	void Look(const FInputActionValue& Value);

	UFUNCTION()
	void ObjectInteraction();

	UFUNCTION()
	void ClimbingActionStarted(const FInputActionValue& Value);
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


// �����Զ���Ľ�ɫ�ƶ��������
#pragma region MovementComponent
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Player Movement Component")
	class UPlayerCharacterMovementComponent* playerCMC;

#pragma endregion


	// �����Զ���Ľ�ɫ�����������
#pragma region SkilComponent
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Player Skill Component")
	class UPlayerSkillComponent* playerSkillComponent;

#pragma endregion


#pragma region Player Attribute
public:
	// �������Խṹ��
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Attribute")
	FPlayerAttributes fplayerAttributes;

	// ��������ö��
	UPROPERTY()
	EPlayerAttributes eplayerAttributes;
#pragma endregion


#pragma region Debug Print
	// ��ӡ������������
	void PrintAttributes(const TMap<EPlayerAttributes, float>& Attributes);
#pragma endregion


#pragma region UI
// ����״̬UI
public:
	UFUNCTION()
	int InitArttributesUW();

	// ��UE��ͼ��ָ����������UI����ͼ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UW|AttributesUW")
	TSubclassOf<UPlayerAttributesUW> playerAttributesUWClass;

	//// ��������UI����
	UPROPERTY()
	class UPlayerAttributesUW* playerAttributesUW;


// �洢��UI
public:
	UFUNCTION()
	void InitArchivalUW();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UW|ArchivalUW")
	TSubclassOf<UArchivalUW> archivalUWClass;

	//// �洢��UI����
	UPROPERTY()
	class UArchivalUW* archivalUW;

#pragma endregion


#pragma region Controller
	APlayerController* playerController;
	
	UFUNCTION(BlueprintCallable, Category = "Custom Controller Function")
	void EnablePlayerInput();

	UFUNCTION(BlueprintCallable, Category = "Custom Controller Function")
	void DisablePlayerInput();
#pragma endregion


#pragma region Archival
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Archival|Archival Point ID")
	TArray<EArchiveID> unlockedArchivalPointsIDArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Archival|Archival Ponit Location")
	TArray<FVector> unlockedArchivalPointsLocationArray;

	IArchivalInterface* archivalInteractable = nullptr;

	EArchiveID collisionArchiveID;

	FVector archivalPlayerStandLocation;

	FVector archivalLocation;

	void TeleportTo(EArchiveID ArchivalID);
#pragma endregion
};


