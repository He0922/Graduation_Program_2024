// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerSkillComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent),Blueprintable, BlueprintType)
class GRADUATION_2024_API UPlayerSkillComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UPlayerSkillComponent();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

//玩家属性设置
public:
	//玩家获取
	class APlayerCharacter* playerCharacter;

//技能消耗能量
private:
	void StartEnergyCost(bool IFTh);
	void EnergyCost();
	void EndEnergyCost();

	//设置当前扣除能量的值
	float nowEnergyCostAmount = 0;

#pragma region AboutScan
//扫描相关属性
private:
	//扫描控制组件
	class UScanControllerComponent* SC_Component;

	FTimerHandle ScanEnergyCostTh;

protected:
	//扫描距离
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ScanProperty")
	float ScanDistance = 5000;

	//扫描消耗能量
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ScanProperty")
	float ScanEnergyCost = 10;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ScanProperty")
	float ScanECFrequency = 1;

//扫描相关， 要外部绑定
public:
	void SetScanDistance();

	void StartScan();
		
	void EndScan();

	UFUNCTION(BlueprintCallable)
	float GetPlayerNowEnergy();
	
	//扫描距离
	void SetScanDistance(float newDistance);

	UFUNCTION(BlueprintCallable)
	float GetScanDistance();
};

#pragma endregion
