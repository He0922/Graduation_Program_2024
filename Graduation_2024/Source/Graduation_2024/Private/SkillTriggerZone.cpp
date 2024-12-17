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

	//��ײ�����
	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
	RootComponent = TriggerBox;

	bIsPlayerInRange = false;

	//Ĭ�ϼ��ܲ���
	skillRadius = 500.0f;
	skillAngle = 60.0f;
	skillDamage = 50.0f;
	skillCoolDown = 4.0f;
	bIsOnCooldown = false;

	//ί����ײ�¼�
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ASkillTriggerZone::OnOverlapBegin);
	TriggerBox->OnComponentEndOverlap.AddDynamic(this, &ASkillTriggerZone::OnOverlapEnd);

}

void ASkillTriggerZone::BeginPlay()
{
	Super::BeginPlay();
}

//������뿪
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

//����Ч��
void ASkillTriggerZone::TriggerSkill(ACharacter* playerCharacter)
{
	if (!playerCharacter)
	{
		UE_LOG(LogTemp, Warning, TEXT("playerCharacter is NULL. Attempting to get the player character."));
		playerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);

		if (!playerCharacter) // �ٴ��ж�
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

		//��Χ���ӻ�
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

		//ʵ���ж���������Ŀ��
		TArray<AActor*> overlappingActors;
		TArray<TEnumAsByte<EObjectTypeQuery>> objectTypes;
		objectTypes.Add(UEngineTypes::ConvertToObjectType(ECC_Pawn)); //ע�⣺ֻ���Pawn����

		UKismetSystemLibrary::SphereOverlapActors(
			GetWorld(),
			skillOrigin + skillDirection * (skillRadius / 2.0f),
			skillRadius,
			{},
			ACharacter::StaticClass(), //����������
			{},
			overlappingActors
		);

		for (AActor* detectedActor : overlappingActors)
		{
			FVector toActor = detectedActor->GetActorLocation() - skillOrigin;
			float distanceToActor = toActor.Size(); // �������
			toActor.Normalize();

			float dotProduct = FVector::DotProduct(skillDirection, toActor);
			float angle = FMath::RadiansToDegrees(FMath::Acos(dotProduct));

			if (distanceToActor <= skillRadius && angle <= skillAngle / 2.0f)
			{
				UE_LOG(LogTemp, Warning, TEXT("%s is in the skill range!"), *detectedActor->GetName());
				//�߼���չ���˺������˵�
			}
		}

		//������ȴ
		UE_LOG(LogTemp, Warning, TEXT("Skill already triggered"));

		bIsOnCooldown = true;
		GetWorld()->GetTimerManager().SetTimer(CooldownTimerHandle, this, &ASkillTriggerZone::ResetCooldown, skillCoolDown, false);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Skill failed"));
	}
}

//��������
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