// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "ProceduralMeshComponent.h"

#include "ProceduralIsland.generated.h"

UCLASS()
class CASTLEKEEPER_API AProceduralIsland : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProceduralIsland();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void PostActorCreated() override;
	virtual void PostLoad() override;
	

private:
	UPROPERTY(VisibleAnywhere)
	UProceduralMeshComponent *mesh;

	void CreateTriangle();
	
	void CreateDiamond();

};
