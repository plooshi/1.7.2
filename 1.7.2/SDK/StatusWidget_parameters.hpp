﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StatusWidget

#include "Basic.hpp"


namespace SDK::Params
{

// Function StatusWidget.StatusWidget_C.ExecuteUbergraph_StatusWidget
// 0x0004 (0x0004 - 0x0000)
struct StatusWidget_C_ExecuteUbergraph_StatusWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StatusWidget_C_ExecuteUbergraph_StatusWidget) == 0x000004, "Wrong alignment on StatusWidget_C_ExecuteUbergraph_StatusWidget");
static_assert(sizeof(StatusWidget_C_ExecuteUbergraph_StatusWidget) == 0x000004, "Wrong size on StatusWidget_C_ExecuteUbergraph_StatusWidget");
static_assert(offsetof(StatusWidget_C_ExecuteUbergraph_StatusWidget, EntryPoint) == 0x000000, "Member 'StatusWidget_C_ExecuteUbergraph_StatusWidget::EntryPoint' has a wrong offset!");

// Function StatusWidget.StatusWidget_C.SetTitleText
// 0x0018 (0x0018 - 0x0000)
struct StatusWidget_C_SetTitleText final
{
public:
	class FText                                   TitleText_0;                                       // 0x0000(0x0018)(Parm)
};
static_assert(alignof(StatusWidget_C_SetTitleText) == 0x000008, "Wrong alignment on StatusWidget_C_SetTitleText");
static_assert(sizeof(StatusWidget_C_SetTitleText) == 0x000018, "Wrong size on StatusWidget_C_SetTitleText");
static_assert(offsetof(StatusWidget_C_SetTitleText, TitleText_0) == 0x000000, "Member 'StatusWidget_C_SetTitleText::TitleText_0' has a wrong offset!");

// Function StatusWidget.StatusWidget_C.SetStatusText
// 0x0018 (0x0018 - 0x0000)
struct StatusWidget_C_SetStatusText final
{
public:
	class FText                                   Status;                                            // 0x0000(0x0018)(Parm)
};
static_assert(alignof(StatusWidget_C_SetStatusText) == 0x000008, "Wrong alignment on StatusWidget_C_SetStatusText");
static_assert(sizeof(StatusWidget_C_SetStatusText) == 0x000018, "Wrong size on StatusWidget_C_SetStatusText");
static_assert(offsetof(StatusWidget_C_SetStatusText, Status) == 0x000000, "Member 'StatusWidget_C_SetStatusText::Status' has a wrong offset!");

// Function StatusWidget.StatusWidget_C.UpdateLoginStatusText
// 0x0038 (0x0038 - 0x0000)
struct StatusWidget_C_UpdateLoginStatusText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLoginStatusText_ReturnValue;           // 0x0020(0x0018)()
};
static_assert(alignof(StatusWidget_C_UpdateLoginStatusText) == 0x000008, "Wrong alignment on StatusWidget_C_UpdateLoginStatusText");
static_assert(sizeof(StatusWidget_C_UpdateLoginStatusText) == 0x000038, "Wrong size on StatusWidget_C_UpdateLoginStatusText");
static_assert(offsetof(StatusWidget_C_UpdateLoginStatusText, ReturnValue) == 0x000000, "Member 'StatusWidget_C_UpdateLoginStatusText::ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusWidget_C_UpdateLoginStatusText, CallFunc_GetContext_ReturnValue) == 0x000018, "Member 'StatusWidget_C_UpdateLoginStatusText::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusWidget_C_UpdateLoginStatusText, CallFunc_GetLoginStatusText_ReturnValue) == 0x000020, "Member 'StatusWidget_C_UpdateLoginStatusText::CallFunc_GetLoginStatusText_ReturnValue' has a wrong offset!");

}

