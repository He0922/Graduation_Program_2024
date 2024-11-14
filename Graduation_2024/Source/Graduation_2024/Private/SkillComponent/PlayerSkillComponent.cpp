#include "SkillComponent/PlayerSkillComponent.h"
#include "../DebugHelper.h"
#include "TimerManager.h"
#include "Character/PlayerCharacter.h"
#include "InterectBlock/BlockActor.h"


DEFINE_LOG_CATEGORY_STATIC(PlayerSkillComponentLog, All, All);
UPlayerSkillComponent::UPlayerSkillComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}


void UPlayerSkillComponent::BeginPlay()
{
	Super::BeginPlay();	

	playerCharacter = Cast<APlayerCharacter>(GetOwner());
}

void UPlayerSkillComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

#pragma region Cold Time
void UPlayerSkillComponent::SetColdTimerHandle(ESkillType skillType)
{
	switch (skillType)
	{
		case ESkillType::Scan:
			InScanColdState();
			GetWorld()->GetTimerManager().SetTimer(ScanColdTimeTh, this,  &UPlayerSkillComponent::OutScanColdState, 1.0f, false, ScanColdTime);
			break;
		case ESkillType::Other:
			break;
		default:
			break;
	}
}

#pragma endregion


//��������
#pragma region CostEnergy
//�Ƿ�Ϊ�����۳�
void UPlayerSkillComponent::StartEnergyCost(bool IFTh = false)
{
	if (!IFTh)
	{
		EnergyCost();
	}
	else
	{
		GetWorld()->GetTimerManager().SetTimer(ScanEnergyCostTh, this, &UPlayerSkillComponent::EnergyCost, ScanECFrequency, true, 0.0f);
	}
}
//�����۳��С���
void UPlayerSkillComponent::EnergyCost()
{
	UE_LOG(PlayerSkillComponentLog, Display, TEXT("Hello"));
	playerCharacter->SetEnergy(-nowEnergyCostAmount);

	//���������ٵ�0�� �򴥷�������е�OnEnergyEmpty
	if (playerCharacter->GetEnergy() <= 0)
	{
		playerCharacter->OnEnergyEmpty();
	}
}
//���������۳�
void UPlayerSkillComponent::EndEnergyCost()
{
	GetWorld()->GetTimerManager().ClearTimer(ScanEnergyCostTh);
}
#pragma endregion

#pragma region Scan
float UPlayerSkillComponent::GetPlayerNowEnergy()
{
	return playerCharacter->GetEnergy();
}

void UPlayerSkillComponent::StartScan()
{
	if (IFScanIsInCold)
	{
		return;
	}

	UE_LOG(PlayerSkillComponentLog, Display, TEXT("StartScan"));

	//���õ�ǰ�����۳�ֵ
	nowEnergyCostAmount = ScanEnergyCost;

	StartEnergyCost(true);
}

void UPlayerSkillComponent::EndScan()
{
	if (IFScanIsInCold)
	{
		return;
	}

	UE_LOG(PlayerSkillComponentLog, Display, TEXT("EndScan"));

	EndEnergyCost();
	//������ȴʱ��
	SetColdTimerHandle(ESkillType::Scan);
}

void UPlayerSkillComponent::SetScanDistance(float newDistance = 5000)
{
	ScanDistance = newDistance;
}

void UPlayerSkillComponent::InScanColdState()
{
	IFScanIsInCold = true;
}
void UPlayerSkillComponent::OutScanColdState()
{
	IFScanIsInCold = false;
	GetWorld()->GetTimerManager().ClearTimer(ScanColdTimeTh);
}
#pragma endregion

#pragma region Interect Block
void UPlayerSkillComponent::InterctBlock()
{
	UE_LOG(LogTemp, Display, TEXT("Interct"));

	FVector CharacterLocation = GetOwner()->GetActorLocation();
	float Radius = 100.f; // ���ô������뾶

	// ����������ײ��
	FCollisionShape CollisionShape = FCollisionShape::MakeSphere(Radius);

	// ������ײ��飬���ط�Χ�ڵ���������
	TArray<FHitResult> HitResults;
	FCollisionQueryParams CollisionParams;
	CollisionParams.AddIgnoredActor(GetOwner()); // ��������

	bool bHit = GetWorld()->SweepMultiByChannel(HitResults, CharacterLocation, CharacterLocation, FQuat::Identity, ECC_Visibility, CollisionShape, CollisionParams);

	if (bHit)
	{
		// �����ҵ�����������
		for (const FHitResult& Hit : HitResults)
		{
			AActor* HitActor = Hit.GetActor();
			if (HitActor)
			{
				// �������Ŀ��������һ����Ϊ `Interact` �ķ���
				ABlockActor* Interactable = Cast<ABlockActor>(HitActor);
				if (Interactable)
				{
					UE_LOG(LogTemp, Display, TEXT("InterctBlock"));

					Interactable->InteractionBlock();  // ���ýӿ��еķ���
					break;
				}
			}
		}
	}

	// ��ѡ���ڵ���ʱ���ӻ����η�Χ
	DrawDebugSphere(GetWorld(), CharacterLocation, Radius, 12, FColor::Green, false, 2.0f);
}
#pragma endregion
