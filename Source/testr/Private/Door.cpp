// Fill out your copyright notice in the Description page of Project Settings.


#include "Door.h"
#include "PressurePlate.h"

// Sets default values
ADoor::ADoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("staticMesh"));
	OpenDoorDelegate.BindUObject(this, &ADoor::OpenDoor);

}
void ADoor::OpenDoor() {
	UE_LOG(LogTemp, Warning, TEXT("DoorOpening"));
	mesh->DestroyComponent();
}
// Called when the game starts or when spawned
void ADoor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
