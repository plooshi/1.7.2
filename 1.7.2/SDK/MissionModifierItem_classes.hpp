﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionModifierItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MissionModifierItem.MissionModifierItem_C
// 0x0038 (0x0278 - 0x0240)
class UMissionModifierItem_C final : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0240(0x0008)(Transient, DuplicateTransient)
	class USizeBox*                               IconSizeBox;                                       // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ModifierIcon;                                      // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               WidgetSizeBox;                                     // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortGameplayModifierItemDefinition*    ModifierItemDef;                                   // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         IconHeightOverride;                                // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         IconWidthOverride;                                 // 0x026C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         WidgetHeightOverride;                              // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MissionModifierItem(int32 EntryPoint);
	void Construct();
	void Update();
	class UWidget* GetToolTipWidget();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionModifierItem_C">();
	}
	static class UMissionModifierItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionModifierItem_C>();
	}
};
static_assert(alignof(UMissionModifierItem_C) == 0x000008, "Wrong alignment on UMissionModifierItem_C");
static_assert(sizeof(UMissionModifierItem_C) == 0x000278, "Wrong size on UMissionModifierItem_C");
static_assert(offsetof(UMissionModifierItem_C, UberGraphFrame) == 0x000240, "Member 'UMissionModifierItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMissionModifierItem_C, IconSizeBox) == 0x000248, "Member 'UMissionModifierItem_C::IconSizeBox' has a wrong offset!");
static_assert(offsetof(UMissionModifierItem_C, ModifierIcon) == 0x000250, "Member 'UMissionModifierItem_C::ModifierIcon' has a wrong offset!");
static_assert(offsetof(UMissionModifierItem_C, WidgetSizeBox) == 0x000258, "Member 'UMissionModifierItem_C::WidgetSizeBox' has a wrong offset!");
static_assert(offsetof(UMissionModifierItem_C, ModifierItemDef) == 0x000260, "Member 'UMissionModifierItem_C::ModifierItemDef' has a wrong offset!");
static_assert(offsetof(UMissionModifierItem_C, IconHeightOverride) == 0x000268, "Member 'UMissionModifierItem_C::IconHeightOverride' has a wrong offset!");
static_assert(offsetof(UMissionModifierItem_C, IconWidthOverride) == 0x00026C, "Member 'UMissionModifierItem_C::IconWidthOverride' has a wrong offset!");
static_assert(offsetof(UMissionModifierItem_C, WidgetHeightOverride) == 0x000270, "Member 'UMissionModifierItem_C::WidgetHeightOverride' has a wrong offset!");

}

