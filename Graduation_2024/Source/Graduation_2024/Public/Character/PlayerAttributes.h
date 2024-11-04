//#pragma once
//#include "CoreMinimal.h"
//#include "UObject/ObjectMacros.h"
//
//
//UENUM(BlueprintType)
//enum class EPlayerAttributes :uint8
//{
//	ehealth UMETA(DisplayName = "Health"),
//	eenergy UMETA(DisplayName = "Energy"),
//	eattack UMETA(DisplayName = "Attach"),
//	emoveSpeed UMETA(DisplayName = "MoveSpeed")
//};
//
//USTRUCT(BlueprintType)
//struct FPlayerAttributes
//{
//	GENERATED_BODY();
//
//	// 通过键对值的方式创建Map，后续通过这个Map来获取与设置人物属性
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attaributes")
//	TMap<EPlayerAttributes, float> Attributes;
//
//	FPlayerAttributes()
//	{
//		Attributes.Add(EPlayerAttributes::ehealth, 100.f);
//		Attributes.Add(EPlayerAttributes::eenergy, 50.f);
//		Attributes.Add(EPlayerAttributes::eattack, 10.f);
//		Attributes.Add(EPlayerAttributes::emoveSpeed, 150);
//	}
//
//	float GetPlayerAttributes(EPlayerAttributes Attribute) const
//	{
//		const float* Value = Attributes.Find(Attribute);
//		
//		if (Value) { return *Value; }
//
//		return -1;
//	}
//
//	void GetPlayerAttributes(EPlayerAttributes Attribute, float Value) { Attributes.Add(Attribute, Value); }
//};