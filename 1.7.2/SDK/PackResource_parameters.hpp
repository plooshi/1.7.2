﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PackResource

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function PackResource.PackResource_C.ExecuteUbergraph_PackResource
// 0x0004 (0x0004 - 0x0000)
struct PackResource_C_ExecuteUbergraph_PackResource final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PackResource_C_ExecuteUbergraph_PackResource) == 0x000004, "Wrong alignment on PackResource_C_ExecuteUbergraph_PackResource");
static_assert(sizeof(PackResource_C_ExecuteUbergraph_PackResource) == 0x000004, "Wrong size on PackResource_C_ExecuteUbergraph_PackResource");
static_assert(offsetof(PackResource_C_ExecuteUbergraph_PackResource, EntryPoint) == 0x000000, "Member 'PackResource_C_ExecuteUbergraph_PackResource::EntryPoint' has a wrong offset!");

// Function PackResource.PackResource_C.UpdateCount
// 0x0070 (0x0070 - 0x0000)
struct PackResource_C_UpdateCount final
{
public:
	int32                                         ResourceCount;                                     // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable2;                              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortInventoryContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortResourceItemDefinition*            CallFunc_GetResourceItemDefinition_ReturnValue;    // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetResourceCount_ReturnValue;             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0038(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0048(0x0028)()
};
static_assert(alignof(PackResource_C_UpdateCount) == 0x000008, "Wrong alignment on PackResource_C_UpdateCount");
static_assert(sizeof(PackResource_C_UpdateCount) == 0x000070, "Wrong size on PackResource_C_UpdateCount");
static_assert(offsetof(PackResource_C_UpdateCount, ResourceCount) == 0x000000, "Member 'PackResource_C_UpdateCount::ResourceCount' has a wrong offset!");
static_assert(offsetof(PackResource_C_UpdateCount, Temp_float_Variable) == 0x000004, "Member 'PackResource_C_UpdateCount::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(PackResource_C_UpdateCount, Temp_float_Variable2) == 0x000008, "Member 'PackResource_C_UpdateCount::Temp_float_Variable2' has a wrong offset!");
static_assert(offsetof(PackResource_C_UpdateCount, CallFunc_GetContext_ReturnValue) == 0x000010, "Member 'PackResource_C_UpdateCount::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(PackResource_C_UpdateCount, Temp_bool_Variable) == 0x000018, "Member 'PackResource_C_UpdateCount::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PackResource_C_UpdateCount, CallFunc_GetResourceItemDefinition_ReturnValue) == 0x000020, "Member 'PackResource_C_UpdateCount::CallFunc_GetResourceItemDefinition_ReturnValue' has a wrong offset!");
static_assert(offsetof(PackResource_C_UpdateCount, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000028, "Member 'PackResource_C_UpdateCount::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PackResource_C_UpdateCount, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'PackResource_C_UpdateCount::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PackResource_C_UpdateCount, CallFunc_GetResourceCount_ReturnValue) == 0x000030, "Member 'PackResource_C_UpdateCount::CallFunc_GetResourceCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(PackResource_C_UpdateCount, K2Node_Select_Default) == 0x000034, "Member 'PackResource_C_UpdateCount::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PackResource_C_UpdateCount, K2Node_MakeStruct_LinearColor) == 0x000038, "Member 'PackResource_C_UpdateCount::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(PackResource_C_UpdateCount, K2Node_MakeStruct_SlateColor) == 0x000048, "Member 'PackResource_C_UpdateCount::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function PackResource.PackResource_C.UpdateType
// 0x00A8 (0x00A8 - 0x0000)
struct PackResource_C_UpdateType final
{
public:
	EFortResourceType                             ResourceType_0;                                    // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortInventoryContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortResourceItemDefinition*            CallFunc_GetResourceItemDefinition_ReturnValue;    // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue; // 0x0018(0x0090)()
};
static_assert(alignof(PackResource_C_UpdateType) == 0x000008, "Wrong alignment on PackResource_C_UpdateType");
static_assert(sizeof(PackResource_C_UpdateType) == 0x0000A8, "Wrong size on PackResource_C_UpdateType");
static_assert(offsetof(PackResource_C_UpdateType, ResourceType_0) == 0x000000, "Member 'PackResource_C_UpdateType::ResourceType_0' has a wrong offset!");
static_assert(offsetof(PackResource_C_UpdateType, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'PackResource_C_UpdateType::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(PackResource_C_UpdateType, CallFunc_GetResourceItemDefinition_ReturnValue) == 0x000010, "Member 'PackResource_C_UpdateType::CallFunc_GetResourceItemDefinition_ReturnValue' has a wrong offset!");
static_assert(offsetof(PackResource_C_UpdateType, CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue) == 0x000018, "Member 'PackResource_C_UpdateType::CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue' has a wrong offset!");

}

