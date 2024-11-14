#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BlockActor.generated.h"

UENUM(BlueprintType)  // 让它在蓝图中可见
enum class EBlockType : uint8
{
	Red UMETA(DisplayName = "Red"),
	Blue UMETA(DisplayName = "Blue"),
	Yellow UMETA(DisplayName = "Yellow"),
	Green UMETA(DisplayName = "Green")
};

class ABlockActorManager;

UCLASS()
class GRADUATION_2024_API ABlockActor : public AActor
{
	GENERATED_BODY()
	
public:
    // Sets default values for this actor's properties
    ABlockActor();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BlockType")
    EBlockType blockType = EBlockType::Red;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BlockType")
    bool ISActive = false;

    void InitBlock(UMaterialInstance* DefualtBlockMaterial, UMaterialInstance* ActiveBlockMaterial, ABlockActorManager* myBlockactorManager);

    // 玩家是否按下了交互键
    void InteractionBlock();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InitPosition")
    FVector InitPosition;

    FVector GetInitPosition() const { return InitPosition + GetActorLocation(); }

protected:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* BlockMesh;

    // 用于互动的碰撞组件
    UPROPERTY(VisibleAnywhere)
    class UBoxComponent* InteractionBox;

    //设置当前状态相关
    void SetNowState();

protected:
    // 事件响应玩家进入范围
    UFUNCTION()
    void OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

    UFUNCTION()
    void OnOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

private:
    // 玩家是否在范围内
    bool bIsPlayerInRange;

    ABlockActorManager* myBlockActorManager;
    UMaterialInstance* defualtBlockMaterial;
    UMaterialInstance* activeBlockMaterial;

};
