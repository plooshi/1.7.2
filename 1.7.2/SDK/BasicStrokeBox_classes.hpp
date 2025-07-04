﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BasicStrokeBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BasicStrokeBox.BasicStrokeBox_C
// 0x0040 (0x0280 - 0x0240)
class UBasicStrokeBox_C final : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0240(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 BaseMaterial;                                      // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             Content;                                           // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           Fill;                                              // 0x0258(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Stroke;                                            // 0x0268(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Style;                                             // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BasicStrokeBox(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Redraw();
	void Customize(int32 Shape_Style, const struct FLinearColor& Fill_Color, const struct FLinearColor& Stroke_Color);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BasicStrokeBox_C">();
	}
	static class UBasicStrokeBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBasicStrokeBox_C>();
	}
};
static_assert(alignof(UBasicStrokeBox_C) == 0x000008, "Wrong alignment on UBasicStrokeBox_C");
static_assert(sizeof(UBasicStrokeBox_C) == 0x000280, "Wrong size on UBasicStrokeBox_C");
static_assert(offsetof(UBasicStrokeBox_C, UberGraphFrame) == 0x000240, "Member 'UBasicStrokeBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBasicStrokeBox_C, BaseMaterial) == 0x000248, "Member 'UBasicStrokeBox_C::BaseMaterial' has a wrong offset!");
static_assert(offsetof(UBasicStrokeBox_C, Content) == 0x000250, "Member 'UBasicStrokeBox_C::Content' has a wrong offset!");
static_assert(offsetof(UBasicStrokeBox_C, Fill) == 0x000258, "Member 'UBasicStrokeBox_C::Fill' has a wrong offset!");
static_assert(offsetof(UBasicStrokeBox_C, Stroke) == 0x000268, "Member 'UBasicStrokeBox_C::Stroke' has a wrong offset!");
static_assert(offsetof(UBasicStrokeBox_C, Style) == 0x000278, "Member 'UBasicStrokeBox_C::Style' has a wrong offset!");

}

