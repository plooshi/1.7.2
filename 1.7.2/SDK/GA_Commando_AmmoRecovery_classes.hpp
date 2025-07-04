﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Commando_AmmoRecovery

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GAT_GenericTriggeredAbility_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Commando_AmmoRecovery.GA_Commando_AmmoRecovery_C
// 0x0050 (0x0B60 - 0x0B10)
class UGA_Commando_AmmoRecovery_C final : public UGAT_GenericTriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Commando_AmmoRecovery_C;         // 0x0B10(0x0008)(Transient, DuplicateTransient)
	struct FGameplayTag                           EventActivation;                                   // 0x0B18(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           EventComplete;                                     // 0x0B20(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountGiven;                                       // 0x0B28(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         UpgradedAmmoAmount;                                // 0x0B2C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_AmmoRecovery2;                                  // 0x0B30(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          AmmoRecovery2;                                     // 0x0B50(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B51[0x3];                                      // 0x0B51(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AmmoRecovery1ChanceToApply;                        // 0x0B54(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FinalChanceToApply;                                // 0x0B58(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AmmoRecovery2ChanceToApply;                        // 0x0B5C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Commando_AmmoRecovery(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData_0);
	void SetupAbility(class UAbilitySystemComponent* AbilitySystem);

	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Commando_AmmoRecovery_C">();
	}
	static class UGA_Commando_AmmoRecovery_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Commando_AmmoRecovery_C>();
	}
};
static_assert(alignof(UGA_Commando_AmmoRecovery_C) == 0x000008, "Wrong alignment on UGA_Commando_AmmoRecovery_C");
static_assert(sizeof(UGA_Commando_AmmoRecovery_C) == 0x000B60, "Wrong size on UGA_Commando_AmmoRecovery_C");
static_assert(offsetof(UGA_Commando_AmmoRecovery_C, UberGraphFrame_GA_Commando_AmmoRecovery_C) == 0x000B10, "Member 'UGA_Commando_AmmoRecovery_C::UberGraphFrame_GA_Commando_AmmoRecovery_C' has a wrong offset!");
static_assert(offsetof(UGA_Commando_AmmoRecovery_C, EventActivation) == 0x000B18, "Member 'UGA_Commando_AmmoRecovery_C::EventActivation' has a wrong offset!");
static_assert(offsetof(UGA_Commando_AmmoRecovery_C, EventComplete) == 0x000B20, "Member 'UGA_Commando_AmmoRecovery_C::EventComplete' has a wrong offset!");
static_assert(offsetof(UGA_Commando_AmmoRecovery_C, AmountGiven) == 0x000B28, "Member 'UGA_Commando_AmmoRecovery_C::AmountGiven' has a wrong offset!");
static_assert(offsetof(UGA_Commando_AmmoRecovery_C, UpgradedAmmoAmount) == 0x000B2C, "Member 'UGA_Commando_AmmoRecovery_C::UpgradedAmmoAmount' has a wrong offset!");
static_assert(offsetof(UGA_Commando_AmmoRecovery_C, TC_AmmoRecovery2) == 0x000B30, "Member 'UGA_Commando_AmmoRecovery_C::TC_AmmoRecovery2' has a wrong offset!");
static_assert(offsetof(UGA_Commando_AmmoRecovery_C, AmmoRecovery2) == 0x000B50, "Member 'UGA_Commando_AmmoRecovery_C::AmmoRecovery2' has a wrong offset!");
static_assert(offsetof(UGA_Commando_AmmoRecovery_C, AmmoRecovery1ChanceToApply) == 0x000B54, "Member 'UGA_Commando_AmmoRecovery_C::AmmoRecovery1ChanceToApply' has a wrong offset!");
static_assert(offsetof(UGA_Commando_AmmoRecovery_C, FinalChanceToApply) == 0x000B58, "Member 'UGA_Commando_AmmoRecovery_C::FinalChanceToApply' has a wrong offset!");
static_assert(offsetof(UGA_Commando_AmmoRecovery_C, AmmoRecovery2ChanceToApply) == 0x000B5C, "Member 'UGA_Commando_AmmoRecovery_C::AmmoRecovery2ChanceToApply' has a wrong offset!");

}

