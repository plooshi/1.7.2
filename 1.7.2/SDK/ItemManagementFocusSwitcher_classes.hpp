﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemManagementFocusSwitcher

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemManagementFocusSwitcher.ItemManagementFocusSwitcher_C
// 0x0020 (0x0258 - 0x0238)
class UItemManagementFocusSwitcher_C final : public UCommonUserWidget
{
public:
	class UIconTabButton_C*                       IconTabButton;                                     // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemTileView*                      TileViewA;                                         // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemTileView*                      TileViewB;                                         // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemTileView*                      PreviousFocus;                                     // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void DeferFocusSwitch();
	void ExecuteFocusSwitch();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemManagementFocusSwitcher_C">();
	}
	static class UItemManagementFocusSwitcher_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemManagementFocusSwitcher_C>();
	}
};
static_assert(alignof(UItemManagementFocusSwitcher_C) == 0x000008, "Wrong alignment on UItemManagementFocusSwitcher_C");
static_assert(sizeof(UItemManagementFocusSwitcher_C) == 0x000258, "Wrong size on UItemManagementFocusSwitcher_C");
static_assert(offsetof(UItemManagementFocusSwitcher_C, IconTabButton) == 0x000238, "Member 'UItemManagementFocusSwitcher_C::IconTabButton' has a wrong offset!");
static_assert(offsetof(UItemManagementFocusSwitcher_C, TileViewA) == 0x000240, "Member 'UItemManagementFocusSwitcher_C::TileViewA' has a wrong offset!");
static_assert(offsetof(UItemManagementFocusSwitcher_C, TileViewB) == 0x000248, "Member 'UItemManagementFocusSwitcher_C::TileViewB' has a wrong offset!");
static_assert(offsetof(UItemManagementFocusSwitcher_C, PreviousFocus) == 0x000250, "Member 'UItemManagementFocusSwitcher_C::PreviousFocus' has a wrong offset!");

}

