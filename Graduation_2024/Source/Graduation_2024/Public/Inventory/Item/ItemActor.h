// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemActor.generated.h"

USTRUCT(BlueprintType)
struct FItemData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int index;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString name;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString Description;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UTexture2D* Icon;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UTexture2D* RIcon;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UStaticMesh* Mesh;

};

UCLASS()
class GRADUATION_2024_API AItemActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AItemActor();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	FItemData item;


protected:
	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* ItemMesh;

	// 用于互动的碰撞组件
	UPROPERTY(VisibleAnywhere)
	class UBoxComponent* InteractionBox;

};