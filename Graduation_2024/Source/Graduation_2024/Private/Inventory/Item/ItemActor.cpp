// Fill out your copyright notice in the Description page of Project Settings.
#include "Inventory/Item/ItemActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"

AItemActor::AItemActor()
{
    PrimaryActorTick.bCanEverTick = false;

    // 初始化静态网格组件
    ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockMesh"));
    RootComponent = ItemMesh;

    // 创建碰撞组件
    InteractionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionBox"));
    InteractionBox->SetupAttachment(RootComponent);
    InteractionBox->SetCollisionProfileName(TEXT("Trigger"));
}
