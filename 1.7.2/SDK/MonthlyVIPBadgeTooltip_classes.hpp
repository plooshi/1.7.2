﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MonthlyVIPBadgeTooltip

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MonthlyVIPBadgeTooltip.MonthlyVIPBadgeTooltip_C
// 0x0008 (0x0240 - 0x0238)
class UMonthlyVIPBadgeTooltip_C final : public UCommonUserWidget
{
public:
	class UHorizontalBox*                         HBoxBoost;                                         // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MonthlyVIPBadgeTooltip_C">();
	}
	static class UMonthlyVIPBadgeTooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMonthlyVIPBadgeTooltip_C>();
	}
};
static_assert(alignof(UMonthlyVIPBadgeTooltip_C) == 0x000008, "Wrong alignment on UMonthlyVIPBadgeTooltip_C");
static_assert(sizeof(UMonthlyVIPBadgeTooltip_C) == 0x000240, "Wrong size on UMonthlyVIPBadgeTooltip_C");
static_assert(offsetof(UMonthlyVIPBadgeTooltip_C, HBoxBoost) == 0x000238, "Member 'UMonthlyVIPBadgeTooltip_C::HBoxBoost' has a wrong offset!");

}

