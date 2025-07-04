﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VaultCharacterLightingBP

#include "Basic.hpp"


namespace SDK::Params
{

// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.ExecuteUbergraph_VaultCharacterLightingBP
// 0x0018 (0x0018 - 0x0000)
struct VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_NewParam;                       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetShadowQuality_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP) == 0x000008, "Wrong alignment on VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP");
static_assert(sizeof(VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP) == 0x000018, "Wrong size on VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP");
static_assert(offsetof(VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP, EntryPoint) == 0x000000, "Member 'VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP, K2Node_CustomEvent_NewParam) == 0x000004, "Member 'VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP::K2Node_CustomEvent_NewParam' has a wrong offset!");
static_assert(offsetof(VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP, CallFunc_GetGameUserSettings_ReturnValue) == 0x000008, "Member 'VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP, CallFunc_GetShadowQuality_ReturnValue) == 0x000010, "Member 'VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP::CallFunc_GetShadowQuality_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP, K2Node_SwitchInteger_CmpSuccess) == 0x000014, "Member 'VaultCharacterLightingBP_C_ExecuteUbergraph_VaultCharacterLightingBP::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.LightControl
// 0x0001 (0x0001 - 0x0000)
struct VaultCharacterLightingBP_C_LightControl final
{
public:
	bool                                          NewParam;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(VaultCharacterLightingBP_C_LightControl) == 0x000001, "Wrong alignment on VaultCharacterLightingBP_C_LightControl");
static_assert(sizeof(VaultCharacterLightingBP_C_LightControl) == 0x000001, "Wrong size on VaultCharacterLightingBP_C_LightControl");
static_assert(offsetof(VaultCharacterLightingBP_C_LightControl, NewParam) == 0x000000, "Member 'VaultCharacterLightingBP_C_LightControl::NewParam' has a wrong offset!");

}

