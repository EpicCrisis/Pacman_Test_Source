// Fill out your copyright notice in the Description page of Project Settings.

#include "GhostDestination.h"
#include "Pacman_TestGameModeBase.h"
#include "GhostCharacter.h"
#include "GridBlock.h"


// Sets default values
AGhostDestination::AGhostDestination()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bGenerateOverlapEventsDuringLevelStreaming = true;

	BillboardRoot = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillboardRoot"));
	BillboardRoot->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);

	RootComponent = BillboardRoot;

	BoxTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxTrigger"));
	BoxTrigger->SetBoxExtent(FVector(50.0f, 50.0f, 300.0f), true);
	BoxTrigger->AttachToComponent(BillboardRoot, FAttachmentTransformRules::KeepRelativeTransform);

}

// Called when the game starts or when spawned
void AGhostDestination::BeginPlay()
{
	Super::BeginPlay();

	BoxTrigger->OnComponentBeginOverlap.AddDynamic(this, &AGhostDestination::TriggerOverlap);

	isTaken = false;

	GameModeRef = (APacman_TestGameModeBase *)GetWorld()->GetAuthGameMode();

	//Randomize();
}

// Called every frame
void AGhostDestination::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGhostDestination::TriggerOverlap(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	AGhostCharacter* Ghost = Cast<AGhostCharacter>(OtherActor);

	if (Ghost->CurrentTargetTrigger == this)
	{
		isTaken = false;
		Ghost->CurrentTargetTrigger = NULL;
		Ghost->FindNextDestination();
		Randomize();
	}
}

void AGhostDestination::Randomize()
{
	int xRand = FMath::RandRange(0, GameModeRef->MaxX - 1);
	int yRand = FMath::RandRange(0, GameModeRef->MaxY - 1);

	AGridBlock* Block = GameModeRef->GetBlockFromGridLocation(xRand, yRand);

	if (Block->isWalkable)
	{
		SetActorLocation(Block->GetActorLocation());
	}
	else
	{
		Randomize();
	}
}

