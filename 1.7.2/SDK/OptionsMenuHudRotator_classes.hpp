﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OptionsMenuHudRotator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OptionsMenuHudRotator.OptionsMenuHudRotator_C
// 0x0058 (0x0290 - 0x0238)
class UOptionsMenuHudRotator_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UCommonTextBlock*                       DisplayText;                                       // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextRotator_C*                         TextRotator;                                       // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         SelectedIndex;                                     // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_254[0x4];                                      // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   HoverText;                                         // 0x0258(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	UMulticastDelegateProperty_                   Selection_Changed;                                 // 0x0270(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UCommonTextBlock*                       Tab_Tooltip_Text;                                  // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Gameplay_Tag;                                      // 0x0288(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_OptionsMenuHudRotator(int32 EntryPoint);
	void SetData(class UObject* InData, class UCommonListView* OwningList);
	void BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature(int32 Value);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void Construct();
	void Reset();
	void ToggleExpansion();
	void SetSelected(bool bSelected);
	void SetIndexInList(int32 InIndexInList);
	void SetExpanded(bool bExpanded);
	void RegisterOnClicked(const TDelegate<void(class UUserWidget* Widget)>& Callback);
	void Private_OnExpanderArrowShiftClicked();
	void OnReleaseToPool();
	void OnAcquireFromPool();
	void Update_Row_Selector(int32 Currently_Selected);
	void Center_on_Widget();
	void Update_Options(TArray<class FText>& NewParam);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);

	class UObject* GetData() const;
	bool IsItemExpanded() const;
	int32 GetIndentLevel() const;
	int32 DoesItemHaveChildren() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OptionsMenuHudRotator_C">();
	}
	static class UOptionsMenuHudRotator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptionsMenuHudRotator_C>();
	}
};
static_assert(alignof(UOptionsMenuHudRotator_C) == 0x000008, "Wrong alignment on UOptionsMenuHudRotator_C");
static_assert(sizeof(UOptionsMenuHudRotator_C) == 0x000290, "Wrong size on UOptionsMenuHudRotator_C");
static_assert(offsetof(UOptionsMenuHudRotator_C, UberGraphFrame) == 0x000238, "Member 'UOptionsMenuHudRotator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOptionsMenuHudRotator_C, DisplayText) == 0x000240, "Member 'UOptionsMenuHudRotator_C::DisplayText' has a wrong offset!");
static_assert(offsetof(UOptionsMenuHudRotator_C, TextRotator) == 0x000248, "Member 'UOptionsMenuHudRotator_C::TextRotator' has a wrong offset!");
static_assert(offsetof(UOptionsMenuHudRotator_C, SelectedIndex) == 0x000250, "Member 'UOptionsMenuHudRotator_C::SelectedIndex' has a wrong offset!");
static_assert(offsetof(UOptionsMenuHudRotator_C, HoverText) == 0x000258, "Member 'UOptionsMenuHudRotator_C::HoverText' has a wrong offset!");
static_assert(offsetof(UOptionsMenuHudRotator_C, Selection_Changed) == 0x000270, "Member 'UOptionsMenuHudRotator_C::Selection_Changed' has a wrong offset!");
static_assert(offsetof(UOptionsMenuHudRotator_C, Tab_Tooltip_Text) == 0x000280, "Member 'UOptionsMenuHudRotator_C::Tab_Tooltip_Text' has a wrong offset!");
static_assert(offsetof(UOptionsMenuHudRotator_C, Gameplay_Tag) == 0x000288, "Member 'UOptionsMenuHudRotator_C::Gameplay_Tag' has a wrong offset!");

}

