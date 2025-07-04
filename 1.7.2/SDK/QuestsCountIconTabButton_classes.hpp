﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestsCountIconTabButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CommonUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestsCountIconTabButton.QuestsCountIconTabButton_C
// 0x0108 (0x09A8 - 0x08A0)
class UQuestsCountIconTabButton_C final : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08A0(0x0008)(Transient, DuplicateTransient)
	class UNormalBangWrapper_C*                   BangWrapper;                                       // 0x08A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CenterButtonTextWidget;                            // 0x08B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ContentHB;                                         // 0x08B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LeftSideImage;                                     // 0x08C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ButtonText;                                        // 0x08C8(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateBrush                            IconBrush;                                         // 0x08E0(0x0090)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          UseText;                                           // 0x0970(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_971[0x3];                                      // 0x0971(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           SelectedIconTint;                                  // 0x0974(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           DeselectedIconTint;                                // 0x0984(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           HoveredIconTint;                                   // 0x0994(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bBangEnabled;                                      // 0x09A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_QuestsCountIconTabButton(int32 EntryPoint);
	void Handle_Quest_Count_Updated();
	void OnUnhovered();
	void OnHovered();
	void Construct();
	void OnDeselected();
	void OnSelected();
	void SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo);
	void PreConstruct(bool IsDesignTime);
	void OnCurrentTextStyleChanged();
	void Set_Text(const class FText& ButtonText_0);
	void Set_Icon(const struct FSlateBrush& IconBrush_0);
	void ShowText();
	void SetTutorialBorderStyle(class UClass* BorderStyle);
	void Update_Text();
	void Update_Bang_State(bool bBangEnabled_0, int32 Count);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestsCountIconTabButton_C">();
	}
	static class UQuestsCountIconTabButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestsCountIconTabButton_C>();
	}
};
static_assert(alignof(UQuestsCountIconTabButton_C) == 0x000008, "Wrong alignment on UQuestsCountIconTabButton_C");
static_assert(sizeof(UQuestsCountIconTabButton_C) == 0x0009A8, "Wrong size on UQuestsCountIconTabButton_C");
static_assert(offsetof(UQuestsCountIconTabButton_C, UberGraphFrame) == 0x0008A0, "Member 'UQuestsCountIconTabButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQuestsCountIconTabButton_C, BangWrapper) == 0x0008A8, "Member 'UQuestsCountIconTabButton_C::BangWrapper' has a wrong offset!");
static_assert(offsetof(UQuestsCountIconTabButton_C, CenterButtonTextWidget) == 0x0008B0, "Member 'UQuestsCountIconTabButton_C::CenterButtonTextWidget' has a wrong offset!");
static_assert(offsetof(UQuestsCountIconTabButton_C, ContentHB) == 0x0008B8, "Member 'UQuestsCountIconTabButton_C::ContentHB' has a wrong offset!");
static_assert(offsetof(UQuestsCountIconTabButton_C, LeftSideImage) == 0x0008C0, "Member 'UQuestsCountIconTabButton_C::LeftSideImage' has a wrong offset!");
static_assert(offsetof(UQuestsCountIconTabButton_C, ButtonText) == 0x0008C8, "Member 'UQuestsCountIconTabButton_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UQuestsCountIconTabButton_C, IconBrush) == 0x0008E0, "Member 'UQuestsCountIconTabButton_C::IconBrush' has a wrong offset!");
static_assert(offsetof(UQuestsCountIconTabButton_C, UseText) == 0x000970, "Member 'UQuestsCountIconTabButton_C::UseText' has a wrong offset!");
static_assert(offsetof(UQuestsCountIconTabButton_C, SelectedIconTint) == 0x000974, "Member 'UQuestsCountIconTabButton_C::SelectedIconTint' has a wrong offset!");
static_assert(offsetof(UQuestsCountIconTabButton_C, DeselectedIconTint) == 0x000984, "Member 'UQuestsCountIconTabButton_C::DeselectedIconTint' has a wrong offset!");
static_assert(offsetof(UQuestsCountIconTabButton_C, HoveredIconTint) == 0x000994, "Member 'UQuestsCountIconTabButton_C::HoveredIconTint' has a wrong offset!");
static_assert(offsetof(UQuestsCountIconTabButton_C, bBangEnabled) == 0x0009A4, "Member 'UQuestsCountIconTabButton_C::bBangEnabled' has a wrong offset!");

}

