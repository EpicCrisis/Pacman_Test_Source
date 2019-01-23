// Fill out your copyright notice in the Description page of Project Settings.

#include "GridBlock.h"
#include "Pacman_TestGameModeBase.h"

// Sets default values
APacman_TestGameModeBase::APacman_TestGameModeBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void APacman_TestGameModeBase::BeginPlay()
{
	Score = 0;
	Lives = 3;

	CreateGrid();

	for (TActorIterator<AGhostCharacter> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		ActorItr->FindNextDestination();
	}

	for (TActorIterator<AGhostDestination> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		ActorItr->Randomize();
	}
}

void APacman_TestGameModeBase::Tick(float DeltaTime)
{
}

FVector APacman_TestGameModeBase::WorldToGridLocation(FVector Location)
{
	int xCoord;
	int yCoord;

	xCoord = FMath::FloorToInt(Location.X + (Spacing / 2) / Spacing);
	yCoord = FMath::FloorToInt(Location.Y + (Spacing / 2) / Spacing);

	return FVector(FMath::Clamp(xCoord, 0, MaxX), FMath::Clamp(yCoord, 0, MaxY), Location.Z);
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

void APacman_TestGameModeBase::CreateGrid_Implementation()
{
	BlocksArray.Empty();
	FVector Loc;

	int TotalBlocks = (MaxX * MaxY) - 1;

	for (int i = 0; i < TotalBlocks; ++i)
	{
		Loc = FVector((i / 23) * Spacing, (i % 23) * Spacing, 0.0f);


	}
}

void APacman_TestGameModeBase::SpawnPacman_Implementation()
{
}

void APacman_TestGameModeBase::WinEvent_Implementation()
{
}
