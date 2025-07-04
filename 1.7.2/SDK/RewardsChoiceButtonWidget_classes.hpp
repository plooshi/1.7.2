﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RewardsChoiceButtonWidget

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RewardsChoiceButtonWidget.RewardsChoiceButtonWidget_C
// 0x0020 (0x0888 - 0x0868)
class URewardsChoiceButtonWidget_C final : public UFortBaseButton
{
public:
	class UBorder*                                RewardsBorderHighlight;                            // 0x0868(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URewardsListWidget_C*                   RewardsListWidget;                                 // 0x0870(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URewardsWidget_C*                       Owner;                                             // 0x0878(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RewardIndex;                                       // 0x0880(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void PopulateRewards(class URewardsWidget_C* Owner_0, int32 RewardIndex_0, TArray<struct FFortItemInstanceQuantityPair>& Rewards);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void SelectRewards();
	void SetHighlight(bool EnableHighlight);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RewardsChoiceButtonWidget_C">();
	}
	static class URewardsChoiceButtonWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URewardsChoiceButtonWidget_C>();
	}
};
static_assert(alignof(URewardsChoiceButtonWidget_C) == 0x000008, "Wrong alignment on URewardsChoiceButtonWidget_C");
static_assert(sizeof(URewardsChoiceButtonWidget_C) == 0x000888, "Wrong size on URewardsChoiceButtonWidget_C");
static_assert(offsetof(URewardsChoiceButtonWidget_C, RewardsBorderHighlight) == 0x000868, "Member 'URewardsChoiceButtonWidget_C::RewardsBorderHighlight' has a wrong offset!");
static_assert(offsetof(URewardsChoiceButtonWidget_C, RewardsListWidget) == 0x000870, "Member 'URewardsChoiceButtonWidget_C::RewardsListWidget' has a wrong offset!");
static_assert(offsetof(URewardsChoiceButtonWidget_C, Owner) == 0x000878, "Member 'URewardsChoiceButtonWidget_C::Owner' has a wrong offset!");
static_assert(offsetof(URewardsChoiceButtonWidget_C, RewardIndex) == 0x000880, "Member 'URewardsChoiceButtonWidget_C::RewardIndex' has a wrong offset!");

}

