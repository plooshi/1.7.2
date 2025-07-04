﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Default_KilledEnemy

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Default_KilledEnemy.GA_Default_KilledEnemy_C
// 0x0008 (0x0A48 - 0x0A40)
class UGA_Default_KilledEnemy_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A40(0x0008)(Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_Default_KilledEnemy(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Default_KilledEnemy_C">();
	}
	static class UGA_Default_KilledEnemy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Default_KilledEnemy_C>();
	}
};
static_assert(alignof(UGA_Default_KilledEnemy_C) == 0x000008, "Wrong alignment on UGA_Default_KilledEnemy_C");
static_assert(sizeof(UGA_Default_KilledEnemy_C) == 0x000A48, "Wrong size on UGA_Default_KilledEnemy_C");
static_assert(offsetof(UGA_Default_KilledEnemy_C, UberGraphFrame) == 0x000A40, "Member 'UGA_Default_KilledEnemy_C::UberGraphFrame' has a wrong offset!");

}

