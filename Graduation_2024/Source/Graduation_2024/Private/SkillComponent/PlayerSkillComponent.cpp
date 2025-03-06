#include "SkillComponent/PlayerSkillComponent.h"
#include "../DebugHelper.h"
#include "TimerManager.h"
#include "Character/Player/PlayerCharacter.h"
#include "InterectBlock/BlockActor.h"
#include "InterectBlock/Runepaper.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"


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
		EndScan();
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

	TMap<float, ABlockActor*> blocks;

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
					float length = FVector::Distance(Interactable->GetActorLocation(), GetOwner()->GetActorLocation());
					blocks.Add(length, Interactable);
					//StartInterBlock(Interactable);
					//break;
				}
			}
		}
	}

	if (blocks.IsEmpty())
	{
		return;
	}
	else
	{
		// 初始化最小距离和最近物品的指针
		float MinDistance = TNumericLimits<float>::Max();  // 设置为最大值
		ABlockActor* ClosestBlock = nullptr;

		// 遍历所有的元素
		for (const TPair<float, ABlockActor*>& Elem : blocks)
		{
			float Distance = Elem.Key;  // 这里的 Key 就是距离
			ABlockActor* BlockActor = Elem.Value; // 物品对应的 ABlockActor*

			// 如果当前的距离更小，更新最小距离和最近物品
			if (Distance < MinDistance)
			{
				MinDistance = Distance;
				ClosestBlock = BlockActor;
			}
		}

		StartInterBlock(ClosestBlock);
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
	FVector InitPos = playerCharacter->GetMesh()->GetSocketLocation(SocketLocationName);
	// 计算从玩家到目标物体的方向
	FVector dir = InitPos - InterBlock->GetActorLocation();
	FRotator DirectionToTarget = (-dir.GetSafeNormal()).Rotation();
	GetWorld()->SpawnActor<ARunepaper>(Bullet, InitPos, DirectionToTarget);

	if (RunepaperFire != NULL)
	{
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), RunepaperFire, InitPos, DirectionToTarget);
	}
}

// 打铁花冷却
void UPlayerSkillComponent::ResetShockwaveCooldown()
{
	bIsShockwaveOnCooldown = false;
	UE_LOG(PlayerSkillComponentLog, Warning, TEXT("Shockwave cooldown ended!"));
}

void UPlayerSkillComponent::PerformConeShockwave()
{
	if (!playerCharacter)
	{
		UE_LOG(PlayerSkillComponentLog, Warning, TEXT("Player Character not found")); //查找玩家是否存在
		return;
	}

	if(bIsShockwaveOnCooldown)
	{
		UE_LOG(PlayerSkillComponentLog, Warning, TEXT("Shockwave is on cooldown!"));
		return;
	}

	bIsShockwaveOnCooldown = true;
	GetWorld()->GetTimerManager().SetTimer(ShockwaveCooldownTimerHandle, this, &UPlayerSkillComponent::ResetShockwaveCooldown, ShockwaveCooldownTime, false);

	FVector ShockwaveOrigin = playerCharacter->GetActorLocation();
	FVector ForwardVector = playerCharacter->GetActorForwardVector();

	float ConeAngle = 45.0f; //圆锥半角
	float MaxDistance = 500.0f; //最大距离
	float ShockwaveStrength = 10000.0f; // 冲击力大小
	int NumRays = 30; //用于锥形检测的射线数量
	float ShockwaveDamage = 30.0f; // 造成的伤害(暂时留一个 万一后面需要)
	
	TArray<AActor*> HitActors; //存储检测到的物体

	//锥形射线检测
	for (int i = 0; i < NumRays; ++i)
	{
		float Angle = FMath::RandRange(-ConeAngle, ConeAngle); //生成随机角度
		FRotator RotOffset(0.0f, Angle, 0.0f); //旋转角度
		FVector RayDirection = RotOffset.RotateVector(ForwardVector); //旋转方向
		FVector EndLocation = ShockwaveOrigin + (RayDirection * MaxDistance); //终点
		
		FHitResult HitResult;
		FCollisionQueryParams Params;
		Params.AddIgnoredActor(playerCharacter);

		bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, ShockwaveOrigin, EndLocation, ECC_Visibility, Params); //检查范围内是否击中物品
		if (bHit && HitResult.GetActor())
		{
			AActor* HitActor = HitResult.GetActor();
			if (HitActor -> ActorHasTag("Destructible") || HitActor -> ActorHasTag("Enemy"))
			{
				HitActors.AddUnique(HitActor);
			}
		}

		DrawDebugLine(GetWorld(), ShockwaveOrigin, EndLocation, FColor::Red, false, 0.5f, 0, 1.0f);
	}

	for(AActor* TargetActor : HitActors)
	{
		UPrimitiveComponent* TargetComponent = TargetActor->FindComponentByClass<UPrimitiveComponent>();
		if (!TargetComponent) continue;

		FVector DirectionToTarget = (TargetActor->GetActorLocation() - ShockwaveOrigin).GetSafeNormal();

		//仅对于带有'Destructible'的物体施加冲击力
		if (TargetActor->ActorHasTag("Destructible") && TargetComponent->IsSimulatingPhysics())
		{
			TargetComponent->AddImpulse(DirectionToTarget * ShockwaveStrength);
		}

		//敌人效果影响（以防万一,预留）
		if (TargetActor -> ActorHasTag("Enemy"))
		{
			//伤害没给

			if (TargetComponent->IsSimulatingPhysics())
			{
				TargetComponent->AddImpulse(DirectionToTarget * ShockwaveOrigin * 0.5f);
			}
		}
	}

	DrawDebugCone(GetWorld(), ShockwaveOrigin, ForwardVector, MaxDistance, FMath::DegreesToRadians(ConeAngle), FMath::DegreesToRadians(ConeAngle), 12, FColor::Blue, false, 1.0f);

}
#pragma endregion