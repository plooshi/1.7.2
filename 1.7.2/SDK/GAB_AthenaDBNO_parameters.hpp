﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_AthenaDBNO

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.ExecuteUbergraph_GAB_AthenaDBNO
// 0x01A0 (0x01A0 - 0x0000)
struct GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate2;             // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate3;             // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate4;             // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	class UAbilityTask_StartAbilityState*         CallFunc_StartAbilityState_ReturnValue;            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A[0x6];                                       // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0060(0x00A8)(ConstParm)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate5;             // 0x0120(0x0010)(ZeroConstructor, NoDestructor)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0130(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpecHandle              CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue; // 0x0138(0x0018)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate6;             // 0x0150(0x0010)(ZeroConstructor, NoDestructor)
	float                                         CallFunc_GetInitialHealAmount_Health;              // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_164[0x4];                                      // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEffectSpecHandle              CallFunc_AssignSetByCallerMagnitude_ReturnValue;   // 0x0168(0x0018)()
	struct FActiveGameplayEffectHandle            CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue; // 0x0180(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue2; // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn2;            // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO) == 0x000008, "Wrong alignment on GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO");
static_assert(sizeof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO) == 0x0001A0, "Wrong size on GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, EntryPoint) == 0x000000, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_CreateDelegate_OutputDelegate2) == 0x000018, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_CreateDelegate_OutputDelegate3) == 0x000028, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_CreateDelegate_OutputDelegate4) == 0x000038, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_CreateDelegate_OutputDelegate4' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_StartAbilityState_ReturnValue) == 0x000048, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_StartAbilityState_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x000050, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_IsValid_ReturnValue2) == 0x000059, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_IsValid_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_Event_EventData) == 0x000060, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000108, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000110, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_DynamicCast_bSuccess) == 0x000118, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_CreateDelegate_OutputDelegate5) == 0x000120, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_CreateDelegate_OutputDelegate5' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000130, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue) == 0x000138, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_CreateDelegate_OutputDelegate6) == 0x000150, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_CreateDelegate_OutputDelegate6' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_GetInitialHealAmount_Health) == 0x000160, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_GetInitialHealAmount_Health' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_AssignSetByCallerMagnitude_ReturnValue) == 0x000168, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_AssignSetByCallerMagnitude_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue) == 0x000180, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_GetAvatarActorFromActorInfo_ReturnValue2) == 0x000188, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_GetAvatarActorFromActorInfo_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_DynamicCast_AsFort_Player_Pawn2) == 0x000190, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_DynamicCast_AsFort_Player_Pawn2' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_DynamicCast_bSuccess2) == 0x000198, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_DynamicCast_bSuccess2' has a wrong offset!");

// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.K2_ActivateAbilityFromEvent
// 0x00A8 (0x00A8 - 0x0000)
struct GAB_AthenaDBNO_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00A8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GAB_AthenaDBNO_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GAB_AthenaDBNO_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GAB_AthenaDBNO_C_K2_ActivateAbilityFromEvent) == 0x0000A8, "Wrong size on GAB_AthenaDBNO_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GAB_AthenaDBNO_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GAB_AthenaDBNO_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.InitializeDeathHitDirection
// 0x0158 (0x0158 - 0x0000)
struct GAB_AthenaDBNO_C_InitializeDeathHitDirection final
{
public:
	struct FGameplayEventData                     EventHitData;                                      // 0x0000(0x00A8)(Parm)
	struct FVector                                CallFunc_GetImpulseData_ImpulseDirection;          // 0x00A8(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetImpulseData_KnockbackMagnitude;        // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetImpulseData_KnockbackZAngle;           // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_EffectContextGetHitResult_ReturnValue;    // 0x00C0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0148(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_AthenaDBNO_C_InitializeDeathHitDirection) == 0x000008, "Wrong alignment on GAB_AthenaDBNO_C_InitializeDeathHitDirection");
static_assert(sizeof(GAB_AthenaDBNO_C_InitializeDeathHitDirection) == 0x000158, "Wrong size on GAB_AthenaDBNO_C_InitializeDeathHitDirection");
static_assert(offsetof(GAB_AthenaDBNO_C_InitializeDeathHitDirection, EventHitData) == 0x000000, "Member 'GAB_AthenaDBNO_C_InitializeDeathHitDirection::EventHitData' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_InitializeDeathHitDirection, CallFunc_GetImpulseData_ImpulseDirection) == 0x0000A8, "Member 'GAB_AthenaDBNO_C_InitializeDeathHitDirection::CallFunc_GetImpulseData_ImpulseDirection' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_InitializeDeathHitDirection, CallFunc_GetImpulseData_KnockbackMagnitude) == 0x0000B4, "Member 'GAB_AthenaDBNO_C_InitializeDeathHitDirection::CallFunc_GetImpulseData_KnockbackMagnitude' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_InitializeDeathHitDirection, CallFunc_GetImpulseData_KnockbackZAngle) == 0x0000B8, "Member 'GAB_AthenaDBNO_C_InitializeDeathHitDirection::CallFunc_GetImpulseData_KnockbackZAngle' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_InitializeDeathHitDirection, CallFunc_EffectContextGetHitResult_ReturnValue) == 0x0000C0, "Member 'GAB_AthenaDBNO_C_InitializeDeathHitDirection::CallFunc_EffectContextGetHitResult_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_InitializeDeathHitDirection, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000148, "Member 'GAB_AthenaDBNO_C_InitializeDeathHitDirection::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");

// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.GetInitialHealAmount
// 0x0028 (0x0028 - 0x0000)
struct GAB_AthenaDBNO_C_GetInitialHealAmount final
{
public:
	float                                         Health;                                            // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEvaluateCurveTableResult                     CallFunc_EvaluateCurveTableRow_OutResult;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_EvaluateCurveTableRow_OutXY;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute; // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatAttribute_ReturnValue;            // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_AthenaDBNO_C_GetInitialHealAmount) == 0x000008, "Wrong alignment on GAB_AthenaDBNO_C_GetInitialHealAmount");
static_assert(sizeof(GAB_AthenaDBNO_C_GetInitialHealAmount) == 0x000028, "Wrong size on GAB_AthenaDBNO_C_GetInitialHealAmount");
static_assert(offsetof(GAB_AthenaDBNO_C_GetInitialHealAmount, Health) == 0x000000, "Member 'GAB_AthenaDBNO_C_GetInitialHealAmount::Health' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_GetInitialHealAmount, CallFunc_EvaluateCurveTableRow_OutResult) == 0x000004, "Member 'GAB_AthenaDBNO_C_GetInitialHealAmount::CallFunc_EvaluateCurveTableRow_OutResult' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_GetInitialHealAmount, CallFunc_EvaluateCurveTableRow_OutXY) == 0x000008, "Member 'GAB_AthenaDBNO_C_GetInitialHealAmount::CallFunc_EvaluateCurveTableRow_OutXY' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_GetInitialHealAmount, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000010, "Member 'GAB_AthenaDBNO_C_GetInitialHealAmount::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_GetInitialHealAmount, CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute) == 0x000018, "Member 'GAB_AthenaDBNO_C_GetInitialHealAmount::CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_GetInitialHealAmount, CallFunc_GetFloatAttribute_ReturnValue) == 0x00001C, "Member 'GAB_AthenaDBNO_C_GetInitialHealAmount::CallFunc_GetFloatAttribute_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_GetInitialHealAmount, K2Node_SwitchEnum_CmpSuccess) == 0x000020, "Member 'GAB_AthenaDBNO_C_GetInitialHealAmount::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_GetInitialHealAmount, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000024, "Member 'GAB_AthenaDBNO_C_GetInitialHealAmount::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");

}

