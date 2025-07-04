﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemDetailsHeaderRarityTypeText

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemDetailsHeaderRarityTypeText.ItemDetailsHeaderRarityTypeText_C
// 0x0020 (0x0290 - 0x0270)
class UItemDetailsHeaderRarityTypeText_C final : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(Transient, DuplicateTransient)
	class UCommonTextBlock*                       RarityTextBlock;                                   // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TypeTextBlock;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Show_New_System;                                   // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ItemDetailsHeaderRarityTypeText(int32 EntryPoint);
	void HandlePostDifferentItemToCompareWithSet();
	void HandlePostDifferentItemToDetailSet();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemDetailsHeaderRarityTypeText_C">();
	}
	static class UItemDetailsHeaderRarityTypeText_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemDetailsHeaderRarityTypeText_C>();
	}
};
static_assert(alignof(UItemDetailsHeaderRarityTypeText_C) == 0x000008, "Wrong alignment on UItemDetailsHeaderRarityTypeText_C");
static_assert(sizeof(UItemDetailsHeaderRarityTypeText_C) == 0x000290, "Wrong size on UItemDetailsHeaderRarityTypeText_C");
static_assert(offsetof(UItemDetailsHeaderRarityTypeText_C, UberGraphFrame) == 0x000270, "Member 'UItemDetailsHeaderRarityTypeText_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeaderRarityTypeText_C, RarityTextBlock) == 0x000278, "Member 'UItemDetailsHeaderRarityTypeText_C::RarityTextBlock' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeaderRarityTypeText_C, TypeTextBlock) == 0x000280, "Member 'UItemDetailsHeaderRarityTypeText_C::TypeTextBlock' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeaderRarityTypeText_C, Show_New_System) == 0x000288, "Member 'UItemDetailsHeaderRarityTypeText_C::Show_New_System' has a wrong offset!");

}

