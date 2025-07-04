﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_RiftZapPlayer

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_RiftZapPlayer.GCN_RiftZapPlayer_C
// 0x0000 (0x0070 - 0x0070)
class UGCN_RiftZapPlayer_C final : public UFortGameplayCueNotify_Simple
{
public:
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_RiftZapPlayer_C">();
	}
	static class UGCN_RiftZapPlayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_RiftZapPlayer_C>();
	}
};
static_assert(alignof(UGCN_RiftZapPlayer_C) == 0x000008, "Wrong alignment on UGCN_RiftZapPlayer_C");
static_assert(sizeof(UGCN_RiftZapPlayer_C) == 0x000070, "Wrong size on UGCN_RiftZapPlayer_C");

}

