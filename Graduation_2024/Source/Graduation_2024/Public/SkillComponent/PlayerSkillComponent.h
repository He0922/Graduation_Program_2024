// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerSkillComponent.generated.h"

//技能类型
UENUM(BlueprintType)
enum class ESkillType : uint8
{
	Scan,
	Other
};

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

protected:
	//玩家获取
	class APlayerCharacter* playerCharacter;

//冷却时间
#pragma region Cold Time
private:
	void SetColdTimerHandle(ESkillType skillType);

	//扫描冷却时间计时器
	FTimerHandle ScanColdTimeTh;
#pragma endregion

//玩家属性设置
#pragma region Player Property
//技能消耗能量
private:
	void StartEnergyCost(bool IFTh);
	void EnergyCost();
	void EndEnergyCost();

	//设置当前扣除能量的值
	float nowEnergyCostAmount = 0;

#pragma endregion

//扫描相关属性
#pragma region AboutScan
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

	//扫描冷却时间
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ScanProperty")
	float ScanColdTime = 5.0f;

	bool IFScanIsInCold = false;

//扫描相关， 要外部绑定
public:
	void SetScanDistance();

	UFUNCTION(BlueprintCallable)
	void StartScan();
		
	UFUNCTION(BlueprintCallable)
	void EndScan();

	UFUNCTION(BlueprintCallable)
	//获取玩家能量
	float GetPlayerNowEnergy();
	
	//扫描距离
	void SetScanDistance(float newDistance);

	UFUNCTION(BlueprintCallable)
	float GetScanDistance() const {	return ScanDistance;}

	//冷却状态
	void InScanColdState();
	void OutScanColdState();

	UFUNCTION(BlueprintCallable)
	bool GetScanColdState() const { return IFScanIsInCold; }
#pragma endregion

	//交互节点
#pragma region AboutInterectBlock
public:
	void InterctBlock();
#pragma endregion
};

