// Fill out your copyright notice in the Description page of Project Settings.


#include "LA_BlueprintFunctionLibrary.h"

void ULA_BlueprintFunctionLibrary::SetLightingChannels(UPrimitiveComponent * Component, bool Channel0, bool Channel1, bool Channel2)
{
	FLightingChannels Channels;

	Channels.bChannel0 = Channel0;
	Channels.bChannel1 = Channel1;
	Channels.bChannel2 = Channel2;

	Component->LightingChannels = Channels;
	Component->MarkRenderStateDirty();
}
