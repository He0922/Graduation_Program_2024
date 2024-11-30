#pragma once
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "CustomPlayerStatus.generated.h"


UENUM(BlueprintType)
enum class ECustomPlayerStatus : uint8
{
	eidle UMETA(DisplayName = "Idle"),
	emove UMETA(DisplayName = "Move"),
	erun UMETA(DisplayName = "Run"),
	ejump UMETA(DisplayName = "Jump"),
	eattack UMETA(DisplayName = "Attack"),
	erowing UMETA(DisplayName = "Rowing"),
	eclimbing UMETA(DisplayName = "Climbing")
};

