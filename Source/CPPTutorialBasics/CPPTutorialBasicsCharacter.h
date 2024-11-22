// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CPPTutorialBasicsCharacter.generated.h"

UCLASS(Blueprintable)
class ACPPTutorialBasicsCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ACPPTutorialBasicsCharacter();

	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;

private:

};

