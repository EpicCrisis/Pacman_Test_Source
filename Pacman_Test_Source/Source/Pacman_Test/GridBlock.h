// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Engine.h"
#include "GridBlock.generated.h"

UCLASS()
class PACMAN_TEST_API AGridBlock : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AGridBlock();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Variables and References
public:
	UPROPERTY(EditAnywhere)
		bool isWalkable;

	UPROPERTY(EditAnywhere)
		bool Checked;

	UPROPERTY(EditAnywhere)
		UBoxComponent* Box;

	// Functions and Events
public:
	UFUNCTION()
		void ActorOverlap(class AActor* ThisActor, AActor* OtherActor);

	/*void function
	(
		class AActor* OtherActor,
		class UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	)*/
};
