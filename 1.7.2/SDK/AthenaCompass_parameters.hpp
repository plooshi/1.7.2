﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaCompass

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function AthenaCompass.AthenaCompass_C.ExecuteUbergraph_AthenaCompass
// 0x00C8 (0x00C8 - 0x0000)
struct AthenaCompass_C_ExecuteUbergraph_AthenaCompass final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0034)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetViewTarget_ReturnValue;                // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x005C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerAthena*            K2Node_DynamicCast_AsFort_Player_Controller_Athena; // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B[0x1];                                       // 0x007B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue2;         // 0x007C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetCameraRotation_ReturnValue;            // 0x008C(0x000C)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerStateAthena*                 CallFunc_Array_Get_Item;                           // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x3];                                       // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UImage*>                         K2Node_MakeArray_Array;                            // 0x00B0(0x0010)(ZeroConstructor, ReferenceParm)
	class UImage*                                 CallFunc_Array_Get_Item2;                          // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaCompass_C_ExecuteUbergraph_AthenaCompass) == 0x000008, "Wrong alignment on AthenaCompass_C_ExecuteUbergraph_AthenaCompass");
static_assert(sizeof(AthenaCompass_C_ExecuteUbergraph_AthenaCompass) == 0x0000C8, "Wrong size on AthenaCompass_C_ExecuteUbergraph_AthenaCompass");
static_assert(offsetof(AthenaCompass_C_ExecuteUbergraph_AthenaCompass, EntryPoint) == 0x000000, "Member 'AthenaCompass_C_ExecuteUbergraph_AthenaCompass::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_ExecuteUbergraph_AthenaCompass, K2Node_Event_MyGeometry) == 0x000004, "Member 'AthenaCompass_C_ExecuteUbergraph_AthenaCompass::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_ExecuteUbergraph_AthenaCompass, K2Node_Event_InDeltaTime) == 0x000038, "Member 'AthenaCompass_C_ExecuteUbergraph_AthenaCompass::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_ExecuteUbergraph_AthenaCompass, CallFunc_GetOwningPlayer_ReturnValue) == 0x000040, "Member 'AthenaCompass_C_ExecuteUbergraph_AthenaCompass::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_ExecuteUbergraph_AthenaCompass, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000048, "Member 'AthenaCompass_C_ExecuteUbergraph_AthenaCompass::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_ExecuteUbergraph_AthenaCompass, CallFunc_GetViewTarget_ReturnValue) == 0x000050, "Member 'AthenaCompass_C_ExecuteUbergraph_AthenaCompass::CallFunc_GetViewTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_ExecuteUbergraph_AthenaCompass, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'AthenaCompass_C_ExecuteUbergraph_AthenaCompass::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_ExecuteUbergraph_AthenaCompass, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00005C, "Member 'AthenaCompass_C_ExecuteUbergraph_AthenaCompass::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_ExecuteUbergraph_AthenaCompass, CallFunc_K2_GetPawn_ReturnValue) == 0x000068, "Member 'AthenaCompass_C_ExecuteUbergraph_AthenaCompass::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_ExecuteUbergraph_AthenaCompass, K2Node_DynamicCast_AsFort_Player_Controller_Athena) == 0x000070, "Member 'AthenaCompass_C_ExecuteUbergraph_AthenaCompass::K2Node_DynamicCast_AsFort_Player_Controller_Athena' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_ExecuteUbergraph_AthenaCompass, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'AthenaCompass_C_ExecuteUbergraph_AthenaCompass::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_ExecuteUbergraph_AthenaCompass, CallFunc_IsValid_ReturnValue2) == 0x000079, "Member 'AthenaCompass_C_ExecuteUbergraph_AthenaCompass::CallFunc_IsValid_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_ExecuteUbergraph_AthenaCompass, CallFunc_BooleanOR_ReturnValue) == 0x00007A, "Member 'AthenaCompass_C_ExecuteUbergraph_AthenaCompass::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_ExecuteUbergraph_AthenaCompass, CallFunc_K2_GetActorLocation_ReturnValue2) == 0x00007C, "Member 'AthenaCompass_C_ExecuteUbergraph_AthenaCompass::CallFunc_K2_GetActorLocation_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_ExecuteUbergraph_AthenaCompass, Temp_int_Variable) == 0x000088, "Member 'AthenaCompass_C_ExecuteUbergraph_AthenaCompass::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_ExecuteUbergraph_AthenaCompass, CallFunc_GetCameraRotation_ReturnValue) == 0x00008C, "Member 'AthenaCompass_C_ExecuteUbergraph_AthenaCompass::CallFunc_GetCameraRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_ExecuteUbergraph_AthenaCompass, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000098, "Member 'AthenaCompass_C_ExecuteUbergraph_AthenaCompass::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_ExecuteUbergraph_AthenaCompass, CallFunc_Array_Get_Item) == 0x0000A0, "Member 'AthenaCompass_C_ExecuteUbergraph_AthenaCompass::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_ExecuteUbergraph_AthenaCompass, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000A8, "Member 'AthenaCompass_C_ExecuteUbergraph_AthenaCompass::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_ExecuteUbergraph_AthenaCompass, CallFunc_Add_IntInt_ReturnValue) == 0x0000AC, "Member 'AthenaCompass_C_ExecuteUbergraph_AthenaCompass::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_ExecuteUbergraph_AthenaCompass, K2Node_MakeArray_Array) == 0x0000B0, "Member 'AthenaCompass_C_ExecuteUbergraph_AthenaCompass::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_ExecuteUbergraph_AthenaCompass, CallFunc_Array_Get_Item2) == 0x0000C0, "Member 'AthenaCompass_C_ExecuteUbergraph_AthenaCompass::CallFunc_Array_Get_Item2' has a wrong offset!");

// Function AthenaCompass.AthenaCompass_C.Tick
// 0x0038 (0x0038 - 0x0000)
struct AthenaCompass_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0034)(Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0034(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaCompass_C_Tick) == 0x000004, "Wrong alignment on AthenaCompass_C_Tick");
static_assert(sizeof(AthenaCompass_C_Tick) == 0x000038, "Wrong size on AthenaCompass_C_Tick");
static_assert(offsetof(AthenaCompass_C_Tick, MyGeometry) == 0x000000, "Member 'AthenaCompass_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_Tick, InDeltaTime) == 0x000034, "Member 'AthenaCompass_C_Tick::InDeltaTime' has a wrong offset!");

// Function AthenaCompass.AthenaCompass_C.UpdateCompassMaterial
// 0x0020 (0x0020 - 0x0000)
struct AthenaCompass_C_UpdateCompassMaterial final
{
public:
	struct FRotator                               InRot;                                             // 0x0000(0x000C)(Parm, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaCompass_C_UpdateCompassMaterial) == 0x000004, "Wrong alignment on AthenaCompass_C_UpdateCompassMaterial");
static_assert(sizeof(AthenaCompass_C_UpdateCompassMaterial) == 0x000020, "Wrong size on AthenaCompass_C_UpdateCompassMaterial");
static_assert(offsetof(AthenaCompass_C_UpdateCompassMaterial, InRot) == 0x000000, "Member 'AthenaCompass_C_UpdateCompassMaterial::InRot' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_UpdateCompassMaterial, CallFunc_BreakRotator_Roll) == 0x00000C, "Member 'AthenaCompass_C_UpdateCompassMaterial::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_UpdateCompassMaterial, CallFunc_BreakRotator_Pitch) == 0x000010, "Member 'AthenaCompass_C_UpdateCompassMaterial::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_UpdateCompassMaterial, CallFunc_BreakRotator_Yaw) == 0x000014, "Member 'AthenaCompass_C_UpdateCompassMaterial::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_UpdateCompassMaterial, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000018, "Member 'AthenaCompass_C_UpdateCompassMaterial::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_UpdateCompassMaterial, CallFunc_Add_FloatFloat_ReturnValue) == 0x00001C, "Member 'AthenaCompass_C_UpdateCompassMaterial::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");

// Function AthenaCompass.AthenaCompass_C.UpdateMarker
// 0x0098 (0x0098 - 0x0000)
struct AthenaCompass_C_UpdateMarker final
{
public:
	class UImage*                                 MarkerImage;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              MarkerWorldPosition;                               // 0x0008(0x0008)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CameraRotation;                                    // 0x0010(0x000C)(Parm, IsPlainOldData, NoDestructor)
	struct FVector                                PawnLocation;                                      // 0x001C(0x000C)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_Vector2DVector2D_ReturnValue;    // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_Vector2DToVector_ReturnValue;        // 0x0038(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0044(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x0050(0x000C)(IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakVector2D_X;                          // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_NormalizedDeltaRotator_ReturnValue;       // 0x0064(0x000C)(IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue;                          // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_DegSin_ReturnValue;                       // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85[0x3];                                       // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0090(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaCompass_C_UpdateMarker) == 0x000008, "Wrong alignment on AthenaCompass_C_UpdateMarker");
static_assert(sizeof(AthenaCompass_C_UpdateMarker) == 0x000098, "Wrong size on AthenaCompass_C_UpdateMarker");
static_assert(offsetof(AthenaCompass_C_UpdateMarker, MarkerImage) == 0x000000, "Member 'AthenaCompass_C_UpdateMarker::MarkerImage' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_UpdateMarker, MarkerWorldPosition) == 0x000008, "Member 'AthenaCompass_C_UpdateMarker::MarkerWorldPosition' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_UpdateMarker, CameraRotation) == 0x000010, "Member 'AthenaCompass_C_UpdateMarker::CameraRotation' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_UpdateMarker, PawnLocation) == 0x00001C, "Member 'AthenaCompass_C_UpdateMarker::PawnLocation' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_UpdateMarker, CallFunc_BreakVector_X) == 0x000028, "Member 'AthenaCompass_C_UpdateMarker::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_UpdateMarker, CallFunc_BreakVector_Y) == 0x00002C, "Member 'AthenaCompass_C_UpdateMarker::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_UpdateMarker, CallFunc_BreakVector_Z) == 0x000030, "Member 'AthenaCompass_C_UpdateMarker::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_UpdateMarker, CallFunc_NotEqual_Vector2DVector2D_ReturnValue) == 0x000034, "Member 'AthenaCompass_C_UpdateMarker::CallFunc_NotEqual_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_UpdateMarker, CallFunc_Conv_Vector2DToVector_ReturnValue) == 0x000038, "Member 'AthenaCompass_C_UpdateMarker::CallFunc_Conv_Vector2DToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_UpdateMarker, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000044, "Member 'AthenaCompass_C_UpdateMarker::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_UpdateMarker, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x000050, "Member 'AthenaCompass_C_UpdateMarker::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_UpdateMarker, CallFunc_BreakVector2D_X) == 0x00005C, "Member 'AthenaCompass_C_UpdateMarker::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_UpdateMarker, CallFunc_BreakVector2D_Y) == 0x000060, "Member 'AthenaCompass_C_UpdateMarker::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_UpdateMarker, CallFunc_NormalizedDeltaRotator_ReturnValue) == 0x000064, "Member 'AthenaCompass_C_UpdateMarker::CallFunc_NormalizedDeltaRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_UpdateMarker, CallFunc_BreakRotator_Roll) == 0x000070, "Member 'AthenaCompass_C_UpdateMarker::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_UpdateMarker, CallFunc_BreakRotator_Pitch) == 0x000074, "Member 'AthenaCompass_C_UpdateMarker::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_UpdateMarker, CallFunc_BreakRotator_Yaw) == 0x000078, "Member 'AthenaCompass_C_UpdateMarker::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_UpdateMarker, CallFunc_Abs_ReturnValue) == 0x00007C, "Member 'AthenaCompass_C_UpdateMarker::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_UpdateMarker, CallFunc_DegSin_ReturnValue) == 0x000080, "Member 'AthenaCompass_C_UpdateMarker::CallFunc_DegSin_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_UpdateMarker, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000084, "Member 'AthenaCompass_C_UpdateMarker::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_UpdateMarker, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000088, "Member 'AthenaCompass_C_UpdateMarker::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_UpdateMarker, CallFunc_BooleanAND_ReturnValue) == 0x00008C, "Member 'AthenaCompass_C_UpdateMarker::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCompass_C_UpdateMarker, CallFunc_MakeVector2D_ReturnValue) == 0x000090, "Member 'AthenaCompass_C_UpdateMarker::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

}

