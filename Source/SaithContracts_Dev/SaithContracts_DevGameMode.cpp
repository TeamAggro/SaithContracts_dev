// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "SaithContracts_Dev.h"
#include "SaithContracts_DevGameMode.h"
#include "SaithContracts_DevCharacter.h"

ASaithContracts_DevGameMode::ASaithContracts_DevGameMode()
{
	// set default pawn class to our character
	DefaultPawnClass = ASaithContracts_DevCharacter::StaticClass();	
}
