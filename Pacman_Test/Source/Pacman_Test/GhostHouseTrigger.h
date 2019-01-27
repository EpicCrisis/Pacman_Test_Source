// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "GhostHouseTrigger.generated.h"

// Forward Declaration
class AGhostCharacter;

UCLASS()
class PACMAN_TEST_API AGhostHouseTrigger : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGhostHouseTrigger();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Variables and References
public:
	UPROPERTY(EditAnywhere)
		UBoxComponent* Box;

	// Functions and Events
public:
	UFUNCTION()
		void OnOverlap(class AActor* ThisActor, AActor* OtherActor);
	
};
