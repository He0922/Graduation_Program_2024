// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"


#include "Character/Player/PlayerAttributes.h"
#include "CustomPlayerStatus.h"

#include "UI/Attributes/PlayerAttributesUW.h"
#include "UI/Archival/ArchivalUW.h"

#include "Inventory/Widget/PackageWidget.h"
#include "Inventory/InventoryComponent.h"


#include "Interface/PlayerAttributesInterface.h"
#include "Interface/ArchivalInterface.h"


#include "SkillComponent/PlayerSkillComponent.h"

#include "Components/TimelineComponent.h"
#include "Curves/CurveFloat.h"


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


#pragma region Player Status 
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player State")
	ECustomPlayerStatus eplayerStatus;

	void UpdatePlayerStatus(ECustomPlayerStatus newPlayerStatus);

	ECustomPlayerStatus GetPlayerStatus();
#pragma endregion


#pragma region Collision
public:
	// ��дCollision��ײ�¼�����
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	virtual void NotifyActorEndOverlap(AActor* OtherActor) override;

	AActor* CollisionActor;

	TArray<AActor*> IgnoreActors;
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


// ��������ӳ�䡢���붯��
#pragma region Player Behavior Control
public:
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = "Input")
	class UInputMappingContext* mainMappingContext;

#pragma endregion


#pragma region Player Behavior Control Function
public:
	//// ���ڿ������ǰ�������ƶ�
	//UFUNCTION()
	//void Move(const FInputActionValue& Value);

	UFUNCTION()
	void MoveToTarget(FVector TargetLocation);

	//// ���ڿ�������ӽ���ת
	//UFUNCTION()
	//void Look(const FInputActionValue& Value);

	UFUNCTION()
	void ObjectInteraction(APawn* ControllerCurrentControlObject);

	//���ת�����������
	UFUNCTION(BlueprintCallable)
	void FaceActor(AActor* TargetActor);
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
	class UCapsuleComponent* CustomCapsuleComponent;

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


#pragma region Timel
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "TimeLine")
	UTimelineComponent* TimelineComponent;
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
	UPROPERTY(BlueprintReadWrite, Category = "UW|AttributesUW")
	class UPlayerAttributesUW* playerAttributesUW;


// �洢��UI
public:
	UFUNCTION()
	void InitArchivalUW();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UW|ArchivalUW")
	TSubclassOf<UArchivalUW> archivalUWClass;

	//// �洢��UI����
	UPROPERTY(BlueprintReadWrite, Category = "UW|ArchivalUW")
	class UArchivalUW* archivalUW;

#pragma endregion


#pragma region Controller
	class ACustomPlayerController* CustomPlayerController;
	
	//������ã� ��������(� �ܱ���~~~
	UFUNCTION()
	void StartInput();
	UFUNCTION()
	void StopInput();

	UFUNCTION(BlueprintCallable, Category = "Custom Controller Function")
	void EnablePlayerInput();

	UFUNCTION(BlueprintCallable, Category = "Custom Controller Function")
	void DisablePlayerInput();
#pragma endregion

#pragma region Raft Simulation
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Raft Colider")
	class UBoxComponent* CustomRaftComponent;

	void SetRaftCollider(bool IfUse);

	void AddRowForce(float value);
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


#pragma region SkillClass
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Player Skill Component")
	class UPlayerSkillComponent* playerSkillComponent;
#pragma endregion


#pragma region Shoulder View
	float CurrentTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShoulderCamera")
	UCurveFloat* CameraCurve;  // ����ƽ�����ɵ�����

	FVector DefualtCameraPos = FVector(0, 0, 0);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShoulderCamera")
	FVector TargetCameraPos = FVector(500, 30, 0);

	FOnTimelineFloat TimelineProgress;
	FOnTimelineEvent TimelineFinished;

	// �����ص�����
	UFUNCTION(BlueprintCallable)
	void OnTimelineUpdate(float Value);
	void OnTimelineFinished();

	void ChangeInShoulderView();
	void ChangeOutShoulderView();

	void InitTimeLineCurveFunc();
#pragma endregion


#pragma region Forceinline
	public:
		FORCEINLINE class UPlayerCharacterMovementComponent* GetPlayerCMC() const { return playerCMC; }

#pragma endregion

#pragma region TraceLine
	public:
		//�������߿��ӻ�
		UPROPERTY(EditDefaultsOnly, Category = "Debug")
		bool bDrawDebugLine = true;

		// ���߼�����
		UPROPERTY(EditDefaultsOnly, Category = "Debug")
		float TraceDistance = 10000.f;

		void PerformLineTrace();
#pragma endregion

#pragma region Inventory System
public:
	UFUNCTION(BlueprintCallable)
	class UInventoryComponent* GetInventoryComponent() const { return InventoryComponent; }

	void ToggleInventory();

	void PickUpItem();

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInventoryComponent* InventoryComponent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float TileSize = 50.f;

private:
	TSubclassOf<UPackageWidget> InventoryWidgetClass;

#pragma endregion

#pragma region Player Anim BPVariables
public:
	UPROPERTY()
	class UAnimInstance* PlayerAnimInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Anim: Montage")
	class UAnimMontage* ScanToMontage;
#pragma endregion


#pragma region Player Anim Function
public:
	UFUNCTION(BlueprintCallable, Category = "Custom Function")
	void MontageToPlay(UAnimMontage* MonteageToPlay);
#pragma endregion
	
#pragma region ScenceComponent
	public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Mayfly")
	USceneComponent* MayflyLocation; // 创建组件，设定Mayfly目标位置
#pragma endregion
};


