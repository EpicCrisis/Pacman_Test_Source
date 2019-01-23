// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

// Forward Declaration
class APacman_TestGameModeBase;

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BillboardComponent.h"
#include "Components/BoxComponent.h"
#include "GhostDestination.generated.h"

UCLASS()
class PACMAN_TEST_API AGhostDestination : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AGhostDestination();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Variables and References
public:
	UPROPERTY(EditAnywhere)
		bool isTaken;

	UPROPERTY(EditAnywhere)
		APacman_TestGameModeBase* GameModeRef;

	UPROPERTY(EditAnywhere)
		UBillboardComponent* BillboardRoot;

	UPROPERTY(EditAnywhere)
		UBoxComponent* BoxTrigger;

	// Functions and Events
public:
	UFUNCTION()
		void TriggerOverlap
		(
			UPrimitiveComponent* OverlappedComponent,
			AActor* OtherActor,
			UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex,
			bool bFromSweep,
			const FHitResult &SweepResult
		);

	UFUNCTION(BlueprintNativeEvent)
		void Randomize();
};
