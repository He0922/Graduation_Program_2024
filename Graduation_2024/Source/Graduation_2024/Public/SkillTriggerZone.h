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

	//进入和离开范围检测
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp,
		int32 OtherBodyIndex);

	//技能触发
	UFUNCTION(BlueprintCallable, Category = "Skill")
	void TriggerSkill(ACharacter* playerCharactor);

	//技能升级端口
	UFUNCTION(BlueprintCallable, Category = "Skill")
	void UpgradeSkillDamage(float additionalDamage);

	UFUNCTION(BlueprintCallable, Category = "Skill")
	void UpgradeSkillRange(float additionalRange);

private:
	//碰撞体组件
	UPROPERTY(VisibleAnywhere, Category = "Trigger")
	class UBoxComponent* TriggerBox;

	//检测是否在范围内
	UPROPERTY(VisibleAnywhere, Category = "Trigger")
	bool bIsPlayerInRange;

	//范围参数
	UPROPERTY(EditAnywhere, Category = "Skill")
	float skillRadius;

	UPROPERTY(EditAnywhere, Category = "Skill")
	float skillAngle;

	UPROPERTY(EditAnywhere, Category = "Skill")
	float skillDamage;

	//技能冷却时间
	UPROPERTY(EditAnywhere, Category = "Skill")
	float skillCoolDown;

	bool bIsOnCooldown;

	FTimerHandle CooldownTimerHandle;

	void ResetCooldown();
};