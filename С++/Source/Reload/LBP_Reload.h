// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LBP_Reload.generated.h"


/**
 * 
 */
UCLASS()
class RELOAD_API ULBP_Reload : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "C_Reload")
	static int32 F_Reload(int32 Bullet, bool& can_shot, bool& can_reload);
	UFUNCTION(BlueprintCallable, Category = "C_Reload")
	static int32 F_GunReload(int32 Bullet);
};
