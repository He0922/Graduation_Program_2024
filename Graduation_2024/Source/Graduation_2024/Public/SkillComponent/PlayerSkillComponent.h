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

//�����������
public:
	//��һ�ȡ
	class APlayerCharacter* playerCharacter;

//������������
private:
	void StartEnergyCost(bool IFTh);
	void EnergyCost();
	void EndEnergyCost();

	//���õ�ǰ�۳�������ֵ
	float nowEnergyCostAmount = 0;

#pragma region AboutScan
//ɨ���������
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

//ɨ����أ� Ҫ�ⲿ��
public:
	void SetScanDistance();

	void StartScan();
		
	void EndScan();

	UFUNCTION(BlueprintCallable)
	float GetPlayerNowEnergy();
	
	//ɨ�����
	void SetScanDistance(float newDistance);

	UFUNCTION(BlueprintCallable)
	float GetScanDistance();
};

#pragma endregion
