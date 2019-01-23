// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pacman_TestGameModeBase.h"
#include "Components/StaticMeshComponent.h"
#include "PacmanPawn.h"
#include "PacDot.generated.h"

UCLASS()
class PACMAN_TEST_API APacDot : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APacDot();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Variables and References
public:
	UPROPERTY(EditAnywhere)
		bool isPowerUp;

	UPROPERTY(EditAnywhere)
		FVector PowerUpScale;

	UPROPERTY(EditAnywhere)
		FVector NormalScale;

	UPROPERTY(EditAnywhere)
		APacman_TestGameModeBase* GameModeRef;

	UPROPERTY(EditAnywhere)
		int Points;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* Sphere;

	// Functions and Events
public:
	UFUNCTION()
		void ActorOverlap(class AActor* ThisActor, AActor* OtherActor);

	UFUNCTION()
		void CheckPowerUp();
};
