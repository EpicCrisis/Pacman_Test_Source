// Fill out your copyright notice in the Description page of Project Settings.

#include "PacDot.h"


// Sets default values
APacDot::APacDot()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bGenerateOverlapEventsDuringLevelStreaming = true;

	Sphere = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere"));
	Sphere->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);
	Sphere->SetWorldScale3D(NormalScale);

	OnActorBeginOverlap.AddDynamic(this, &APacDot::ActorOverlap);

	RootComponent = Sphere;

	isPowerUp = false;
	PowerUpScale = FVector(0.5f, 0.5f, 0.5f);
	NormalScale = FVector(0.25f, 0.25f, 0.25f);
	Points = 10;
}

// Called when the game starts or when spawned
void APacDot::BeginPlay()
{
	Super::BeginPlay();

	CheckPowerUp();
}

// Called every frame
void APacDot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APacDot::ActorOverlap(AActor * ThisActor, AActor * OtherActor)
{
	APacmanPawn* PlayerPawn = Cast<APacmanPawn>(OtherActor);

	if (isPowerUp)
	{
		//PlayerPawn->EatGhostEvent_Implementation();
	}
	else
	{
		APacman_TestGameModeBase* GameMode = (APacman_TestGameModeBase *)GetWorld()->GetAuthGameMode();

		GameMode->Score += Points;

		Destroy();
	}
}

void APacDot::CheckPowerUp()
{
	if (isPowerUp)
	{
		Sphere->SetWorldScale3D(PowerUpScale);
	}
	else
	{
		Sphere->SetWorldScale3D(NormalScale);
	}
}

