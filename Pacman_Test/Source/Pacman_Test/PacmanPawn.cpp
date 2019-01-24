// Fill out your copyright notice in the Description page of Project Settings.

#include "PacmanPawn.h"
#include "Pacman_TestGameModeBase.h"
#include "Engine/World.h"

// Sets default values
APacmanPawn::APacmanPawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bGenerateOverlapEventsDuringLevelStreaming = true;

	CanChangeDirection = true;
	GhostPoints = 200;
	BonusPointsTime = 4.0f;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SceneRoot->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);

	RootComponent = SceneRoot;

	Sphere = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere"));
	Sphere->AttachToComponent(SceneRoot, FAttachmentTransformRules::KeepRelativeTransform);

	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	Box->SetBoxExtent(FVector(32.0f, 32.0f, 50.0f), true);
	Box->AttachToComponent(SceneRoot, FAttachmentTransformRules::KeepRelativeTransform);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetAbsolute(true, true, true);
	Camera->SetRelativeLocation(FVector(1100.0f, 1050.0f, 2000.0f));
	Camera->SetRelativeRotation(FRotator(-90.0f, -90.0f, 0.0f));
	Camera->AttachToComponent(SceneRoot, FAttachmentTransformRules::KeepWorldTransform);
}

// Called when the game starts or when spawned
void APacmanPawn::BeginPlay()
{
	Super::BeginPlay();

	OnDestroyed.AddDynamic(this, &APacmanPawn::ActorDestroyed);

	isDead = false;

	GameModeRef = (APacman_TestGameModeBase *)GetWorld()->GetAuthGameMode();
}

// Called every frame
void APacmanPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (isDead)
	{
		if (!DoOnceDead)
		{
			DoOnceDead = true;

			GameModeRef->Lives -= 1;

			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, "You Died!");

			GetWorld()->GetTimerManager().SetTimer
			(
				DelayDeathTimerHandle, this, &APacmanPawn::CallGameOver, 2.0f, false
			);
		}
	}
	else
	{
		if (!DoOnceMove)
		{
			TempLocation = GetActorLocation();
		}
	}

}

// Called to bind functionality to input
void APacmanPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APacmanPawn::ActorDestroyed(AActor * DestroyedActor)
{
	GameModeRef->SpawnPacman();
}

void APacmanPawn::ActorOverlap(AActor * ThisActor, AActor * OtherActor)
{
	AGhostCharacter* Ghost = Cast<AGhostCharacter>(OtherActor);

	if (!isDead && Ghost->CanKill)
	{
		isDead = true;
	}
	else if (Ghost->CanBeEaten)
	{
		GetWorld()->GetTimerManager().ClearTimer(EatBonusTimerHandle);

		GetGhostPoints();

		Ghost->EatEvent();
	}
}

void APacmanPawn::GetGhostPoints()
{
	GameModeRef->Score += GhostPoints;

	GhostPoints *= 2;

	GetWorld()->GetTimerManager().SetTimer(EatBonusTimerHandle, this, &APacmanPawn::ResetBonusPoints, BonusPointsTime, false);
}

void APacmanPawn::EatGhostEvent()
{
	for (TActorIterator<AGhostCharacter> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		ActorItr->CanBeEatenEvent();
	}
}

void APacmanPawn::ResetBonusPoints()
{
	GhostPoints = 200.0f;
}

void APacmanPawn::CallGameOver()
{
	if (GameModeRef->Lives <= 0)
	{
		GetWorld()->GetTimerManager().SetTimer
		(
			LoadLevelTimerHandle, this, &APacmanPawn::RestartMap, 5.0f, false
		);

		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, "Game Over!");
	}
	else
	{
		for (TActorIterator<AGhostCharacter> ActorItr(GetWorld()); ActorItr; ++ActorItr)
		{
			ActorItr->ResetLocation();
		}

		Destroy();
	}
}

void APacmanPawn::RestartMap()
{
	UGameplayStatics::OpenLevel(this, FName("Pacman_Level"), true);

	//UGameplayStatics::OpenLevel(GetWorld(), "Pacman_Level");
}

