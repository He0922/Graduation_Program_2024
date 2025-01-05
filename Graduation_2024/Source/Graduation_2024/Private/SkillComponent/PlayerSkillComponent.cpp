#include "SkillComponent/PlayerSkillComponent.h"
#include "../DebugHelper.h"
#include "TimerManager.h"
#include "Character/Player/PlayerCharacter.h"
#include "InterectBlock/BlockActor.h"
#include "InterectBlock/Runepaper.h"

DEFINE_LOG_CATEGORY_STATIC(PlayerSkillComponentLog, All, All);
UPlayerSkillComponent::UPlayerSkillComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UPlayerSkillComponent::BeginPlay()
{
	Super::BeginPlay();	

	//得到玩家类
	playerCharacter = Cast<APlayerCharacter>(GetOwner());
}

void UPlayerSkillComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

#pragma region Cold Time
//设置对应技能的冷却计时器
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

//开始扫描
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

//结束扫描
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

//设置扫描距离
void UPlayerSkillComponent::SetScanDistance(float newDistance = 5000)
{
	ScanDistance = newDistance;
}

//判断是否在冷却中
void UPlayerSkillComponent::InScanColdState()
{
	IFScanIsInCold = true;
}

//离开冷却状态
void UPlayerSkillComponent::OutScanColdState()
{
	IFScanIsInCold = false;
	GetWorld()->GetTimerManager().ClearTimer(ScanColdTimeTh);
}
#pragma endregion

//生成一个范围，用于检测内部的可交互节点
#pragma region Interect Block
void UPlayerSkillComponent::CheckBlock()
{
	UE_LOG(LogTemp, Warning, TEXT("Interct"));

	FVector CharacterLocation = GetOwner()->GetActorLocation();

	// 定义球形碰撞体
	FCollisionShape CollisionShape = FCollisionShape::MakeSphere(CheckRadius);

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
			if (IsActorInView(HitActor))
			{
				// 这里假设目标物体有一个名为 `Interact` 的方法
				ABlockActor* Interactable = Cast<ABlockActor>(HitActor);
				if (Interactable)
				{
					StartInterBlock(Interactable);
					break;
				}
			}
		}
	}

	// 可选：在调试时可视化球形范围
	DrawDebugSphere(GetWorld(), CharacterLocation, CheckRadius, 12, FColor::Green, false, 2.0f);
}

//检查是否在视野范围内
bool UPlayerSkillComponent::IsActorInView(AActor* Actor)
{
	if (!Actor) return false;

	// 获取玩家控制器的视野信息
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if (!PlayerController) return false;

	FVector PlayerLocation = playerCharacter->GetActorLocation();
	FVector PlayerForwardVector = playerCharacter->GetActorForwardVector();

	FVector ActorLocation = Actor->GetActorLocation();
	FVector ToActor = ActorLocation - PlayerLocation;

	// 计算玩家前方的方向与物体方向之间的夹角
	float DotProduct = FVector::DotProduct(PlayerForwardVector, ToActor.GetSafeNormal());

	// 视角阈值（例如45度为 0.7071的点积值）
	const float ViewAngleThreshold = FMath::Cos(FMath::DegreesToRadians(CheckViewAngle));  // 视野45度

	return DotProduct > ViewAngleThreshold; // 如果点积大于阈值，则物体在视野范围内
}

void UPlayerSkillComponent::StartInterBlock(AActor* actor)
{
	UE_LOG(LogTemp, Warning, TEXT("Has InterctBlock"));

	InterBlock = actor;

	//让玩家朝向其物体
	playerCharacter->FaceActor(actor);
	playerCharacter->ChangeInShoulderView();
	playerCharacter->StopInput();

	//生成符纸
	GetWorld()->GetTimerManager().SetTimer(InterDelayTimer, this, &UPlayerSkillComponent::FireRunePaper, InterDelayTime, false, InterDelayTime);

	//并开启另一个计时器来实现状态的转回
	GetWorld()->GetTimerManager().SetTimer(InterBackDelayTimer, this, &UPlayerSkillComponent::StopInterBlock, InterBackDelayTime, false, InterBackDelayTime);
}

void UPlayerSkillComponent::StopInterBlock()
{
	UE_LOG(LogTemp, Warning, TEXT("StopInterBlock"));

	playerCharacter->ChangeOutShoulderView();

	GetWorld()->GetTimerManager().SetTimer(ControlDelayTimer, this, &UPlayerSkillComponent::GetBackControl, 1.0f, false, 1.0f);
}

void UPlayerSkillComponent::GetBackControl()
{
	playerCharacter->StartInput();
}

void UPlayerSkillComponent::FireRunePaper()
{
	UE_LOG(LogTemp, Warning, TEXT("FireRunePaper"));

	if (Bullet == NULL)
		return;

	//计算符纸生成的位置
	FVector InitPos = GetOwner()->GetActorLocation() + InitPosOffset;
	// 计算从玩家到目标物体的方向
	FVector dir = InitPos - InterBlock->GetActorLocation();
	FRotator DirectionToTarget = (-dir.GetSafeNormal()).Rotation();
	GetWorld()->SpawnActor<ARunepaper>(Bullet, InitPos, DirectionToTarget);
}
#pragma endregion