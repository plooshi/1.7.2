﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionDetailsModifierList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function MissionDetailsModifierList.MissionDetailsModifierList_C.PopulateModifiers
// 0x0210 (0x0210 - 0x0000)
struct MissionDetailsModifierList_C_PopulateModifiers final
{
public:
	bool                                          UseTrunctatedList;                                 // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 NameTextStyle;                                     // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 DescriptionTextStyle;                              // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Show_Descriptions;                                 // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UFortGameplayModifierItemDefinition*> ModifierItems;                                     // 0x0020(0x0010)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                          UseSmallIcons;                                     // 0x0030(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DisplayMoreThreshold;                              // 0x0034(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue2;                // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue3;                // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGameplayModifierItemDefinition*    CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetLargePreviewImage_ReturnValue;         // 0x0058(0x0020)(HasGetValueTypeHash)
	struct FSlateBrush                            CallFunc_GetSmallPreviewImageBrush_ReturnValue;    // 0x0078(0x0090)()
	class FText                                   CallFunc_GetShortDescription_ReturnValue;          // 0x0108(0x0018)()
	class UTexture2D*                             CallFunc_GetBrushResourceAsTexture2D_ReturnValue;  // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetDisplayName_ReturnValue;               // 0x0128(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_141[0x3];                                      // 0x0141(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14A[0x2];                                      // 0x014A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_152[0x2];                                      // 0x0152(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_159[0x7];                                      // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0160(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01A0(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B1[0x7];                                      // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01B8(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable2;                               // 0x01D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue2;                  // 0x01D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue3;                  // 0x01D3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x01D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D5[0x3];                                      // 0x01D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable2;                              // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select2_Default;                            // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x01E4(0x0010)(NoDestructor)
	uint8                                         Pad_1F4[0x4];                                      // 0x01F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionDetailsModifierRow_C*           CallFunc_Create_ReturnValue;                       // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MissionDetailsModifierList_C_PopulateModifiers) == 0x000008, "Wrong alignment on MissionDetailsModifierList_C_PopulateModifiers");
static_assert(sizeof(MissionDetailsModifierList_C_PopulateModifiers) == 0x000210, "Wrong size on MissionDetailsModifierList_C_PopulateModifiers");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, UseTrunctatedList) == 0x000000, "Member 'MissionDetailsModifierList_C_PopulateModifiers::UseTrunctatedList' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, NameTextStyle) == 0x000008, "Member 'MissionDetailsModifierList_C_PopulateModifiers::NameTextStyle' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, DescriptionTextStyle) == 0x000010, "Member 'MissionDetailsModifierList_C_PopulateModifiers::DescriptionTextStyle' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, Show_Descriptions) == 0x000018, "Member 'MissionDetailsModifierList_C_PopulateModifiers::Show_Descriptions' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, ModifierItems) == 0x000020, "Member 'MissionDetailsModifierList_C_PopulateModifiers::ModifierItems' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, UseSmallIcons) == 0x000030, "Member 'MissionDetailsModifierList_C_PopulateModifiers::UseSmallIcons' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, DisplayMoreThreshold) == 0x000034, "Member 'MissionDetailsModifierList_C_PopulateModifiers::DisplayMoreThreshold' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_Array_Length_ReturnValue2) == 0x00003C, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_Array_Length_ReturnValue2' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_Array_Length_ReturnValue3) == 0x000040, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_Array_Length_ReturnValue3' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, Temp_bool_True_if_break_was_hit_Variable) == 0x000044, "Member 'MissionDetailsModifierList_C_PopulateModifiers::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, Temp_int_Array_Index_Variable) == 0x000048, "Member 'MissionDetailsModifierList_C_PopulateModifiers::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_Array_Get_Item) == 0x000050, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_GetLargePreviewImage_ReturnValue) == 0x000058, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_GetLargePreviewImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_GetSmallPreviewImageBrush_ReturnValue) == 0x000078, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_GetSmallPreviewImageBrush_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_GetShortDescription_ReturnValue) == 0x000108, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_GetShortDescription_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_GetBrushResourceAsTexture2D_ReturnValue) == 0x000120, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_GetBrushResourceAsTexture2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_GetDisplayName_ReturnValue) == 0x000128, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_Not_PreBool_ReturnValue) == 0x000140, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, Temp_int_Loop_Counter_Variable) == 0x000144, "Member 'MissionDetailsModifierList_C_PopulateModifiers::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, Temp_byte_Variable) == 0x000148, "Member 'MissionDetailsModifierList_C_PopulateModifiers::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_Less_IntInt_ReturnValue) == 0x000149, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_Add_IntInt_ReturnValue) == 0x00014C, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_BooleanAND_ReturnValue) == 0x000150, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, Temp_byte_Variable2) == 0x000151, "Member 'MissionDetailsModifierList_C_PopulateModifiers::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_Subtract_IntInt_ReturnValue) == 0x000154, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_Greater_IntInt_ReturnValue) == 0x000158, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, K2Node_MakeStruct_FormatArgumentData) == 0x000160, "Member 'MissionDetailsModifierList_C_PopulateModifiers::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, K2Node_MakeArray_Array) == 0x0001A0, "Member 'MissionDetailsModifierList_C_PopulateModifiers::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0001B0, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_Format_ReturnValue) == 0x0001B8, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, Temp_bool_Variable) == 0x0001D0, "Member 'MissionDetailsModifierList_C_PopulateModifiers::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, Temp_bool_Variable2) == 0x0001D1, "Member 'MissionDetailsModifierList_C_PopulateModifiers::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_BooleanAND_ReturnValue2) == 0x0001D2, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_BooleanAND_ReturnValue2' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_BooleanAND_ReturnValue3) == 0x0001D3, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_BooleanAND_ReturnValue3' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, K2Node_Select_Default) == 0x0001D4, "Member 'MissionDetailsModifierList_C_PopulateModifiers::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, Temp_float_Variable) == 0x0001D8, "Member 'MissionDetailsModifierList_C_PopulateModifiers::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, Temp_float_Variable2) == 0x0001DC, "Member 'MissionDetailsModifierList_C_PopulateModifiers::Temp_float_Variable2' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, K2Node_Select2_Default) == 0x0001E0, "Member 'MissionDetailsModifierList_C_PopulateModifiers::K2Node_Select2_Default' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, K2Node_MakeStruct_Margin) == 0x0001E4, "Member 'MissionDetailsModifierList_C_PopulateModifiers::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_GetOwningPlayer_ReturnValue) == 0x0001F8, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_Create_ReturnValue) == 0x000200, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000208, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");

// Function MissionDetailsModifierList.MissionDetailsModifierList_C.CreateDebugModifiers
// 0x0078 (0x0078 - 0x0000)
struct MissionDetailsModifierList_C_CreateDebugModifiers final
{
public:
	TArray<class UFortGameplayModifierItemDefinition*> Modifiers;                                         // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor)
	class UFortGameplayModifierItemDefinition*    DebugMod8;                                         // 0x0010(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGameplayModifierItemDefinition*    DebugMod7;                                         // 0x0018(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGameplayModifierItemDefinition*    DebugMod6;                                         // 0x0020(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGameplayModifierItemDefinition*    DebugMod5;                                         // 0x0028(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGameplayModifierItemDefinition*    DebugMod4;                                         // 0x0030(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGameplayModifierItemDefinition*    DebugMod3;                                         // 0x0038(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGameplayModifierItemDefinition*    DebugMod2;                                         // 0x0040(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGameplayModifierItemDefinition*    DebugMod1;                                         // 0x0048(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable2;                                // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UFortGameplayModifierItemDefinition* K2Node_Select_Default;                             // 0x0060(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue2;        // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MissionDetailsModifierList_C_CreateDebugModifiers) == 0x000008, "Wrong alignment on MissionDetailsModifierList_C_CreateDebugModifiers");
static_assert(sizeof(MissionDetailsModifierList_C_CreateDebugModifiers) == 0x000078, "Wrong size on MissionDetailsModifierList_C_CreateDebugModifiers");
static_assert(offsetof(MissionDetailsModifierList_C_CreateDebugModifiers, Modifiers) == 0x000000, "Member 'MissionDetailsModifierList_C_CreateDebugModifiers::Modifiers' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_CreateDebugModifiers, DebugMod8) == 0x000010, "Member 'MissionDetailsModifierList_C_CreateDebugModifiers::DebugMod8' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_CreateDebugModifiers, DebugMod7) == 0x000018, "Member 'MissionDetailsModifierList_C_CreateDebugModifiers::DebugMod7' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_CreateDebugModifiers, DebugMod6) == 0x000020, "Member 'MissionDetailsModifierList_C_CreateDebugModifiers::DebugMod6' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_CreateDebugModifiers, DebugMod5) == 0x000028, "Member 'MissionDetailsModifierList_C_CreateDebugModifiers::DebugMod5' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_CreateDebugModifiers, DebugMod4) == 0x000030, "Member 'MissionDetailsModifierList_C_CreateDebugModifiers::DebugMod4' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_CreateDebugModifiers, DebugMod3) == 0x000038, "Member 'MissionDetailsModifierList_C_CreateDebugModifiers::DebugMod3' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_CreateDebugModifiers, DebugMod2) == 0x000040, "Member 'MissionDetailsModifierList_C_CreateDebugModifiers::DebugMod2' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_CreateDebugModifiers, DebugMod1) == 0x000048, "Member 'MissionDetailsModifierList_C_CreateDebugModifiers::DebugMod1' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_CreateDebugModifiers, Temp_int_Variable) == 0x000050, "Member 'MissionDetailsModifierList_C_CreateDebugModifiers::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_CreateDebugModifiers, Temp_int_Variable2) == 0x000054, "Member 'MissionDetailsModifierList_C_CreateDebugModifiers::Temp_int_Variable2' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_CreateDebugModifiers, CallFunc_Add_IntInt_ReturnValue) == 0x000058, "Member 'MissionDetailsModifierList_C_CreateDebugModifiers::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_CreateDebugModifiers, CallFunc_RandomIntegerInRange_ReturnValue) == 0x00005C, "Member 'MissionDetailsModifierList_C_CreateDebugModifiers::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_CreateDebugModifiers, K2Node_Select_Default) == 0x000060, "Member 'MissionDetailsModifierList_C_CreateDebugModifiers::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_CreateDebugModifiers, CallFunc_Array_Add_ReturnValue) == 0x000068, "Member 'MissionDetailsModifierList_C_CreateDebugModifiers::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_CreateDebugModifiers, CallFunc_RandomIntegerInRange_ReturnValue2) == 0x00006C, "Member 'MissionDetailsModifierList_C_CreateDebugModifiers::CallFunc_RandomIntegerInRange_ReturnValue2' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_CreateDebugModifiers, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000070, "Member 'MissionDetailsModifierList_C_CreateDebugModifiers::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

}

