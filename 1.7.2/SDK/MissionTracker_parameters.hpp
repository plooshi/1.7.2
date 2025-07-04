﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionTracker

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function MissionTracker.MissionTracker_C.ExecuteUbergraph_MissionTracker
// 0x0098 (0x0098 - 0x0000)
struct MissionTracker_C_ExecuteUbergraph_MissionTracker final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class UFortQuestManager*                      CallFunc_GetQuestManager_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate2;             // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate3;             // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate4;             // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue2;                  // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                      CallFunc_GetQuestManager_ReturnValue2;             // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate5;             // 0x0070(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate6;             // 0x0088(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(MissionTracker_C_ExecuteUbergraph_MissionTracker) == 0x000008, "Wrong alignment on MissionTracker_C_ExecuteUbergraph_MissionTracker");
static_assert(sizeof(MissionTracker_C_ExecuteUbergraph_MissionTracker) == 0x000098, "Wrong size on MissionTracker_C_ExecuteUbergraph_MissionTracker");
static_assert(offsetof(MissionTracker_C_ExecuteUbergraph_MissionTracker, EntryPoint) == 0x000000, "Member 'MissionTracker_C_ExecuteUbergraph_MissionTracker::EntryPoint' has a wrong offset!");
static_assert(offsetof(MissionTracker_C_ExecuteUbergraph_MissionTracker, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'MissionTracker_C_ExecuteUbergraph_MissionTracker::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionTracker_C_ExecuteUbergraph_MissionTracker, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'MissionTracker_C_ExecuteUbergraph_MissionTracker::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MissionTracker_C_ExecuteUbergraph_MissionTracker, CallFunc_GetQuestManager_ReturnValue) == 0x000020, "Member 'MissionTracker_C_ExecuteUbergraph_MissionTracker::CallFunc_GetQuestManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionTracker_C_ExecuteUbergraph_MissionTracker, K2Node_CreateDelegate_OutputDelegate2) == 0x000028, "Member 'MissionTracker_C_ExecuteUbergraph_MissionTracker::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(MissionTracker_C_ExecuteUbergraph_MissionTracker, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'MissionTracker_C_ExecuteUbergraph_MissionTracker::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionTracker_C_ExecuteUbergraph_MissionTracker, K2Node_CreateDelegate_OutputDelegate3) == 0x000040, "Member 'MissionTracker_C_ExecuteUbergraph_MissionTracker::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(MissionTracker_C_ExecuteUbergraph_MissionTracker, K2Node_CreateDelegate_OutputDelegate4) == 0x000050, "Member 'MissionTracker_C_ExecuteUbergraph_MissionTracker::K2Node_CreateDelegate_OutputDelegate4' has a wrong offset!");
static_assert(offsetof(MissionTracker_C_ExecuteUbergraph_MissionTracker, CallFunc_GetContext_ReturnValue2) == 0x000060, "Member 'MissionTracker_C_ExecuteUbergraph_MissionTracker::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(MissionTracker_C_ExecuteUbergraph_MissionTracker, CallFunc_GetQuestManager_ReturnValue2) == 0x000068, "Member 'MissionTracker_C_ExecuteUbergraph_MissionTracker::CallFunc_GetQuestManager_ReturnValue2' has a wrong offset!");
static_assert(offsetof(MissionTracker_C_ExecuteUbergraph_MissionTracker, K2Node_CreateDelegate_OutputDelegate5) == 0x000070, "Member 'MissionTracker_C_ExecuteUbergraph_MissionTracker::K2Node_CreateDelegate_OutputDelegate5' has a wrong offset!");
static_assert(offsetof(MissionTracker_C_ExecuteUbergraph_MissionTracker, CallFunc_IsValid_ReturnValue2) == 0x000080, "Member 'MissionTracker_C_ExecuteUbergraph_MissionTracker::CallFunc_IsValid_ReturnValue2' has a wrong offset!");
static_assert(offsetof(MissionTracker_C_ExecuteUbergraph_MissionTracker, K2Node_CreateDelegate_OutputDelegate6) == 0x000088, "Member 'MissionTracker_C_ExecuteUbergraph_MissionTracker::K2Node_CreateDelegate_OutputDelegate6' has a wrong offset!");

// Function MissionTracker.MissionTracker_C.UpdateVisibility
// 0x0040 (0x0040 - 0x0000)
struct MissionTracker_C_UpdateVisibility final
{
public:
	bool                                          bHasTrackedQuests;                                 // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasVisibleMission_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortQuestManager*                      CallFunc_GetQuestManager_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UFortQuestItem*>                 CallFunc_GetPinnedQuests_OutPinnedQuestItems;      // 0x0028(0x0010)(ZeroConstructor, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MissionTracker_C_UpdateVisibility) == 0x000008, "Wrong alignment on MissionTracker_C_UpdateVisibility");
static_assert(sizeof(MissionTracker_C_UpdateVisibility) == 0x000040, "Wrong size on MissionTracker_C_UpdateVisibility");
static_assert(offsetof(MissionTracker_C_UpdateVisibility, bHasTrackedQuests) == 0x000000, "Member 'MissionTracker_C_UpdateVisibility::bHasTrackedQuests' has a wrong offset!");
static_assert(offsetof(MissionTracker_C_UpdateVisibility, Temp_byte_Variable) == 0x000001, "Member 'MissionTracker_C_UpdateVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MissionTracker_C_UpdateVisibility, Temp_byte_Variable2) == 0x000002, "Member 'MissionTracker_C_UpdateVisibility::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(MissionTracker_C_UpdateVisibility, Temp_bool_Variable) == 0x000003, "Member 'MissionTracker_C_UpdateVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MissionTracker_C_UpdateVisibility, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'MissionTracker_C_UpdateVisibility::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionTracker_C_UpdateVisibility, CallFunc_HasVisibleMission_ReturnValue) == 0x000010, "Member 'MissionTracker_C_UpdateVisibility::CallFunc_HasVisibleMission_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionTracker_C_UpdateVisibility, CallFunc_GetQuestManager_ReturnValue) == 0x000018, "Member 'MissionTracker_C_UpdateVisibility::CallFunc_GetQuestManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionTracker_C_UpdateVisibility, CallFunc_BooleanOR_ReturnValue) == 0x000020, "Member 'MissionTracker_C_UpdateVisibility::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionTracker_C_UpdateVisibility, CallFunc_GetPinnedQuests_OutPinnedQuestItems) == 0x000028, "Member 'MissionTracker_C_UpdateVisibility::CallFunc_GetPinnedQuests_OutPinnedQuestItems' has a wrong offset!");
static_assert(offsetof(MissionTracker_C_UpdateVisibility, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'MissionTracker_C_UpdateVisibility::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionTracker_C_UpdateVisibility, K2Node_Select_Default) == 0x00003C, "Member 'MissionTracker_C_UpdateVisibility::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MissionTracker_C_UpdateVisibility, CallFunc_Greater_IntInt_ReturnValue) == 0x00003D, "Member 'MissionTracker_C_UpdateVisibility::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionTracker_C_UpdateVisibility, CallFunc_IsValid_ReturnValue) == 0x00003E, "Member 'MissionTracker_C_UpdateVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MissionTracker.MissionTracker_C.HasVisibleMission
// 0x0003 (0x0003 - 0x0000)
struct MissionTracker_C_HasVisibleMission final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          bHasVisibleMission;                                // 0x0001(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MissionTracker_C_HasVisibleMission) == 0x000001, "Wrong alignment on MissionTracker_C_HasVisibleMission");
static_assert(sizeof(MissionTracker_C_HasVisibleMission) == 0x000003, "Wrong size on MissionTracker_C_HasVisibleMission");
static_assert(offsetof(MissionTracker_C_HasVisibleMission, ReturnValue) == 0x000000, "Member 'MissionTracker_C_HasVisibleMission::ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionTracker_C_HasVisibleMission, bHasVisibleMission) == 0x000001, "Member 'MissionTracker_C_HasVisibleMission::bHasVisibleMission' has a wrong offset!");
static_assert(offsetof(MissionTracker_C_HasVisibleMission, CallFunc_IsVisible_ReturnValue) == 0x000002, "Member 'MissionTracker_C_HasVisibleMission::CallFunc_IsVisible_ReturnValue' has a wrong offset!");

}

