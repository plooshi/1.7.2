﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemTransformKeyPickerTileButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C
// 0x0020 (0x08F0 - 0x08D0)
class UItemTransformKeyPickerTileButton_C final : public UFortTransformKeyPickerTileButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08D0(0x0008)(Transient, DuplicateTransient)
	class UNormalBangWrapper_C*                   NormalBangWrapper;                                 // 0x08D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          NullItemBorder;                                    // 0x08E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        RootWidgetSwitcher;                                // 0x08E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ItemTransformKeyPickerTileButton(int32 EntryPoint);
	void OnHovered();
	void OnSelected();
	void SetData(class UObject* InData, class UCommonListView* OwningList);
	void Update_Bang_State();
	void Get_Transform_Key(class UFortAccountItem** AsFort_Account_Item);
	void Is_Transform_Key_Consumable(bool* bConsumedOnConversion);
	void Mark_Item_as_Seen();
	struct FGameplayTagContainer Get_Transform_Key_Catalysts();
	void Get_Fort_PC(class AFortPlayerController** FortPC);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemTransformKeyPickerTileButton_C">();
	}
	static class UItemTransformKeyPickerTileButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemTransformKeyPickerTileButton_C>();
	}
};
static_assert(alignof(UItemTransformKeyPickerTileButton_C) == 0x000008, "Wrong alignment on UItemTransformKeyPickerTileButton_C");
static_assert(sizeof(UItemTransformKeyPickerTileButton_C) == 0x0008F0, "Wrong size on UItemTransformKeyPickerTileButton_C");
static_assert(offsetof(UItemTransformKeyPickerTileButton_C, UberGraphFrame) == 0x0008D0, "Member 'UItemTransformKeyPickerTileButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemTransformKeyPickerTileButton_C, NormalBangWrapper) == 0x0008D8, "Member 'UItemTransformKeyPickerTileButton_C::NormalBangWrapper' has a wrong offset!");
static_assert(offsetof(UItemTransformKeyPickerTileButton_C, NullItemBorder) == 0x0008E0, "Member 'UItemTransformKeyPickerTileButton_C::NullItemBorder' has a wrong offset!");
static_assert(offsetof(UItemTransformKeyPickerTileButton_C, RootWidgetSwitcher) == 0x0008E8, "Member 'UItemTransformKeyPickerTileButton_C::RootWidgetSwitcher' has a wrong offset!");

}

