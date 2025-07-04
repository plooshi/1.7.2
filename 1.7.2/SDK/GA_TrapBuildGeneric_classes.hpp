﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TrapBuildGeneric

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_TrapBuildGeneric.GA_TrapBuildGeneric_C
// 0x0008 (0x0A48 - 0x0A40)
class UGA_TrapBuildGeneric_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A40(0x0008)(Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_TrapBuildGeneric(int32 EntryPoint);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_TrapBuildGeneric_C">();
	}
	static class UGA_TrapBuildGeneric_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_TrapBuildGeneric_C>();
	}
};
static_assert(alignof(UGA_TrapBuildGeneric_C) == 0x000008, "Wrong alignment on UGA_TrapBuildGeneric_C");
static_assert(sizeof(UGA_TrapBuildGeneric_C) == 0x000A48, "Wrong size on UGA_TrapBuildGeneric_C");
static_assert(offsetof(UGA_TrapBuildGeneric_C, UberGraphFrame) == 0x000A40, "Member 'UGA_TrapBuildGeneric_C::UberGraphFrame' has a wrong offset!");

}

