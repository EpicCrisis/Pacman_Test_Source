// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "PacDot.generated.h"

// Forward Declaration
class APacman_TestGameModeBase;
class APacmanPawn;

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
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool isPowerUp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector PowerUpScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector NormalScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		APacman_TestGameModeBase* GameModeRef;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int Points;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* Sphere;

	// Functions and Events
public:
	UFUNCTION()
		void ActorOverlap(class AActor* ThisActor, AActor* OtherActor);

	UFUNCTION()
		void CheckPowerUp();
};
