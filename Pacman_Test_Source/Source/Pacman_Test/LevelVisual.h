// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "LevelVisual.generated.h"

UCLASS()
class PACMAN_TEST_API ALevelVisual : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALevelVisual();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Variables and References
public:
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Level;

	// Functions and Events
public:

};
