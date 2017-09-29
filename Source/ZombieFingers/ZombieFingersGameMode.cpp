// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "ZombieFingersGameMode.h"
#include "ZombieFingersPawn.h"

AZombieFingersGameMode::AZombieFingersGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AZombieFingersPawn::StaticClass();
}

