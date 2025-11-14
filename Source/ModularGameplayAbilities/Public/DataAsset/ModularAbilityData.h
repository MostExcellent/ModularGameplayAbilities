// Copyright Chronicler.

#pragma once

#include "GameplayEffect.h"

#include "ModularAbilityData.generated.h"

#define  UE_API MODULARGAMEPLAYABILITIES_API


/**
 * Global data asset that contains modular ability data.
 */
UCLASS(MinimalAPI, BlueprintType, Const, meta=(DisplayName="Modular Ability Data", ShortTooltip="Global data asset containing modular ability data."))
class UModularAbilityData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UE_API UModularAbilityData();

	UE_API static const UModularAbilityData& Get();

	// Gameplay effect used to apply damage.  Uses SetByCaller for the damage magnitude.
	UPROPERTY(EditDefaultsOnly, Category = "Default Gameplay Effects", meta = (DisplayName = "Damage Gameplay Effect (SetByCaller)"))
	TSoftClassPtr<UGameplayEffect> DamageGameplayEffect_SetByCaller;

	// Gameplay effect used to apply healing.  Uses SetByCaller for the healing magnitude.
	UPROPERTY(EditDefaultsOnly, Category = "Default Gameplay Effects", meta = (DisplayName = "Heal Gameplay Effect (SetByCaller)"))
	TSoftClassPtr<UGameplayEffect> HealGameplayEffect_SetByCaller;

	// Gameplay effect used to add and remove dynamic tags.
	UPROPERTY(EditDefaultsOnly, Category = "Default Gameplay Effects")
	TSoftClassPtr<UGameplayEffect> DynamicTagGameplayEffect;
};

#undef UE_API
