// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "PlayerAttributesUW.generated.h"


class APlayerCharacter;

/**
 * 
 */
UCLASS()
class GRADUATION_2024_API UPlayerAttributesUW : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;

	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime)override;

#pragma region Revice Interface
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Attributes")
	float playerHealth;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Attributes")
	float playerEnergy;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Attributes")
	float playerAttack;
		
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Attributes")
	float playerMoveSpeed;


#pragma endregion


#pragma region Player Information
public:
	class APlayerCharacter* playerCharacter;

	bool bplayerCharacterIsValid = false;

#pragma endregion
};
