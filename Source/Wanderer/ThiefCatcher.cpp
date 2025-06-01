// Fill out your copyright notice in the Description page of Project Settings.


#include "ThiefCatcher.h"

AThiefCatcher::AThiefCatcher() : Super()
{
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->TargetArmLength = 5000.0f;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("MainCamera"));
	Camera->SetupAttachment(SpringArm);
}

