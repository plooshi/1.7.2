﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LegacyRatingWidget

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function LegacyRatingWidget.LegacyRatingWidget_C.ExecuteUbergraph_LegacyRatingWidget
// 0x01E8 (0x01E8 - 0x0000)
struct LegacyRatingWidget_C_ExecuteUbergraph_LegacyRatingWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FUniqueNetIdRepl& UniqueId)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FFortTeamMemberInfo& PlayerInfo)> K2Node_CreateDelegate_OutputDelegate2;             // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	struct FUniqueNetIdRepl                       K2Node_CustomEvent_UniqueId;                       // 0x0038(0x0018)(ConstParm, HasGetValueTypeHash)
	class UHomeBaseContext*                       CallFunc_GetContext_ReturnValue2;                  // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                    K2Node_CustomEvent_PlayerInfo;                     // 0x0058(0x0190)(ConstParm)
};
static_assert(alignof(LegacyRatingWidget_C_ExecuteUbergraph_LegacyRatingWidget) == 0x000008, "Wrong alignment on LegacyRatingWidget_C_ExecuteUbergraph_LegacyRatingWidget");
static_assert(sizeof(LegacyRatingWidget_C_ExecuteUbergraph_LegacyRatingWidget) == 0x0001E8, "Wrong size on LegacyRatingWidget_C_ExecuteUbergraph_LegacyRatingWidget");
static_assert(offsetof(LegacyRatingWidget_C_ExecuteUbergraph_LegacyRatingWidget, EntryPoint) == 0x000000, "Member 'LegacyRatingWidget_C_ExecuteUbergraph_LegacyRatingWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_ExecuteUbergraph_LegacyRatingWidget, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'LegacyRatingWidget_C_ExecuteUbergraph_LegacyRatingWidget::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_ExecuteUbergraph_LegacyRatingWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'LegacyRatingWidget_C_ExecuteUbergraph_LegacyRatingWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_ExecuteUbergraph_LegacyRatingWidget, K2Node_Event_IsDesignTime) == 0x000020, "Member 'LegacyRatingWidget_C_ExecuteUbergraph_LegacyRatingWidget::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_ExecuteUbergraph_LegacyRatingWidget, K2Node_CreateDelegate_OutputDelegate2) == 0x000028, "Member 'LegacyRatingWidget_C_ExecuteUbergraph_LegacyRatingWidget::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_ExecuteUbergraph_LegacyRatingWidget, K2Node_CustomEvent_UniqueId) == 0x000038, "Member 'LegacyRatingWidget_C_ExecuteUbergraph_LegacyRatingWidget::K2Node_CustomEvent_UniqueId' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_ExecuteUbergraph_LegacyRatingWidget, CallFunc_GetContext_ReturnValue2) == 0x000050, "Member 'LegacyRatingWidget_C_ExecuteUbergraph_LegacyRatingWidget::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_ExecuteUbergraph_LegacyRatingWidget, K2Node_CustomEvent_PlayerInfo) == 0x000058, "Member 'LegacyRatingWidget_C_ExecuteUbergraph_LegacyRatingWidget::K2Node_CustomEvent_PlayerInfo' has a wrong offset!");

// Function LegacyRatingWidget.LegacyRatingWidget_C.PlayerStateChanged
// 0x0190 (0x0190 - 0x0000)
struct LegacyRatingWidget_C_PlayerStateChanged final
{
public:
	struct FFortTeamMemberInfo                    PlayerInfo;                                        // 0x0000(0x0190)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(LegacyRatingWidget_C_PlayerStateChanged) == 0x000008, "Wrong alignment on LegacyRatingWidget_C_PlayerStateChanged");
static_assert(sizeof(LegacyRatingWidget_C_PlayerStateChanged) == 0x000190, "Wrong size on LegacyRatingWidget_C_PlayerStateChanged");
static_assert(offsetof(LegacyRatingWidget_C_PlayerStateChanged, PlayerInfo) == 0x000000, "Member 'LegacyRatingWidget_C_PlayerStateChanged::PlayerInfo' has a wrong offset!");

// Function LegacyRatingWidget.LegacyRatingWidget_C.PlayerInfoChanged
// 0x0018 (0x0018 - 0x0000)
struct LegacyRatingWidget_C_PlayerInfoChanged final
{
public:
	struct FUniqueNetIdRepl                       UniqueId_0;                                        // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(LegacyRatingWidget_C_PlayerInfoChanged) == 0x000008, "Wrong alignment on LegacyRatingWidget_C_PlayerInfoChanged");
static_assert(sizeof(LegacyRatingWidget_C_PlayerInfoChanged) == 0x000018, "Wrong size on LegacyRatingWidget_C_PlayerInfoChanged");
static_assert(offsetof(LegacyRatingWidget_C_PlayerInfoChanged, UniqueId_0) == 0x000000, "Member 'LegacyRatingWidget_C_PlayerInfoChanged::UniqueId_0' has a wrong offset!");

// Function LegacyRatingWidget.LegacyRatingWidget_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct LegacyRatingWidget_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LegacyRatingWidget_C_PreConstruct) == 0x000001, "Wrong alignment on LegacyRatingWidget_C_PreConstruct");
static_assert(sizeof(LegacyRatingWidget_C_PreConstruct) == 0x000001, "Wrong size on LegacyRatingWidget_C_PreConstruct");
static_assert(offsetof(LegacyRatingWidget_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'LegacyRatingWidget_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function LegacyRatingWidget.LegacyRatingWidget_C.Update Rating Value
// 0x00D8 (0x00D8 - 0x0000)
struct LegacyRatingWidget_C_Update_Rating_Value final
{
public:
	int32                                         Rating;                                            // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable;                              // 0x0004(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable2;                             // 0x000C(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable3;                             // 0x0014(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable4;                             // 0x001C(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable5;                             // 0x0024(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable6;                             // 0x002C(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0038(0x0028)()
	struct FSlateFontInfo                         CallFunc_GetCurrentFont_ReturnValue;               // 0x0060(0x0068)(ConstParm, HasGetValueTypeHash)
	EFortBrushSize                                Temp_byte_Variable;                                // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x3];                                       // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              K2Node_Select_Default;                             // 0x00CC(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LegacyRatingWidget_C_Update_Rating_Value) == 0x000008, "Wrong alignment on LegacyRatingWidget_C_Update_Rating_Value");
static_assert(sizeof(LegacyRatingWidget_C_Update_Rating_Value) == 0x0000D8, "Wrong size on LegacyRatingWidget_C_Update_Rating_Value");
static_assert(offsetof(LegacyRatingWidget_C_Update_Rating_Value, Rating) == 0x000000, "Member 'LegacyRatingWidget_C_Update_Rating_Value::Rating' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Update_Rating_Value, Temp_struct_Variable) == 0x000004, "Member 'LegacyRatingWidget_C_Update_Rating_Value::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Update_Rating_Value, Temp_struct_Variable2) == 0x00000C, "Member 'LegacyRatingWidget_C_Update_Rating_Value::Temp_struct_Variable2' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Update_Rating_Value, Temp_struct_Variable3) == 0x000014, "Member 'LegacyRatingWidget_C_Update_Rating_Value::Temp_struct_Variable3' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Update_Rating_Value, Temp_struct_Variable4) == 0x00001C, "Member 'LegacyRatingWidget_C_Update_Rating_Value::Temp_struct_Variable4' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Update_Rating_Value, Temp_struct_Variable5) == 0x000024, "Member 'LegacyRatingWidget_C_Update_Rating_Value::Temp_struct_Variable5' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Update_Rating_Value, Temp_struct_Variable6) == 0x00002C, "Member 'LegacyRatingWidget_C_Update_Rating_Value::Temp_struct_Variable6' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Update_Rating_Value, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000034, "Member 'LegacyRatingWidget_C_Update_Rating_Value::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Update_Rating_Value, K2Node_MakeStruct_SlateColor) == 0x000038, "Member 'LegacyRatingWidget_C_Update_Rating_Value::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Update_Rating_Value, CallFunc_GetCurrentFont_ReturnValue) == 0x000060, "Member 'LegacyRatingWidget_C_Update_Rating_Value::CallFunc_GetCurrentFont_ReturnValue' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Update_Rating_Value, Temp_byte_Variable) == 0x0000C8, "Member 'LegacyRatingWidget_C_Update_Rating_Value::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Update_Rating_Value, K2Node_Select_Default) == 0x0000CC, "Member 'LegacyRatingWidget_C_Update_Rating_Value::K2Node_Select_Default' has a wrong offset!");

// Function LegacyRatingWidget.LegacyRatingWidget_C.Set Size Box
// 0x0128 (0x0128 - 0x0000)
struct LegacyRatingWidget_C_Set_Size_Box final
{
public:
	struct FSlateBrush                            CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue; // 0x0000(0x0090)(ConstParm)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0098(0x0090)()
};
static_assert(alignof(LegacyRatingWidget_C_Set_Size_Box) == 0x000008, "Wrong alignment on LegacyRatingWidget_C_Set_Size_Box");
static_assert(sizeof(LegacyRatingWidget_C_Set_Size_Box) == 0x000128, "Wrong size on LegacyRatingWidget_C_Set_Size_Box");
static_assert(offsetof(LegacyRatingWidget_C_Set_Size_Box, CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue) == 0x000000, "Member 'LegacyRatingWidget_C_Set_Size_Box::CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Set_Size_Box, CallFunc_BreakVector2D_X) == 0x000090, "Member 'LegacyRatingWidget_C_Set_Size_Box::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Set_Size_Box, CallFunc_BreakVector2D_Y) == 0x000094, "Member 'LegacyRatingWidget_C_Set_Size_Box::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Set_Size_Box, K2Node_MakeStruct_SlateBrush) == 0x000098, "Member 'LegacyRatingWidget_C_Set_Size_Box::K2Node_MakeStruct_SlateBrush' has a wrong offset!");

// Function LegacyRatingWidget.LegacyRatingWidget_C.Set Padding
// 0x0088 (0x0088 - 0x0000)
struct LegacyRatingWidget_C_Set_Padding final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortMultiSizeMargin                   K2Node_Select_Default;                             // 0x0004(0x0060)(NoDestructor)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBorderSlot*                            K2Node_DynamicCast_AsBorder_Slot;                  // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                CallFunc_GetMarginBySizeFromMultiSizeMargin_ReturnValue; // 0x0074(0x0010)(ConstParm, NoDestructor)
};
static_assert(alignof(LegacyRatingWidget_C_Set_Padding) == 0x000008, "Wrong alignment on LegacyRatingWidget_C_Set_Padding");
static_assert(sizeof(LegacyRatingWidget_C_Set_Padding) == 0x000088, "Wrong size on LegacyRatingWidget_C_Set_Padding");
static_assert(offsetof(LegacyRatingWidget_C_Set_Padding, Temp_bool_Variable) == 0x000000, "Member 'LegacyRatingWidget_C_Set_Padding::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Set_Padding, K2Node_Select_Default) == 0x000004, "Member 'LegacyRatingWidget_C_Set_Padding::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Set_Padding, K2Node_DynamicCast_AsBorder_Slot) == 0x000068, "Member 'LegacyRatingWidget_C_Set_Padding::K2Node_DynamicCast_AsBorder_Slot' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Set_Padding, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'LegacyRatingWidget_C_Set_Padding::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Set_Padding, CallFunc_GetMarginBySizeFromMultiSizeMargin_ReturnValue) == 0x000074, "Member 'LegacyRatingWidget_C_Set_Padding::CallFunc_GetMarginBySizeFromMultiSizeMargin_ReturnValue' has a wrong offset!");

// Function LegacyRatingWidget.LegacyRatingWidget_C.Set Unique ID
// 0x0018 (0x0018 - 0x0000)
struct LegacyRatingWidget_C_Set_Unique_ID final
{
public:
	struct FUniqueNetIdRepl                       ID;                                                // 0x0000(0x0018)(Parm, HasGetValueTypeHash)
};
static_assert(alignof(LegacyRatingWidget_C_Set_Unique_ID) == 0x000008, "Wrong alignment on LegacyRatingWidget_C_Set_Unique_ID");
static_assert(sizeof(LegacyRatingWidget_C_Set_Unique_ID) == 0x000018, "Wrong size on LegacyRatingWidget_C_Set_Unique_ID");
static_assert(offsetof(LegacyRatingWidget_C_Set_Unique_ID, ID) == 0x000000, "Member 'LegacyRatingWidget_C_Set_Unique_ID::ID' has a wrong offset!");

// Function LegacyRatingWidget.LegacyRatingWidget_C.Update From Unique ID
// 0x0028 (0x0028 - 0x0000)
struct LegacyRatingWidget_C_Update_From_Unique_ID final
{
public:
	class UHomeBaseContext*                       CallFunc_GetContext_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHomeBaseContext*                       CallFunc_GetContext_ReturnValue2;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTeamHomebaseRating_Rating;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTeamHomebaseRating_ProgressFraction;   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetTeamHomebaseRating_ReturnValue;        // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTotalHomebaseRating_Rating;            // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTotalHomebaseRating_ProgressFraction;  // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetTotalHomebaseRating_ReturnValue;       // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidNetID_ReturnValue;                 // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LegacyRatingWidget_C_Update_From_Unique_ID) == 0x000008, "Wrong alignment on LegacyRatingWidget_C_Update_From_Unique_ID");
static_assert(sizeof(LegacyRatingWidget_C_Update_From_Unique_ID) == 0x000028, "Wrong size on LegacyRatingWidget_C_Update_From_Unique_ID");
static_assert(offsetof(LegacyRatingWidget_C_Update_From_Unique_ID, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'LegacyRatingWidget_C_Update_From_Unique_ID::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Update_From_Unique_ID, CallFunc_GetContext_ReturnValue2) == 0x000008, "Member 'LegacyRatingWidget_C_Update_From_Unique_ID::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Update_From_Unique_ID, CallFunc_GetTeamHomebaseRating_Rating) == 0x000010, "Member 'LegacyRatingWidget_C_Update_From_Unique_ID::CallFunc_GetTeamHomebaseRating_Rating' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Update_From_Unique_ID, CallFunc_GetTeamHomebaseRating_ProgressFraction) == 0x000014, "Member 'LegacyRatingWidget_C_Update_From_Unique_ID::CallFunc_GetTeamHomebaseRating_ProgressFraction' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Update_From_Unique_ID, CallFunc_GetTeamHomebaseRating_ReturnValue) == 0x000018, "Member 'LegacyRatingWidget_C_Update_From_Unique_ID::CallFunc_GetTeamHomebaseRating_ReturnValue' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Update_From_Unique_ID, CallFunc_GetTotalHomebaseRating_Rating) == 0x00001C, "Member 'LegacyRatingWidget_C_Update_From_Unique_ID::CallFunc_GetTotalHomebaseRating_Rating' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Update_From_Unique_ID, CallFunc_GetTotalHomebaseRating_ProgressFraction) == 0x000020, "Member 'LegacyRatingWidget_C_Update_From_Unique_ID::CallFunc_GetTotalHomebaseRating_ProgressFraction' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Update_From_Unique_ID, CallFunc_GetTotalHomebaseRating_ReturnValue) == 0x000024, "Member 'LegacyRatingWidget_C_Update_From_Unique_ID::CallFunc_GetTotalHomebaseRating_ReturnValue' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Update_From_Unique_ID, CallFunc_IsValidNetID_ReturnValue) == 0x000025, "Member 'LegacyRatingWidget_C_Update_From_Unique_ID::CallFunc_IsValidNetID_ReturnValue' has a wrong offset!");

// Function LegacyRatingWidget.LegacyRatingWidget_C.Update Base Material
// 0x06E0 (0x06E0 - 0x0000)
struct LegacyRatingWidget_C_Update_Base_Material final
{
public:
	class UMaterialInstanceDynamic*               Mid;                                               // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortMultiSizeBrush                    K2Node_Select_Default;                             // 0x0010(0x0360)()
	bool                                          Temp_bool_Variable2;                               // 0x0370(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_371[0x7];                                      // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortMultiSizeBrush                    K2Node_Select2_Default;                            // 0x0378(0x0360)()
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x06D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LegacyRatingWidget_C_Update_Base_Material) == 0x000008, "Wrong alignment on LegacyRatingWidget_C_Update_Base_Material");
static_assert(sizeof(LegacyRatingWidget_C_Update_Base_Material) == 0x0006E0, "Wrong size on LegacyRatingWidget_C_Update_Base_Material");
static_assert(offsetof(LegacyRatingWidget_C_Update_Base_Material, Mid) == 0x000000, "Member 'LegacyRatingWidget_C_Update_Base_Material::Mid' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Update_Base_Material, Temp_bool_Variable) == 0x000008, "Member 'LegacyRatingWidget_C_Update_Base_Material::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Update_Base_Material, K2Node_Select_Default) == 0x000010, "Member 'LegacyRatingWidget_C_Update_Base_Material::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Update_Base_Material, Temp_bool_Variable2) == 0x000370, "Member 'LegacyRatingWidget_C_Update_Base_Material::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Update_Base_Material, K2Node_Select2_Default) == 0x000378, "Member 'LegacyRatingWidget_C_Update_Base_Material::K2Node_Select2_Default' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Update_Base_Material, CallFunc_GetDynamicMaterial_ReturnValue) == 0x0006D8, "Member 'LegacyRatingWidget_C_Update_Base_Material::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function LegacyRatingWidget.LegacyRatingWidget_C.Set Texture2D Parameter From Multi Size Brush
// 0x0410 (0x0410 - 0x0000)
struct LegacyRatingWidget_C_Set_Texture2D_Parameter_From_Multi_Size_Brush final
{
public:
	class UMaterialInstanceDynamic*               Mid;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Parameter;                                         // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortMultiSizeBrush                    MBrush;                                            // 0x0010(0x0360)(Parm)
	struct FSlateBrush                            CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue; // 0x0370(0x0090)(ConstParm)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0400(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0408(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LegacyRatingWidget_C_Set_Texture2D_Parameter_From_Multi_Size_Brush) == 0x000008, "Wrong alignment on LegacyRatingWidget_C_Set_Texture2D_Parameter_From_Multi_Size_Brush");
static_assert(sizeof(LegacyRatingWidget_C_Set_Texture2D_Parameter_From_Multi_Size_Brush) == 0x000410, "Wrong size on LegacyRatingWidget_C_Set_Texture2D_Parameter_From_Multi_Size_Brush");
static_assert(offsetof(LegacyRatingWidget_C_Set_Texture2D_Parameter_From_Multi_Size_Brush, Mid) == 0x000000, "Member 'LegacyRatingWidget_C_Set_Texture2D_Parameter_From_Multi_Size_Brush::Mid' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Set_Texture2D_Parameter_From_Multi_Size_Brush, Parameter) == 0x000008, "Member 'LegacyRatingWidget_C_Set_Texture2D_Parameter_From_Multi_Size_Brush::Parameter' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Set_Texture2D_Parameter_From_Multi_Size_Brush, MBrush) == 0x000010, "Member 'LegacyRatingWidget_C_Set_Texture2D_Parameter_From_Multi_Size_Brush::MBrush' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Set_Texture2D_Parameter_From_Multi_Size_Brush, CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue) == 0x000370, "Member 'LegacyRatingWidget_C_Set_Texture2D_Parameter_From_Multi_Size_Brush::CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Set_Texture2D_Parameter_From_Multi_Size_Brush, K2Node_DynamicCast_AsTexture_2D) == 0x000400, "Member 'LegacyRatingWidget_C_Set_Texture2D_Parameter_From_Multi_Size_Brush::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Set_Texture2D_Parameter_From_Multi_Size_Brush, K2Node_DynamicCast_bSuccess) == 0x000408, "Member 'LegacyRatingWidget_C_Set_Texture2D_Parameter_From_Multi_Size_Brush::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function LegacyRatingWidget.LegacyRatingWidget_C.Override Default Color Set
// 0x0034 (0x0034 - 0x0000)
struct LegacyRatingWidget_C_Override_Default_Color_Set final
{
public:
	bool                                          Override;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Light_Color;                                       // 0x0004(0x0010)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Medium_Color;                                      // 0x0014(0x0010)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Dark_Color;                                        // 0x0024(0x0010)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LegacyRatingWidget_C_Override_Default_Color_Set) == 0x000004, "Wrong alignment on LegacyRatingWidget_C_Override_Default_Color_Set");
static_assert(sizeof(LegacyRatingWidget_C_Override_Default_Color_Set) == 0x000034, "Wrong size on LegacyRatingWidget_C_Override_Default_Color_Set");
static_assert(offsetof(LegacyRatingWidget_C_Override_Default_Color_Set, Override) == 0x000000, "Member 'LegacyRatingWidget_C_Override_Default_Color_Set::Override' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Override_Default_Color_Set, Light_Color) == 0x000004, "Member 'LegacyRatingWidget_C_Override_Default_Color_Set::Light_Color' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Override_Default_Color_Set, Medium_Color) == 0x000014, "Member 'LegacyRatingWidget_C_Override_Default_Color_Set::Medium_Color' has a wrong offset!");
static_assert(offsetof(LegacyRatingWidget_C_Override_Default_Color_Set, Dark_Color) == 0x000024, "Member 'LegacyRatingWidget_C_Override_Default_Color_Set::Dark_Color' has a wrong offset!");

// Function LegacyRatingWidget.LegacyRatingWidget_C.SetShouldShowTeamPowerRating
// 0x0001 (0x0001 - 0x0000)
struct LegacyRatingWidget_C_SetShouldShowTeamPowerRating final
{
public:
	bool                                          ShowTeamRating;                                    // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LegacyRatingWidget_C_SetShouldShowTeamPowerRating) == 0x000001, "Wrong alignment on LegacyRatingWidget_C_SetShouldShowTeamPowerRating");
static_assert(sizeof(LegacyRatingWidget_C_SetShouldShowTeamPowerRating) == 0x000001, "Wrong size on LegacyRatingWidget_C_SetShouldShowTeamPowerRating");
static_assert(offsetof(LegacyRatingWidget_C_SetShouldShowTeamPowerRating, ShowTeamRating) == 0x000000, "Member 'LegacyRatingWidget_C_SetShouldShowTeamPowerRating::ShowTeamRating' has a wrong offset!");

}

