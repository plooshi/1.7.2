﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_GM_MaxHealthIncrease_Major

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCNL_GM_MaxHealthIncrease_Major.GCNL_GM_MaxHealthIncrease_Major_C
// 0x0000 (0x0468 - 0x0468)
class AGCNL_GM_MaxHealthIncrease_Major_C final : public AFortGameplayCueNotify_Looping
{
public:
	void UserConstructionScript();
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_GM_MaxHealthIncrease_Major_C">();
	}
	static class AGCNL_GM_MaxHealthIncrease_Major_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_GM_MaxHealthIncrease_Major_C>();
	}
};
static_assert(alignof(AGCNL_GM_MaxHealthIncrease_Major_C) == 0x000008, "Wrong alignment on AGCNL_GM_MaxHealthIncrease_Major_C");
static_assert(sizeof(AGCNL_GM_MaxHealthIncrease_Major_C) == 0x000468, "Wrong size on AGCNL_GM_MaxHealthIncrease_Major_C");

}

