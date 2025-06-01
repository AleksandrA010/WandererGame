// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MainCharacter.generated.h"

UCLASS()
class WANDERER_API AMainCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMainCharacter();

	UPROPERTY(EditDefaultsOnly, Category = "CharacterStamina")
	float CharacterStamina;

	bool blsTired;

	float GetStaminaPercent();
	float AddStamina();
	float DecreaseStamina();

	bool StamineIsZero(); // Функция, отвечающая за смерть персонажа.

	UPROPERTY(EditDefaultsOnly, Category = "CharacterStamina")
	USoundBase* TiredSound;

	UPROPERTY(EditDefaultsOnly, Category = "CharacterStamina")
	UAnimMontage* VertigoAnimation;

};
