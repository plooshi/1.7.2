﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WM_PinMedium

#include "Basic.hpp"

#include "WM_Pin_Master_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WM_PinMedium.WM_PinMedium_C
// 0x0000 (0x04B8 - 0x04B8)
class AWM_PinMedium_C final : public AWM_Pin_Master_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WM_PinMedium_C">();
	}
	static class AWM_PinMedium_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWM_PinMedium_C>();
	}
};
static_assert(alignof(AWM_PinMedium_C) == 0x000008, "Wrong alignment on AWM_PinMedium_C");
static_assert(sizeof(AWM_PinMedium_C) == 0x0004B8, "Wrong size on AWM_PinMedium_C");

}

