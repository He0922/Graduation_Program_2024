#include "InterectBlock/BlockActor.h"

#include "Character/Player/PlayerCharacter.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/Actor.h"
#include "InterectBlock/BlockActorManager.h"

#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h" 
DEFINE_LOG_CATEGORY_STATIC(BlockActorLog, All, All);
ABlockActor::ABlockActor()
{
    PrimaryActorTick.bCanEverTick = false;

    // 初始化静态网格组件
    BlockMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockMesh"));
    RootComponent = BlockMesh;

    // 创建碰撞组件
    InteractionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionBox"));
    InteractionBox->SetupAttachment(RootComponent);
    InteractionBox->SetCollisionProfileName(TEXT("Trigger"));

    bIsPlayerInRange = false;

    InitPosition = InitPosition + GetActorLocation();
}


// Called when the game starts or when spawned
void ABlockActor::BeginPlay()
{
    Super::BeginPlay();

    InteractionBox->OnComponentBeginOverlap.AddDynamic(this, &ABlockActor::OnOverlapBegin);
    InteractionBox->OnComponentEndOverlap.AddDynamic(this, &ABlockActor::OnOverlapEnd);

    SetHighlight(false);
}

//初始化节点,材质，以及自身管理类
void ABlockActor::InitBlock(UMaterialInstance* DefualtBlockMaterial, UMaterialInstance* ActiveBlockMaterial, ABlockActorManager* blockactorManager)
{
    myBlockActorManager = blockactorManager;
    defualtBlockMaterial = DefualtBlockMaterial;
    activeBlockMaterial = ActiveBlockMaterial;

    SetNowState();
}

void ABlockActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

//设置当前的属性， 包括改变材质。。。
void ABlockActor::SetNowState()
{
    UStaticMeshComponent* MeshComp = FindComponentByClass<UStaticMeshComponent>();

    if (ISActive)
    {
        MeshComp->SetMaterial(0, activeBlockMaterial);
    }
    else
    {
        MeshComp->SetMaterial(0, defualtBlockMaterial);
    }
}

//判断玩家是否进入碰撞范围
void ABlockActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (OtherActor && OtherActor->IsA(ACharacter::StaticClass()))
    {
        bIsPlayerInRange = true;
    }
}

//判断玩家是否离开碰撞范围
void ABlockActor::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
    if (OtherActor && OtherActor->IsA(ACharacter::StaticClass()))
    {
        bIsPlayerInRange = false;
    }
}

//与节点交互， 并且给节点管理类对应事件调用
void ABlockActor::InteractionBlock()
{
    ISActive = !ISActive;

    FString temp = ISActive ? "True" : "False";

    UE_LOG(BlockActorLog, Warning, TEXT("Block Active: %s"), *temp);

    //设置当前状态，并调用节点管理类，的刷新节点，将自身传入
    SetNowState();
    myBlockActorManager->refreshBlock.Broadcast(this, ISActive);
}

void ABlockActor::SetHighlight(bool bEnable)
{
    if (BlockMesh)
    {
        // 启用/禁用自定义深度渲染
        BlockMesh->SetRenderCustomDepth(bEnable);

        // 设置模板值（仅在启用时生效）
        if (bEnable)
        {
            BlockMesh->SetCustomDepthStencilValue(StencilValue);
        }
    }
}

