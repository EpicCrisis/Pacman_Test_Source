// Fill out your copyright notice in the Description page of Project Settings.

#include "PacDot.h"
#include "Pacman_TestGameModeBase.h"
#include "PacmanPawn.h"
#include "Engine/World.h"


// Sets default values
APacDot::APacDot()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bGenerateOverlapEventsDuringLevelStreaming = true;

	isPowerUp = false;
	PowerUpScale = FVector(0.5f, 0.5f, 0.5f);
	NormalScale = FVector(0.25f, 0.25f, 0.25f);
	Points = 10;

	Sphere = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere"));
	Sphere->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);
	Sphere->SetWorldScale3D(NormalScale);

	OnActorBeginOverlap.AddDynamic(this, &APacDot::ActorOverlap);
	//OnDestroyed.AddDynamic(this, &APacDot::ActorDestroyed);

	RootComponent = Sphere;
}

// Called when the game starts or when spawned
void APacDot::BeginPlay()
{
	Super::BeginPlay();

	GameModeRef = (APacman_TestGameModeBase *)GetWorld()->GetAuthGameMode();

	GameModeRef->TotalDots += 1;

	CheckPowerUp();
}

// Called every frame
void APacDot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APacDot::ActorOverlap(AActor * ThisActor, AActor * OtherActor)
{
	/*if (OtherActor->GetClass() == TSubclassOf<class APacmanPawn>)
	{

	}*/

	APacmanPawn* PlayerPawn = Cast<APacmanPawn>(OtherActor);

	if (PlayerPawn)
	{
		if (isPowerUp)
		{
			PlayerPawn->EatGhostEvent();
		}

		GameModeRef->Score += Points;

		GameModeRef->EatenDots += 1;

		GameModeRef->WinEvent();

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
