﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SubgameSelectScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SubGameSelectRotatorItems_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SubgameSelectScreen.SubgameSelectScreen_C
// 0x0108 (0x04E8 - 0x03E0)
class USubgameSelectScreen_C final : public UFortSubGameSelectBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E0(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Pan_P1P2;                                          // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Pan_P1;                                            // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Pan_P2;                                            // 0x03F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       ContractSeperator;                                 // 0x0400(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       ToggleCycle;                                       // 0x0408(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       SwitchTextures;                                    // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       ExpandSeperator;                                   // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       DescriptionIntro;                                  // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       SwitchMaterial;                                    // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      AthenaBtn;                                         // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BGImage;                                           // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ButtonBack;                                        // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ButtonPurchase;                                    // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ButtonRedeem;                                      // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      CampaignBtn;                                       // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConsoleProfileWidget_C*                ConsoleProfileWidget;                              // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Description;                                       // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                PVEDescriptionBorder;                              // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       PVEDescriptionText;                                // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                PVPDescriptionBorder;                              // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       PVPDescriptionText;                                // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  SwitcherMenu;                                      // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                       TitleImage;                                        // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          WasLastPlayForward;                                // 0x04B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B1[0x7];                                      // 0x04B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UProgressModalWidget_C*                 LeavingMatchmakingDialog;                          // 0x04B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MID_Keyart;                                        // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CycleTimer;                                        // 0x04C8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                         PveRotatorIndex;                                   // 0x04D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D4[0x4];                                      // 0x04D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSubGameSelectRotatorItems>     Items;                                             // 0x04D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_SubgameSelectScreen(int32 EntryPoint);
	void Destruct();
	void OnRealMoneyPurchaseComleteHandler(bool bSuccess);
	void BndEvt__ButtonRedeem_K2Node_ComponentBoundEvent_67_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void CustomEvent_2();
	void OnActivated();
	void BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_107_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__BattlegroundBtn_K2Node_ComponentBoundEvent_125_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Show_Busy_If_Async_Tasks_Still_Pending();
	void CustomEvent_1();
	void CustomEvent_0(EMatchmakingState OldState, EMatchmakingState NewState);
	void Clear_Party_and_Matchmaking_Delegates();
	void Try_And_Remove_The_Dialog();
	void BndEvt__AthenaBtn_K2Node_ComponentBoundEvent_298_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnCodeRedeemComplete_4BE2E0B94F226EFF37B0C4B3DCA8A2CF();
	void OnCodeRedeemCanceled_4BE2E0B94F226EFF37B0C4B3DCA8A2CF();
	void SetDescriptionForSubGame(ESubGame SubGame);
	void SafeSetSubGame(ESubGame SubGame);
	void ToggleTimer(bool Enabled);
	void ResetKeyArtForMainMenu();
	void AdvanceRotator();
	void Update();
	bool IsBusyMatchmakingOrPartyTransitioning();
	void InitializeReedemButton();
	void InitializeShortDescriptions();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SubgameSelectScreen_C">();
	}
	static class USubgameSelectScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubgameSelectScreen_C>();
	}
};
static_assert(alignof(USubgameSelectScreen_C) == 0x000008, "Wrong alignment on USubgameSelectScreen_C");
static_assert(sizeof(USubgameSelectScreen_C) == 0x0004E8, "Wrong size on USubgameSelectScreen_C");
static_assert(offsetof(USubgameSelectScreen_C, UberGraphFrame) == 0x0003E0, "Member 'USubgameSelectScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USubgameSelectScreen_C, Pan_P1P2) == 0x0003E8, "Member 'USubgameSelectScreen_C::Pan_P1P2' has a wrong offset!");
static_assert(offsetof(USubgameSelectScreen_C, Pan_P1) == 0x0003F0, "Member 'USubgameSelectScreen_C::Pan_P1' has a wrong offset!");
static_assert(offsetof(USubgameSelectScreen_C, Pan_P2) == 0x0003F8, "Member 'USubgameSelectScreen_C::Pan_P2' has a wrong offset!");
static_assert(offsetof(USubgameSelectScreen_C, ContractSeperator) == 0x000400, "Member 'USubgameSelectScreen_C::ContractSeperator' has a wrong offset!");
static_assert(offsetof(USubgameSelectScreen_C, ToggleCycle) == 0x000408, "Member 'USubgameSelectScreen_C::ToggleCycle' has a wrong offset!");
static_assert(offsetof(USubgameSelectScreen_C, SwitchTextures) == 0x000410, "Member 'USubgameSelectScreen_C::SwitchTextures' has a wrong offset!");
static_assert(offsetof(USubgameSelectScreen_C, ExpandSeperator) == 0x000418, "Member 'USubgameSelectScreen_C::ExpandSeperator' has a wrong offset!");
static_assert(offsetof(USubgameSelectScreen_C, DescriptionIntro) == 0x000420, "Member 'USubgameSelectScreen_C::DescriptionIntro' has a wrong offset!");
static_assert(offsetof(USubgameSelectScreen_C, SwitchMaterial) == 0x000428, "Member 'USubgameSelectScreen_C::SwitchMaterial' has a wrong offset!");
static_assert(offsetof(USubgameSelectScreen_C, AthenaBtn) == 0x000430, "Member 'USubgameSelectScreen_C::AthenaBtn' has a wrong offset!");
static_assert(offsetof(USubgameSelectScreen_C, BGImage) == 0x000438, "Member 'USubgameSelectScreen_C::BGImage' has a wrong offset!");
static_assert(offsetof(USubgameSelectScreen_C, ButtonBack) == 0x000440, "Member 'USubgameSelectScreen_C::ButtonBack' has a wrong offset!");
static_assert(offsetof(USubgameSelectScreen_C, ButtonPurchase) == 0x000448, "Member 'USubgameSelectScreen_C::ButtonPurchase' has a wrong offset!");
static_assert(offsetof(USubgameSelectScreen_C, ButtonRedeem) == 0x000450, "Member 'USubgameSelectScreen_C::ButtonRedeem' has a wrong offset!");
static_assert(offsetof(USubgameSelectScreen_C, CampaignBtn) == 0x000458, "Member 'USubgameSelectScreen_C::CampaignBtn' has a wrong offset!");
static_assert(offsetof(USubgameSelectScreen_C, ConsoleProfileWidget) == 0x000460, "Member 'USubgameSelectScreen_C::ConsoleProfileWidget' has a wrong offset!");
static_assert(offsetof(USubgameSelectScreen_C, Description) == 0x000468, "Member 'USubgameSelectScreen_C::Description' has a wrong offset!");
static_assert(offsetof(USubgameSelectScreen_C, Image_0) == 0x000470, "Member 'USubgameSelectScreen_C::Image_0' has a wrong offset!");
static_assert(offsetof(USubgameSelectScreen_C, Image_1) == 0x000478, "Member 'USubgameSelectScreen_C::Image_1' has a wrong offset!");
static_assert(offsetof(USubgameSelectScreen_C, PVEDescriptionBorder) == 0x000480, "Member 'USubgameSelectScreen_C::PVEDescriptionBorder' has a wrong offset!");
static_assert(offsetof(USubgameSelectScreen_C, PVEDescriptionText) == 0x000488, "Member 'USubgameSelectScreen_C::PVEDescriptionText' has a wrong offset!");
static_assert(offsetof(USubgameSelectScreen_C, PVPDescriptionBorder) == 0x000490, "Member 'USubgameSelectScreen_C::PVPDescriptionBorder' has a wrong offset!");
static_assert(offsetof(USubgameSelectScreen_C, PVPDescriptionText) == 0x000498, "Member 'USubgameSelectScreen_C::PVPDescriptionText' has a wrong offset!");
static_assert(offsetof(USubgameSelectScreen_C, SwitcherMenu) == 0x0004A0, "Member 'USubgameSelectScreen_C::SwitcherMenu' has a wrong offset!");
static_assert(offsetof(USubgameSelectScreen_C, TitleImage) == 0x0004A8, "Member 'USubgameSelectScreen_C::TitleImage' has a wrong offset!");
static_assert(offsetof(USubgameSelectScreen_C, WasLastPlayForward) == 0x0004B0, "Member 'USubgameSelectScreen_C::WasLastPlayForward' has a wrong offset!");
static_assert(offsetof(USubgameSelectScreen_C, LeavingMatchmakingDialog) == 0x0004B8, "Member 'USubgameSelectScreen_C::LeavingMatchmakingDialog' has a wrong offset!");
static_assert(offsetof(USubgameSelectScreen_C, MID_Keyart) == 0x0004C0, "Member 'USubgameSelectScreen_C::MID_Keyart' has a wrong offset!");
static_assert(offsetof(USubgameSelectScreen_C, CycleTimer) == 0x0004C8, "Member 'USubgameSelectScreen_C::CycleTimer' has a wrong offset!");
static_assert(offsetof(USubgameSelectScreen_C, PveRotatorIndex) == 0x0004D0, "Member 'USubgameSelectScreen_C::PveRotatorIndex' has a wrong offset!");
static_assert(offsetof(USubgameSelectScreen_C, Items) == 0x0004D8, "Member 'USubgameSelectScreen_C::Items' has a wrong offset!");

}

