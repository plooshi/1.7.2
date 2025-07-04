﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemTransformResultInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemTransformResultInfo.ItemTransformResultInfo_C
// 0x00D0 (0x0308 - 0x0238)
class UItemTransformResultInfo_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UCommonNumericTextBlock*                CurrentSacrificePointsText;                        // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemTransformRequiredItems_C*          ItemTransformRequiredItems;                        // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemTransformResultItems_C*            ItemTransformResultItems;                          // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                 KeyCard;                                           // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       KeyName;                                           // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       MaxText;                                           // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                NextLevelSacrificePoints;                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           RequiredResourceInfo;                              // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TierProgressBar;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         CurrentSacrificePoints;                            // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_28C[0x4];                                      // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortConversionControlItemDefinition*   KeyItemDef;                                        // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                              KeyItem;                                           // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortItem*>                      SelectedItems;                                     // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	UMulticastDelegateProperty_                   OnTransformConfirmed;                              // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         CurrentTier;                                       // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FirstTier;                                         // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxTier;                                           // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2CC[0x4];                                      // 0x02CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   AtMaxText;                                         // 0x02D0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         TierPercentage;                                    // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2EC[0x4];                                      // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               TierProgressBarMaterial;                           // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnUpdateSacrificeInfo;                             // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_ItemTransformResultInfo(int32 EntryPoint);
	void Construct();
	void BndEvt__TransformButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void SetKeyToRepresent(class UFortItem* Key);
	void UpdateSacrificePointsBar();
	void UpdateSacrificeInfo(TArray<class UFortItem*>& SacrificeItems);
	void CalculateCurrentSacrificePoints(int32* TotalSacrificePoints);
	void UpdateTierProgressPercentage();
	void GetPointsForTier(int32 Tier, int32* Points);
	int32 CalculateNextTier();
	void Get_Transform_Data(int32* CurrentSacrificePoints_0, int32* CurrentTier_0);
	bool Is_Tranfsorm_Button_Enabled();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemTransformResultInfo_C">();
	}
	static class UItemTransformResultInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemTransformResultInfo_C>();
	}
};
static_assert(alignof(UItemTransformResultInfo_C) == 0x000008, "Wrong alignment on UItemTransformResultInfo_C");
static_assert(sizeof(UItemTransformResultInfo_C) == 0x000308, "Wrong size on UItemTransformResultInfo_C");
static_assert(offsetof(UItemTransformResultInfo_C, UberGraphFrame) == 0x000238, "Member 'UItemTransformResultInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemTransformResultInfo_C, CurrentSacrificePointsText) == 0x000240, "Member 'UItemTransformResultInfo_C::CurrentSacrificePointsText' has a wrong offset!");
static_assert(offsetof(UItemTransformResultInfo_C, ItemTransformRequiredItems) == 0x000248, "Member 'UItemTransformResultInfo_C::ItemTransformRequiredItems' has a wrong offset!");
static_assert(offsetof(UItemTransformResultInfo_C, ItemTransformResultItems) == 0x000250, "Member 'UItemTransformResultInfo_C::ItemTransformResultItems' has a wrong offset!");
static_assert(offsetof(UItemTransformResultInfo_C, KeyCard) == 0x000258, "Member 'UItemTransformResultInfo_C::KeyCard' has a wrong offset!");
static_assert(offsetof(UItemTransformResultInfo_C, KeyName) == 0x000260, "Member 'UItemTransformResultInfo_C::KeyName' has a wrong offset!");
static_assert(offsetof(UItemTransformResultInfo_C, MaxText) == 0x000268, "Member 'UItemTransformResultInfo_C::MaxText' has a wrong offset!");
static_assert(offsetof(UItemTransformResultInfo_C, NextLevelSacrificePoints) == 0x000270, "Member 'UItemTransformResultInfo_C::NextLevelSacrificePoints' has a wrong offset!");
static_assert(offsetof(UItemTransformResultInfo_C, RequiredResourceInfo) == 0x000278, "Member 'UItemTransformResultInfo_C::RequiredResourceInfo' has a wrong offset!");
static_assert(offsetof(UItemTransformResultInfo_C, TierProgressBar) == 0x000280, "Member 'UItemTransformResultInfo_C::TierProgressBar' has a wrong offset!");
static_assert(offsetof(UItemTransformResultInfo_C, CurrentSacrificePoints) == 0x000288, "Member 'UItemTransformResultInfo_C::CurrentSacrificePoints' has a wrong offset!");
static_assert(offsetof(UItemTransformResultInfo_C, KeyItemDef) == 0x000290, "Member 'UItemTransformResultInfo_C::KeyItemDef' has a wrong offset!");
static_assert(offsetof(UItemTransformResultInfo_C, KeyItem) == 0x000298, "Member 'UItemTransformResultInfo_C::KeyItem' has a wrong offset!");
static_assert(offsetof(UItemTransformResultInfo_C, SelectedItems) == 0x0002A0, "Member 'UItemTransformResultInfo_C::SelectedItems' has a wrong offset!");
static_assert(offsetof(UItemTransformResultInfo_C, OnTransformConfirmed) == 0x0002B0, "Member 'UItemTransformResultInfo_C::OnTransformConfirmed' has a wrong offset!");
static_assert(offsetof(UItemTransformResultInfo_C, CurrentTier) == 0x0002C0, "Member 'UItemTransformResultInfo_C::CurrentTier' has a wrong offset!");
static_assert(offsetof(UItemTransformResultInfo_C, FirstTier) == 0x0002C4, "Member 'UItemTransformResultInfo_C::FirstTier' has a wrong offset!");
static_assert(offsetof(UItemTransformResultInfo_C, MaxTier) == 0x0002C8, "Member 'UItemTransformResultInfo_C::MaxTier' has a wrong offset!");
static_assert(offsetof(UItemTransformResultInfo_C, AtMaxText) == 0x0002D0, "Member 'UItemTransformResultInfo_C::AtMaxText' has a wrong offset!");
static_assert(offsetof(UItemTransformResultInfo_C, TierPercentage) == 0x0002E8, "Member 'UItemTransformResultInfo_C::TierPercentage' has a wrong offset!");
static_assert(offsetof(UItemTransformResultInfo_C, TierProgressBarMaterial) == 0x0002F0, "Member 'UItemTransformResultInfo_C::TierProgressBarMaterial' has a wrong offset!");
static_assert(offsetof(UItemTransformResultInfo_C, OnUpdateSacrificeInfo) == 0x0002F8, "Member 'UItemTransformResultInfo_C::OnUpdateSacrificeInfo' has a wrong offset!");

}

