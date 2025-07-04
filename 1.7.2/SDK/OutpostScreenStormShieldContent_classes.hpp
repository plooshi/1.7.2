﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OutpostScreenStormShieldContent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "Party_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C
// 0x0170 (0x0550 - 0x03E0)
class UOutpostScreenStormShieldContent_C final : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E0(0x0008)(Transient, DuplicateTransient)
	class UIconTextButton_C*                      ButtonHelp;                                        // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ExpandShieldText;                                  // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBoxRequestHelp;                                   // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_11;                                          // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_12;                                          // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULeaveButton_C*                         LeaveButton;                                       // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           OutpostShieldContent;                              // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PowerLevel_2;                                      // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PowerLevel_3;                                      // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PowerLevel_4;                                      // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PowerLevel_5;                                      // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PowerLevel_6;                                      // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PowerLevel_7;                                      // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PowerLevel_8;                                      // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PowerLevel_9;                                      // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PowerLevel_10;                                     // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PowerLevel_1a;                                     // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PowerLevel_1b;                                     // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextReady;                                         // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      Upgrade_Button;                                    // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   WoodResource;                                      // 0x0488(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortOutpostBuilding*                   OutpostCoreBuilding;                               // 0x04A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Upgradeable;                                       // 0x04A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Amplifier;                                         // 0x04A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AA[0x6];                                      // 0x04AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   AdvanceCampaignText;                               // 0x04B0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   ShieldExpandingText;                               // 0x04C8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   MaxLevelText;                                      // 0x04E0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   InstallShieldText;                                 // 0x04F8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          GetHelp;                                           // 0x0510(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_511[0x7];                                      // 0x0511(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   CloseOutpostScreen;                                // 0x0518(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UOutpostScreenStormShield_C*            ParentReference;                                   // 0x0528(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          shouldUpdateButtons_;                              // 0x0530(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_531[0x7];                                      // 0x0531(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   OutpostIsDefined;                                  // 0x0538(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          ReadyToExpand_;                                    // 0x0548(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_OutpostScreenStormShieldContent(int32 EntryPoint);
	void BndEvt__AllowFriendsOfFriendsButton_K2Node_ComponentBoundEvent_243_CommonSelectedStateChanged__DelegateSignature(class UCommonButton* Button, bool Selected);
	void OutpostIsDefined_Event();
	void BndEvt__Upgrade_Button_K2Node_ComponentBoundEvent_158_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void UpdateEnabledStates();
	void Construct();
	float GetPercent_0();
	float GetPercent_1();
	float GetPercent_2();
	void ResrouceProgress_Wood(int32 NewParam, int32 NewParam1);
	void isPlayerAlone(bool* isAlone);
	void Update_Upgrade_ButtonEnabled();
	bool IsOwningPlayerOutpostOwner();
	class UWidget* Get_LeaveOutpost_Button_ToolTipWidget();
	void Update_LeaveOutpost_ButtonEnabled();
	void SetCoreBuilding(class AFortOutpostBuilding* NewCoreBuilding, class UOutpostScreenStormShield_C* Parent_Widget);
	void Update_ExpandShieldText();
	void SetExpandShieldText(const class FText& NewExpandText);
	void UpdateGetHelpButton();
	class UWidget* Get_GetHelpButton_ToolTipWidget_0();
	void SetButtonState(bool enabled_);
	void AddInputHandlers();
	void HandleBack(bool* PassThrough);
	void CenterActiveButton();
	void EnablePowerBarChunk(class UImage* inImage);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OutpostScreenStormShieldContent_C">();
	}
	static class UOutpostScreenStormShieldContent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOutpostScreenStormShieldContent_C>();
	}
};
static_assert(alignof(UOutpostScreenStormShieldContent_C) == 0x000008, "Wrong alignment on UOutpostScreenStormShieldContent_C");
static_assert(sizeof(UOutpostScreenStormShieldContent_C) == 0x000550, "Wrong size on UOutpostScreenStormShieldContent_C");
static_assert(offsetof(UOutpostScreenStormShieldContent_C, UberGraphFrame) == 0x0003E0, "Member 'UOutpostScreenStormShieldContent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOutpostScreenStormShieldContent_C, ButtonHelp) == 0x0003E8, "Member 'UOutpostScreenStormShieldContent_C::ButtonHelp' has a wrong offset!");
static_assert(offsetof(UOutpostScreenStormShieldContent_C, ExpandShieldText) == 0x0003F0, "Member 'UOutpostScreenStormShieldContent_C::ExpandShieldText' has a wrong offset!");
static_assert(offsetof(UOutpostScreenStormShieldContent_C, HBoxRequestHelp) == 0x0003F8, "Member 'UOutpostScreenStormShieldContent_C::HBoxRequestHelp' has a wrong offset!");
static_assert(offsetof(UOutpostScreenStormShieldContent_C, Image_11) == 0x000400, "Member 'UOutpostScreenStormShieldContent_C::Image_11' has a wrong offset!");
static_assert(offsetof(UOutpostScreenStormShieldContent_C, Image_12) == 0x000408, "Member 'UOutpostScreenStormShieldContent_C::Image_12' has a wrong offset!");
static_assert(offsetof(UOutpostScreenStormShieldContent_C, LeaveButton) == 0x000410, "Member 'UOutpostScreenStormShieldContent_C::LeaveButton' has a wrong offset!");
static_assert(offsetof(UOutpostScreenStormShieldContent_C, OutpostShieldContent) == 0x000418, "Member 'UOutpostScreenStormShieldContent_C::OutpostShieldContent' has a wrong offset!");
static_assert(offsetof(UOutpostScreenStormShieldContent_C, PowerLevel_2) == 0x000420, "Member 'UOutpostScreenStormShieldContent_C::PowerLevel_2' has a wrong offset!");
static_assert(offsetof(UOutpostScreenStormShieldContent_C, PowerLevel_3) == 0x000428, "Member 'UOutpostScreenStormShieldContent_C::PowerLevel_3' has a wrong offset!");
static_assert(offsetof(UOutpostScreenStormShieldContent_C, PowerLevel_4) == 0x000430, "Member 'UOutpostScreenStormShieldContent_C::PowerLevel_4' has a wrong offset!");
static_assert(offsetof(UOutpostScreenStormShieldContent_C, PowerLevel_5) == 0x000438, "Member 'UOutpostScreenStormShieldContent_C::PowerLevel_5' has a wrong offset!");
static_assert(offsetof(UOutpostScreenStormShieldContent_C, PowerLevel_6) == 0x000440, "Member 'UOutpostScreenStormShieldContent_C::PowerLevel_6' has a wrong offset!");
static_assert(offsetof(UOutpostScreenStormShieldContent_C, PowerLevel_7) == 0x000448, "Member 'UOutpostScreenStormShieldContent_C::PowerLevel_7' has a wrong offset!");
static_assert(offsetof(UOutpostScreenStormShieldContent_C, PowerLevel_8) == 0x000450, "Member 'UOutpostScreenStormShieldContent_C::PowerLevel_8' has a wrong offset!");
static_assert(offsetof(UOutpostScreenStormShieldContent_C, PowerLevel_9) == 0x000458, "Member 'UOutpostScreenStormShieldContent_C::PowerLevel_9' has a wrong offset!");
static_assert(offsetof(UOutpostScreenStormShieldContent_C, PowerLevel_10) == 0x000460, "Member 'UOutpostScreenStormShieldContent_C::PowerLevel_10' has a wrong offset!");
static_assert(offsetof(UOutpostScreenStormShieldContent_C, PowerLevel_1a) == 0x000468, "Member 'UOutpostScreenStormShieldContent_C::PowerLevel_1a' has a wrong offset!");
static_assert(offsetof(UOutpostScreenStormShieldContent_C, PowerLevel_1b) == 0x000470, "Member 'UOutpostScreenStormShieldContent_C::PowerLevel_1b' has a wrong offset!");
static_assert(offsetof(UOutpostScreenStormShieldContent_C, TextReady) == 0x000478, "Member 'UOutpostScreenStormShieldContent_C::TextReady' has a wrong offset!");
static_assert(offsetof(UOutpostScreenStormShieldContent_C, Upgrade_Button) == 0x000480, "Member 'UOutpostScreenStormShieldContent_C::Upgrade_Button' has a wrong offset!");
static_assert(offsetof(UOutpostScreenStormShieldContent_C, WoodResource) == 0x000488, "Member 'UOutpostScreenStormShieldContent_C::WoodResource' has a wrong offset!");
static_assert(offsetof(UOutpostScreenStormShieldContent_C, OutpostCoreBuilding) == 0x0004A0, "Member 'UOutpostScreenStormShieldContent_C::OutpostCoreBuilding' has a wrong offset!");
static_assert(offsetof(UOutpostScreenStormShieldContent_C, Upgradeable) == 0x0004A8, "Member 'UOutpostScreenStormShieldContent_C::Upgradeable' has a wrong offset!");
static_assert(offsetof(UOutpostScreenStormShieldContent_C, Amplifier) == 0x0004A9, "Member 'UOutpostScreenStormShieldContent_C::Amplifier' has a wrong offset!");
static_assert(offsetof(UOutpostScreenStormShieldContent_C, AdvanceCampaignText) == 0x0004B0, "Member 'UOutpostScreenStormShieldContent_C::AdvanceCampaignText' has a wrong offset!");
static_assert(offsetof(UOutpostScreenStormShieldContent_C, ShieldExpandingText) == 0x0004C8, "Member 'UOutpostScreenStormShieldContent_C::ShieldExpandingText' has a wrong offset!");
static_assert(offsetof(UOutpostScreenStormShieldContent_C, MaxLevelText) == 0x0004E0, "Member 'UOutpostScreenStormShieldContent_C::MaxLevelText' has a wrong offset!");
static_assert(offsetof(UOutpostScreenStormShieldContent_C, InstallShieldText) == 0x0004F8, "Member 'UOutpostScreenStormShieldContent_C::InstallShieldText' has a wrong offset!");
static_assert(offsetof(UOutpostScreenStormShieldContent_C, GetHelp) == 0x000510, "Member 'UOutpostScreenStormShieldContent_C::GetHelp' has a wrong offset!");
static_assert(offsetof(UOutpostScreenStormShieldContent_C, CloseOutpostScreen) == 0x000518, "Member 'UOutpostScreenStormShieldContent_C::CloseOutpostScreen' has a wrong offset!");
static_assert(offsetof(UOutpostScreenStormShieldContent_C, ParentReference) == 0x000528, "Member 'UOutpostScreenStormShieldContent_C::ParentReference' has a wrong offset!");
static_assert(offsetof(UOutpostScreenStormShieldContent_C, shouldUpdateButtons_) == 0x000530, "Member 'UOutpostScreenStormShieldContent_C::shouldUpdateButtons_' has a wrong offset!");
static_assert(offsetof(UOutpostScreenStormShieldContent_C, OutpostIsDefined) == 0x000538, "Member 'UOutpostScreenStormShieldContent_C::OutpostIsDefined' has a wrong offset!");
static_assert(offsetof(UOutpostScreenStormShieldContent_C, ReadyToExpand_) == 0x000548, "Member 'UOutpostScreenStormShieldContent_C::ReadyToExpand_' has a wrong offset!");

}

