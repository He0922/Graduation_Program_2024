// Fill out your copyright notice in the Description page of Project Settings.
#include "Inventory/Item/ItemActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"

AItemActor::AItemActor()
{
    PrimaryActorTick.bCanEverTick = false;

    // ��ʼ����̬�������
    ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockMesh"));
    RootComponent = ItemMesh;

    // ������ײ���
    InteractionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionBox"));
    InteractionBox->SetupAttachment(RootComponent);
    InteractionBox->SetCollisionProfileName(TEXT("Trigger"));
}
