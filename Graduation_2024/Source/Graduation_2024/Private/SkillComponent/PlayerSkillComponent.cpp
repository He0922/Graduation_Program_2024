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


//能量减少
#pragma region CostEnergy
//是否为持续扣除
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
//持续扣除中。。
void UPlayerSkillComponent::EnergyCost()
{
	UE_LOG(PlayerSkillComponentLog, Display, TEXT("Hello"));
	playerCharacter->SetEnergy(-nowEnergyCostAmount);

	//若能量减少到0， 则触发玩家类中的OnEnergyEmpty
	if (playerCharacter->GetEnergy() <= 0)
	{
		playerCharacter->OnEnergyEmpty();
	}
}
//结束持续扣除
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

	//设置当前能量扣除值
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
	//设置冷却时间
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
	float Radius = 100.f; // 设置触发器半径

	// 定义球形碰撞体
	FCollisionShape CollisionShape = FCollisionShape::MakeSphere(Radius);

	// 进行碰撞检查，返回范围内的所有物体
	TArray<FHitResult> HitResults;
	FCollisionQueryParams CollisionParams;
	CollisionParams.AddIgnoredActor(GetOwner()); // 忽略自身

	bool bHit = GetWorld()->SweepMultiByChannel(HitResults, CharacterLocation, CharacterLocation, FQuat::Identity, ECC_Visibility, CollisionShape, CollisionParams);

	if (bHit)
	{
		// 处理找到的所有物体
		for (const FHitResult& Hit : HitResults)
		{
			AActor* HitActor = Hit.GetActor();
			if (HitActor)
			{
				// 这里假设目标物体有一个名为 `Interact` 的方法
				ABlockActor* Interactable = Cast<ABlockActor>(HitActor);
				if (Interactable)
				{
					UE_LOG(LogTemp, Display, TEXT("InterctBlock"));

					Interactable->InteractionBlock();  // 调用接口中的方法
					break;
				}
			}
		}
	}

	// 可选：在调试时可视化球形范围
	DrawDebugSphere(GetWorld(), CharacterLocation, Radius, 12, FColor::Green, false, 2.0f);
}
#pragma endregion
