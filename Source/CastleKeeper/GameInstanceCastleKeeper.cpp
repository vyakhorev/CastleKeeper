// Fill out your copyright notice in the Description page of Project Settings.

#include "GameInstanceCastleKeeper.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "BaseBlock.h"
#include "SpawnerComponent.h"
#include "Runtime/Engine/Classes/Engine/World.h"  // for FActorSpawnParameters


// Get references to some blueprints
UGameInstanceCastleKeeper::UGameInstanceCastleKeeper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {

	/* This part helps to spawn blueprint-based cube. Mind the text link - don't rename the blueprint!
	We can't move this into Init() call since FObjectFinder is available only in constructor */
	/*this->BlockBaseBlueprintClass = (UClass*)ConstructorHelpers::FObjectFinder<UBlueprint>(TEXT("Blueprint'/Game/CastleKeeperLogic/Blueprints/Land/BaseBlock_BP.BaseBlock_BP'")).Object->GeneratedClass;
	ensure(this->BlockBaseBlueprintClass);*/

	/*this->MobSpawnerBlueprintClass = (UClass*)ConstructorHelpers::FObjectFinder<UBlueprint>(TEXT("Blueprint'/Game/CastleKeeperLogic/Blueprints/Enemy/MobSpawner.MobSpawner'")).Object->GeneratedClass;
	ensure(this->MobSpawnerBlueprintClass);*/

	/*this->AngryTrollsBlueprintClass = (UClass*)ConstructorHelpers::FObjectFinder<UBlueprint>(TEXT("Blueprint'/Game/CastleKeeperLogic/Blueprints/Enemy/AngryTrolls.AngryTrolls'")).Object->GeneratedClass;
	ensure(this->AngryTrollsBlueprintClass);*/

}


//bool UGameInstanceCastleKeeper::AnalyseActiveLevel() {
//
//
//}

// Spawns the level
bool UGameInstanceCastleKeeper::GenerateDefaultLevel() {

	//// log
	//static FString repr("UGameInstanceCastleKeeper::GenerateDefaultLevel");
	//UE_LOG(LogTemp, Log, TEXT("[%s] Generating level"), *repr);

	//// protect
	//UWorld* const world = this->GetWorld();
	//if (!ensure(world)) { return false; }
	//if (!ensure(this->BlockBaseBlueprintClass)) { return false; }

	//// spawn the world blocks
	//for (int32 x = 0; x < 10; x++) {
	//	for (int32 y = 0; y < 10; y++) {
	//		FVector position(100 * x, 100 * y, 0);
	//		FActorSpawnParameters spawn_info;
	//		ABaseBlock *bp_actor = world->SpawnActor<ABaseBlock>(this->BlockBaseBlueprintClass, position, FRotator::ZeroRotator, spawn_info);
	//	}
	//}

	//// spawn the mob spawner
	//FVector position(100, 100, 20);
	//FActorSpawnParameters spawn_info;
	//AActor *spawner = world->SpawnActor<AActor>(this->MobSpawnerBlueprintClass, position, FRotator::ZeroRotator, spawn_info);
	//
	//// find the spawner component, setup it, make it spawn something
	//auto spawner_component = spawner->FindComponentByClass<USpawnerComponent>();
	//if (!ensure(spawner_component)) { return false; }

	//spawner_component->enemy_pawn_class = this->AngryTrollsBlueprintClass;
	//spawner_component->SpawnMob();

	return true;

}

