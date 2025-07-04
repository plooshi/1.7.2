﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SkillTreeBPLibrary

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.UpdateSkillTreeNodeMaterial_StaticData
// 0x0528 (0x0528 - 0x0000)
struct SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData final
{
public:
	class UObject*                                World_Context;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Material;                                          // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHomebaseNode                          NodeData;                                          // 0x0010(0x00C0)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FFortSkillTreeNodeDisplayData          DisplayData;                                       // 0x00D0(0x0368)(Parm)
	class UCommonButton*                          Button;                                            // 0x0438(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0440(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable;                               // 0x0448(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortBrushSize                                CallFunc_GetSkillTreeNodeIconSizeByMagnitude_Icon_Size; // 0x0450(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0451(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_452[0x6];                                      // 0x0452(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue; // 0x0458(0x0090)(ConstParm)
	struct FLinearColor                           CallFunc_GetSkillTreeNodeCostTint_NodeTintColour;  // 0x04E8(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_GetBrushResourceAsTexture2D_ReturnValue;  // 0x04F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable2;                              // 0x0500(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable3;                              // 0x0508(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable4;                              // 0x0510(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortHomebaseNodeMagnitude                    Temp_byte_Variable;                                // 0x0518(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_519[0x7];                                      // 0x0519(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_Select_Default;                             // 0x0520(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData) == 0x000008, "Wrong alignment on SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData");
static_assert(sizeof(SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData) == 0x000528, "Wrong size on SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData");
static_assert(offsetof(SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData, World_Context) == 0x000000, "Member 'SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData::World_Context' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData, Material) == 0x000008, "Member 'SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData::Material' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData, NodeData) == 0x000010, "Member 'SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData::NodeData' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData, DisplayData) == 0x0000D0, "Member 'SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData::DisplayData' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData, Button) == 0x000438, "Member 'SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData::Button' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData, __WorldContext) == 0x000440, "Member 'SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData::__WorldContext' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData, Temp_class_Variable) == 0x000448, "Member 'SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData, CallFunc_GetSkillTreeNodeIconSizeByMagnitude_Icon_Size) == 0x000450, "Member 'SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData::CallFunc_GetSkillTreeNodeIconSizeByMagnitude_Icon_Size' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData, K2Node_SwitchEnum_CmpSuccess) == 0x000451, "Member 'SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData, CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue) == 0x000458, "Member 'SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData::CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData, CallFunc_GetSkillTreeNodeCostTint_NodeTintColour) == 0x0004E8, "Member 'SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData::CallFunc_GetSkillTreeNodeCostTint_NodeTintColour' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData, CallFunc_GetBrushResourceAsTexture2D_ReturnValue) == 0x0004F8, "Member 'SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData::CallFunc_GetBrushResourceAsTexture2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData, Temp_class_Variable2) == 0x000500, "Member 'SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData::Temp_class_Variable2' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData, Temp_class_Variable3) == 0x000508, "Member 'SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData::Temp_class_Variable3' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData, Temp_class_Variable4) == 0x000510, "Member 'SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData::Temp_class_Variable4' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData, Temp_byte_Variable) == 0x000518, "Member 'SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData, K2Node_Select_Default) == 0x000520, "Member 'SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData::K2Node_Select_Default' has a wrong offset!");

// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeCostTint
// 0x0160 (0x0160 - 0x0000)
struct SkillTreeBPLibrary_C_GetSkillTreeNodeCostTint final
{
public:
	struct FHomebaseNode                          HomebaseNode;                                      // 0x0000(0x00C0)(ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                __WorldContext;                                    // 0x00C0(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           NodeTintColour;                                    // 0x00C8(0x0010)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortHomebaseUIContext*                 CallFunc_GetContext_ReturnValue2;                  // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            CallFunc_GetQuestNodeColour_ReturnValue;           // 0x00E8(0x0028)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_115[0x3];                                      // 0x0115(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortItemQuantityPair                  CallFunc_Array_Get_Item;                           // 0x0118(0x0028)()
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_141[0x7];                                      // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItemDefinition*                    CallFunc_GetItemFromItemQuantityPair_ReturnValue;  // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTokenType*                         K2Node_DynamicCast_AsFort_Token_Type;              // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillTreeBPLibrary_C_GetSkillTreeNodeCostTint) == 0x000008, "Wrong alignment on SkillTreeBPLibrary_C_GetSkillTreeNodeCostTint");
static_assert(sizeof(SkillTreeBPLibrary_C_GetSkillTreeNodeCostTint) == 0x000160, "Wrong size on SkillTreeBPLibrary_C_GetSkillTreeNodeCostTint");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeCostTint, HomebaseNode) == 0x000000, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeCostTint::HomebaseNode' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeCostTint, __WorldContext) == 0x0000C0, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeCostTint::__WorldContext' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeCostTint, NodeTintColour) == 0x0000C8, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeCostTint::NodeTintColour' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeCostTint, CallFunc_GetContext_ReturnValue) == 0x0000D8, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeCostTint::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeCostTint, CallFunc_GetContext_ReturnValue2) == 0x0000E0, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeCostTint::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeCostTint, CallFunc_GetQuestNodeColour_ReturnValue) == 0x0000E8, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeCostTint::CallFunc_GetQuestNodeColour_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeCostTint, CallFunc_Array_Length_ReturnValue) == 0x000110, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeCostTint::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeCostTint, CallFunc_Greater_IntInt_ReturnValue) == 0x000114, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeCostTint::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeCostTint, CallFunc_Array_Get_Item) == 0x000118, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeCostTint::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeCostTint, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000140, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeCostTint::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeCostTint, CallFunc_GetItemFromItemQuantityPair_ReturnValue) == 0x000148, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeCostTint::CallFunc_GetItemFromItemQuantityPair_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeCostTint, K2Node_DynamicCast_AsFort_Token_Type) == 0x000150, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeCostTint::K2Node_DynamicCast_AsFort_Token_Type' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeCostTint, K2Node_DynamicCast_bSuccess) == 0x000158, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeCostTint::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.UpdateSkillTreeNodeMaterial_DynamicData
// 0x0030 (0x0030 - 0x0000)
struct SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_DynamicData final
{
public:
	class UObject*                                World_Context;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Material;                                          // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHomebaseNodeState                     NodeState;                                         // 0x0010(0x0008)(Parm, NoDestructor)
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_BoolToFloat_ReturnValue;             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_BoolToFloat_ReturnValue2;            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_BoolToFloat_ReturnValue3;            // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_DynamicData) == 0x000008, "Wrong alignment on SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_DynamicData");
static_assert(sizeof(SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_DynamicData) == 0x000030, "Wrong size on SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_DynamicData");
static_assert(offsetof(SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_DynamicData, World_Context) == 0x000000, "Member 'SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_DynamicData::World_Context' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_DynamicData, Material) == 0x000008, "Member 'SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_DynamicData::Material' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_DynamicData, NodeState) == 0x000010, "Member 'SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_DynamicData::NodeState' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_DynamicData, __WorldContext) == 0x000018, "Member 'SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_DynamicData::__WorldContext' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_DynamicData, CallFunc_Conv_BoolToFloat_ReturnValue) == 0x000020, "Member 'SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_DynamicData::CallFunc_Conv_BoolToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_DynamicData, CallFunc_Conv_BoolToFloat_ReturnValue2) == 0x000024, "Member 'SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_DynamicData::CallFunc_Conv_BoolToFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_DynamicData, CallFunc_BooleanAND_ReturnValue) == 0x000028, "Member 'SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_DynamicData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_DynamicData, CallFunc_Conv_BoolToFloat_ReturnValue3) == 0x00002C, "Member 'SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_DynamicData::CallFunc_Conv_BoolToFloat_ReturnValue3' has a wrong offset!");

// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeSizeByMagnitude
// 0x0040 (0x0040 - 0x0000)
struct SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude final
{
public:
	EFortHomebaseNodeMagnitude                    Node_Magnitude;                                    // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortHomebaseNodeDisplayType                  Display_Type;                                      // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                World_Context;                                     // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Size;                                              // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSkillTreeNodeShapeByDisplayType_IsSquare; // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSkillTreeNodeShapeByDisplayType_IsExitNode; // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F[0x1];                                       // 0x001F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable2;                              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortHomebaseNodeMagnitude                    Temp_byte_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable3;                              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable4;                              // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable5;                              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select2_Default;                            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude) == 0x000008, "Wrong alignment on SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude");
static_assert(sizeof(SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude) == 0x000040, "Wrong size on SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude, Node_Magnitude) == 0x000000, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude::Node_Magnitude' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude, Display_Type) == 0x000001, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude::Display_Type' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude, World_Context) == 0x000008, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude::World_Context' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude, __WorldContext) == 0x000010, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude::__WorldContext' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude, Size) == 0x000018, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude::Size' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude, Temp_bool_Variable) == 0x00001C, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude, CallFunc_GetSkillTreeNodeShapeByDisplayType_IsSquare) == 0x00001D, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude::CallFunc_GetSkillTreeNodeShapeByDisplayType_IsSquare' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude, CallFunc_GetSkillTreeNodeShapeByDisplayType_IsExitNode) == 0x00001E, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude::CallFunc_GetSkillTreeNodeShapeByDisplayType_IsExitNode' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude, Temp_float_Variable) == 0x000020, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude, Temp_float_Variable2) == 0x000024, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude::Temp_float_Variable2' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude, Temp_byte_Variable) == 0x000028, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude, K2Node_Select_Default) == 0x00002C, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude, Temp_float_Variable3) == 0x000030, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude::Temp_float_Variable3' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude, Temp_float_Variable4) == 0x000034, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude::Temp_float_Variable4' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude, Temp_float_Variable5) == 0x000038, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude::Temp_float_Variable5' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude, K2Node_Select2_Default) == 0x00003C, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude::K2Node_Select2_Default' has a wrong offset!");

// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeShapeByDisplayType
// 0x0028 (0x0028 - 0x0000)
struct SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType final
{
public:
	EFortHomebaseNodeDisplayType                  Display_Type;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSquare;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsExitNode;                                        // 0x0011(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortHomebaseNodeDisplayType                  Temp_byte_Variable;                                // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable2;                               // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable3;                               // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable4;                               // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable5;                               // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable6;                               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable7;                               // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortHomebaseNodeDisplayType                  Temp_byte_Variable2;                               // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable8;                               // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable9;                               // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable10;                              // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable11;                              // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable12;                              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable13;                              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable14;                              // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select2_Default;                            // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType) == 0x000008, "Wrong alignment on SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType");
static_assert(sizeof(SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType) == 0x000028, "Wrong size on SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType, Display_Type) == 0x000000, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType::Display_Type' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType, __WorldContext) == 0x000008, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType::__WorldContext' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType, IsSquare) == 0x000010, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType::IsSquare' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType, IsExitNode) == 0x000011, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType::IsExitNode' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType, Temp_byte_Variable) == 0x000012, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType, Temp_bool_Variable) == 0x000013, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType, Temp_bool_Variable2) == 0x000014, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType, Temp_bool_Variable3) == 0x000015, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType::Temp_bool_Variable3' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType, Temp_bool_Variable4) == 0x000016, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType::Temp_bool_Variable4' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType, Temp_bool_Variable5) == 0x000017, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType::Temp_bool_Variable5' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType, Temp_bool_Variable6) == 0x000018, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType::Temp_bool_Variable6' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType, Temp_bool_Variable7) == 0x000019, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType::Temp_bool_Variable7' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType, Temp_byte_Variable2) == 0x00001A, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType, K2Node_Select_Default) == 0x00001B, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType, Temp_bool_Variable8) == 0x00001C, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType::Temp_bool_Variable8' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType, Temp_bool_Variable9) == 0x00001D, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType::Temp_bool_Variable9' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType, Temp_bool_Variable10) == 0x00001E, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType::Temp_bool_Variable10' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType, Temp_bool_Variable11) == 0x00001F, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType::Temp_bool_Variable11' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType, Temp_bool_Variable12) == 0x000020, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType::Temp_bool_Variable12' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType, Temp_bool_Variable13) == 0x000021, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType::Temp_bool_Variable13' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType, Temp_bool_Variable14) == 0x000022, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType::Temp_bool_Variable14' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType, K2Node_Select2_Default) == 0x000023, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType::K2Node_Select2_Default' has a wrong offset!");

// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeIconSizeByMagnitude
// 0x0018 (0x0018 - 0x0000)
struct SkillTreeBPLibrary_C_GetSkillTreeNodeIconSizeByMagnitude final
{
public:
	EFortHomebaseNodeMagnitude                    Node_Magnitude;                                    // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortBrushSize                                Icon_Size;                                         // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortHomebaseNodeMagnitude                    Temp_byte_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortBrushSize                                Temp_byte_Variable2;                               // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortBrushSize                                Temp_byte_Variable3;                               // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortBrushSize                                Temp_byte_Variable4;                               // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortBrushSize                                Temp_byte_Variable5;                               // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortBrushSize                                K2Node_Select_Default;                             // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillTreeBPLibrary_C_GetSkillTreeNodeIconSizeByMagnitude) == 0x000008, "Wrong alignment on SkillTreeBPLibrary_C_GetSkillTreeNodeIconSizeByMagnitude");
static_assert(sizeof(SkillTreeBPLibrary_C_GetSkillTreeNodeIconSizeByMagnitude) == 0x000018, "Wrong size on SkillTreeBPLibrary_C_GetSkillTreeNodeIconSizeByMagnitude");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeIconSizeByMagnitude, Node_Magnitude) == 0x000000, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeIconSizeByMagnitude::Node_Magnitude' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeIconSizeByMagnitude, __WorldContext) == 0x000008, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeIconSizeByMagnitude::__WorldContext' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeIconSizeByMagnitude, Icon_Size) == 0x000010, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeIconSizeByMagnitude::Icon_Size' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeIconSizeByMagnitude, Temp_byte_Variable) == 0x000011, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeIconSizeByMagnitude::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeIconSizeByMagnitude, Temp_byte_Variable2) == 0x000012, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeIconSizeByMagnitude::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeIconSizeByMagnitude, Temp_byte_Variable3) == 0x000013, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeIconSizeByMagnitude::Temp_byte_Variable3' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeIconSizeByMagnitude, Temp_byte_Variable4) == 0x000014, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeIconSizeByMagnitude::Temp_byte_Variable4' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeIconSizeByMagnitude, Temp_byte_Variable5) == 0x000015, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeIconSizeByMagnitude::Temp_byte_Variable5' has a wrong offset!");
static_assert(offsetof(SkillTreeBPLibrary_C_GetSkillTreeNodeIconSizeByMagnitude, K2Node_Select_Default) == 0x000016, "Member 'SkillTreeBPLibrary_C_GetSkillTreeNodeIconSizeByMagnitude::K2Node_Select_Default' has a wrong offset!");

}

