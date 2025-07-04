﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_GenericStunned

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAB_GenericStunned.GAB_GenericStunned_C
// 0x0030 (0x0A70 - 0x0A40)
class UGAB_GenericStunned_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A40(0x0008)(Transient, DuplicateTransient)
	class UClass*                                 StunActiveEffect;                                  // 0x0A48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            ActiveStun;                                        // 0x0A50(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 RestoreControlResistEffect;                        // 0x0A58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_ImpactImmunity;                                 // 0x0A60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            ActiveImpactImmunity;                              // 0x0A68(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GAB_GenericStunned(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_OnEndAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_GenericStunned_C">();
	}
	static class UGAB_GenericStunned_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_GenericStunned_C>();
	}
};
static_assert(alignof(UGAB_GenericStunned_C) == 0x000008, "Wrong alignment on UGAB_GenericStunned_C");
static_assert(sizeof(UGAB_GenericStunned_C) == 0x000A70, "Wrong size on UGAB_GenericStunned_C");
static_assert(offsetof(UGAB_GenericStunned_C, UberGraphFrame) == 0x000A40, "Member 'UGAB_GenericStunned_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAB_GenericStunned_C, StunActiveEffect) == 0x000A48, "Member 'UGAB_GenericStunned_C::StunActiveEffect' has a wrong offset!");
static_assert(offsetof(UGAB_GenericStunned_C, ActiveStun) == 0x000A50, "Member 'UGAB_GenericStunned_C::ActiveStun' has a wrong offset!");
static_assert(offsetof(UGAB_GenericStunned_C, RestoreControlResistEffect) == 0x000A58, "Member 'UGAB_GenericStunned_C::RestoreControlResistEffect' has a wrong offset!");
static_assert(offsetof(UGAB_GenericStunned_C, GE_ImpactImmunity) == 0x000A60, "Member 'UGAB_GenericStunned_C::GE_ImpactImmunity' has a wrong offset!");
static_assert(offsetof(UGAB_GenericStunned_C, ActiveImpactImmunity) == 0x000A68, "Member 'UGAB_GenericStunned_C::ActiveImpactImmunity' has a wrong offset!");

}

