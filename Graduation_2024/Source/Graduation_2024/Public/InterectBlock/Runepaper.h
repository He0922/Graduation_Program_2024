#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Runepaper.generated.h"


class UNiagaraSystem;
class UNiagaraComponent;

UCLASS()
class GRADUATION_2024_API ARunepaper : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARunepaper();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleDefaultsOnly, Category = "Runepaper")
	UStaticMeshComponent* RunePaperMesh;

	UPROPERTY(VisibleDefaultsOnly, Category = "Runepaper")
	class USphereComponent* CollisionComponent;

	UPROPERTY(VisibleAnywhere, Category = "Effects")
	UNiagaraComponent* RunepaperVFX;

	UPROPERTY(VisibleDefaultsOnly, Category = "Runepaper")
	class UProjectileMovementComponent* ProjectileMovementComponent;

	UFUNCTION()
	void OnProjectileHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
		const FHitResult& SweepResult);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runepaper")
	float LifeSeconds = 5.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runepaper")
	FVector ShotDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effects")
	UNiagaraSystem* BulletTrail;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effects")
	UNiagaraSystem* RunepaperHit;
};
