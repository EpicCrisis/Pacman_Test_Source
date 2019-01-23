// Fill out your copyright notice in the Description page of Project Settings.

#include "Pacman_TestGameModeBase.h"
#include "GhostDestination.h"


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
	BoxTrigger->AttachToComponent(BillboardRoot, FAttachmentTransformRules::KeepWorldTransform);

	BoxTrigger->OnComponentBeginOverlap.AddDynamic(this, &AGhostDestination::TriggerOverlap);

}

// Called when the game starts or when spawned
void AGhostDestination::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AGhostDestination::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGhostDestination::TriggerOverlap(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{

}

void AGhostDestination::Randomize_Implementation()
{
	GameModeRef = (APacman_TestGameModeBase *)GetWorld()->GetAuthGameMode();

	int x = FMath::RandRange(0, GameModeRef->MaxX - 1);
	int y = FMath::RandRange(0, GameModeRef->MaxY - 1);

	//TSubclassOf<AGridBlock> Block = GameModeRef->GetBlockFromGridLocation(x, y);
}

