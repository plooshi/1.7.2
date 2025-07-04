﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TracerGeneric

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function TracerGeneric.TracerGeneric_C.ExecuteUbergraph_TracerGeneric
// 0x004C (0x004C - 0x0000)
struct TracerGeneric_C_ExecuteUbergraph_TracerGeneric final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TrackPassBy_Changed;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_TrackPassBy_Pass_Distance;                // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_Event_Start;                                // 0x0014(0x000C)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_End;                                  // 0x0020(0x000C)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TrackPassBy_Changed2;                     // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E[0x2];                                       // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_TrackPassBy_Pass_Distance2;               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0034(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue2;                  // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42[0x2];                                       // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_MapRangeClamped_ReturnValue;              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TracerGeneric_C_ExecuteUbergraph_TracerGeneric) == 0x000004, "Wrong alignment on TracerGeneric_C_ExecuteUbergraph_TracerGeneric");
static_assert(sizeof(TracerGeneric_C_ExecuteUbergraph_TracerGeneric) == 0x00004C, "Wrong size on TracerGeneric_C_ExecuteUbergraph_TracerGeneric");
static_assert(offsetof(TracerGeneric_C_ExecuteUbergraph_TracerGeneric, EntryPoint) == 0x000000, "Member 'TracerGeneric_C_ExecuteUbergraph_TracerGeneric::EntryPoint' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_ExecuteUbergraph_TracerGeneric, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'TracerGeneric_C_ExecuteUbergraph_TracerGeneric::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_ExecuteUbergraph_TracerGeneric, CallFunc_TrackPassBy_Changed) == 0x000008, "Member 'TracerGeneric_C_ExecuteUbergraph_TracerGeneric::CallFunc_TrackPassBy_Changed' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_ExecuteUbergraph_TracerGeneric, CallFunc_TrackPassBy_Pass_Distance) == 0x00000C, "Member 'TracerGeneric_C_ExecuteUbergraph_TracerGeneric::CallFunc_TrackPassBy_Pass_Distance' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_ExecuteUbergraph_TracerGeneric, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'TracerGeneric_C_ExecuteUbergraph_TracerGeneric::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_ExecuteUbergraph_TracerGeneric, K2Node_Event_Start) == 0x000014, "Member 'TracerGeneric_C_ExecuteUbergraph_TracerGeneric::K2Node_Event_Start' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_ExecuteUbergraph_TracerGeneric, K2Node_Event_End) == 0x000020, "Member 'TracerGeneric_C_ExecuteUbergraph_TracerGeneric::K2Node_Event_End' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_ExecuteUbergraph_TracerGeneric, CallFunc_BooleanAND_ReturnValue) == 0x00002C, "Member 'TracerGeneric_C_ExecuteUbergraph_TracerGeneric::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_ExecuteUbergraph_TracerGeneric, CallFunc_TrackPassBy_Changed2) == 0x00002D, "Member 'TracerGeneric_C_ExecuteUbergraph_TracerGeneric::CallFunc_TrackPassBy_Changed2' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_ExecuteUbergraph_TracerGeneric, CallFunc_TrackPassBy_Pass_Distance2) == 0x000030, "Member 'TracerGeneric_C_ExecuteUbergraph_TracerGeneric::CallFunc_TrackPassBy_Pass_Distance2' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_ExecuteUbergraph_TracerGeneric, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000034, "Member 'TracerGeneric_C_ExecuteUbergraph_TracerGeneric::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_ExecuteUbergraph_TracerGeneric, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000040, "Member 'TracerGeneric_C_ExecuteUbergraph_TracerGeneric::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_ExecuteUbergraph_TracerGeneric, CallFunc_BooleanAND_ReturnValue2) == 0x000041, "Member 'TracerGeneric_C_ExecuteUbergraph_TracerGeneric::CallFunc_BooleanAND_ReturnValue2' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_ExecuteUbergraph_TracerGeneric, CallFunc_MapRangeClamped_ReturnValue) == 0x000044, "Member 'TracerGeneric_C_ExecuteUbergraph_TracerGeneric::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_ExecuteUbergraph_TracerGeneric, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000048, "Member 'TracerGeneric_C_ExecuteUbergraph_TracerGeneric::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");

// Function TracerGeneric.TracerGeneric_C.OnInit
// 0x0018 (0x0018 - 0x0000)
struct TracerGeneric_C_OnInit final
{
public:
	struct FVector                                Start_0;                                           // 0x0000(0x000C)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                End_0;                                             // 0x000C(0x000C)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TracerGeneric_C_OnInit) == 0x000004, "Wrong alignment on TracerGeneric_C_OnInit");
static_assert(sizeof(TracerGeneric_C_OnInit) == 0x000018, "Wrong size on TracerGeneric_C_OnInit");
static_assert(offsetof(TracerGeneric_C_OnInit, Start_0) == 0x000000, "Member 'TracerGeneric_C_OnInit::Start_0' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_OnInit, End_0) == 0x00000C, "Member 'TracerGeneric_C_OnInit::End_0' has a wrong offset!");

// Function TracerGeneric.TracerGeneric_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct TracerGeneric_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TracerGeneric_C_ReceiveTick) == 0x000004, "Wrong alignment on TracerGeneric_C_ReceiveTick");
static_assert(sizeof(TracerGeneric_C_ReceiveTick) == 0x000004, "Wrong size on TracerGeneric_C_ReceiveTick");
static_assert(offsetof(TracerGeneric_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'TracerGeneric_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function TracerGeneric.TracerGeneric_C.UserConstructionScript
// 0x0088 (0x0088 - 0x0000)
struct TracerGeneric_C_UserConstructionScript final
{
public:
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0000(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(TracerGeneric_C_UserConstructionScript) == 0x000008, "Wrong alignment on TracerGeneric_C_UserConstructionScript");
static_assert(sizeof(TracerGeneric_C_UserConstructionScript) == 0x000088, "Wrong size on TracerGeneric_C_UserConstructionScript");
static_assert(offsetof(TracerGeneric_C_UserConstructionScript, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000000, "Member 'TracerGeneric_C_UserConstructionScript::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");

// Function TracerGeneric.TracerGeneric_C.TrackPassBy
// 0x0098 (0x0098 - 0x0000)
struct TracerGeneric_C_TrackPassBy final
{
public:
	bool                                          Changed;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Pass_Distance;                                     // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ChangedResult;                                     // 0x0008(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x000C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue2;         // 0x0018(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0024(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_ProjectVectorOnToVector_ReturnValue;      // 0x0034(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0040(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue2;       // 0x004C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue3;         // 0x0058(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        CallFunc_GetLocalPawnForPassBy_ReturnValue;        // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue4;         // 0x0070(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue3;       // 0x007C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Dot_VectorVector_ReturnValue;             // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SignOfFloat_ReturnValue;                  // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TracerGeneric_C_TrackPassBy) == 0x000008, "Wrong alignment on TracerGeneric_C_TrackPassBy");
static_assert(sizeof(TracerGeneric_C_TrackPassBy) == 0x000098, "Wrong size on TracerGeneric_C_TrackPassBy");
static_assert(offsetof(TracerGeneric_C_TrackPassBy, Changed) == 0x000000, "Member 'TracerGeneric_C_TrackPassBy::Changed' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_TrackPassBy, Pass_Distance) == 0x000004, "Member 'TracerGeneric_C_TrackPassBy::Pass_Distance' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_TrackPassBy, ChangedResult) == 0x000008, "Member 'TracerGeneric_C_TrackPassBy::ChangedResult' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_TrackPassBy, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00000C, "Member 'TracerGeneric_C_TrackPassBy::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_TrackPassBy, CallFunc_K2_GetActorLocation_ReturnValue2) == 0x000018, "Member 'TracerGeneric_C_TrackPassBy::CallFunc_K2_GetActorLocation_ReturnValue2' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_TrackPassBy, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000024, "Member 'TracerGeneric_C_TrackPassBy::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_TrackPassBy, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'TracerGeneric_C_TrackPassBy::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_TrackPassBy, CallFunc_ProjectVectorOnToVector_ReturnValue) == 0x000034, "Member 'TracerGeneric_C_TrackPassBy::CallFunc_ProjectVectorOnToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_TrackPassBy, CallFunc_Add_VectorVector_ReturnValue) == 0x000040, "Member 'TracerGeneric_C_TrackPassBy::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_TrackPassBy, CallFunc_Subtract_VectorVector_ReturnValue2) == 0x00004C, "Member 'TracerGeneric_C_TrackPassBy::CallFunc_Subtract_VectorVector_ReturnValue2' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_TrackPassBy, CallFunc_K2_GetActorLocation_ReturnValue3) == 0x000058, "Member 'TracerGeneric_C_TrackPassBy::CallFunc_K2_GetActorLocation_ReturnValue3' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_TrackPassBy, CallFunc_VSize_ReturnValue) == 0x000064, "Member 'TracerGeneric_C_TrackPassBy::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_TrackPassBy, CallFunc_GetLocalPawnForPassBy_ReturnValue) == 0x000068, "Member 'TracerGeneric_C_TrackPassBy::CallFunc_GetLocalPawnForPassBy_ReturnValue' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_TrackPassBy, CallFunc_K2_GetActorLocation_ReturnValue4) == 0x000070, "Member 'TracerGeneric_C_TrackPassBy::CallFunc_K2_GetActorLocation_ReturnValue4' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_TrackPassBy, CallFunc_Subtract_VectorVector_ReturnValue3) == 0x00007C, "Member 'TracerGeneric_C_TrackPassBy::CallFunc_Subtract_VectorVector_ReturnValue3' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_TrackPassBy, CallFunc_Dot_VectorVector_ReturnValue) == 0x000088, "Member 'TracerGeneric_C_TrackPassBy::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_TrackPassBy, CallFunc_SignOfFloat_ReturnValue) == 0x00008C, "Member 'TracerGeneric_C_TrackPassBy::CallFunc_SignOfFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_TrackPassBy, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x000090, "Member 'TracerGeneric_C_TrackPassBy::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function TracerGeneric.TracerGeneric_C.PlayPassBySound
// 0x009C (0x009C - 0x0000)
struct TracerGeneric_C_PlayPassBySound final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x000C)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorRightVector_ReturnValue;          // 0x000C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0018(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0024(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x003C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorRightVector_ReturnValue2;         // 0x0048(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X2;                           // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y2;                           // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z2;                           // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue2;                  // 0x0060(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Dot_VectorVector_ReturnValue;             // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RadiansToDegrees_ReturnValue;             // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_RotateAngleAxis_ReturnValue;              // 0x0078(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0084(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0090(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TracerGeneric_C_PlayPassBySound) == 0x000004, "Wrong alignment on TracerGeneric_C_PlayPassBySound");
static_assert(sizeof(TracerGeneric_C_PlayPassBySound) == 0x00009C, "Wrong size on TracerGeneric_C_PlayPassBySound");
static_assert(offsetof(TracerGeneric_C_PlayPassBySound, Location) == 0x000000, "Member 'TracerGeneric_C_PlayPassBySound::Location' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_PlayPassBySound, CallFunc_GetActorRightVector_ReturnValue) == 0x00000C, "Member 'TracerGeneric_C_PlayPassBySound::CallFunc_GetActorRightVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_PlayPassBySound, CallFunc_Normal_ReturnValue) == 0x000018, "Member 'TracerGeneric_C_PlayPassBySound::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_PlayPassBySound, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000024, "Member 'TracerGeneric_C_PlayPassBySound::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_PlayPassBySound, CallFunc_BreakVector_X) == 0x000030, "Member 'TracerGeneric_C_PlayPassBySound::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_PlayPassBySound, CallFunc_BreakVector_Y) == 0x000034, "Member 'TracerGeneric_C_PlayPassBySound::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_PlayPassBySound, CallFunc_BreakVector_Z) == 0x000038, "Member 'TracerGeneric_C_PlayPassBySound::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_PlayPassBySound, CallFunc_MakeVector_ReturnValue) == 0x00003C, "Member 'TracerGeneric_C_PlayPassBySound::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_PlayPassBySound, CallFunc_GetActorRightVector_ReturnValue2) == 0x000048, "Member 'TracerGeneric_C_PlayPassBySound::CallFunc_GetActorRightVector_ReturnValue2' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_PlayPassBySound, CallFunc_BreakVector_X2) == 0x000054, "Member 'TracerGeneric_C_PlayPassBySound::CallFunc_BreakVector_X2' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_PlayPassBySound, CallFunc_BreakVector_Y2) == 0x000058, "Member 'TracerGeneric_C_PlayPassBySound::CallFunc_BreakVector_Y2' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_PlayPassBySound, CallFunc_BreakVector_Z2) == 0x00005C, "Member 'TracerGeneric_C_PlayPassBySound::CallFunc_BreakVector_Z2' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_PlayPassBySound, CallFunc_MakeVector_ReturnValue2) == 0x000060, "Member 'TracerGeneric_C_PlayPassBySound::CallFunc_MakeVector_ReturnValue2' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_PlayPassBySound, CallFunc_Dot_VectorVector_ReturnValue) == 0x00006C, "Member 'TracerGeneric_C_PlayPassBySound::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_PlayPassBySound, CallFunc_RadiansToDegrees_ReturnValue) == 0x000070, "Member 'TracerGeneric_C_PlayPassBySound::CallFunc_RadiansToDegrees_ReturnValue' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_PlayPassBySound, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000074, "Member 'TracerGeneric_C_PlayPassBySound::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_PlayPassBySound, CallFunc_RotateAngleAxis_ReturnValue) == 0x000078, "Member 'TracerGeneric_C_PlayPassBySound::CallFunc_RotateAngleAxis_ReturnValue' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_PlayPassBySound, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000084, "Member 'TracerGeneric_C_PlayPassBySound::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_PlayPassBySound, CallFunc_Add_VectorVector_ReturnValue) == 0x000090, "Member 'TracerGeneric_C_PlayPassBySound::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");

// Function TracerGeneric.TracerGeneric_C.GetLocalPawnForPassBy
// 0x0048 (0x0048 - 0x0000)
struct TracerGeneric_C_GetLocalPawnForPassBy final
{
public:
	class AFortPlayerPawn*                        ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortPlayerController*>          CallFunc_GetLocalFortPlayerControllers_ReturnValue; // 0x0010(0x0010)(ZeroConstructor, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerController*                  CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        CallFunc_GetPlayerPawn_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TracerGeneric_C_GetLocalPawnForPassBy) == 0x000008, "Wrong alignment on TracerGeneric_C_GetLocalPawnForPassBy");
static_assert(sizeof(TracerGeneric_C_GetLocalPawnForPassBy) == 0x000048, "Wrong size on TracerGeneric_C_GetLocalPawnForPassBy");
static_assert(offsetof(TracerGeneric_C_GetLocalPawnForPassBy, ReturnValue) == 0x000000, "Member 'TracerGeneric_C_GetLocalPawnForPassBy::ReturnValue' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_GetLocalPawnForPassBy, CallFunc_GetInstigator_ReturnValue) == 0x000008, "Member 'TracerGeneric_C_GetLocalPawnForPassBy::CallFunc_GetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_GetLocalPawnForPassBy, CallFunc_GetLocalFortPlayerControllers_ReturnValue) == 0x000010, "Member 'TracerGeneric_C_GetLocalPawnForPassBy::CallFunc_GetLocalFortPlayerControllers_ReturnValue' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_GetLocalPawnForPassBy, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'TracerGeneric_C_GetLocalPawnForPassBy::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_GetLocalPawnForPassBy, CallFunc_Array_Get_Item) == 0x000028, "Member 'TracerGeneric_C_GetLocalPawnForPassBy::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_GetLocalPawnForPassBy, CallFunc_Greater_IntInt_ReturnValue) == 0x000030, "Member 'TracerGeneric_C_GetLocalPawnForPassBy::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_GetLocalPawnForPassBy, CallFunc_GetPlayerPawn_ReturnValue) == 0x000038, "Member 'TracerGeneric_C_GetLocalPawnForPassBy::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(TracerGeneric_C_GetLocalPawnForPassBy, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000040, "Member 'TracerGeneric_C_GetLocalPawnForPassBy::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");

}

