﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LegacyAlterationGroup_Widget

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function LegacyAlterationGroup_Widget.LegacyAlterationGroup_Widget_C.ExecuteUbergraph_LegacyAlterationGroup_Widget
// 0x0048 (0x0048 - 0x0000)
struct LegacyAlterationGroup_Widget_C_ExecuteUbergraph_LegacyAlterationGroup_Widget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortUIAlteration                      K2Node_Event_AlterationInfo;                       // 0x0008(0x0018)(NoDestructor)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0020(0x0010)(NoDestructor)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULegacyAlteration_Widget_C*             CallFunc_Create_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LegacyAlterationGroup_Widget_C_ExecuteUbergraph_LegacyAlterationGroup_Widget) == 0x000008, "Wrong alignment on LegacyAlterationGroup_Widget_C_ExecuteUbergraph_LegacyAlterationGroup_Widget");
static_assert(sizeof(LegacyAlterationGroup_Widget_C_ExecuteUbergraph_LegacyAlterationGroup_Widget) == 0x000048, "Wrong size on LegacyAlterationGroup_Widget_C_ExecuteUbergraph_LegacyAlterationGroup_Widget");
static_assert(offsetof(LegacyAlterationGroup_Widget_C_ExecuteUbergraph_LegacyAlterationGroup_Widget, EntryPoint) == 0x000000, "Member 'LegacyAlterationGroup_Widget_C_ExecuteUbergraph_LegacyAlterationGroup_Widget::EntryPoint' has a wrong offset!");
static_assert(offsetof(LegacyAlterationGroup_Widget_C_ExecuteUbergraph_LegacyAlterationGroup_Widget, K2Node_Event_AlterationInfo) == 0x000008, "Member 'LegacyAlterationGroup_Widget_C_ExecuteUbergraph_LegacyAlterationGroup_Widget::K2Node_Event_AlterationInfo' has a wrong offset!");
static_assert(offsetof(LegacyAlterationGroup_Widget_C_ExecuteUbergraph_LegacyAlterationGroup_Widget, K2Node_MakeStruct_Margin) == 0x000020, "Member 'LegacyAlterationGroup_Widget_C_ExecuteUbergraph_LegacyAlterationGroup_Widget::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(LegacyAlterationGroup_Widget_C_ExecuteUbergraph_LegacyAlterationGroup_Widget, CallFunc_GetOwningPlayer_ReturnValue) == 0x000030, "Member 'LegacyAlterationGroup_Widget_C_ExecuteUbergraph_LegacyAlterationGroup_Widget::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(LegacyAlterationGroup_Widget_C_ExecuteUbergraph_LegacyAlterationGroup_Widget, CallFunc_Create_ReturnValue) == 0x000038, "Member 'LegacyAlterationGroup_Widget_C_ExecuteUbergraph_LegacyAlterationGroup_Widget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(LegacyAlterationGroup_Widget_C_ExecuteUbergraph_LegacyAlterationGroup_Widget, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000040, "Member 'LegacyAlterationGroup_Widget_C_ExecuteUbergraph_LegacyAlterationGroup_Widget::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");

// Function LegacyAlterationGroup_Widget.LegacyAlterationGroup_Widget_C.OnGenerateAlteration
// 0x0018 (0x0018 - 0x0000)
struct LegacyAlterationGroup_Widget_C_OnGenerateAlteration final
{
public:
	struct FFortUIAlteration                      AlterationInfo;                                    // 0x0000(0x0018)(Parm, NoDestructor)
};
static_assert(alignof(LegacyAlterationGroup_Widget_C_OnGenerateAlteration) == 0x000008, "Wrong alignment on LegacyAlterationGroup_Widget_C_OnGenerateAlteration");
static_assert(sizeof(LegacyAlterationGroup_Widget_C_OnGenerateAlteration) == 0x000018, "Wrong size on LegacyAlterationGroup_Widget_C_OnGenerateAlteration");
static_assert(offsetof(LegacyAlterationGroup_Widget_C_OnGenerateAlteration, AlterationInfo) == 0x000000, "Member 'LegacyAlterationGroup_Widget_C_OnGenerateAlteration::AlterationInfo' has a wrong offset!");

}

