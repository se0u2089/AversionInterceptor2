// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "AversionInterceptor.h"
#include "AversionInterceptorGameMode.h"
#include "AversionInterceptorCharacter.h"
#include "InterceptorCharacter.h"

AAversionInterceptorGameMode::AAversionInterceptorGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter2"));
	if (PlayerPawnBPClass.Class != NULL)
	{

		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
