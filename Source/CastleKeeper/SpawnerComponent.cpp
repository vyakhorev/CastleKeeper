// Fill out your copyright notice in the Description page of Project Settings.

#include "SpawnerComponent.h"
#include "EnemyBasePawn.h"
#include "Runtime/Engine/Classes/Engine/World.h"  // for FActorSpawnParameters

// Sets default values for this component's properties
USpawnerComponent::USpawnerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void USpawnerComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void USpawnerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool USpawnerComponent::SpawnMob() {

	if (!ensureMsgf(this->enemy_pawn_class, TEXT("no enemy class selected for spawner component"))) { return false; }

	// Must be not blocked
	auto spawner_location = this->GetOwner()->GetActorLocation();
	auto spawner_rotation = this->GetOwner()->GetActorRotation();
	FActorSpawnParameters SpawnInfo; // no specific instructions

	auto enemy_pawn = this->GetWorld()->SpawnActor<ACharacter>(this->enemy_pawn_class, spawner_location, spawner_rotation, SpawnInfo);

	return true;

}