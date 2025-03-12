// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Inventory/Item/ItemActor.h"
#include "InventoryComponent.generated.h"

class AItemActor;
struct FItemData;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GRADUATION_2024_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FItemData> ItemDatas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPackageWidget* PackageWidget;
};
