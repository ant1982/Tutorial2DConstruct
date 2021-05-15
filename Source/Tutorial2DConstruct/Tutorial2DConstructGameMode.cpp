// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Tutorial2DConstructGameMode.h"
#include "Tutorial2DConstructCharacter.h"

ATutorial2DConstructGameMode::ATutorial2DConstructGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ATutorial2DConstructCharacter::StaticClass();	
}
