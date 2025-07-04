﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaGameOverScreen

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function AthenaGameOverScreen.AthenaGameOverScreen_C.ExecuteUbergraph_AthenaGameOverScreen
// 0x00D0 (0x00D0 - 0x0000)
struct AthenaGameOverScreen_C_ExecuteUbergraph_AthenaGameOverScreen final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate2;             // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate3;             // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	struct FFortPlayerDeathReport                 K2Node_CustomEvent_DeathReport;                    // 0x0040(0x0050)(ConstParm)
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue2;                  // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FFortPlayerDeathReport& DeathReport)> K2Node_CreateDelegate_OutputDelegate4;             // 0x0098(0x0010)(ZeroConstructor, NoDestructor)
	class UAthenaHUDContext*                      CallFunc_GetContext_ReturnValue3;                  // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue2;             // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaDeathWidget_C*                   CallFunc_Create_ReturnValue;                       // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaWinWidget_C*                     CallFunc_Create_ReturnValue2;                      // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaGameOverScreen_C_ExecuteUbergraph_AthenaGameOverScreen) == 0x000008, "Wrong alignment on AthenaGameOverScreen_C_ExecuteUbergraph_AthenaGameOverScreen");
static_assert(sizeof(AthenaGameOverScreen_C_ExecuteUbergraph_AthenaGameOverScreen) == 0x0000D0, "Wrong size on AthenaGameOverScreen_C_ExecuteUbergraph_AthenaGameOverScreen");
static_assert(offsetof(AthenaGameOverScreen_C_ExecuteUbergraph_AthenaGameOverScreen, EntryPoint) == 0x000000, "Member 'AthenaGameOverScreen_C_ExecuteUbergraph_AthenaGameOverScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaGameOverScreen_C_ExecuteUbergraph_AthenaGameOverScreen, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'AthenaGameOverScreen_C_ExecuteUbergraph_AthenaGameOverScreen::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaGameOverScreen_C_ExecuteUbergraph_AthenaGameOverScreen, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'AthenaGameOverScreen_C_ExecuteUbergraph_AthenaGameOverScreen::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AthenaGameOverScreen_C_ExecuteUbergraph_AthenaGameOverScreen, K2Node_CreateDelegate_OutputDelegate2) == 0x000020, "Member 'AthenaGameOverScreen_C_ExecuteUbergraph_AthenaGameOverScreen::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(AthenaGameOverScreen_C_ExecuteUbergraph_AthenaGameOverScreen, K2Node_CreateDelegate_OutputDelegate3) == 0x000030, "Member 'AthenaGameOverScreen_C_ExecuteUbergraph_AthenaGameOverScreen::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(AthenaGameOverScreen_C_ExecuteUbergraph_AthenaGameOverScreen, K2Node_CustomEvent_DeathReport) == 0x000040, "Member 'AthenaGameOverScreen_C_ExecuteUbergraph_AthenaGameOverScreen::K2Node_CustomEvent_DeathReport' has a wrong offset!");
static_assert(offsetof(AthenaGameOverScreen_C_ExecuteUbergraph_AthenaGameOverScreen, CallFunc_GetContext_ReturnValue2) == 0x000090, "Member 'AthenaGameOverScreen_C_ExecuteUbergraph_AthenaGameOverScreen::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaGameOverScreen_C_ExecuteUbergraph_AthenaGameOverScreen, K2Node_CreateDelegate_OutputDelegate4) == 0x000098, "Member 'AthenaGameOverScreen_C_ExecuteUbergraph_AthenaGameOverScreen::K2Node_CreateDelegate_OutputDelegate4' has a wrong offset!");
static_assert(offsetof(AthenaGameOverScreen_C_ExecuteUbergraph_AthenaGameOverScreen, CallFunc_GetContext_ReturnValue3) == 0x0000A8, "Member 'AthenaGameOverScreen_C_ExecuteUbergraph_AthenaGameOverScreen::CallFunc_GetContext_ReturnValue3' has a wrong offset!");
static_assert(offsetof(AthenaGameOverScreen_C_ExecuteUbergraph_AthenaGameOverScreen, CallFunc_GetOwningPlayer_ReturnValue) == 0x0000B0, "Member 'AthenaGameOverScreen_C_ExecuteUbergraph_AthenaGameOverScreen::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaGameOverScreen_C_ExecuteUbergraph_AthenaGameOverScreen, CallFunc_GetOwningPlayer_ReturnValue2) == 0x0000B8, "Member 'AthenaGameOverScreen_C_ExecuteUbergraph_AthenaGameOverScreen::CallFunc_GetOwningPlayer_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaGameOverScreen_C_ExecuteUbergraph_AthenaGameOverScreen, CallFunc_Create_ReturnValue) == 0x0000C0, "Member 'AthenaGameOverScreen_C_ExecuteUbergraph_AthenaGameOverScreen::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaGameOverScreen_C_ExecuteUbergraph_AthenaGameOverScreen, CallFunc_Create_ReturnValue2) == 0x0000C8, "Member 'AthenaGameOverScreen_C_ExecuteUbergraph_AthenaGameOverScreen::CallFunc_Create_ReturnValue2' has a wrong offset!");

// Function AthenaGameOverScreen.AthenaGameOverScreen_C.On Player Died
// 0x0050 (0x0050 - 0x0000)
struct AthenaGameOverScreen_C_On_Player_Died final
{
public:
	struct FFortPlayerDeathReport                 DeathReport;                                       // 0x0000(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(AthenaGameOverScreen_C_On_Player_Died) == 0x000008, "Wrong alignment on AthenaGameOverScreen_C_On_Player_Died");
static_assert(sizeof(AthenaGameOverScreen_C_On_Player_Died) == 0x000050, "Wrong size on AthenaGameOverScreen_C_On_Player_Died");
static_assert(offsetof(AthenaGameOverScreen_C_On_Player_Died, DeathReport) == 0x000000, "Member 'AthenaGameOverScreen_C_On_Player_Died::DeathReport' has a wrong offset!");

}

