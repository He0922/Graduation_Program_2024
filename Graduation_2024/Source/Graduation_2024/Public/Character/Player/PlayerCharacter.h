// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"


#include "Character/Player/PlayerAttributes.h"
#include "CustomPlayerStatus.h"

#include "UI/Attributes/PlayerAttributesUW.h"
#include "UI/Archival/ArchivalUW.h"

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
	// 重写Collision碰撞事件函数
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	virtual void NotifyActorEndOverlap(AActor* OtherActor) override;

	AActor* CollisionActor;

	TArray<AActor*> IgnoreActors;
#pragma endregion


#pragma region Player Attributes Interface
public:
	// 玩家属性变量
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


	// 实现玩家属性接口的定义
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


// 创建输入映射、输入动作
#pragma region Player Behavior Control
public:
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = "Input")
	class UInputMappingContext* mainMappingContext;

#pragma endregion


#pragma region Player Behavior Control Function
public:
	//// 用于控制玩家前后左右移动
	//UFUNCTION()
	//void Move(const FInputActionValue& Value);

	UFUNCTION()
	void MoveToTarget(FVector TargetLocation);

	//// 用于控制玩家视角旋转
	//UFUNCTION()
	//void Look(const FInputActionValue& Value);

	UFUNCTION()
	void ObjectInteraction(APawn* ControllerCurrentControlObject);

	//玩家转向输入的物体
	UFUNCTION(BlueprintCallable)
	void FaceActor(AActor* TargetActor);
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


// 创建自定义的角色移动组件变量
#pragma region MovementComponent
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Player Movement Component")
	class UPlayerCharacterMovementComponent* playerCMC;
	class UCapsuleComponent* CustomCapsuleComponent;

#pragma endregion


#pragma region Player Attribute
public:
	// 人物属性结构体
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Attribute")
	FPlayerAttributes fplayerAttributes;

	// 人物属性枚举
	UPROPERTY()
	EPlayerAttributes eplayerAttributes;
#pragma endregion


#pragma region Debug Print
	// 打印人物属性内容
	void PrintAttributes(const TMap<EPlayerAttributes, float>& Attributes);
#pragma endregion


#pragma region UI
// 人物状态UI
public:
	UFUNCTION()
	int InitArttributesUW();

	// 在UE蓝图中指定人物属性UI的蓝图对象
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UW|AttributesUW")
	TSubclassOf<UPlayerAttributesUW> playerAttributesUWClass;

	//// 人物属性UI对象
	UPROPERTY(BlueprintReadWrite, Category = "UW|AttributesUW")
	class UPlayerAttributesUW* playerAttributesUW;


// 存储点UI
public:
	UFUNCTION()
	void InitArchivalUW();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UW|ArchivalUW")
	TSubclassOf<UArchivalUW> archivalUWClass;

	//// 存储点UI对象
	UPROPERTY(BlueprintReadWrite, Category = "UW|ArchivalUW")
	class UArchivalUW* archivalUW;

#pragma endregion


#pragma region Controller
	class ACustomPlayerController* CustomPlayerController;
	
	//玩家启用， 禁用输入(额， 很暴力~~~
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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShoulderCamera")
	UCurveFloat* CameraCurve;  // 用于平滑过渡的曲线

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "ShoulderCamera")
	UTimelineComponent* CameraTransitionTimeline;

	FVector DefualtCameraPos = FVector(0, 0, 0);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShoulderCamera")
	FVector TargetCameraPos = FVector(500, 30, 0);

	FOnTimelineFloat TimelineProgress;
	FOnTimelineEvent TimelineFinished;

	// 动画回调函数
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
		//调试射线可视化
		UPROPERTY(EditDefaultsOnly, Category = "Debug")
		bool bDrawDebugLine = true;

		// 射线检测距离
		UPROPERTY(EditDefaultsOnly, Category = "Debug")
		float TraceDistance = 10000.f;

		void PerformLineTrace();
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

};


