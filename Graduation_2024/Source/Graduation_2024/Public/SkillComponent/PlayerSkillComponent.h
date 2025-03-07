// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerSkillComponent.generated.h"

class UNiagaraSystem;

//技能类型
UENUM(BlueprintType)
enum class ESkillType : uint8
{
	Common,
	Scan,
	Inter,
	KickFire,
	Count
};

class ARunepaper;

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

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkillType")
	ESkillType nowSkillType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkillType")
	UNiagaraSystem* SkillChangVFX;

	void SwitchSkill(int32 Direction);

//冷却时间
#pragma region Cold Time
private:
	void SetColdTimerHandle(ESkillType skillType);

	//扫描冷却时间计时器
	FTimerHandle ScanColdTimeTh;

	//激活的节点后动画的计时器
	//三个计时器， 一个发射符纸的延时计时，
	//一个 开始转换视角的延迟计时
	//一个 回复控制的延迟计时
	FTimerHandle InterDelayTimer;
	FTimerHandle InterBackDelayTimer;
	FTimerHandle ControlDelayTimer;

	FTimerHandle TraceTimerHandle; // 射线定时器

	FTimerHandle ShockwaveCooldownTimerHandle;
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

//交互节点相关
#pragma region AboutInterectBlock
public:
	void CheckBlock();
	bool IsActorInView(AActor* Actor);

	void StartLineTrace();
	void StopLineTrace();

	void FireRunePaper();
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inter Range")
	float CheckRadius = 200.0f;//触发器半径

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inter Range")
	float CheckViewAngle = 45.0f;//检测视野的角度

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RunePaper")
	float InterDelayTime = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RunePaper")
	float InterBackDelayTime = 2.0f;

	UPROPERTY(EditAnywhere, Category = "RunePaper")
	TSubclassOf<ARunepaper> Bullet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RunePaper")
	FName SocketLocationName = L"FirePos";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RunePaper")
	FVector InitPosOffset = FVector(50, 0, 0);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RunePaper")
	UNiagaraSystem* RunepaperFire;

	// 射线检测距离
	UPROPERTY(EditDefaultsOnly, Category = "Debug")
	float TraceDistance = 10000.f;

	// 调试射线可视化
	UPROPERTY(EditDefaultsOnly, Category = "Debug")
	bool bDrawDebugLine = true;

	// 射线检测间隔（秒）
	UPROPERTY(EditAnywhere, Category = "Debug")
	float TraceInterval = 0.1f;

private:
	AActor* InterBlock;

	class ABlockActor* BlockActor;
	void SetBlockActor(bool IfSettoHas);


	void StartInterBlock(AActor* actor);
	void StopInterBlock();
	void GetBackControl();
	//void FireRunePaper();
	void PerformLineTrace();
#pragma endregion

#pragma region Shockwave
public:
	UFUNCTION(BlueprintCallable, Category = "Skills")
	void PerformConeShockwave();

	float ShockwaveCooldownTime = 5.0f;

private:
	bool bIsShockwaveOnCooldown = false;
	void ResetShockwaveCooldown();
#pragma endregion
};

