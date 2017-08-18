// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "O_R_CPP.h"
#include "O_R_CPPGameMode.h"
#include "O_R_CPPCharacter.h"

AO_R_CPPGameMode::AO_R_CPPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Script/O_R_CPP.O_R_CPPCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}