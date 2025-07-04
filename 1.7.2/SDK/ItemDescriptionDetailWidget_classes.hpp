﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemDescriptionDetailWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C
// 0x0018 (0x0288 - 0x0270)
class UItemDescriptionDetailWidget_C final : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(Transient, DuplicateTransient)
	class UCommonTextBlock*                       ItemDescriptionTextBlock;                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          ShouldShowOnlyIfItemIsSimple;                      // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          InCollectionBook;                                  // 0x0281(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ItemDescriptionDetailWidget(int32 EntryPoint);
	void HandlePostDifferentItemToDetailSet();
	void IsItemSimple(bool* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemDescriptionDetailWidget_C">();
	}
	static class UItemDescriptionDetailWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemDescriptionDetailWidget_C>();
	}
};
static_assert(alignof(UItemDescriptionDetailWidget_C) == 0x000008, "Wrong alignment on UItemDescriptionDetailWidget_C");
static_assert(sizeof(UItemDescriptionDetailWidget_C) == 0x000288, "Wrong size on UItemDescriptionDetailWidget_C");
static_assert(offsetof(UItemDescriptionDetailWidget_C, UberGraphFrame) == 0x000270, "Member 'UItemDescriptionDetailWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemDescriptionDetailWidget_C, ItemDescriptionTextBlock) == 0x000278, "Member 'UItemDescriptionDetailWidget_C::ItemDescriptionTextBlock' has a wrong offset!");
static_assert(offsetof(UItemDescriptionDetailWidget_C, ShouldShowOnlyIfItemIsSimple) == 0x000280, "Member 'UItemDescriptionDetailWidget_C::ShouldShowOnlyIfItemIsSimple' has a wrong offset!");
static_assert(offsetof(UItemDescriptionDetailWidget_C, InCollectionBook) == 0x000281, "Member 'UItemDescriptionDetailWidget_C::InCollectionBook' has a wrong offset!");

}

