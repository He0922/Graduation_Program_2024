// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Inventory/Item/ItemActor.h"
#include "PackageWidget.generated.h"

class AItemActor;
struct FItemData;

//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOpenPackage);

UCLASS(Blueprintable, BlueprintType) // 关键：添加 Blueprintable 和 BlueprintType
class GRADUATION_2024_API UPackageWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FItemData> ItemDatas;

	//// 事件调度器（暴露给蓝图）
	UFUNCTION(BlueprintImplementableEvent, Category = "Event")
	void OnOpenPackage();

	//UFUNCTION(BlueprintImplementableEvent, Category = "Event1")
	void OpenPackageFunc();

};