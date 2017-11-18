// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CastleKeeperPlayerController.generated.h"


UENUM(BlueprintType)
enum class EPlayerBrushType : uint8 {
	BR_Wall = 0x00000001 UMETA(DisplayName = "Wall"),
	BR_Tower = 0x00000002 UMETA(DisplayName = "Tower")
};

/*
Example usage
GetEnumValueAsString<EVictoryEnum>("EVictoryEnum", VictoryEnum);
https://wiki.unrealengine.com/Enums_For_Both_C%2B%2B_and_BP
*/
template<typename TEnum>
static FORCEINLINE FString GetEnumValueToString(const FString& Name, TEnum Value)
{
	const UEnum* enumPtr = FindObject<UEnum>(ANY_PACKAGE, *Name, true);
	if (!enumPtr)
	{
		return FString("Invalid");
	}
	return enumPtr->GetNameByValue((int64)Value).ToString();
};

UCLASS()
class ACastleKeeperPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ACastleKeeperPlayerController();

	UFUNCTION(BlueprintCallable, Category = "Castle keeper")
	void setBrush(EPlayerBrushType newBrush);

	EPlayerBrushType active_brush = EPlayerBrushType::BR_Wall;
	


//protected:
	/* True if the controlled character should navigate to the mouse cursor. */
	//uint32 bMoveToMouseCursor : 1;

	//// Begin PlayerController interface
	//virtual void PlayerTick(float DeltaTime) override;
	//virtual void SetupInputComponent() override;
	//// End PlayerController interface

	///** Resets HMD orientation in VR. */
	//void OnResetVR();

	///** Navigate player to the current mouse cursor location. */
	//void MoveToMouseCursor();

	///** Navigate player to the current touch location. */
	//void MoveToTouchLocation(const ETouchIndex::Type FingerIndex, const FVector Location);
	//
	///** Navigate player to the given world location. */
	//void SetNewMoveDestination(const FVector DestLocation);

	///** Input handlers for SetDestination action. */
	//void OnSetDestinationPressed();
	//void OnSetDestinationReleased();
};


