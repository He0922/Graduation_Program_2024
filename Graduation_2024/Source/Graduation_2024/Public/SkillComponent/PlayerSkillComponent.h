// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerSkillComponent.generated.h"

class UNiagaraSystem;

//��������
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
	//��һ�ȡ
	class APlayerCharacter* playerCharacter;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkillType")
	ESkillType nowSkillType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkillType")
	UNiagaraSystem* SkillChangVFX;

	void SwitchSkill(int32 Direction);

//��ȴʱ��
#pragma region Cold Time
private:
	void SetColdTimerHandle(ESkillType skillType);

	//ɨ����ȴʱ���ʱ��
	FTimerHandle ScanColdTimeTh;

	//����Ľڵ�󶯻��ļ�ʱ��
	//������ʱ���� һ�������ֽ����ʱ��ʱ��
	//һ�� ��ʼת���ӽǵ��ӳټ�ʱ
	//һ�� �ظ����Ƶ��ӳټ�ʱ
	FTimerHandle InterDelayTimer;
	FTimerHandle InterBackDelayTimer;
	FTimerHandle ControlDelayTimer;

	FTimerHandle TraceTimerHandle; // ���߶�ʱ��

	FTimerHandle ShockwaveCooldownTimerHandle;
#pragma endregion

//�����������
#pragma region Player Property
//������������
private:
	void StartEnergyCost(bool IFTh);
	void EnergyCost();
	void EndEnergyCost();

	//���õ�ǰ�۳�������ֵ
	float nowEnergyCostAmount = 0;

#pragma endregion

//ɨ���������
#pragma region AboutScan
private:
	//ɨ��������
	class UScanControllerComponent* SC_Component;

	FTimerHandle ScanEnergyCostTh;

protected:
	//ɨ�����
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ScanProperty")
	float ScanDistance = 5000;

	//ɨ����������
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ScanProperty")
	float ScanEnergyCost = 10;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ScanProperty")
	float ScanECFrequency = 1;

	//ɨ����ȴʱ��
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ScanProperty")
	float ScanColdTime = 5.0f;

	bool IFScanIsInCold = false;

//ɨ����أ� Ҫ�ⲿ��
public:
	void SetScanDistance();

	UFUNCTION(BlueprintCallable)
	void StartScan();
		
	UFUNCTION(BlueprintCallable)
	void EndScan();

	UFUNCTION(BlueprintCallable)
	//��ȡ�������
	float GetPlayerNowEnergy();
	
	//ɨ�����
	void SetScanDistance(float newDistance);

	UFUNCTION(BlueprintCallable)
	float GetScanDistance() const {	return ScanDistance;}

	//��ȴ״̬
	void InScanColdState();
	void OutScanColdState();

	UFUNCTION(BlueprintCallable)
	bool GetScanColdState() const { return IFScanIsInCold; }
#pragma endregion

//�����ڵ����
#pragma region AboutInterectBlock
public:
	void CheckBlock();
	bool IsActorInView(AActor* Actor);

	void StartLineTrace();
	void StopLineTrace();

	void FireRunePaper();
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inter Range")
	float CheckRadius = 200.0f;//�������뾶

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inter Range")
	float CheckViewAngle = 45.0f;//�����Ұ�ĽǶ�

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

	// ���߼�����
	UPROPERTY(EditDefaultsOnly, Category = "Debug")
	float TraceDistance = 10000.f;

	// �������߿��ӻ�
	UPROPERTY(EditDefaultsOnly, Category = "Debug")
	bool bDrawDebugLine = true;

	// ���߼�������룩
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

