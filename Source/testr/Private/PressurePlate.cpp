// Fill out your copyright notice in the Description page of Project Settings.


#include "PressurePlate.h"
#include "Components/BoxComponent.h"
#include "Door.h"

// Sets default values
APressurePlate::APressurePlate()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("staticMesh"));
	trigger = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger Capsule"));
	trigger->OnComponentBeginOverlap.AddDynamic(this, &APressurePlate::ActivatePlate);
	trigger->SetCollisionProfileName(TEXT("trigger"));
	//trigger->SetupAttachment(RootComponent);
	RootComponent = trigger;
}
void APressurePlate::ActivatePlate(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("PressurePlateActivated"));
	doorReference->OpenDoorDelegate.Execute();
}
// Called when the game starts or when spawned
void APressurePlate::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APressurePlate::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

