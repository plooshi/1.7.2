﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CollectionBookPageListWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CollectionBookPageListWidget.CollectionBookPageListWidget_C
// 0x0098 (0x0968 - 0x08D0)
class UCollectionBookPageListWidget_C final : public UFortCollectionBookPageListWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08D0(0x0008)(Transient, DuplicateTransient)
	class UCommonBorder*                          AvailableSlotsBorder;                              // 0x08D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  CommonWidgetSwitcher_0;                            // 0x08E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  ExpansionStateSwitcher;                            // 0x08E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x08F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x08F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0900(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  PageCategorySwitcher;                              // 0x0908(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                PageSpacer;                                        // 0x0910(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 CategoryTextStyle;                                 // 0x0918(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 PageTextStyle;                                     // 0x0920(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CategoryButtonStyle;                               // 0x0928(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 PageButtonStyle;                                   // 0x0930(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   AvailableSlotBorderColor1ParamName;                // 0x0938(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   AvailableSlotBorderColor2ParamName;                // 0x0940(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           AvailableSlotBorderSelectedColor;                  // 0x0948(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           AvailableSlotBorderDeselectedColor;                // 0x0958(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CollectionBookPageListWidget(int32 EntryPoint);
	void OnSelectionChanged(class UCommonButton* ThisButton, bool bSelected);
	void OnPageDetailsUpdated(int32 NumAvailableSlots, EFortCollectionBookState State);
	void PreConstruct(bool IsDesignTime);
	void OnExpansionChanged(bool bExpanded);
	void SetupAsPage(class UFortCollectionBookPage* Page);
	void SetupAsCategory(class UFortCollectionBookCategory* Category);
	void UpdateAvailableSlotsBorderColors();
	void Update_Available_Slots_Widget(int32 NumAvailableSlots);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CollectionBookPageListWidget_C">();
	}
	static class UCollectionBookPageListWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCollectionBookPageListWidget_C>();
	}
};
static_assert(alignof(UCollectionBookPageListWidget_C) == 0x000008, "Wrong alignment on UCollectionBookPageListWidget_C");
static_assert(sizeof(UCollectionBookPageListWidget_C) == 0x000968, "Wrong size on UCollectionBookPageListWidget_C");
static_assert(offsetof(UCollectionBookPageListWidget_C, UberGraphFrame) == 0x0008D0, "Member 'UCollectionBookPageListWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCollectionBookPageListWidget_C, AvailableSlotsBorder) == 0x0008D8, "Member 'UCollectionBookPageListWidget_C::AvailableSlotsBorder' has a wrong offset!");
static_assert(offsetof(UCollectionBookPageListWidget_C, CommonWidgetSwitcher_0) == 0x0008E0, "Member 'UCollectionBookPageListWidget_C::CommonWidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UCollectionBookPageListWidget_C, ExpansionStateSwitcher) == 0x0008E8, "Member 'UCollectionBookPageListWidget_C::ExpansionStateSwitcher' has a wrong offset!");
static_assert(offsetof(UCollectionBookPageListWidget_C, Image_0) == 0x0008F0, "Member 'UCollectionBookPageListWidget_C::Image_0' has a wrong offset!");
static_assert(offsetof(UCollectionBookPageListWidget_C, Image_1) == 0x0008F8, "Member 'UCollectionBookPageListWidget_C::Image_1' has a wrong offset!");
static_assert(offsetof(UCollectionBookPageListWidget_C, Image_2) == 0x000900, "Member 'UCollectionBookPageListWidget_C::Image_2' has a wrong offset!");
static_assert(offsetof(UCollectionBookPageListWidget_C, PageCategorySwitcher) == 0x000908, "Member 'UCollectionBookPageListWidget_C::PageCategorySwitcher' has a wrong offset!");
static_assert(offsetof(UCollectionBookPageListWidget_C, PageSpacer) == 0x000910, "Member 'UCollectionBookPageListWidget_C::PageSpacer' has a wrong offset!");
static_assert(offsetof(UCollectionBookPageListWidget_C, CategoryTextStyle) == 0x000918, "Member 'UCollectionBookPageListWidget_C::CategoryTextStyle' has a wrong offset!");
static_assert(offsetof(UCollectionBookPageListWidget_C, PageTextStyle) == 0x000920, "Member 'UCollectionBookPageListWidget_C::PageTextStyle' has a wrong offset!");
static_assert(offsetof(UCollectionBookPageListWidget_C, CategoryButtonStyle) == 0x000928, "Member 'UCollectionBookPageListWidget_C::CategoryButtonStyle' has a wrong offset!");
static_assert(offsetof(UCollectionBookPageListWidget_C, PageButtonStyle) == 0x000930, "Member 'UCollectionBookPageListWidget_C::PageButtonStyle' has a wrong offset!");
static_assert(offsetof(UCollectionBookPageListWidget_C, AvailableSlotBorderColor1ParamName) == 0x000938, "Member 'UCollectionBookPageListWidget_C::AvailableSlotBorderColor1ParamName' has a wrong offset!");
static_assert(offsetof(UCollectionBookPageListWidget_C, AvailableSlotBorderColor2ParamName) == 0x000940, "Member 'UCollectionBookPageListWidget_C::AvailableSlotBorderColor2ParamName' has a wrong offset!");
static_assert(offsetof(UCollectionBookPageListWidget_C, AvailableSlotBorderSelectedColor) == 0x000948, "Member 'UCollectionBookPageListWidget_C::AvailableSlotBorderSelectedColor' has a wrong offset!");
static_assert(offsetof(UCollectionBookPageListWidget_C, AvailableSlotBorderDeselectedColor) == 0x000958, "Member 'UCollectionBookPageListWidget_C::AvailableSlotBorderDeselectedColor' has a wrong offset!");

}

