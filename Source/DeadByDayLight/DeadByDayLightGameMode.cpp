// Copyright Epic Games, Inc. All Rights Reserved.

#include "DeadByDayLightGameMode.h"
#include "DeadByDayLightCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADeadByDayLightGameMode::ADeadByDayLightGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
