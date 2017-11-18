// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "SpawnerComponent.generated.h"


//class AEnemyBasePawn;  // forward declaration

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CASTLEKEEPER_API USpawnerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USpawnerComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Select the enemy class that would be spawned from this component
	UPROPERTY(EditAnywhere, Category = "Castle Keeper")
	TSubclassOf<ACharacter> enemy_pawn_class;

	UFUNCTION(BlueprintCallable)
	bool SpawnMob();
	
};
