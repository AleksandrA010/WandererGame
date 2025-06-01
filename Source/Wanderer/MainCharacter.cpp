// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"
#include "Components/CapsuleComponent.h"
#include "Kismet\GameplayStatics.h"

// Sets default values
AMainCharacter::AMainCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	CharacterStamina = 100;

	blsTired = false;

}

float AMainCharacter::GetStaminaPercent()
{
	return 0.0f;
}

float AMainCharacter::AddStamina()
{
	return 0.0f;
}

float AMainCharacter::DecreaseStamina()
{
	return 0.0f;
}

bool AMainCharacter::StamineIsZero()
{
	if (CharacterStamina <= 0)
	{
		blsTired = true;
		GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}

	UGameplayStatics::SpawnSoundAtLocation(this, TiredSound, GetActorLocation());

	return blsTired;
}

