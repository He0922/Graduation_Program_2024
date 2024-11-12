#pragma once
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

UENUM(BlueprintType)
enum class EArchiveID : uint8
{
	None UMETA(DisplayName = "None"),
	Archive1 UMETA(DisplayName = "Archive Point 1"),
	Archive2 UMETA(DisplayName = "Archive Point 2"),
	Archive3 UMETA(DisplayName = "Archive Point 3"),
	Archive4 UMETA(DisplayName = "Archive Point 4"),
	Archive5 UMETA(DisplayName = "Archive Point 5"),
	Archive6 UMETA(DisplayName = "Archive Point 6"),
	Archive7 UMETA(DisplayName = "Archive Point 7"),
	Archive8 UMETA(DisplayName = "Archive Point 8"),
	Archive9 UMETA(DisplayName = "Archive Point 9"), 
	Archive10 UMETA(DisplayName = "Archive Point 10")
};