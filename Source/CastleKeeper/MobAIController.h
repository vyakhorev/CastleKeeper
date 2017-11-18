// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "MobAIController.generated.h"

/**
 * 
 */
UCLASS()
class CASTLEKEEPER_API AMobAIController : public AAIController
{
	GENERATED_BODY()
	
	//virtual void Tick(float DeltaTime) override;

	float AcceptanceRadius = 3000;  // AI purpose

	
};
