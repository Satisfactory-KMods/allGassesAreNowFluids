// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "KBFLGameInstanceModule.h"
#include "KBFLWorldModule.h"
#include "AGAFWorldModule.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class ALLFLUIDSAREGASSES_API UAGAFWorldModule : public UKBFLGameInstanceModule
{
	GENERATED_BODY()

public:
	UAGAFWorldModule();

	virtual void ConstructionPhase_Delayed() override;
	void OverwriteItems();
};
