﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaQuickBarSlot

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.GetKeyBindingAction_Gamepad
// 0x0070 (0x0070 - 0x0000)
struct AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad final
{
public:
	class FName                                   KeyBindingAction;                                  // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OnlyShowBuildingPieceNextPrevKeybinds;             // 0x0008(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         FocusedSlotIndex;                                  // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPreviousSlot;                                    // 0x0010(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsFocusedSlot;                                     // 0x0011(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue2;           // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue2;                  // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue2;                   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue3;                   // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B[0x5];                                       // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action2; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action3; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action4; // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInventoryContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortQuickBars                                CallFunc_GetQuickbarFocus_OutQuickBar;             // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetQuickbarFocus_OutSlot;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetQuickbarFocus_OutSecondarySlot;        // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot;  // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue3;           // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue4;           // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue5;           // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue4;                   // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue2;                  // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ShouldOnlyShowNextPrevBuildingSlotKeybinds_ReturnValue; // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger2_CmpSuccess;                  // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger3_CmpSuccess;                  // 0x006B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad) == 0x000008, "Wrong alignment on AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad");
static_assert(sizeof(AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad) == 0x000070, "Wrong size on AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad");
static_assert(offsetof(AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad, KeyBindingAction) == 0x000000, "Member 'AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad::KeyBindingAction' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad, OnlyShowBuildingPieceNextPrevKeybinds) == 0x000008, "Member 'AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad::OnlyShowBuildingPieceNextPrevKeybinds' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad, FocusedSlotIndex) == 0x00000C, "Member 'AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad::FocusedSlotIndex' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad, IsPreviousSlot) == 0x000010, "Member 'AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad::IsPreviousSlot' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad, IsFocusedSlot) == 0x000011, "Member 'AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad::IsFocusedSlot' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000012, "Member 'AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad, CallFunc_Less_IntInt_ReturnValue) == 0x000013, "Member 'AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad, CallFunc_BooleanAND_ReturnValue) == 0x000014, "Member 'AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad, CallFunc_BooleanOR_ReturnValue) == 0x000015, "Member 'AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad, CallFunc_EqualEqual_IntInt_ReturnValue2) == 0x000016, "Member 'AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad::CallFunc_EqualEqual_IntInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad, CallFunc_BooleanAND_ReturnValue2) == 0x000017, "Member 'AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad::CallFunc_BooleanAND_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad, CallFunc_BooleanOR_ReturnValue2) == 0x000018, "Member 'AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad::CallFunc_BooleanOR_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad, K2Node_SwitchInteger_CmpSuccess) == 0x000019, "Member 'AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad, CallFunc_BooleanOR_ReturnValue3) == 0x00001A, "Member 'AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad::CallFunc_BooleanOR_ReturnValue3' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad, CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action) == 0x000020, "Member 'AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad::CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad, CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action2) == 0x000028, "Member 'AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad::CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action2' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad, CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action3) == 0x000030, "Member 'AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad::CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action3' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad, CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action4) == 0x000038, "Member 'AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad::CallFunc_GetKeyBindingAction_Keyboard_Key_Binding_Action4' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad, CallFunc_GetContext_ReturnValue) == 0x000040, "Member 'AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad, CallFunc_GetQuickbarFocus_OutQuickBar) == 0x000048, "Member 'AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad::CallFunc_GetQuickbarFocus_OutQuickBar' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad, CallFunc_GetQuickbarFocus_OutSlot) == 0x00004C, "Member 'AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad::CallFunc_GetQuickbarFocus_OutSlot' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad, CallFunc_GetQuickbarFocus_OutSecondarySlot) == 0x000050, "Member 'AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad::CallFunc_GetQuickbarFocus_OutSecondarySlot' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad, CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot) == 0x000054, "Member 'AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad::CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad, CallFunc_EqualEqual_IntInt_ReturnValue3) == 0x000058, "Member 'AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad::CallFunc_EqualEqual_IntInt_ReturnValue3' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad, CallFunc_EqualEqual_IntInt_ReturnValue4) == 0x000059, "Member 'AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad::CallFunc_EqualEqual_IntInt_ReturnValue4' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad, CallFunc_EqualEqual_IntInt_ReturnValue5) == 0x00005A, "Member 'AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad::CallFunc_EqualEqual_IntInt_ReturnValue5' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad, CallFunc_BooleanOR_ReturnValue4) == 0x00005B, "Member 'AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad::CallFunc_BooleanOR_ReturnValue4' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00005C, "Member 'AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad, CallFunc_GetContext_ReturnValue2) == 0x000060, "Member 'AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad, CallFunc_ShouldOnlyShowNextPrevBuildingSlotKeybinds_ReturnValue) == 0x000068, "Member 'AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad::CallFunc_ShouldOnlyShowNextPrevBuildingSlotKeybinds_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad, K2Node_SwitchInteger2_CmpSuccess) == 0x000069, "Member 'AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad::K2Node_SwitchInteger2_CmpSuccess' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad, K2Node_SwitchEnum_CmpSuccess) == 0x00006A, "Member 'AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad, K2Node_SwitchInteger3_CmpSuccess) == 0x00006B, "Member 'AthenaQuickBarSlot_C_GetKeyBindingAction_Gamepad::K2Node_SwitchInteger3_CmpSuccess' has a wrong offset!");

}

