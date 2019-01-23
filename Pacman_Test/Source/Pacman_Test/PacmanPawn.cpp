// Fill out your copyright notice in the Description page of Project Settings.

#include "PacmanPawn.h"


// Sets default values
APacmanPawn::APacmanPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bGenerateOverlapEventsDuringLevelStreaming = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SceneRoot->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);

	Sphere = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere"));
	Sphere->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);

	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	Box->SetBoxExtent(FVector(32.0f, 32.0f, 50.0f), true);
	Box->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetAbsolute(true, true, true);
	Camera->SetRelativeLocation(FVector(1100.0f, 1050.0f, 2000.0f));
	Camera->SetRelativeRotation(FRotator(-90.0f, -90.0f, 0.0f));
	Camera->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);

}

// Called when the game starts or when spawned
void APacmanPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APacmanPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APacmanPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

