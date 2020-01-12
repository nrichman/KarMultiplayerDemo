// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/HUD.h"
#include "KartMultiplayerDemoHud.generated.h"


UCLASS(config = Game)
class AKartMultiplayerDemoHud : public AHUD
{
	GENERATED_BODY()

public:
	AKartMultiplayerDemoHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface
};
