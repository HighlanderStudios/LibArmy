// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Components/PrimitiveComponent.h"
#include "LA_BlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class LIBERATIONARMY_API ULA_BlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category = LiberationArmyLibrary)
		static void SetLightingChannels(UPrimitiveComponent * Component, bool Channel0, bool Channel1, bool Channel2);
};
