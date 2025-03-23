#include "SkillComponent/PlayerSkillComponent.h"
#include "../DebugHelper.h"
#include "TimerManager.h"
#include "Character/Player/PlayerCharacter.h"
#include "InterectBlock/BlockActor.h"
#include "InterectBlock/Runepaper.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"

#include "DrawDebugHelpers.h" 
#include "Components/PrimitiveComponent.h" 
#include "GeometryCollection/GeometryCollectionComponent.h"

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

	nowSkillType = ESkillType::Common;
}

void UPlayerSkillComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UPlayerSkillComponent::SwitchSkill(int32 Direction)
{
	const int32 CurrentIndex = static_cast<int32>(nowSkillType);
	const int32 NumEnumValues = static_cast<int32>(ESkillType::Count);

	// 计算新索引并取模确保循环
	int32 NewIndex = (CurrentIndex + Direction + NumEnumValues) % NumEnumValues;
	nowSkillType = static_cast<ESkillType>(NewIndex);

	// 触发武器切换逻辑（例如更新UI或装备武器）
	UE_LOG(LogTemp, Warning, TEXT("Switched to skill: %d"), NewIndex);
}

void UPlayerSkillComponent::ChooseSkill(int32 Direction)
{
	if (nowSkillType == static_cast<ESkillType>(Direction) || InChangeSkillColdTime || IsInSkill)
	{
		return;
	}

	InChangeSkillColdTime = true;
	GetWorld()->GetTimerManager().SetTimer(ChangeSkillColdTimeTh, this, &UPlayerSkillComponent::SetChangeSkillColdTimeState, ChangeSkillColdTime, false, ChangeSkillColdTime);

	nowSkillType = static_cast<ESkillType>(Direction);

	FVector initpos = playerCharacter->GetActorLocation() + playerCharacter->GetActorForwardVector() * ChangeSkillEffectPos;
	FRotator rotater = playerCharacter->GetActorRotation();

	if (!(ToScanSkillVFX && ToInterSkillVFX && ToKickFireSkillVFX))
	{
		return;
	}

	switch (nowSkillType)
	{
		case ESkillType::Scan:
			UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), ToScanSkillVFX, initpos, rotater);
			break;
		case ESkillType::Inter:
			UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), ToInterSkillVFX, initpos, rotater);
			break;
		case ESkillType::KickFire:
			UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), ToKickFireSkillVFX, initpos, rotater);
			break;
		default:
			break;
	}
}

void UPlayerSkillComponent::SetChangeSkillColdTimeState()
{
	InChangeSkillColdTime = false;
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
		case ESkillType::KickFire:
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
	//if (!IFTh)
	//{
	//	EnergyCost();
	//}
	//else
	//{
	//	GetWorld()->GetTimerManager().SetTimer(ScanEnergyCostTh, this, &UPlayerSkillComponent::EnergyCost, ScanECFrequency, true, 0.0f);
	//}
}
//持续扣除中。。
void UPlayerSkillComponent::EnergyCost()
{
	UE_LOG(PlayerSkillComponentLog, Display, TEXT("Hello"));
	playerCharacter->SetEnergy(-nowEnergyCostAmount);

	//若能量减少到0， 则触发玩家类中的OnEnergyEmpty
	if (playerCharacter->GetEnergy() <= 0)
	{
		//EndScan();
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

	StartScanEvent.Broadcast();

	UE_LOG(PlayerSkillComponentLog, Warning, TEXT("StartScan"));

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

	EndScanEvent.Broadcast();

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
			ABlockActor* BlockActor_temp = Elem.Value; // 物品对应的 ABlockActor*

			// 如果当前的距离更小，更新最小距离和最近物品
			if (Distance < MinDistance)
			{
				MinDistance = Distance;
				ClosestBlock = BlockActor_temp;
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

void UPlayerSkillComponent::StartLineTrace()
{
	// 立即执行一次检测
	PerformLineTrace();

	// 启动定时器，按间隔重复检测
	GetWorld()->GetTimerManager().SetTimer(
		TraceTimerHandle,
		this,
		&UPlayerSkillComponent::PerformLineTrace,
		TraceInterval,
		true // 是否循环
	);
}

void UPlayerSkillComponent::StopLineTrace()
{
	SetBlockActor(false);
	// 关闭定时器
	GetWorld()->GetTimerManager().ClearTimer(TraceTimerHandle);
}

void UPlayerSkillComponent::PerformLineTrace()
{
	//防止因玩家原因报错
	if (!playerCharacter)
		return;

	APlayerController* PlayerController = Cast<APlayerController>(playerCharacter->GetController());
	if (!PlayerController)
		return;

	// 获取屏幕中心坐标
	int32 ViewportSizeX, ViewportSizeY;
	PlayerController->GetViewportSize(ViewportSizeX, ViewportSizeY);
	FVector2D ScreenCenter = FVector2D(ViewportSizeX * 0.5f, ViewportSizeY * 0.5f);

	// 计算射线起点和方向
	FVector CameraLocation;
	FVector CameraDirection;
	PlayerController->DeprojectScreenPositionToWorld(
		ScreenCenter.X,
		ScreenCenter.Y,
		CameraLocation,
		CameraDirection
	);

	FVector TraceStart = CameraLocation;
	FVector TraceEnd = CameraLocation + (CameraDirection * TraceDistance);

	// 执行射线检测
	FHitResult HitResult;
	FCollisionQueryParams TraceParams(FName(TEXT("LineTrace")), true, playerCharacter);
	TraceParams.AddIgnoredActor(playerCharacter); // 忽略自身

	bool bHit = GetWorld()->LineTraceSingleByChannel(
		HitResult,
		TraceStart,
		TraceEnd,
		ECC_Visibility,
		TraceParams
	);

	// 处理命中结果
	if (bHit)
	{
		AActor* HitActor = HitResult.GetActor();
		ABlockActor* Interactable = Cast<ABlockActor>(HitActor);
		if (Interactable)
		{
			BlockActor = Interactable;
			SetBlockActor(true);
			//更改模板值
			// 示例：实时更新UI或高亮目标
			UE_LOG(LogTemp, Warning, TEXT("Hitting Actor: %s"), *HitActor->GetName());
		}
		else
		{
			SetBlockActor(false);
		}
	}
	else
	{
		SetBlockActor(false);
	}

	// 调试可视化
	if (bDrawDebugLine)
	{
		FColor DebugColor = bHit ? FColor::Green : FColor::Red;
		DrawDebugLine(
			GetWorld(),
			TraceStart,
			TraceEnd,
			DebugColor,
			false,
			0.f,  // 每帧绘制，不持久
			0,
			2.f
		);
	}
}

void UPlayerSkillComponent::SetBlockActor(bool IfSettoHas)
{
	if (IfSettoHas)
	{
		BlockActor->SetHighlight(true);
	}
	else
	{
		if (BlockActor)
		{
			BlockActor->SetHighlight(false);
		}

		BlockActor = NULL;
	}
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

	if (Bullet == NULL || BlockActor == NULL)
		return;

	//计算符纸生成的位置
	FVector InitPos = playerCharacter->GetMesh()->GetSocketLocation(SocketLocationName);
	// 计算从玩家到目标物体的方向
	FVector dir = InitPos - BlockActor->GetActorLocation();
	FRotator DirectionToTarget = (-dir.GetSafeNormal()).Rotation();
	GetWorld()->SpawnActor<ARunepaper>(Bullet, InitPos, DirectionToTarget);

	if (RunepaperFire != NULL)
	{
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), RunepaperFire, InitPos, DirectionToTarget);
	}
}
#pragma endregion

#pragma region Shockwave
void UPlayerSkillComponent::ResetShockwaveCooldown()
{
	bIsShockwaveOnCooldown = false;
	UE_LOG(PlayerSkillComponentLog, Warning, TEXT("Shockwave cooldown ended!"));
}

void UPlayerSkillComponent::PerformConeShockwave()
{
	if (!playerCharacter)
	{
		UE_LOG(PlayerSkillComponentLog, Warning, TEXT("Player Character not found"));
		return;
	}

	if (bIsShockwaveOnCooldown)
	{
		UE_LOG(PlayerSkillComponentLog, Warning, TEXT("Shockwave is on cooldown!"));
		return;
	}

	bIsShockwaveOnCooldown = true;
	GetWorld()->GetTimerManager().SetTimer(ShockwaveCooldownTimerHandle, this, &UPlayerSkillComponent::ResetShockwaveCooldown, ShockwaveCooldownTime, false);

	FVector ShockwaveOrigin = playerCharacter->GetActorLocation();
	FVector ForwardVector = playerCharacter->GetActorForwardVector();

	float ConeAngle = 45.0f;
	float MaxDistance = 500.0f;
	float ShockwaveStrength = 10000.0f;
	int NumRays = 30;
	float ShockwaveDamage = 30.0f;

	TArray<AActor*> HitActors;

	for (int i = 0; i < NumRays; ++i)
	{
		float Angle = FMath::RandRange(-ConeAngle, ConeAngle);
		FRotator RotOffset(0.0f, Angle, 0.0f);
		FVector RayDirection = RotOffset.RotateVector(ForwardVector);
		FVector EndLocation = ShockwaveOrigin + (RayDirection * MaxDistance);

		FHitResult HitResult;
		FCollisionQueryParams Params;
		Params.AddIgnoredActor(playerCharacter);

		bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, ShockwaveOrigin, EndLocation, ECC_Visibility, Params);
		if (bHit && HitResult.GetActor())
		{
			AActor* HitActor = HitResult.GetActor();
			HitActors.AddUnique(HitActor);
		}

		DrawDebugLine(GetWorld(), ShockwaveOrigin, EndLocation, FColor::Red, false, 0.5f, 0, 1.0f);
	}

	for (AActor* TargetActor : HitActors)
	{
		UPrimitiveComponent* TargetComponent = TargetActor->FindComponentByClass<UPrimitiveComponent>();
		if (!TargetComponent)
		{
			UGeometryCollectionComponent* GCComponent = TargetActor->FindComponentByClass<UGeometryCollectionComponent>();
			if (GCComponent)
			{
				UE_LOG(PlayerSkillComponentLog, Warning, TEXT("Applying radial impulse to GC: %s"), *TargetActor->GetName());
				GCComponent->AddRadialImpulse(ShockwaveOrigin, 500.0f, ShockwaveStrength, ERadialImpulseFalloff::RIF_Linear, true);
				continue;
			}
			UE_LOG(PlayerSkillComponentLog, Warning, TEXT("No PrimitiveComponent found on: %s"), *TargetActor->GetName());
			continue;
		}
		FVector DirectionToTarget = (TargetActor->GetActorLocation() - ShockwaveOrigin).GetSafeNormal();
		TargetComponent->AddImpulse(DirectionToTarget * ShockwaveStrength, NAME_None, true);
		UE_LOG(PlayerSkillComponentLog, Warning, TEXT("Applying impulse to: %s"), *TargetActor->GetName())
	}

	DrawDebugCone(GetWorld(), ShockwaveOrigin, ForwardVector, MaxDistance, FMath::DegreesToRadians(ConeAngle), FMath::DegreesToRadians(ConeAngle), 12, FColor::Blue, false, 1.0f);

}
#pragma endregion