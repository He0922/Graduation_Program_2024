#include "InterectBlock/Runepaper.h"
#include "Components/SphereComponent.h"
#include "Gameframework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"


// Sets default values
ARunepaper::ARunepaper()
{
	PrimaryActorTick.bCanEverTick = false;

	CollisionComponent = CreateDefaultSubobject<USphereComponent>("CollisionComponent");
	//初始碰撞体的半径
	CollisionComponent->InitSphereRadius(5.0f);

	//设置碰撞启用为纯扫描
	CollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	//设置获取所有通道的碰撞响应为阻挡
	CollisionComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);

	SetRootComponent(CollisionComponent);

	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>("ProjectileMovementComponent");
	ProjectileMovementComponent->InitialSpeed = 2000.0f;
	ProjectileMovementComponent->ProjectileGravityScale = 0.0f;
}

// Called when the game starts or when spawned
void ARunepaper::BeginPlay()
{
	Super::BeginPlay();
	check(ProjectileMovementComponent);
	check(CollisionComponent);


	ProjectileMovementComponent->Velocity = ShotDirection * ProjectileMovementComponent->InitialSpeed;

	//忽略owner
	CollisionComponent->IgnoreActorWhenMoving(GetOwner(), true);
	//订阅委托，命中目标
	CollisionComponent->OnComponentHit.AddDynamic(this, &ARunepaper::OnProjectileHit);

	SetLifeSpan(LifeSeconds);
}

void ARunepaper::OnProjectileHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	UE_LOG(LogTemp, Display, TEXT("1"));
}


