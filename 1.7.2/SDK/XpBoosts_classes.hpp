﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XpBoosts

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass XpBoosts.XpBoosts_C
// 0x00C0 (0x02F8 - 0x0238)
class UXpBoosts_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UXpBoostRow_C*                          Ally0Boost;                                        // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UXpBoostRow_C*                          Ally1Boost;                                        // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UXpBoostRow_C*                          Ally2Boost;                                        // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           CurrentBoosts;                                     // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UXpBoostDailyBonus_C*                   DailyBonus;                                        // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UXpBoostRow_C*                          LocalPlayerBoost;                                  // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           PartyRows;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TotalBoost;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortSZAwareImage*                      TotalIcon;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UXpBarXpText_C*                         XpBoostBar;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UXpBoostCounts_C*                       XpBoostCounts;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UXpBoostInfoText_C*                     XpBoostInfoText;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UXpBoostQuantities_C*                   XpBoostQuantities;                                 // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Total_Boost_Amount;                                // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2BC[0x4];                                      // 0x02BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UXpBoostRow_C*>                  Party_Members;                                     // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FUniqueNetIdRepl                       Player_To_Boost;                                   // 0x02D0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<bool>                                  RowsBoosted;                                       // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_XpBoosts(int32 EntryPoint);
	void Xp_Boost_Changed(int32 BoostAmount);
	void On_Party_Joined();
	void On_Party_Left();
	void Give_Boost_Clicked(const struct FUniqueNetIdRepl& Player_To_Boost_0);
	void Construct();
	void Update_Current_Boosts();
	void Bind_Party_Delegates();
	void HandleRemotePlayerRemoved(int32 RemovedIndex);
	void Update_Total_Boost_Amounts();
	void HandleOnTeamMemberStateChanged(const struct FFortTeamMemberInfo& NewMemberState);
	void Unbind_Party_Delegates();
	void Update_Total_Boosts();
	void Activate();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"XpBoosts_C">();
	}
	static class UXpBoosts_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXpBoosts_C>();
	}
};
static_assert(alignof(UXpBoosts_C) == 0x000008, "Wrong alignment on UXpBoosts_C");
static_assert(sizeof(UXpBoosts_C) == 0x0002F8, "Wrong size on UXpBoosts_C");
static_assert(offsetof(UXpBoosts_C, UberGraphFrame) == 0x000238, "Member 'UXpBoosts_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UXpBoosts_C, Ally0Boost) == 0x000240, "Member 'UXpBoosts_C::Ally0Boost' has a wrong offset!");
static_assert(offsetof(UXpBoosts_C, Ally1Boost) == 0x000248, "Member 'UXpBoosts_C::Ally1Boost' has a wrong offset!");
static_assert(offsetof(UXpBoosts_C, Ally2Boost) == 0x000250, "Member 'UXpBoosts_C::Ally2Boost' has a wrong offset!");
static_assert(offsetof(UXpBoosts_C, CurrentBoosts) == 0x000258, "Member 'UXpBoosts_C::CurrentBoosts' has a wrong offset!");
static_assert(offsetof(UXpBoosts_C, DailyBonus) == 0x000260, "Member 'UXpBoosts_C::DailyBonus' has a wrong offset!");
static_assert(offsetof(UXpBoosts_C, Image_0) == 0x000268, "Member 'UXpBoosts_C::Image_0' has a wrong offset!");
static_assert(offsetof(UXpBoosts_C, Image_2) == 0x000270, "Member 'UXpBoosts_C::Image_2' has a wrong offset!");
static_assert(offsetof(UXpBoosts_C, LocalPlayerBoost) == 0x000278, "Member 'UXpBoosts_C::LocalPlayerBoost' has a wrong offset!");
static_assert(offsetof(UXpBoosts_C, PartyRows) == 0x000280, "Member 'UXpBoosts_C::PartyRows' has a wrong offset!");
static_assert(offsetof(UXpBoosts_C, TotalBoost) == 0x000288, "Member 'UXpBoosts_C::TotalBoost' has a wrong offset!");
static_assert(offsetof(UXpBoosts_C, TotalIcon) == 0x000290, "Member 'UXpBoosts_C::TotalIcon' has a wrong offset!");
static_assert(offsetof(UXpBoosts_C, XpBoostBar) == 0x000298, "Member 'UXpBoosts_C::XpBoostBar' has a wrong offset!");
static_assert(offsetof(UXpBoosts_C, XpBoostCounts) == 0x0002A0, "Member 'UXpBoosts_C::XpBoostCounts' has a wrong offset!");
static_assert(offsetof(UXpBoosts_C, XpBoostInfoText) == 0x0002A8, "Member 'UXpBoosts_C::XpBoostInfoText' has a wrong offset!");
static_assert(offsetof(UXpBoosts_C, XpBoostQuantities) == 0x0002B0, "Member 'UXpBoosts_C::XpBoostQuantities' has a wrong offset!");
static_assert(offsetof(UXpBoosts_C, Total_Boost_Amount) == 0x0002B8, "Member 'UXpBoosts_C::Total_Boost_Amount' has a wrong offset!");
static_assert(offsetof(UXpBoosts_C, Party_Members) == 0x0002C0, "Member 'UXpBoosts_C::Party_Members' has a wrong offset!");
static_assert(offsetof(UXpBoosts_C, Player_To_Boost) == 0x0002D0, "Member 'UXpBoosts_C::Player_To_Boost' has a wrong offset!");
static_assert(offsetof(UXpBoosts_C, RowsBoosted) == 0x0002E8, "Member 'UXpBoosts_C::RowsBoosted' has a wrong offset!");

}

