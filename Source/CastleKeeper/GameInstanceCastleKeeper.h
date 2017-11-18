// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GameInstanceCastleKeeper.generated.h"

class ABaseBlock;

/**
 * 
 */
UCLASS()
class CASTLEKEEPER_API UGameInstanceCastleKeeper : public UGameInstance
{
	GENERATED_BODY()
	
	/* Gets the land cubes blueprints. However, we don't need it at the moment. */
	UGameInstanceCastleKeeper(const FObjectInitializer& ObjectInitializer);

	///* Scans the level, divides it into virtual cubes.
	//Call this after the level is loaded. */
	//AnalyseActiveLevel


	/* Generates the actors in the active level. */
	UFUNCTION(BlueprintCallable, Category = "Castle keeper")
	bool GenerateDefaultLevel();
	
	/* Hold a reference to a child class of ABaseBlock that's made
	with blueprints. */
	TSubclassOf<class ABaseBlock> BlockBaseBlueprintClass;

	/* A reference to mob spawner */
	TSubclassOf<class AActor> MobSpawnerBlueprintClass;

	/* A reference to trolls (to be set in the mob spaner) */
	TSubclassOf<class ACharacter> AngryTrollsBlueprintClass;

};
