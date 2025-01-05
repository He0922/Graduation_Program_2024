#include "InterectBlock/Runepaper.h"
#include "Components/SphereComponent.h"
#include "Gameframework/ProjectileMovementComponent.h"

#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"

#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"

#include "InterectBlock/BlockActor.h"

DEFINE_LOG_CATEGORY_STATIC(RunepaperLog, All, All);
ARunepaper::ARunepaper()
{
	PrimaryActorTick.bCanEverTick = true;

	CollisionComponent = CreateDefaultSubobject<USphereComponent>("CollisionComponent");
	CollisionComponent->InitSphereRadius(50.0f);//初始碰撞体的半径
	CollisionComponent->SetSimulatePhysics(true);//启用模拟物理
	CollisionComponent->SetEnableGravity(false);//禁用重力
	CollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);//设置碰撞启用为扫描
	CollisionComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
	SetRootComponent(CollisionComponent);

	RunePaperMesh = CreateDefaultSubobject<UStaticMeshComponent>("RunePaperMeshComponent");
	//设置碰撞启用为纯扫描
	RunePaperMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	//设置获取所有通道的碰撞响应为阻挡
	RunePaperMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
	RunePaperMesh->SetupAttachment(CollisionComponent);

	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>("ProjectileMovementComponent");
	ProjectileMovementComponent->UpdatedComponent = CollisionComponent;
	ProjectileMovementComponent->InitialSpeed = 2000.0f;
	ProjectileMovementComponent->MaxSpeed = 2000.0f;
	ProjectileMovementComponent->ProjectileGravityScale = 0.0f;

	// 创建粒子组件
	RunepaperVFX = CreateDefaultSubobject<UNiagaraComponent>(TEXT("RunePaperNiagaraComponent"));
	RunepaperVFX->SetupAttachment(RootComponent);  // 将粒子组件附加到根组件
}

void ARunepaper::BeginPlay()
{
	Super::BeginPlay();
	check(ProjectileMovementComponent);
	check(CollisionComponent);

	//ProjectileMovementComponent->Velocity = ShotDirection * ProjectileMovementComponent->InitialSpeed;
	ProjectileMovementComponent->Activate();	//可以飞行了
	ProjectileMovementComponent->Velocity = ShotDirection * ProjectileMovementComponent->InitialSpeed;

	//忽略owner
	CollisionComponent->IgnoreActorWhenMoving(GetOwner(), true);
	//订阅委托，命中目标
	CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &ARunepaper::OnProjectileHit);
	//CollisionComponent->OnComponentHit.AddDynamic(this, &ARunepaper::OnProjectileHit);

	SetLifeSpan(LifeSeconds);
}

void ARunepaper::OnProjectileHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
	const FHitResult& SweepResult)
{
	// 这里假设目标物体有一个名为 `Interact` 的方法
	ABlockActor* Interactable = Cast<ABlockActor>(OtherActor);
	if (!Interactable)
		return;

	UE_LOG(LogTemp, Display, TEXT("InterctBlock"));
	Interactable->InteractionBlock();  // 调用接口中的方法
	Destroy();
}


