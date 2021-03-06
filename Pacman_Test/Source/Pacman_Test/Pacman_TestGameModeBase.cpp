// Fill out your copyright notice in the Description page of Project Settings.

#include "Pacman_TestGameModeBase.h"
#include "Engine/World.h"
#include "GridBlock.h"
#include "PacDot.h"
#include "PacmanPawn.h"
#include "GhostCharacter.h"
#include "GhostDestination.h"
#include "TimerManager.h"

// Sets default values
APacman_TestGameModeBase::APacman_TestGameModeBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MaxX = 23;
	MaxY = 23;
	Spacing = 100.0f;
	Score = 0;
	Lives = 3;
	BonusGhostPoints = 200;
	TotalDots = 0;
	EatenDots = 0;
}

void APacman_TestGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	Score = 0;
	Lives = 3;

	CreateGrid();

	for (TActorIterator<AGhostDestination> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		AGhostDestination* GPoint = *ActorItr;

		GPoint->Randomize();
		DestinationArray.AddUnique(GPoint);
	}

	for (TActorIterator<AGhostCharacter> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		AGhostCharacter* Ghost = *ActorItr;

		Ghost->TargetTriggerArray = DestinationArray;
		Ghost->FindNextDestination();
	}
}

void APacman_TestGameModeBase::Tick(float DeltaTime)
{

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage
		(-1, DeltaTime, FColor::Cyan, FString::Printf
		(TEXT("Score : %d"), Score));

		GEngine->AddOnScreenDebugMessage
		(-1, DeltaTime, FColor::Cyan, FString::Printf
		(TEXT("Lives : %d"), Lives));
	}

	//GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::Cyan, "Score : ");
	//GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::Cyan, "Lives : ");
}

FVector APacman_TestGameModeBase::WorldToGridLocation(FVector Location)
{
	int xCoord;
	int yCoord;

	xCoord = FMath::FloorToInt((Location.X + (Spacing / 2)) / Spacing);
	yCoord = FMath::FloorToInt((Location.Y + (Spacing / 2)) / Spacing);

	int xClamp = FMath::Clamp(xCoord, 0, MaxX);
	int yClamp = FMath::Clamp(yCoord, 0, MaxY);

	return FVector(xClamp, yClamp, 0.0f);
}

AGridBlock* APacman_TestGameModeBase::GetBlockFromGridLocation(int X, int Y)
{
	int Index;

	Index = (X * MaxX) + (Y % MaxY);

	return BlocksArray[Index];
}

AGridBlock* APacman_TestGameModeBase::GetBlockFromWorldLocation(FVector Location)
{
	int xCoord;
	int yCoord;

	xCoord = WorldToGridLocation(Location).X;
	yCoord = WorldToGridLocation(Location).Y;

	return GetBlockFromGridLocation(xCoord, yCoord);
}

void APacman_TestGameModeBase::WinEvent()
{
	if (EatenDots == TotalDots)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, "You Win!");

		for (TActorIterator<AGhostCharacter> ActorItr(GetWorld()); ActorItr; ++ActorItr)
		{
			AGhostCharacter* Ghost = *ActorItr;

			Ghost->isDead = false;
			Ghost->CanBeEatenEvent();
			Ghost->EatEvent();

			GetWorld()->GetTimerManager().SetTimer
			(
				DelayRestartTimerHandle, this, &APacman_TestGameModeBase::RestartLevel, 5.0f, false
			);
		}
	}
}

void APacman_TestGameModeBase::CreateGrid()
{
	BlocksArray.Empty();

	int TotalBlocks = (MaxX * MaxY);

	for (int i = 0; i < TotalBlocks; ++i)
	{
		FVector Loc((i / 23) * Spacing, (i % 23) * Spacing, 0.0f);
		FRotator Rot(0.0f, 0.0f, 0.0f);
		FActorSpawnParameters SpawnInfo;

		//AGridBlock* BlockSpawn = GetWorld()->SpawnActor<AGridBlock>(Loc, Rot, SpawnInfo);
		AGridBlock* Spawn = GetWorld()->SpawnActor<AGridBlock>(BlockSpawn, Loc, Rot, SpawnInfo);

		BlocksArray.Add(Spawn);
	}
}

void APacman_TestGameModeBase::SpawnPacman()
{
	for (TActorIterator<APlayerStart> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		APlayerStart* Start = *ActorItr;

		FVector Loc(Start->GetActorLocation());
		FRotator Rot(Start->GetActorRotation());
		FActorSpawnParameters SpawnInfo;

		APlayerController* Controller = UGameplayStatics::GetPlayerController(GetWorld(), 0);
		Controller->UnPossess();

		APacmanPawn* Spawn = GetWorld()->SpawnActor<APacmanPawn>(PacPlayer, Loc, Rot, SpawnInfo);
		Controller->Possess(Spawn);
	}
}

void APacman_TestGameModeBase::RestartLevel()
{
	UGameplayStatics::OpenLevel(this, FName("PacmanLevel"), true);
}
