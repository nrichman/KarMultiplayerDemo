// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "KartMultiplayerDemoGameMode.h"
#include "KartMultiplayerDemoPawn.h"
#include "KartMultiplayerDemoHud.h"

AKartMultiplayerDemoGameMode::AKartMultiplayerDemoGameMode()
{
	DefaultPawnClass = AKartMultiplayerDemoPawn::StaticClass();
	HUDClass = AKartMultiplayerDemoHud::StaticClass();
}
