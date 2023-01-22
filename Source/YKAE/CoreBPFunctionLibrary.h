// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoreBPFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class YKAE_API UCoreBPFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category="Analytics")
	static void ConvertRenderTargetToTexture(UTextureRenderTarget2D* RenderTarget, UTexture2D* &ExportedTexture);
};
