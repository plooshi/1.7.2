﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PowerRequirement

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function PowerRequirement.PowerRequirement_C.ExecuteUbergraph_PowerRequirement
// 0x0038 (0x0038 - 0x0000)
struct PowerRequirement_C_ExecuteUbergraph_PowerRequirement final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FUniqueNetIdRepl& UniqueId)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class UHomeBaseContext*                       CallFunc_GetContext_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                       K2Node_CustomEvent_UniqueId;                       // 0x0020(0x0018)(ConstParm, HasGetValueTypeHash)
};
static_assert(alignof(PowerRequirement_C_ExecuteUbergraph_PowerRequirement) == 0x000008, "Wrong alignment on PowerRequirement_C_ExecuteUbergraph_PowerRequirement");
static_assert(sizeof(PowerRequirement_C_ExecuteUbergraph_PowerRequirement) == 0x000038, "Wrong size on PowerRequirement_C_ExecuteUbergraph_PowerRequirement");
static_assert(offsetof(PowerRequirement_C_ExecuteUbergraph_PowerRequirement, EntryPoint) == 0x000000, "Member 'PowerRequirement_C_ExecuteUbergraph_PowerRequirement::EntryPoint' has a wrong offset!");
static_assert(offsetof(PowerRequirement_C_ExecuteUbergraph_PowerRequirement, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'PowerRequirement_C_ExecuteUbergraph_PowerRequirement::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PowerRequirement_C_ExecuteUbergraph_PowerRequirement, CallFunc_GetContext_ReturnValue) == 0x000018, "Member 'PowerRequirement_C_ExecuteUbergraph_PowerRequirement::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(PowerRequirement_C_ExecuteUbergraph_PowerRequirement, K2Node_CustomEvent_UniqueId) == 0x000020, "Member 'PowerRequirement_C_ExecuteUbergraph_PowerRequirement::K2Node_CustomEvent_UniqueId' has a wrong offset!");

// Function PowerRequirement.PowerRequirement_C.PlayerInfoChanged
// 0x0018 (0x0018 - 0x0000)
struct PowerRequirement_C_PlayerInfoChanged final
{
public:
	struct FUniqueNetIdRepl                       UniqueId;                                          // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(PowerRequirement_C_PlayerInfoChanged) == 0x000008, "Wrong alignment on PowerRequirement_C_PlayerInfoChanged");
static_assert(sizeof(PowerRequirement_C_PlayerInfoChanged) == 0x000018, "Wrong size on PowerRequirement_C_PlayerInfoChanged");
static_assert(offsetof(PowerRequirement_C_PlayerInfoChanged, UniqueId) == 0x000000, "Member 'PowerRequirement_C_PlayerInfoChanged::UniqueId' has a wrong offset!");

// Function PowerRequirement.PowerRequirement_C.SetRequirements
// 0x0008 (0x0008 - 0x0000)
struct PowerRequirement_C_SetRequirements final
{
public:
	int32                                         RequiredPower_0;                                   // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RecommendedPower_0;                                // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PowerRequirement_C_SetRequirements) == 0x000004, "Wrong alignment on PowerRequirement_C_SetRequirements");
static_assert(sizeof(PowerRequirement_C_SetRequirements) == 0x000008, "Wrong size on PowerRequirement_C_SetRequirements");
static_assert(offsetof(PowerRequirement_C_SetRequirements, RequiredPower_0) == 0x000000, "Member 'PowerRequirement_C_SetRequirements::RequiredPower_0' has a wrong offset!");
static_assert(offsetof(PowerRequirement_C_SetRequirements, RecommendedPower_0) == 0x000004, "Member 'PowerRequirement_C_SetRequirements::RecommendedPower_0' has a wrong offset!");

// Function PowerRequirement.PowerRequirement_C.Update
// 0x0058 (0x0058 - 0x0000)
struct PowerRequirement_C_Update final
{
public:
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerState*                       K2Node_DynamicCast_AsFort_Player_State;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUniqueNetIdRepl                       CallFunc_GetUniqueID_ReturnValue;                  // 0x0020(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue2;              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHomeBaseContext*                       CallFunc_GetContext_ReturnValue;                   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTotalHomebaseRating_Rating;            // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTotalHomebaseRating_ProgressFraction;  // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetTotalHomebaseRating_ReturnValue;       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue3;              // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PowerRequirement_C_Update) == 0x000008, "Wrong alignment on PowerRequirement_C_Update");
static_assert(sizeof(PowerRequirement_C_Update) == 0x000058, "Wrong size on PowerRequirement_C_Update");
static_assert(offsetof(PowerRequirement_C_Update, CallFunc_GetOwningPlayer_ReturnValue) == 0x000000, "Member 'PowerRequirement_C_Update::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PowerRequirement_C_Update, CallFunc_Greater_IntInt_ReturnValue) == 0x000008, "Member 'PowerRequirement_C_Update::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PowerRequirement_C_Update, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'PowerRequirement_C_Update::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PowerRequirement_C_Update, K2Node_DynamicCast_AsFort_Player_State) == 0x000010, "Member 'PowerRequirement_C_Update::K2Node_DynamicCast_AsFort_Player_State' has a wrong offset!");
static_assert(offsetof(PowerRequirement_C_Update, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'PowerRequirement_C_Update::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PowerRequirement_C_Update, CallFunc_GetUniqueID_ReturnValue) == 0x000020, "Member 'PowerRequirement_C_Update::CallFunc_GetUniqueID_ReturnValue' has a wrong offset!");
static_assert(offsetof(PowerRequirement_C_Update, CallFunc_Greater_IntInt_ReturnValue2) == 0x000038, "Member 'PowerRequirement_C_Update::CallFunc_Greater_IntInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(PowerRequirement_C_Update, CallFunc_GetContext_ReturnValue) == 0x000040, "Member 'PowerRequirement_C_Update::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(PowerRequirement_C_Update, CallFunc_GetTotalHomebaseRating_Rating) == 0x000048, "Member 'PowerRequirement_C_Update::CallFunc_GetTotalHomebaseRating_Rating' has a wrong offset!");
static_assert(offsetof(PowerRequirement_C_Update, CallFunc_GetTotalHomebaseRating_ProgressFraction) == 0x00004C, "Member 'PowerRequirement_C_Update::CallFunc_GetTotalHomebaseRating_ProgressFraction' has a wrong offset!");
static_assert(offsetof(PowerRequirement_C_Update, CallFunc_GetTotalHomebaseRating_ReturnValue) == 0x000050, "Member 'PowerRequirement_C_Update::CallFunc_GetTotalHomebaseRating_ReturnValue' has a wrong offset!");
static_assert(offsetof(PowerRequirement_C_Update, CallFunc_Greater_IntInt_ReturnValue3) == 0x000051, "Member 'PowerRequirement_C_Update::CallFunc_Greater_IntInt_ReturnValue3' has a wrong offset!");
static_assert(offsetof(PowerRequirement_C_Update, CallFunc_BooleanAND_ReturnValue) == 0x000052, "Member 'PowerRequirement_C_Update::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function PowerRequirement.PowerRequirement_C.SetUIForRecommended
// 0x0030 (0x0030 - 0x0000)
struct PowerRequirement_C_SetUIForRecommended final
{
public:
	int32                                         PartyPower;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
};
static_assert(alignof(PowerRequirement_C_SetUIForRecommended) == 0x000008, "Wrong alignment on PowerRequirement_C_SetUIForRecommended");
static_assert(sizeof(PowerRequirement_C_SetUIForRecommended) == 0x000030, "Wrong size on PowerRequirement_C_SetUIForRecommended");
static_assert(offsetof(PowerRequirement_C_SetUIForRecommended, PartyPower) == 0x000000, "Member 'PowerRequirement_C_SetUIForRecommended::PartyPower' has a wrong offset!");
static_assert(offsetof(PowerRequirement_C_SetUIForRecommended, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'PowerRequirement_C_SetUIForRecommended::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function PowerRequirement.PowerRequirement_C.SetUIForRequired
// 0x0058 (0x0058 - 0x0000)
struct PowerRequirement_C_SetUIForRequired final
{
public:
	int32                                         PartyPower;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor2;                     // 0x0030(0x0028)()
};
static_assert(alignof(PowerRequirement_C_SetUIForRequired) == 0x000008, "Wrong alignment on PowerRequirement_C_SetUIForRequired");
static_assert(sizeof(PowerRequirement_C_SetUIForRequired) == 0x000058, "Wrong size on PowerRequirement_C_SetUIForRequired");
static_assert(offsetof(PowerRequirement_C_SetUIForRequired, PartyPower) == 0x000000, "Member 'PowerRequirement_C_SetUIForRequired::PartyPower' has a wrong offset!");
static_assert(offsetof(PowerRequirement_C_SetUIForRequired, CallFunc_Greater_IntInt_ReturnValue) == 0x000004, "Member 'PowerRequirement_C_SetUIForRequired::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PowerRequirement_C_SetUIForRequired, CallFunc_Less_IntInt_ReturnValue) == 0x000005, "Member 'PowerRequirement_C_SetUIForRequired::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PowerRequirement_C_SetUIForRequired, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'PowerRequirement_C_SetUIForRequired::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(PowerRequirement_C_SetUIForRequired, K2Node_MakeStruct_SlateColor2) == 0x000030, "Member 'PowerRequirement_C_SetUIForRequired::K2Node_MakeStruct_SlateColor2' has a wrong offset!");

// Function PowerRequirement.PowerRequirement_C.GenerateToolTipWidget
// 0x0048 (0x0048 - 0x0000)
struct PowerRequirement_C_GenerateToolTipWidget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue2;              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UHomeBaseContext*                       CallFunc_GetContext_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLocalTeamHomebaseRating_Rating;        // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetLocalTeamHomebaseRating_ProgressFraction; // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLocalTeamHomebaseRating_ReturnValue;   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Create_Basic_Tooltip_Output;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue3;              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Create_Basic_Tooltip_Output2;             // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PowerRequirement_C_GenerateToolTipWidget) == 0x000008, "Wrong alignment on PowerRequirement_C_GenerateToolTipWidget");
static_assert(sizeof(PowerRequirement_C_GenerateToolTipWidget) == 0x000048, "Wrong size on PowerRequirement_C_GenerateToolTipWidget");
static_assert(offsetof(PowerRequirement_C_GenerateToolTipWidget, ReturnValue) == 0x000000, "Member 'PowerRequirement_C_GenerateToolTipWidget::ReturnValue' has a wrong offset!");
static_assert(offsetof(PowerRequirement_C_GenerateToolTipWidget, CallFunc_Greater_IntInt_ReturnValue) == 0x000008, "Member 'PowerRequirement_C_GenerateToolTipWidget::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PowerRequirement_C_GenerateToolTipWidget, CallFunc_Greater_IntInt_ReturnValue2) == 0x000009, "Member 'PowerRequirement_C_GenerateToolTipWidget::CallFunc_Greater_IntInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(PowerRequirement_C_GenerateToolTipWidget, CallFunc_GetContext_ReturnValue) == 0x000010, "Member 'PowerRequirement_C_GenerateToolTipWidget::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(PowerRequirement_C_GenerateToolTipWidget, CallFunc_GetOwningPlayer_ReturnValue) == 0x000018, "Member 'PowerRequirement_C_GenerateToolTipWidget::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PowerRequirement_C_GenerateToolTipWidget, CallFunc_GetLocalTeamHomebaseRating_Rating) == 0x000020, "Member 'PowerRequirement_C_GenerateToolTipWidget::CallFunc_GetLocalTeamHomebaseRating_Rating' has a wrong offset!");
static_assert(offsetof(PowerRequirement_C_GenerateToolTipWidget, CallFunc_GetLocalTeamHomebaseRating_ProgressFraction) == 0x000024, "Member 'PowerRequirement_C_GenerateToolTipWidget::CallFunc_GetLocalTeamHomebaseRating_ProgressFraction' has a wrong offset!");
static_assert(offsetof(PowerRequirement_C_GenerateToolTipWidget, CallFunc_GetLocalTeamHomebaseRating_ReturnValue) == 0x000028, "Member 'PowerRequirement_C_GenerateToolTipWidget::CallFunc_GetLocalTeamHomebaseRating_ReturnValue' has a wrong offset!");
static_assert(offsetof(PowerRequirement_C_GenerateToolTipWidget, CallFunc_Create_Basic_Tooltip_Output) == 0x000030, "Member 'PowerRequirement_C_GenerateToolTipWidget::CallFunc_Create_Basic_Tooltip_Output' has a wrong offset!");
static_assert(offsetof(PowerRequirement_C_GenerateToolTipWidget, CallFunc_Greater_IntInt_ReturnValue3) == 0x000038, "Member 'PowerRequirement_C_GenerateToolTipWidget::CallFunc_Greater_IntInt_ReturnValue3' has a wrong offset!");
static_assert(offsetof(PowerRequirement_C_GenerateToolTipWidget, CallFunc_BooleanAND_ReturnValue) == 0x000039, "Member 'PowerRequirement_C_GenerateToolTipWidget::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(PowerRequirement_C_GenerateToolTipWidget, CallFunc_Create_Basic_Tooltip_Output2) == 0x000040, "Member 'PowerRequirement_C_GenerateToolTipWidget::CallFunc_Create_Basic_Tooltip_Output2' has a wrong offset!");

}

