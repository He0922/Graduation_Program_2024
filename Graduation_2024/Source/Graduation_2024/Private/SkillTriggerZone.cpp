#include "SkillTriggerZone.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "DrawDebugHelpers.h"
#include "Components/CapsuleComponent.h"

// Sets default values
ASkillTriggerZone::ASkillTriggerZone()
{
	PrimaryActorTick.bCanEverTick = false;

	//碰撞体组件
	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
	RootComponent = TriggerBox;

	bIsPlayerInRange = false;

	//默认技能参数
	skillRadius = 500.0f;
	skillAngle = 60.0f;
	skillDamage = 50.0f;
	skillCoolDown = 4.0f;
	bIsOnCooldown = false;

	//委托碰撞事件
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ASkillTriggerZone::OnOverlapBegin);
	TriggerBox->OnComponentEndOverlap.AddDynamic(this, &ASkillTriggerZone::OnOverlapEnd);

}

void ASkillTriggerZone::BeginPlay()
{
	Super::BeginPlay();
}

//进入和离开
void ASkillTriggerZone::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (otherActor && otherActor->IsA(ACharacter::StaticClass()))
	{
		UCapsuleComponent* playerCapsule = Cast<ACharacter>(otherActor)->GetCapsuleComponent();
		UCapsuleComponent* overlappedCapsule = Cast<UCapsuleComponent>(otherComp);

		if (overlappedCapsule == playerCapsule)
		{
			bIsPlayerInRange = true;
			UE_LOG(LogTemp, Warning, TEXT("Player entered the zone already."));
		}
	}
}

void ASkillTriggerZone::OnOverlapEnd(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 OtherBodyIndex)
{
	if (otherActor && otherActor->IsA(ACharacter::StaticClass()))
	{
		UCapsuleComponent* playerCapsule = Cast<ACharacter>(otherActor)->GetCapsuleComponent();
		UCapsuleComponent* overlappedCapsule = Cast<UCapsuleComponent>(otherComp);

		if (overlappedCapsule == playerCapsule)
		{
			bIsPlayerInRange = false;
			UE_LOG(LogTemp, Warning, TEXT("Player left the zone already."));
		}

	}
}

//技能效果
void ASkillTriggerZone::TriggerSkill(ACharacter* playerCharacter)
{
	if (!playerCharacter)
	{
		UE_LOG(LogTemp, Warning, TEXT("playerCharacter is NULL. Attempting to get the player character."));
		playerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);

		if (!playerCharacter) // 再次判断
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to get Player Character. Aborting skill trigger."));
			return;
		}
	}
	if (!playerCharacter)
	{
		UE_LOG(LogTemp, Warning, TEXT("playerCharater is null!"))
	}


	if (bIsOnCooldown)
	{
		UE_LOG(LogTemp, Warning, TEXT("The skill still on cooldown."));
		return;
	}

	if (bIsPlayerInRange)
	{
		FVector skillOrigin = GetActorLocation();
		FVector skillDirection = playerCharacter->GetActorForwardVector();

		//范围可视化
		DrawDebugCone(
			GetWorld(),
			skillOrigin,
			skillDirection,
			skillRadius,
			FMath::DegreesToRadians(skillAngle / 2.0f),
			FMath::DegreesToRadians(skillAngle / 2.0f),
			12,
			FColor::Yellow,
			false,
			2.0f
		);

		//实际判定区域与检测目标
		TArray<AActor*> overlappingActors;
		TArray<TEnumAsByte<EObjectTypeQuery>> objectTypes;
		objectTypes.Add(UEngineTypes::ConvertToObjectType(ECC_Pawn)); //注意：只检测Pawn类型

		UKismetSystemLibrary::SphereOverlapActors(
			GetWorld(),
			skillOrigin + skillDirection * (skillRadius / 2.0f),
			skillRadius,
			{},
			ACharacter::StaticClass(), //检测对象类型
			{},
			overlappingActors
		);

		for (AActor* detectedActor : overlappingActors)
		{
			FVector toActor = detectedActor->GetActorLocation() - skillOrigin;
			float distanceToActor = toActor.Size(); // 计算距离
			toActor.Normalize();

			float dotProduct = FVector::DotProduct(skillDirection, toActor);
			float angle = FMath::RadiansToDegrees(FMath::Acos(dotProduct));

			if (distanceToActor <= skillRadius && angle <= skillAngle / 2.0f)
			{
				UE_LOG(LogTemp, Warning, TEXT("%s is in the skill range!"), *detectedActor->GetName());
				//逻辑扩展，伤害、击退等
			}
		}

		//启用冷却
		UE_LOG(LogTemp, Warning, TEXT("Skill already triggered"));

		bIsOnCooldown = true;
		GetWorld()->GetTimerManager().SetTimer(CooldownTimerHandle, this, &ASkillTriggerZone::ResetCooldown, skillCoolDown, false);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Skill failed"));
	}
}

//技能升级
void ASkillTriggerZone::UpgradeSkillDamage(float additionalDamage)
{
	skillDamage += additionalDamage;
	UE_LOG(LogTemp, Warning, TEXT("Skill Damage upgraded. The current Damage is: %f"), skillDamage);
}

void ASkillTriggerZone::UpgradeSkillRange(float additionalRange)
{
	skillRadius += additionalRange;
	UE_LOG(LogTemp, Warning, TEXT("Skill Range upgraded. The current range is: %f"), skillRadius);
}

void ASkillTriggerZone::ResetCooldown()
{
	bIsOnCooldown = false;
	UE_LOG(LogTemp, Warning, TEXT("Skill is avaliable now"));
}