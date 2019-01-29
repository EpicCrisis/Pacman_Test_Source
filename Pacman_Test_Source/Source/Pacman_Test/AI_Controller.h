// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AI_Controller.generated.h"

/**
 * 
 */
UCLASS()
class PACMAN_TEST_API AAI_Controller : public AAIController
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AAI_Controller();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
