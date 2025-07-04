﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MulchConfirmationItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MulchConfirmationItem.MulchConfirmationItem_C
// 0x0020 (0x0250 - 0x0230)
class UMulchConfirmationItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(Transient, DuplicateTransient)
	class UFortMultiSizeItemCard*                 ItemCard;                                          // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItem*                              Item;                                              // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         Quantity;                                          // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MulchConfirmationItem(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MulchConfirmationItem_C">();
	}
	static class UMulchConfirmationItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMulchConfirmationItem_C>();
	}
};
static_assert(alignof(UMulchConfirmationItem_C) == 0x000008, "Wrong alignment on UMulchConfirmationItem_C");
static_assert(sizeof(UMulchConfirmationItem_C) == 0x000250, "Wrong size on UMulchConfirmationItem_C");
static_assert(offsetof(UMulchConfirmationItem_C, UberGraphFrame) == 0x000230, "Member 'UMulchConfirmationItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMulchConfirmationItem_C, ItemCard) == 0x000238, "Member 'UMulchConfirmationItem_C::ItemCard' has a wrong offset!");
static_assert(offsetof(UMulchConfirmationItem_C, Item) == 0x000240, "Member 'UMulchConfirmationItem_C::Item' has a wrong offset!");
static_assert(offsetof(UMulchConfirmationItem_C, Quantity) == 0x000248, "Member 'UMulchConfirmationItem_C::Quantity' has a wrong offset!");

}

