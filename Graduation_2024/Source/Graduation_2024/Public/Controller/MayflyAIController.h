// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Character/Mayfly.h"
#include "MayflyAIController.generated.h"

/**
 * 
 */
UCLASS()
class GRADUATION_2024_API AMayflyAIController : public AAIController
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Component",meta = (AllowPrivateAccess = "true"))
	UBlackboardComponent* MayflyBlackboard;//黑板组件
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Component",meta = (AllowPrivateAccess = "true"))
	UBlackboardData* MayflyBlackboardData;//黑板数据
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Component",meta = (AllowPrivateAccess = "true"))
	UBehaviorTree* MayflyBehaviorTree;//行为树组件
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = "Follow",meta = (AllowPrivateAccess = "true"))
	bool IsTheSameRotation;
	
	void TryGetInstance(); //尝试获取
	void DistanceDetection(); //距离检测
	void ChangeRotation(); //面向朝向PLayer面向
	void ChangeVelocity(); //根据Player速度以及与目标点的距离改变Mayfly速度
	void SetBlackboardKey();//保持黑板键值与变量同步
	
public:
	AMayflyAIController();
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player", meta = (AllowPrivateAccess = "true"))
	APlayerCharacter* PlayerCharacter;//Player
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Mayfly", meta = (AllowPrivateAccess = "true"))
	AMayfly* Mayfly;//Mayfly
	
	

protected:
	
	virtual void Tick(float DeltaSeconds) override;
	virtual void BeginPlay() override;
	virtual void OnPossess(APawn* PossessedPawn) override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Follow",meta = (AllowPrivateAccess = "true"))
	float DistanceBetween;//Mayfly和Player之间的距离
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Follow",meta = (AllowPrivateAccess = "true"))
	float SpeedGap;//跟随时的速度差距
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Follow", meta = (AllowPrivateAccess = "true"))
	bool IsNearPlayer;//黑板键：IsNearToPlayer
	
};


