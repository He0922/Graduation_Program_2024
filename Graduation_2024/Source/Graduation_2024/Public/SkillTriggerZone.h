#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SkillTriggerZone.generated.h"

UCLASS()
class GRADUATION_2024_API ASkillTriggerZone : public AActor
{
	GENERATED_BODY()

public:
	ASkillTriggerZone();

protected:
	virtual void BeginPlay() override;

	//������뿪��Χ���
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp,
		int32 OtherBodyIndex);

	//���ܴ���
	UFUNCTION(BlueprintCallable, Category = "Skill")
	void TriggerSkill(ACharacter* playerCharactor);

	//���������˿�
	UFUNCTION(BlueprintCallable, Category = "Skill")
	void UpgradeSkillDamage(float additionalDamage);

	UFUNCTION(BlueprintCallable, Category = "Skill")
	void UpgradeSkillRange(float additionalRange);

private:
	//��ײ�����
	UPROPERTY(VisibleAnywhere, Category = "Trigger")
	class UBoxComponent* TriggerBox;

	//����Ƿ��ڷ�Χ��
	UPROPERTY(VisibleAnywhere, Category = "Trigger")
	bool bIsPlayerInRange;

	//��Χ����
	UPROPERTY(EditAnywhere, Category = "Skill")
	float skillRadius;

	UPROPERTY(EditAnywhere, Category = "Skill")
	float skillAngle;

	UPROPERTY(EditAnywhere, Category = "Skill")
	float skillDamage;

	//������ȴʱ��
	UPROPERTY(EditAnywhere, Category = "Skill")
	float skillCoolDown;

	bool bIsOnCooldown;

	FTimerHandle CooldownTimerHandle;

	void ResetCooldown();
};