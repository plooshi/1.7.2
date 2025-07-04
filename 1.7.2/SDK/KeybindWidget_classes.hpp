﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KeybindWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass KeybindWidget.KeybindWidget_C
// 0x0630 (0x08C0 - 0x0290)
class UKeybindWidget_C final : public UFortKeybindWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 _Image__Keybind;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 _Image__Shadow;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          BorderFrame;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               HoldOverlay;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               KeyTextOverlay;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_0;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxBackplate;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextKeybind;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               TextSizeMinBox;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EFortBrushSize                                Brush_Size;                                        // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2E9[0x7];                                      // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortMultiSizeBrush                    Frame_MultiBrush;                                  // 0x02F0(0x0360)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortMultiSizeFont                     MultiFont;                                         // 0x0650(0x0270)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_KeybindWidget(int32 EntryPoint);
	void UpdateFrameSize();
	void PreConstruct(bool IsDesignTime);
	void Update();
	void Construct();
	void Get_Brush_Size(EFortBrushSize* Brush_Size_0);
	void Set_Brush_Size(EFortBrushSize Brush_Size_0);
	void Get_Bound_Action(class FName* Action);
	void SetOpacity(float InOpacity);
	void ShowHoldBackPlate();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"KeybindWidget_C">();
	}
	static class UKeybindWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKeybindWidget_C>();
	}
};
static_assert(alignof(UKeybindWidget_C) == 0x000008, "Wrong alignment on UKeybindWidget_C");
static_assert(sizeof(UKeybindWidget_C) == 0x0008C0, "Wrong size on UKeybindWidget_C");
static_assert(offsetof(UKeybindWidget_C, UberGraphFrame) == 0x000290, "Member 'UKeybindWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UKeybindWidget_C, _Image__Keybind) == 0x000298, "Member 'UKeybindWidget_C::_Image__Keybind' has a wrong offset!");
static_assert(offsetof(UKeybindWidget_C, _Image__Shadow) == 0x0002A0, "Member 'UKeybindWidget_C::_Image__Shadow' has a wrong offset!");
static_assert(offsetof(UKeybindWidget_C, BorderFrame) == 0x0002A8, "Member 'UKeybindWidget_C::BorderFrame' has a wrong offset!");
static_assert(offsetof(UKeybindWidget_C, HoldOverlay) == 0x0002B0, "Member 'UKeybindWidget_C::HoldOverlay' has a wrong offset!");
static_assert(offsetof(UKeybindWidget_C, KeyTextOverlay) == 0x0002B8, "Member 'UKeybindWidget_C::KeyTextOverlay' has a wrong offset!");
static_assert(offsetof(UKeybindWidget_C, SizeBox_0) == 0x0002C0, "Member 'UKeybindWidget_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(UKeybindWidget_C, SizeBoxBackplate) == 0x0002C8, "Member 'UKeybindWidget_C::SizeBoxBackplate' has a wrong offset!");
static_assert(offsetof(UKeybindWidget_C, Switcher) == 0x0002D0, "Member 'UKeybindWidget_C::Switcher' has a wrong offset!");
static_assert(offsetof(UKeybindWidget_C, TextKeybind) == 0x0002D8, "Member 'UKeybindWidget_C::TextKeybind' has a wrong offset!");
static_assert(offsetof(UKeybindWidget_C, TextSizeMinBox) == 0x0002E0, "Member 'UKeybindWidget_C::TextSizeMinBox' has a wrong offset!");
static_assert(offsetof(UKeybindWidget_C, Brush_Size) == 0x0002E8, "Member 'UKeybindWidget_C::Brush_Size' has a wrong offset!");
static_assert(offsetof(UKeybindWidget_C, Frame_MultiBrush) == 0x0002F0, "Member 'UKeybindWidget_C::Frame_MultiBrush' has a wrong offset!");
static_assert(offsetof(UKeybindWidget_C, MultiFont) == 0x000650, "Member 'UKeybindWidget_C::MultiFont' has a wrong offset!");

}

