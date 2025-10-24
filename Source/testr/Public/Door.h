// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Door.generated.h"

//DECLARE_DELEGATE(FOpenDoorSignature);

UCLASS()
class TESTR_API ADoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoor();
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* mesh;

	// Function signature
	//UPROPERTY()
	//FOpenDoorSignature OpenDoorDelegate;
	UFUNCTION()
	void OpenDoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
