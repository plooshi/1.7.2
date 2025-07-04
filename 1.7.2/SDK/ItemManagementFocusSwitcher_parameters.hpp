﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemManagementFocusSwitcher

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function ItemManagementFocusSwitcher.ItemManagementFocusSwitcher_C.OnFocusReceived
// 0x01B0 (0x01B0 - 0x0000)
struct ItemManagementFocusSwitcher_C_OnFocusReceived final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0034)(Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0034(0x0008)(Parm, NoDestructor)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x00F8(0x00B8)()
};
static_assert(alignof(ItemManagementFocusSwitcher_C_OnFocusReceived) == 0x000008, "Wrong alignment on ItemManagementFocusSwitcher_C_OnFocusReceived");
static_assert(sizeof(ItemManagementFocusSwitcher_C_OnFocusReceived) == 0x0001B0, "Wrong size on ItemManagementFocusSwitcher_C_OnFocusReceived");
static_assert(offsetof(ItemManagementFocusSwitcher_C_OnFocusReceived, MyGeometry) == 0x000000, "Member 'ItemManagementFocusSwitcher_C_OnFocusReceived::MyGeometry' has a wrong offset!");
static_assert(offsetof(ItemManagementFocusSwitcher_C_OnFocusReceived, InFocusEvent) == 0x000034, "Member 'ItemManagementFocusSwitcher_C_OnFocusReceived::InFocusEvent' has a wrong offset!");
static_assert(offsetof(ItemManagementFocusSwitcher_C_OnFocusReceived, ReturnValue) == 0x000040, "Member 'ItemManagementFocusSwitcher_C_OnFocusReceived::ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemManagementFocusSwitcher_C_OnFocusReceived, CallFunc_Handled_ReturnValue) == 0x0000F8, "Member 'ItemManagementFocusSwitcher_C_OnFocusReceived::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function ItemManagementFocusSwitcher.ItemManagementFocusSwitcher_C.DeferFocusSwitch
// 0x0020 (0x0020 - 0x0000)
struct ItemManagementFocusSwitcher_C_DeferFocusSwitch final
{
public:
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0000(0x0008)(NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetSelectedItem_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemManagementFocusSwitcher_C_DeferFocusSwitch) == 0x000008, "Wrong alignment on ItemManagementFocusSwitcher_C_DeferFocusSwitch");
static_assert(sizeof(ItemManagementFocusSwitcher_C_DeferFocusSwitch) == 0x000020, "Wrong size on ItemManagementFocusSwitcher_C_DeferFocusSwitch");
static_assert(offsetof(ItemManagementFocusSwitcher_C_DeferFocusSwitch, CallFunc_K2_SetTimer_ReturnValue) == 0x000000, "Member 'ItemManagementFocusSwitcher_C_DeferFocusSwitch::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemManagementFocusSwitcher_C_DeferFocusSwitch, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'ItemManagementFocusSwitcher_C_DeferFocusSwitch::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemManagementFocusSwitcher_C_DeferFocusSwitch, CallFunc_GetSelectedItem_ReturnValue) == 0x000010, "Member 'ItemManagementFocusSwitcher_C_DeferFocusSwitch::CallFunc_GetSelectedItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemManagementFocusSwitcher_C_DeferFocusSwitch, CallFunc_IsValid_ReturnValue2) == 0x000018, "Member 'ItemManagementFocusSwitcher_C_DeferFocusSwitch::CallFunc_IsValid_ReturnValue2' has a wrong offset!");

// Function ItemManagementFocusSwitcher.ItemManagementFocusSwitcher_C.ExecuteFocusSwitch
// 0x0050 (0x0050 - 0x0000)
struct ItemManagementFocusSwitcher_C_ExecuteFocusSwitch final
{
public:
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumItems_ReturnValue;                  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetSelectedItem_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumItems_ReturnValue2;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetSelectedItem_ReturnValue2;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue2;              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNumItems_ReturnValue3;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue3;              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetItemAt_ReturnValue;                    // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetItemAt_ReturnValue2;                   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetSelectedIndex_ReturnValue;             // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetSelectedIndex_ReturnValue2;            // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemManagementFocusSwitcher_C_ExecuteFocusSwitch) == 0x000008, "Wrong alignment on ItemManagementFocusSwitcher_C_ExecuteFocusSwitch");
static_assert(sizeof(ItemManagementFocusSwitcher_C_ExecuteFocusSwitch) == 0x000050, "Wrong size on ItemManagementFocusSwitcher_C_ExecuteFocusSwitch");
static_assert(offsetof(ItemManagementFocusSwitcher_C_ExecuteFocusSwitch, CallFunc_GetUINavigationManager_ReturnValue) == 0x000000, "Member 'ItemManagementFocusSwitcher_C_ExecuteFocusSwitch::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemManagementFocusSwitcher_C_ExecuteFocusSwitch, CallFunc_GetNumItems_ReturnValue) == 0x000008, "Member 'ItemManagementFocusSwitcher_C_ExecuteFocusSwitch::CallFunc_GetNumItems_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemManagementFocusSwitcher_C_ExecuteFocusSwitch, CallFunc_Greater_IntInt_ReturnValue) == 0x00000C, "Member 'ItemManagementFocusSwitcher_C_ExecuteFocusSwitch::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemManagementFocusSwitcher_C_ExecuteFocusSwitch, CallFunc_GetSelectedItem_ReturnValue) == 0x000010, "Member 'ItemManagementFocusSwitcher_C_ExecuteFocusSwitch::CallFunc_GetSelectedItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemManagementFocusSwitcher_C_ExecuteFocusSwitch, CallFunc_GetNumItems_ReturnValue2) == 0x000018, "Member 'ItemManagementFocusSwitcher_C_ExecuteFocusSwitch::CallFunc_GetNumItems_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ItemManagementFocusSwitcher_C_ExecuteFocusSwitch, CallFunc_GetSelectedItem_ReturnValue2) == 0x000020, "Member 'ItemManagementFocusSwitcher_C_ExecuteFocusSwitch::CallFunc_GetSelectedItem_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ItemManagementFocusSwitcher_C_ExecuteFocusSwitch, CallFunc_Greater_IntInt_ReturnValue2) == 0x000028, "Member 'ItemManagementFocusSwitcher_C_ExecuteFocusSwitch::CallFunc_Greater_IntInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ItemManagementFocusSwitcher_C_ExecuteFocusSwitch, CallFunc_GetNumItems_ReturnValue3) == 0x00002C, "Member 'ItemManagementFocusSwitcher_C_ExecuteFocusSwitch::CallFunc_GetNumItems_ReturnValue3' has a wrong offset!");
static_assert(offsetof(ItemManagementFocusSwitcher_C_ExecuteFocusSwitch, CallFunc_Greater_IntInt_ReturnValue3) == 0x000030, "Member 'ItemManagementFocusSwitcher_C_ExecuteFocusSwitch::CallFunc_Greater_IntInt_ReturnValue3' has a wrong offset!");
static_assert(offsetof(ItemManagementFocusSwitcher_C_ExecuteFocusSwitch, CallFunc_GetItemAt_ReturnValue) == 0x000038, "Member 'ItemManagementFocusSwitcher_C_ExecuteFocusSwitch::CallFunc_GetItemAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemManagementFocusSwitcher_C_ExecuteFocusSwitch, CallFunc_GetItemAt_ReturnValue2) == 0x000040, "Member 'ItemManagementFocusSwitcher_C_ExecuteFocusSwitch::CallFunc_GetItemAt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ItemManagementFocusSwitcher_C_ExecuteFocusSwitch, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000048, "Member 'ItemManagementFocusSwitcher_C_ExecuteFocusSwitch::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemManagementFocusSwitcher_C_ExecuteFocusSwitch, CallFunc_SetSelectedIndex_ReturnValue) == 0x000049, "Member 'ItemManagementFocusSwitcher_C_ExecuteFocusSwitch::CallFunc_SetSelectedIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemManagementFocusSwitcher_C_ExecuteFocusSwitch, CallFunc_SetSelectedIndex_ReturnValue2) == 0x00004A, "Member 'ItemManagementFocusSwitcher_C_ExecuteFocusSwitch::CallFunc_SetSelectedIndex_ReturnValue2' has a wrong offset!");

}

