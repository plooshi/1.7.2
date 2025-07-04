﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XpBoostDailyBonus

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function XpBoostDailyBonus.XpBoostDailyBonus_C.ExecuteUbergraph_XpBoostDailyBonus
// 0x0004 (0x0004 - 0x0000)
struct XpBoostDailyBonus_C_ExecuteUbergraph_XpBoostDailyBonus final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(XpBoostDailyBonus_C_ExecuteUbergraph_XpBoostDailyBonus) == 0x000004, "Wrong alignment on XpBoostDailyBonus_C_ExecuteUbergraph_XpBoostDailyBonus");
static_assert(sizeof(XpBoostDailyBonus_C_ExecuteUbergraph_XpBoostDailyBonus) == 0x000004, "Wrong size on XpBoostDailyBonus_C_ExecuteUbergraph_XpBoostDailyBonus");
static_assert(offsetof(XpBoostDailyBonus_C_ExecuteUbergraph_XpBoostDailyBonus, EntryPoint) == 0x000000, "Member 'XpBoostDailyBonus_C_ExecuteUbergraph_XpBoostDailyBonus::EntryPoint' has a wrong offset!");

// Function XpBoostDailyBonus.XpBoostDailyBonus_C.Update Daily Bonus
// 0x0088 (0x0088 - 0x0000)
struct XpBoostDailyBonus_C_Update_Daily_Bonus final
{
public:
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetRestXpBalance_ReturnValue;             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_13[0x1];                                       // 0x0013(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Get_Current_Boost_Boost_Amount;           // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0018(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0058(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0068(0x0018)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(XpBoostDailyBonus_C_Update_Daily_Bonus) == 0x000008, "Wrong alignment on XpBoostDailyBonus_C_Update_Daily_Bonus");
static_assert(sizeof(XpBoostDailyBonus_C_Update_Daily_Bonus) == 0x000088, "Wrong size on XpBoostDailyBonus_C_Update_Daily_Bonus");
static_assert(offsetof(XpBoostDailyBonus_C_Update_Daily_Bonus, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'XpBoostDailyBonus_C_Update_Daily_Bonus::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBoostDailyBonus_C_Update_Daily_Bonus, Temp_bool_Variable) == 0x000008, "Member 'XpBoostDailyBonus_C_Update_Daily_Bonus::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(XpBoostDailyBonus_C_Update_Daily_Bonus, CallFunc_GetRestXpBalance_ReturnValue) == 0x00000C, "Member 'XpBoostDailyBonus_C_Update_Daily_Bonus::CallFunc_GetRestXpBalance_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBoostDailyBonus_C_Update_Daily_Bonus, Temp_byte_Variable) == 0x000010, "Member 'XpBoostDailyBonus_C_Update_Daily_Bonus::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(XpBoostDailyBonus_C_Update_Daily_Bonus, CallFunc_Greater_IntInt_ReturnValue) == 0x000011, "Member 'XpBoostDailyBonus_C_Update_Daily_Bonus::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBoostDailyBonus_C_Update_Daily_Bonus, Temp_byte_Variable2) == 0x000012, "Member 'XpBoostDailyBonus_C_Update_Daily_Bonus::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(XpBoostDailyBonus_C_Update_Daily_Bonus, CallFunc_Get_Current_Boost_Boost_Amount) == 0x000014, "Member 'XpBoostDailyBonus_C_Update_Daily_Bonus::CallFunc_Get_Current_Boost_Boost_Amount' has a wrong offset!");
static_assert(offsetof(XpBoostDailyBonus_C_Update_Daily_Bonus, K2Node_MakeStruct_FormatArgumentData) == 0x000018, "Member 'XpBoostDailyBonus_C_Update_Daily_Bonus::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(XpBoostDailyBonus_C_Update_Daily_Bonus, K2Node_MakeArray_Array) == 0x000058, "Member 'XpBoostDailyBonus_C_Update_Daily_Bonus::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(XpBoostDailyBonus_C_Update_Daily_Bonus, CallFunc_Format_ReturnValue) == 0x000068, "Member 'XpBoostDailyBonus_C_Update_Daily_Bonus::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBoostDailyBonus_C_Update_Daily_Bonus, K2Node_Select_Default) == 0x000080, "Member 'XpBoostDailyBonus_C_Update_Daily_Bonus::K2Node_Select_Default' has a wrong offset!");

// Function XpBoostDailyBonus.XpBoostDailyBonus_C.Get Current Boost
// 0x0018 (0x0018 - 0x0000)
struct XpBoostDailyBonus_C_Get_Current_Boost final
{
public:
	int32                                         Boost_Amount;                                      // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRestXpBonusPercent_ReturnValue;        // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(XpBoostDailyBonus_C_Get_Current_Boost) == 0x000008, "Wrong alignment on XpBoostDailyBonus_C_Get_Current_Boost");
static_assert(sizeof(XpBoostDailyBonus_C_Get_Current_Boost) == 0x000018, "Wrong size on XpBoostDailyBonus_C_Get_Current_Boost");
static_assert(offsetof(XpBoostDailyBonus_C_Get_Current_Boost, Boost_Amount) == 0x000000, "Member 'XpBoostDailyBonus_C_Get_Current_Boost::Boost_Amount' has a wrong offset!");
static_assert(offsetof(XpBoostDailyBonus_C_Get_Current_Boost, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'XpBoostDailyBonus_C_Get_Current_Boost::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpBoostDailyBonus_C_Get_Current_Boost, CallFunc_GetRestXpBonusPercent_ReturnValue) == 0x000010, "Member 'XpBoostDailyBonus_C_Get_Current_Boost::CallFunc_GetRestXpBonusPercent_ReturnValue' has a wrong offset!");

}

