﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WM_Pin_Master

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK::Params
{

// Function WM_Pin_Master.WM_Pin_Master_C.ExecuteUbergraph_WM_Pin_Master
// 0x0070 (0x0070 - 0x0000)
struct WM_Pin_Master_C_ExecuteUbergraph_WM_Pin_Master final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_TouchedActor3;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   K2Node_CustomEvent_ButtonPressed;                  // 0x0010(0x0018)(HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_TouchedActor2;                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_TouchedActor;                   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* TouchedActor)>   K2Node_CreateDelegate_OutputDelegate;              // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class AActor* TouchedActor)>   K2Node_CreateDelegate_OutputDelegate2;             // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class AActor* TouchedActor, const struct FKey& ButtonPressed)> K2Node_CreateDelegate_OutputDelegate3;             // 0x0058(0x0010)(ZeroConstructor, NoDestructor)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WM_Pin_Master_C_ExecuteUbergraph_WM_Pin_Master) == 0x000008, "Wrong alignment on WM_Pin_Master_C_ExecuteUbergraph_WM_Pin_Master");
static_assert(sizeof(WM_Pin_Master_C_ExecuteUbergraph_WM_Pin_Master) == 0x000070, "Wrong size on WM_Pin_Master_C_ExecuteUbergraph_WM_Pin_Master");
static_assert(offsetof(WM_Pin_Master_C_ExecuteUbergraph_WM_Pin_Master, EntryPoint) == 0x000000, "Member 'WM_Pin_Master_C_ExecuteUbergraph_WM_Pin_Master::EntryPoint' has a wrong offset!");
static_assert(offsetof(WM_Pin_Master_C_ExecuteUbergraph_WM_Pin_Master, K2Node_CustomEvent_TouchedActor3) == 0x000008, "Member 'WM_Pin_Master_C_ExecuteUbergraph_WM_Pin_Master::K2Node_CustomEvent_TouchedActor3' has a wrong offset!");
static_assert(offsetof(WM_Pin_Master_C_ExecuteUbergraph_WM_Pin_Master, K2Node_CustomEvent_ButtonPressed) == 0x000010, "Member 'WM_Pin_Master_C_ExecuteUbergraph_WM_Pin_Master::K2Node_CustomEvent_ButtonPressed' has a wrong offset!");
static_assert(offsetof(WM_Pin_Master_C_ExecuteUbergraph_WM_Pin_Master, K2Node_CustomEvent_TouchedActor2) == 0x000028, "Member 'WM_Pin_Master_C_ExecuteUbergraph_WM_Pin_Master::K2Node_CustomEvent_TouchedActor2' has a wrong offset!");
static_assert(offsetof(WM_Pin_Master_C_ExecuteUbergraph_WM_Pin_Master, K2Node_CustomEvent_TouchedActor) == 0x000030, "Member 'WM_Pin_Master_C_ExecuteUbergraph_WM_Pin_Master::K2Node_CustomEvent_TouchedActor' has a wrong offset!");
static_assert(offsetof(WM_Pin_Master_C_ExecuteUbergraph_WM_Pin_Master, K2Node_CreateDelegate_OutputDelegate) == 0x000038, "Member 'WM_Pin_Master_C_ExecuteUbergraph_WM_Pin_Master::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WM_Pin_Master_C_ExecuteUbergraph_WM_Pin_Master, K2Node_CreateDelegate_OutputDelegate2) == 0x000048, "Member 'WM_Pin_Master_C_ExecuteUbergraph_WM_Pin_Master::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(WM_Pin_Master_C_ExecuteUbergraph_WM_Pin_Master, K2Node_CreateDelegate_OutputDelegate3) == 0x000058, "Member 'WM_Pin_Master_C_ExecuteUbergraph_WM_Pin_Master::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(WM_Pin_Master_C_ExecuteUbergraph_WM_Pin_Master, CallFunc_GetContext_ReturnValue) == 0x000068, "Member 'WM_Pin_Master_C_ExecuteUbergraph_WM_Pin_Master::CallFunc_GetContext_ReturnValue' has a wrong offset!");

// Function WM_Pin_Master.WM_Pin_Master_C.HandleOnEndCursorOver
// 0x0008 (0x0008 - 0x0000)
struct WM_Pin_Master_C_HandleOnEndCursorOver final
{
public:
	class AActor*                                 TouchedActor;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WM_Pin_Master_C_HandleOnEndCursorOver) == 0x000008, "Wrong alignment on WM_Pin_Master_C_HandleOnEndCursorOver");
static_assert(sizeof(WM_Pin_Master_C_HandleOnEndCursorOver) == 0x000008, "Wrong size on WM_Pin_Master_C_HandleOnEndCursorOver");
static_assert(offsetof(WM_Pin_Master_C_HandleOnEndCursorOver, TouchedActor) == 0x000000, "Member 'WM_Pin_Master_C_HandleOnEndCursorOver::TouchedActor' has a wrong offset!");

// Function WM_Pin_Master.WM_Pin_Master_C.HandleOnBeginCursorOver
// 0x0008 (0x0008 - 0x0000)
struct WM_Pin_Master_C_HandleOnBeginCursorOver final
{
public:
	class AActor*                                 TouchedActor;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WM_Pin_Master_C_HandleOnBeginCursorOver) == 0x000008, "Wrong alignment on WM_Pin_Master_C_HandleOnBeginCursorOver");
static_assert(sizeof(WM_Pin_Master_C_HandleOnBeginCursorOver) == 0x000008, "Wrong size on WM_Pin_Master_C_HandleOnBeginCursorOver");
static_assert(offsetof(WM_Pin_Master_C_HandleOnBeginCursorOver, TouchedActor) == 0x000000, "Member 'WM_Pin_Master_C_HandleOnBeginCursorOver::TouchedActor' has a wrong offset!");

// Function WM_Pin_Master.WM_Pin_Master_C.HandleOnClicked
// 0x0020 (0x0020 - 0x0000)
struct WM_Pin_Master_C_HandleOnClicked final
{
public:
	class AActor*                                 TouchedActor;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   ButtonPressed;                                     // 0x0008(0x0018)(Parm, HasGetValueTypeHash)
};
static_assert(alignof(WM_Pin_Master_C_HandleOnClicked) == 0x000008, "Wrong alignment on WM_Pin_Master_C_HandleOnClicked");
static_assert(sizeof(WM_Pin_Master_C_HandleOnClicked) == 0x000020, "Wrong size on WM_Pin_Master_C_HandleOnClicked");
static_assert(offsetof(WM_Pin_Master_C_HandleOnClicked, TouchedActor) == 0x000000, "Member 'WM_Pin_Master_C_HandleOnClicked::TouchedActor' has a wrong offset!");
static_assert(offsetof(WM_Pin_Master_C_HandleOnClicked, ButtonPressed) == 0x000008, "Member 'WM_Pin_Master_C_HandleOnClicked::ButtonPressed' has a wrong offset!");

// Function WM_Pin_Master.WM_Pin_Master_C.UserConstructionScript
// 0x0030 (0x0030 - 0x0000)
struct WM_Pin_Master_C_UserConstructionScript final
{
public:
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue2; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue2;          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue3; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue4; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WM_Pin_Master_C_UserConstructionScript) == 0x000008, "Wrong alignment on WM_Pin_Master_C_UserConstructionScript");
static_assert(sizeof(WM_Pin_Master_C_UserConstructionScript) == 0x000030, "Wrong size on WM_Pin_Master_C_UserConstructionScript");
static_assert(offsetof(WM_Pin_Master_C_UserConstructionScript, CallFunc_RandomFloatInRange_ReturnValue) == 0x000000, "Member 'WM_Pin_Master_C_UserConstructionScript::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(WM_Pin_Master_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000008, "Member 'WM_Pin_Master_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WM_Pin_Master_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue2) == 0x000010, "Member 'WM_Pin_Master_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WM_Pin_Master_C_UserConstructionScript, CallFunc_RandomFloatInRange_ReturnValue2) == 0x000018, "Member 'WM_Pin_Master_C_UserConstructionScript::CallFunc_RandomFloatInRange_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WM_Pin_Master_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue3) == 0x000020, "Member 'WM_Pin_Master_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue3' has a wrong offset!");
static_assert(offsetof(WM_Pin_Master_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue4) == 0x000028, "Member 'WM_Pin_Master_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue4' has a wrong offset!");

// Function WM_Pin_Master.WM_Pin_Master_C.IsLeader
// 0x0018 (0x0018 - 0x0000)
struct WM_Pin_Master_C_IsLeader final
{
public:
	bool                                          Enabled;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocalPlayerPartyLeader_ReturnValue;     // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WM_Pin_Master_C_IsLeader) == 0x000008, "Wrong alignment on WM_Pin_Master_C_IsLeader");
static_assert(sizeof(WM_Pin_Master_C_IsLeader) == 0x000018, "Wrong size on WM_Pin_Master_C_IsLeader");
static_assert(offsetof(WM_Pin_Master_C_IsLeader, Enabled) == 0x000000, "Member 'WM_Pin_Master_C_IsLeader::Enabled' has a wrong offset!");
static_assert(offsetof(WM_Pin_Master_C_IsLeader, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'WM_Pin_Master_C_IsLeader::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(WM_Pin_Master_C_IsLeader, CallFunc_IsLocalPlayerPartyLeader_ReturnValue) == 0x000010, "Member 'WM_Pin_Master_C_IsLeader::CallFunc_IsLocalPlayerPartyLeader_ReturnValue' has a wrong offset!");

// Function WM_Pin_Master.WM_Pin_Master_C.CanAccessPin
// 0x0570 (0x0570 - 0x0000)
struct WM_Pin_Master_C_CanAccessPin final
{
public:
	bool                                          Accessible;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortTheaterMapData                    CallFunc_GetTheaterData_OutTheaterData;            // 0x0010(0x0540)()
	bool                                          CallFunc_GetTheaterData_ReturnValue;               // 0x0550(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_551[0x7];                                      // 0x0551(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0558(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;       // 0x0560(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0568(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRequirementsMet_ReturnValue;            // 0x0569(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WM_Pin_Master_C_CanAccessPin) == 0x000008, "Wrong alignment on WM_Pin_Master_C_CanAccessPin");
static_assert(sizeof(WM_Pin_Master_C_CanAccessPin) == 0x000570, "Wrong size on WM_Pin_Master_C_CanAccessPin");
static_assert(offsetof(WM_Pin_Master_C_CanAccessPin, Accessible) == 0x000000, "Member 'WM_Pin_Master_C_CanAccessPin::Accessible' has a wrong offset!");
static_assert(offsetof(WM_Pin_Master_C_CanAccessPin, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'WM_Pin_Master_C_CanAccessPin::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(WM_Pin_Master_C_CanAccessPin, CallFunc_GetTheaterData_OutTheaterData) == 0x000010, "Member 'WM_Pin_Master_C_CanAccessPin::CallFunc_GetTheaterData_OutTheaterData' has a wrong offset!");
static_assert(offsetof(WM_Pin_Master_C_CanAccessPin, CallFunc_GetTheaterData_ReturnValue) == 0x000550, "Member 'WM_Pin_Master_C_CanAccessPin::CallFunc_GetTheaterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WM_Pin_Master_C_CanAccessPin, CallFunc_GetPlayerController_ReturnValue) == 0x000558, "Member 'WM_Pin_Master_C_CanAccessPin::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WM_Pin_Master_C_CanAccessPin, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000560, "Member 'WM_Pin_Master_C_CanAccessPin::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(WM_Pin_Master_C_CanAccessPin, K2Node_DynamicCast_bSuccess) == 0x000568, "Member 'WM_Pin_Master_C_CanAccessPin::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WM_Pin_Master_C_CanAccessPin, CallFunc_IsRequirementsMet_ReturnValue) == 0x000569, "Member 'WM_Pin_Master_C_CanAccessPin::CallFunc_IsRequirementsMet_ReturnValue' has a wrong offset!");

// Function WM_Pin_Master.WM_Pin_Master_C.GetRequiredText
// 0x0588 (0x0588 - 0x0000)
struct WM_Pin_Master_C_GetRequiredText final
{
public:
	class FText                                   RequirementText;                                   // 0x0000(0x0018)(Parm, OutParm)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue2;                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortTheaterMapData                    CallFunc_GetTheaterData_OutTheaterData;            // 0x0028(0x0540)()
	bool                                          CallFunc_GetTheaterData_ReturnValue;               // 0x0568(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_569[0x7];                                      // 0x0569(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRequirementText_ReturnValue;           // 0x0570(0x0018)()
};
static_assert(alignof(WM_Pin_Master_C_GetRequiredText) == 0x000008, "Wrong alignment on WM_Pin_Master_C_GetRequiredText");
static_assert(sizeof(WM_Pin_Master_C_GetRequiredText) == 0x000588, "Wrong size on WM_Pin_Master_C_GetRequiredText");
static_assert(offsetof(WM_Pin_Master_C_GetRequiredText, RequirementText) == 0x000000, "Member 'WM_Pin_Master_C_GetRequiredText::RequirementText' has a wrong offset!");
static_assert(offsetof(WM_Pin_Master_C_GetRequiredText, CallFunc_GetContext_ReturnValue) == 0x000018, "Member 'WM_Pin_Master_C_GetRequiredText::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(WM_Pin_Master_C_GetRequiredText, CallFunc_GetContext_ReturnValue2) == 0x000020, "Member 'WM_Pin_Master_C_GetRequiredText::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WM_Pin_Master_C_GetRequiredText, CallFunc_GetTheaterData_OutTheaterData) == 0x000028, "Member 'WM_Pin_Master_C_GetRequiredText::CallFunc_GetTheaterData_OutTheaterData' has a wrong offset!");
static_assert(offsetof(WM_Pin_Master_C_GetRequiredText, CallFunc_GetTheaterData_ReturnValue) == 0x000568, "Member 'WM_Pin_Master_C_GetRequiredText::CallFunc_GetTheaterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WM_Pin_Master_C_GetRequiredText, CallFunc_GetRequirementText_ReturnValue) == 0x000570, "Member 'WM_Pin_Master_C_GetRequiredText::CallFunc_GetRequirementText_ReturnValue' has a wrong offset!");

// Function WM_Pin_Master.WM_Pin_Master_C.UpdateVisuals
// 0x0001 (0x0001 - 0x0000)
struct WM_Pin_Master_C_UpdateVisuals final
{
public:
	bool                                          CallFunc_CanAccessPin_Accessible;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WM_Pin_Master_C_UpdateVisuals) == 0x000001, "Wrong alignment on WM_Pin_Master_C_UpdateVisuals");
static_assert(sizeof(WM_Pin_Master_C_UpdateVisuals) == 0x000001, "Wrong size on WM_Pin_Master_C_UpdateVisuals");
static_assert(offsetof(WM_Pin_Master_C_UpdateVisuals, CallFunc_CanAccessPin_Accessible) == 0x000000, "Member 'WM_Pin_Master_C_UpdateVisuals::CallFunc_CanAccessPin_Accessible' has a wrong offset!");

// Function WM_Pin_Master.WM_Pin_Master_C.InitializeContextEvents
// 0x0058 (0x0058 - 0x0000)
struct WM_Pin_Master_C_InitializeContextEvents final
{
public:
	TDelegate<void(const class FString& TheaterId)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(TArray<class UFortQuestItem*>& Quests)> K2Node_CreateDelegate_OutputDelegate2;             // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue2;                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& TheaterId)> K2Node_CreateDelegate_OutputDelegate3;             // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue3;                  // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                      CallFunc_GetQuestManager_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WM_Pin_Master_C_InitializeContextEvents) == 0x000008, "Wrong alignment on WM_Pin_Master_C_InitializeContextEvents");
static_assert(sizeof(WM_Pin_Master_C_InitializeContextEvents) == 0x000058, "Wrong size on WM_Pin_Master_C_InitializeContextEvents");
static_assert(offsetof(WM_Pin_Master_C_InitializeContextEvents, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WM_Pin_Master_C_InitializeContextEvents::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WM_Pin_Master_C_InitializeContextEvents, K2Node_CreateDelegate_OutputDelegate2) == 0x000010, "Member 'WM_Pin_Master_C_InitializeContextEvents::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(WM_Pin_Master_C_InitializeContextEvents, CallFunc_GetContext_ReturnValue) == 0x000020, "Member 'WM_Pin_Master_C_InitializeContextEvents::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(WM_Pin_Master_C_InitializeContextEvents, CallFunc_GetContext_ReturnValue2) == 0x000028, "Member 'WM_Pin_Master_C_InitializeContextEvents::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WM_Pin_Master_C_InitializeContextEvents, K2Node_CreateDelegate_OutputDelegate3) == 0x000030, "Member 'WM_Pin_Master_C_InitializeContextEvents::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(WM_Pin_Master_C_InitializeContextEvents, CallFunc_GetContext_ReturnValue3) == 0x000040, "Member 'WM_Pin_Master_C_InitializeContextEvents::CallFunc_GetContext_ReturnValue3' has a wrong offset!");
static_assert(offsetof(WM_Pin_Master_C_InitializeContextEvents, CallFunc_GetQuestManager_ReturnValue) == 0x000048, "Member 'WM_Pin_Master_C_InitializeContextEvents::CallFunc_GetQuestManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WM_Pin_Master_C_InitializeContextEvents, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'WM_Pin_Master_C_InitializeContextEvents::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WM_Pin_Master.WM_Pin_Master_C.OnSetPreviewedSceneTheater
// 0x0010 (0x0010 - 0x0000)
struct WM_Pin_Master_C_OnSetPreviewedSceneTheater final
{
public:
	class FString                                 PreviewedTheaterId_0;                              // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WM_Pin_Master_C_OnSetPreviewedSceneTheater) == 0x000008, "Wrong alignment on WM_Pin_Master_C_OnSetPreviewedSceneTheater");
static_assert(sizeof(WM_Pin_Master_C_OnSetPreviewedSceneTheater) == 0x000010, "Wrong size on WM_Pin_Master_C_OnSetPreviewedSceneTheater");
static_assert(offsetof(WM_Pin_Master_C_OnSetPreviewedSceneTheater, PreviewedTheaterId_0) == 0x000000, "Member 'WM_Pin_Master_C_OnSetPreviewedSceneTheater::PreviewedTheaterId_0' has a wrong offset!");

// Function WM_Pin_Master.WM_Pin_Master_C.OnTheaterSelected
// 0x0010 (0x0010 - 0x0000)
struct WM_Pin_Master_C_OnTheaterSelected final
{
public:
	class FString                                 TheaterId_0;                                       // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WM_Pin_Master_C_OnTheaterSelected) == 0x000008, "Wrong alignment on WM_Pin_Master_C_OnTheaterSelected");
static_assert(sizeof(WM_Pin_Master_C_OnTheaterSelected) == 0x000010, "Wrong size on WM_Pin_Master_C_OnTheaterSelected");
static_assert(offsetof(WM_Pin_Master_C_OnTheaterSelected, TheaterId_0) == 0x000000, "Member 'WM_Pin_Master_C_OnTheaterSelected::TheaterId_0' has a wrong offset!");

// Function WM_Pin_Master.WM_Pin_Master_C.OnQuestsCompleted
// 0x0010 (0x0010 - 0x0000)
struct WM_Pin_Master_C_OnQuestsCompleted final
{
public:
	TArray<class UFortQuestItem*>                 QuestItems;                                        // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReferenceParm)
};
static_assert(alignof(WM_Pin_Master_C_OnQuestsCompleted) == 0x000008, "Wrong alignment on WM_Pin_Master_C_OnQuestsCompleted");
static_assert(sizeof(WM_Pin_Master_C_OnQuestsCompleted) == 0x000010, "Wrong size on WM_Pin_Master_C_OnQuestsCompleted");
static_assert(offsetof(WM_Pin_Master_C_OnQuestsCompleted, QuestItems) == 0x000000, "Member 'WM_Pin_Master_C_OnQuestsCompleted::QuestItems' has a wrong offset!");

// Function WM_Pin_Master.WM_Pin_Master_C.UpdateSelectionState
// 0x0002 (0x0002 - 0x0000)
struct WM_Pin_Master_C_UpdateSelectionState final
{
public:
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WM_Pin_Master_C_UpdateSelectionState) == 0x000001, "Wrong alignment on WM_Pin_Master_C_UpdateSelectionState");
static_assert(sizeof(WM_Pin_Master_C_UpdateSelectionState) == 0x000002, "Wrong size on WM_Pin_Master_C_UpdateSelectionState");
static_assert(offsetof(WM_Pin_Master_C_UpdateSelectionState, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000000, "Member 'WM_Pin_Master_C_UpdateSelectionState::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WM_Pin_Master_C_UpdateSelectionState, CallFunc_BooleanOR_ReturnValue) == 0x000001, "Member 'WM_Pin_Master_C_UpdateSelectionState::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

}

