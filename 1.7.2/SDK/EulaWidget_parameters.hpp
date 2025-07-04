﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EulaWidget

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function EulaWidget.EulaWidget_C.ExecuteUbergraph_EulaWidget
// 0x0020 (0x0020 - 0x0000)
struct EulaWidget_C_ExecuteUbergraph_EulaWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button2;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EulaWidget_C_ExecuteUbergraph_EulaWidget) == 0x000008, "Wrong alignment on EulaWidget_C_ExecuteUbergraph_EulaWidget");
static_assert(sizeof(EulaWidget_C_ExecuteUbergraph_EulaWidget) == 0x000020, "Wrong size on EulaWidget_C_ExecuteUbergraph_EulaWidget");
static_assert(offsetof(EulaWidget_C_ExecuteUbergraph_EulaWidget, EntryPoint) == 0x000000, "Member 'EulaWidget_C_ExecuteUbergraph_EulaWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(EulaWidget_C_ExecuteUbergraph_EulaWidget, K2Node_ComponentBoundEvent_Button) == 0x000008, "Member 'EulaWidget_C_ExecuteUbergraph_EulaWidget::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(EulaWidget_C_ExecuteUbergraph_EulaWidget, CallFunc_GetUINavigationManager_ReturnValue) == 0x000010, "Member 'EulaWidget_C_ExecuteUbergraph_EulaWidget::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(EulaWidget_C_ExecuteUbergraph_EulaWidget, K2Node_ComponentBoundEvent_Button2) == 0x000018, "Member 'EulaWidget_C_ExecuteUbergraph_EulaWidget::K2Node_ComponentBoundEvent_Button2' has a wrong offset!");

// Function EulaWidget.EulaWidget_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct EulaWidget_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EulaWidget_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on EulaWidget_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(EulaWidget_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on EulaWidget_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(EulaWidget_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'EulaWidget_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function EulaWidget.EulaWidget_C.BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_44_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct EulaWidget_C_BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_44_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EulaWidget_C_BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_44_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on EulaWidget_C_BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_44_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(EulaWidget_C_BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_44_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on EulaWidget_C_BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_44_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(EulaWidget_C_BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_44_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'EulaWidget_C_BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_44_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function EulaWidget.EulaWidget_C.SetEulaText
// 0x0018 (0x0018 - 0x0000)
struct EulaWidget_C_SetEulaText final
{
public:
	class FText                                   EULA;                                              // 0x0000(0x0018)(Parm)
};
static_assert(alignof(EulaWidget_C_SetEulaText) == 0x000008, "Wrong alignment on EulaWidget_C_SetEulaText");
static_assert(sizeof(EulaWidget_C_SetEulaText) == 0x000018, "Wrong size on EulaWidget_C_SetEulaText");
static_assert(offsetof(EulaWidget_C_SetEulaText, EULA) == 0x000000, "Member 'EulaWidget_C_SetEulaText::EULA' has a wrong offset!");

// Function EulaWidget.EulaWidget_C.SetViewOnly
// 0x0006 (0x0006 - 0x0000)
struct EulaWidget_C_SetViewOnly final
{
public:
	bool                                          bViewOnly;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EulaWidget_C_SetViewOnly) == 0x000001, "Wrong alignment on EulaWidget_C_SetViewOnly");
static_assert(sizeof(EulaWidget_C_SetViewOnly) == 0x000006, "Wrong size on EulaWidget_C_SetViewOnly");
static_assert(offsetof(EulaWidget_C_SetViewOnly, bViewOnly) == 0x000000, "Member 'EulaWidget_C_SetViewOnly::bViewOnly' has a wrong offset!");
static_assert(offsetof(EulaWidget_C_SetViewOnly, Temp_bool_Variable) == 0x000001, "Member 'EulaWidget_C_SetViewOnly::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EulaWidget_C_SetViewOnly, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'EulaWidget_C_SetViewOnly::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(EulaWidget_C_SetViewOnly, Temp_byte_Variable) == 0x000003, "Member 'EulaWidget_C_SetViewOnly::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EulaWidget_C_SetViewOnly, Temp_byte_Variable2) == 0x000004, "Member 'EulaWidget_C_SetViewOnly::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(EulaWidget_C_SetViewOnly, K2Node_Select_Default) == 0x000005, "Member 'EulaWidget_C_SetViewOnly::K2Node_Select_Default' has a wrong offset!");

}

