// Copyright Epic Games, Inc. All Rights Reserved.

#include "HaikGameMode.h"
#include "HaikCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHaikGameMode::AHaikGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Script/Engine.Blueprint'/Game/Haik/BP_Player.BP_Player_C'"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}