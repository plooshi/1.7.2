﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TabGameOptions

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TabGameOptions.TabGameOptions_C
// 0x0020 (0x02A8 - 0x0288)
class UTabGameOptions_C : public UFortGameOptions
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(Transient, DuplicateTransient)
	class UCommonWidgetSwitcher*                  CommonWidgetSwitcher_0;                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalTabList_C*                   GameTabs;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TooltipDisplay;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TabGameOptions(int32 EntryPoint);
	void BndEvt__GameTabs_K2Node_ComponentBoundEvent_21_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_1004_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void Tab_Settings_Changed();
	void CenterOnTab();
	void UpdateOptionsTab();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TabGameOptions_C">();
	}
	static class UTabGameOptions_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTabGameOptions_C>();
	}
};
static_assert(alignof(UTabGameOptions_C) == 0x000008, "Wrong alignment on UTabGameOptions_C");
static_assert(sizeof(UTabGameOptions_C) == 0x0002A8, "Wrong size on UTabGameOptions_C");
static_assert(offsetof(UTabGameOptions_C, UberGraphFrame) == 0x000288, "Member 'UTabGameOptions_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTabGameOptions_C, CommonWidgetSwitcher_0) == 0x000290, "Member 'UTabGameOptions_C::CommonWidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UTabGameOptions_C, GameTabs) == 0x000298, "Member 'UTabGameOptions_C::GameTabs' has a wrong offset!");
static_assert(offsetof(UTabGameOptions_C, TooltipDisplay) == 0x0002A0, "Member 'UTabGameOptions_C::TooltipDisplay' has a wrong offset!");

}

