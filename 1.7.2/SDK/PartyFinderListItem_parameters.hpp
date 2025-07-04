﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PartyFinderListItem

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function PartyFinderListItem.PartyFinderListItem_C.ExecuteUbergraph_PartyFinderListItem
// 0x0008 (0x0008 - 0x0000)
struct PartyFinderListItem_C_ExecuteUbergraph_PartyFinderListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bExpanded;                            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsItemExpanded_ReturnValue;               // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PartyFinderListItem_C_ExecuteUbergraph_PartyFinderListItem) == 0x000004, "Wrong alignment on PartyFinderListItem_C_ExecuteUbergraph_PartyFinderListItem");
static_assert(sizeof(PartyFinderListItem_C_ExecuteUbergraph_PartyFinderListItem) == 0x000008, "Wrong size on PartyFinderListItem_C_ExecuteUbergraph_PartyFinderListItem");
static_assert(offsetof(PartyFinderListItem_C_ExecuteUbergraph_PartyFinderListItem, EntryPoint) == 0x000000, "Member 'PartyFinderListItem_C_ExecuteUbergraph_PartyFinderListItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(PartyFinderListItem_C_ExecuteUbergraph_PartyFinderListItem, K2Node_Event_bExpanded) == 0x000004, "Member 'PartyFinderListItem_C_ExecuteUbergraph_PartyFinderListItem::K2Node_Event_bExpanded' has a wrong offset!");
static_assert(offsetof(PartyFinderListItem_C_ExecuteUbergraph_PartyFinderListItem, CallFunc_IsItemExpanded_ReturnValue) == 0x000005, "Member 'PartyFinderListItem_C_ExecuteUbergraph_PartyFinderListItem::CallFunc_IsItemExpanded_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyFinderListItem_C_ExecuteUbergraph_PartyFinderListItem, CallFunc_IsValid_ReturnValue) == 0x000006, "Member 'PartyFinderListItem_C_ExecuteUbergraph_PartyFinderListItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function PartyFinderListItem.PartyFinderListItem_C.ExpansionChanged
// 0x0001 (0x0001 - 0x0000)
struct PartyFinderListItem_C_ExpansionChanged final
{
public:
	bool                                          bExpanded;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PartyFinderListItem_C_ExpansionChanged) == 0x000001, "Wrong alignment on PartyFinderListItem_C_ExpansionChanged");
static_assert(sizeof(PartyFinderListItem_C_ExpansionChanged) == 0x000001, "Wrong size on PartyFinderListItem_C_ExpansionChanged");
static_assert(offsetof(PartyFinderListItem_C_ExpansionChanged, bExpanded) == 0x000000, "Member 'PartyFinderListItem_C_ExpansionChanged::bExpanded' has a wrong offset!");

// Function PartyFinderListItem.PartyFinderListItem_C.InitializeItem
// 0x0050 (0x0050 - 0x0000)
struct PartyFinderListItem_C_InitializeItem final
{
public:
	class FText                                   CallFunc_GetLocation_ReturnValue;                  // 0x0000(0x0018)()
	class FText                                   CallFunc_GetDisplayName_ReturnValue;               // 0x0018(0x0018)()
	struct FUniqueNetIdRepl                       CallFunc_GetUniquePlayerId_ReturnValue;            // 0x0030(0x0018)(HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PartyFinderListItem_C_InitializeItem) == 0x000008, "Wrong alignment on PartyFinderListItem_C_InitializeItem");
static_assert(sizeof(PartyFinderListItem_C_InitializeItem) == 0x000050, "Wrong size on PartyFinderListItem_C_InitializeItem");
static_assert(offsetof(PartyFinderListItem_C_InitializeItem, CallFunc_GetLocation_ReturnValue) == 0x000000, "Member 'PartyFinderListItem_C_InitializeItem::CallFunc_GetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyFinderListItem_C_InitializeItem, CallFunc_GetDisplayName_ReturnValue) == 0x000018, "Member 'PartyFinderListItem_C_InitializeItem::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyFinderListItem_C_InitializeItem, CallFunc_GetUniquePlayerId_ReturnValue) == 0x000030, "Member 'PartyFinderListItem_C_InitializeItem::CallFunc_GetUniquePlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyFinderListItem_C_InitializeItem, K2Node_SwitchEnum_CmpSuccess) == 0x000048, "Member 'PartyFinderListItem_C_InitializeItem::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function PartyFinderListItem.PartyFinderListItem_C.BindSocialItemDelegates
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) PartyFinderListItem_C_BindSocialItemDelegates final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(PartyFinderListItem_C_BindSocialItemDelegates) == 0x000008, "Wrong alignment on PartyFinderListItem_C_BindSocialItemDelegates");
static_assert(sizeof(PartyFinderListItem_C_BindSocialItemDelegates) == 0x000010, "Wrong size on PartyFinderListItem_C_BindSocialItemDelegates");
static_assert(offsetof(PartyFinderListItem_C_BindSocialItemDelegates, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'PartyFinderListItem_C_BindSocialItemDelegates::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function PartyFinderListItem.PartyFinderListItem_C.SetupExpansion
// 0x0010 (0x0010 - 0x0000)
struct PartyFinderListItem_C_SetupExpansion final
{
public:
	bool                                          Expanded;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable2;                              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PartyFinderListItem_C_SetupExpansion) == 0x000004, "Wrong alignment on PartyFinderListItem_C_SetupExpansion");
static_assert(sizeof(PartyFinderListItem_C_SetupExpansion) == 0x000010, "Wrong size on PartyFinderListItem_C_SetupExpansion");
static_assert(offsetof(PartyFinderListItem_C_SetupExpansion, Expanded) == 0x000000, "Member 'PartyFinderListItem_C_SetupExpansion::Expanded' has a wrong offset!");
static_assert(offsetof(PartyFinderListItem_C_SetupExpansion, Temp_bool_Variable) == 0x000001, "Member 'PartyFinderListItem_C_SetupExpansion::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PartyFinderListItem_C_SetupExpansion, Temp_float_Variable) == 0x000004, "Member 'PartyFinderListItem_C_SetupExpansion::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(PartyFinderListItem_C_SetupExpansion, Temp_float_Variable2) == 0x000008, "Member 'PartyFinderListItem_C_SetupExpansion::Temp_float_Variable2' has a wrong offset!");
static_assert(offsetof(PartyFinderListItem_C_SetupExpansion, K2Node_Select_Default) == 0x00000C, "Member 'PartyFinderListItem_C_SetupExpansion::K2Node_Select_Default' has a wrong offset!");

// Function PartyFinderListItem.PartyFinderListItem_C.UpdateStateText
// 0x0100 (0x0100 - 0x0000)
struct PartyFinderListItem_C_UpdateStateText final
{
public:
	class FText                                   Temp_text_Variable;                                // 0x0000(0x0018)()
	class FText                                   Temp_text_Variable2;                               // 0x0018(0x0018)()
	class FText                                   Temp_text_Variable3;                               // 0x0030(0x0018)()
	class FText                                   Temp_text_Variable4;                               // 0x0048(0x0018)()
	class FText                                   Temp_text_Variable5;                               // 0x0060(0x0018)()
	class FText                                   Temp_text_Variable6;                               // 0x0078(0x0018)()
	class FText                                   Temp_text_Variable7;                               // 0x0090(0x0018)()
	class FText                                   Temp_text_Variable8;                               // 0x00A8(0x0018)()
	class FText                                   Temp_text_Variable9;                               // 0x00C0(0x0018)()
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue;                   // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortPartyRestriction                         Temp_byte_Variable;                                // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortPartyRestriction                         CallFunc_CanBeJoined_FailReason;                   // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CanBeJoined_ReturnValue;                  // 0x00E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00E3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E4[0x4];                                       // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x00E8(0x0018)()
};
static_assert(alignof(PartyFinderListItem_C_UpdateStateText) == 0x000008, "Wrong alignment on PartyFinderListItem_C_UpdateStateText");
static_assert(sizeof(PartyFinderListItem_C_UpdateStateText) == 0x000100, "Wrong size on PartyFinderListItem_C_UpdateStateText");
static_assert(offsetof(PartyFinderListItem_C_UpdateStateText, Temp_text_Variable) == 0x000000, "Member 'PartyFinderListItem_C_UpdateStateText::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(PartyFinderListItem_C_UpdateStateText, Temp_text_Variable2) == 0x000018, "Member 'PartyFinderListItem_C_UpdateStateText::Temp_text_Variable2' has a wrong offset!");
static_assert(offsetof(PartyFinderListItem_C_UpdateStateText, Temp_text_Variable3) == 0x000030, "Member 'PartyFinderListItem_C_UpdateStateText::Temp_text_Variable3' has a wrong offset!");
static_assert(offsetof(PartyFinderListItem_C_UpdateStateText, Temp_text_Variable4) == 0x000048, "Member 'PartyFinderListItem_C_UpdateStateText::Temp_text_Variable4' has a wrong offset!");
static_assert(offsetof(PartyFinderListItem_C_UpdateStateText, Temp_text_Variable5) == 0x000060, "Member 'PartyFinderListItem_C_UpdateStateText::Temp_text_Variable5' has a wrong offset!");
static_assert(offsetof(PartyFinderListItem_C_UpdateStateText, Temp_text_Variable6) == 0x000078, "Member 'PartyFinderListItem_C_UpdateStateText::Temp_text_Variable6' has a wrong offset!");
static_assert(offsetof(PartyFinderListItem_C_UpdateStateText, Temp_text_Variable7) == 0x000090, "Member 'PartyFinderListItem_C_UpdateStateText::Temp_text_Variable7' has a wrong offset!");
static_assert(offsetof(PartyFinderListItem_C_UpdateStateText, Temp_text_Variable8) == 0x0000A8, "Member 'PartyFinderListItem_C_UpdateStateText::Temp_text_Variable8' has a wrong offset!");
static_assert(offsetof(PartyFinderListItem_C_UpdateStateText, Temp_text_Variable9) == 0x0000C0, "Member 'PartyFinderListItem_C_UpdateStateText::Temp_text_Variable9' has a wrong offset!");
static_assert(offsetof(PartyFinderListItem_C_UpdateStateText, CallFunc_GetContext_ReturnValue) == 0x0000D8, "Member 'PartyFinderListItem_C_UpdateStateText::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyFinderListItem_C_UpdateStateText, Temp_byte_Variable) == 0x0000E0, "Member 'PartyFinderListItem_C_UpdateStateText::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PartyFinderListItem_C_UpdateStateText, CallFunc_CanBeJoined_FailReason) == 0x0000E1, "Member 'PartyFinderListItem_C_UpdateStateText::CallFunc_CanBeJoined_FailReason' has a wrong offset!");
static_assert(offsetof(PartyFinderListItem_C_UpdateStateText, CallFunc_CanBeJoined_ReturnValue) == 0x0000E2, "Member 'PartyFinderListItem_C_UpdateStateText::CallFunc_CanBeJoined_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyFinderListItem_C_UpdateStateText, K2Node_SwitchEnum_CmpSuccess) == 0x0000E3, "Member 'PartyFinderListItem_C_UpdateStateText::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(PartyFinderListItem_C_UpdateStateText, K2Node_Select_Default) == 0x0000E8, "Member 'PartyFinderListItem_C_UpdateStateText::K2Node_Select_Default' has a wrong offset!");

// Function PartyFinderListItem.PartyFinderListItem_C.UnbindSocialItemDelegates
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) PartyFinderListItem_C_UnbindSocialItemDelegates final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(PartyFinderListItem_C_UnbindSocialItemDelegates) == 0x000008, "Wrong alignment on PartyFinderListItem_C_UnbindSocialItemDelegates");
static_assert(sizeof(PartyFinderListItem_C_UnbindSocialItemDelegates) == 0x000010, "Wrong size on PartyFinderListItem_C_UnbindSocialItemDelegates");
static_assert(offsetof(PartyFinderListItem_C_UnbindSocialItemDelegates, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'PartyFinderListItem_C_UnbindSocialItemDelegates::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

}

