﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Announcement_Tutorial

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function Announcement_Tutorial.Announcement_Tutorial_C.ExecuteUbergraph_Announcement_Tutorial
// 0x0320 (0x0320 - 0x0000)
struct Announcement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FFortClientAnnouncementData_Tutorial& TutorialData, bool bShow)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	struct FFortClientAnnouncementData_Tutorial   K2Node_MakeStruct_FortClientAnnouncementData_Tutorial; // 0x0018(0x0140)()
	class UObject*                                K2Node_HandleClientEvent_EventSource2;             // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_HandleClientEvent_EventFocus2;              // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                       K2Node_HandleClientEvent_ClientEvent2;             // 0x0168(0x0020)(ConstParm, NoDestructor)
	class UObject*                                K2Node_HandleClientEvent_EventSource;              // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_HandleClientEvent_EventFocus;               // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                       K2Node_HandleClientEvent_ClientEvent;              // 0x0198(0x0020)(ConstParm, NoDestructor)
	struct FFortClientAnnouncementData_Tutorial   K2Node_CustomEvent_TutorialData;                   // 0x01B8(0x0140)()
	bool                                          K2Node_CustomEvent_bShow;                          // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F9[0x7];                                      // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate2;             // 0x0300(0x0010)(ZeroConstructor, NoDestructor)
	class UFortTutorialContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0310(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue2;                  // 0x0318(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Announcement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial) == 0x000008, "Wrong alignment on Announcement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial");
static_assert(sizeof(Announcement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial) == 0x000320, "Wrong size on Announcement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial");
static_assert(offsetof(Announcement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial, EntryPoint) == 0x000000, "Member 'Announcement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial::EntryPoint' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'Announcement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial, K2Node_MakeStruct_FortClientAnnouncementData_Tutorial) == 0x000018, "Member 'Announcement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial::K2Node_MakeStruct_FortClientAnnouncementData_Tutorial' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial, K2Node_HandleClientEvent_EventSource2) == 0x000158, "Member 'Announcement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial::K2Node_HandleClientEvent_EventSource2' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial, K2Node_HandleClientEvent_EventFocus2) == 0x000160, "Member 'Announcement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial::K2Node_HandleClientEvent_EventFocus2' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial, K2Node_HandleClientEvent_ClientEvent2) == 0x000168, "Member 'Announcement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial::K2Node_HandleClientEvent_ClientEvent2' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial, K2Node_HandleClientEvent_EventSource) == 0x000188, "Member 'Announcement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial::K2Node_HandleClientEvent_EventSource' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial, K2Node_HandleClientEvent_EventFocus) == 0x000190, "Member 'Announcement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial::K2Node_HandleClientEvent_EventFocus' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial, K2Node_HandleClientEvent_ClientEvent) == 0x000198, "Member 'Announcement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial::K2Node_HandleClientEvent_ClientEvent' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial, K2Node_CustomEvent_TutorialData) == 0x0001B8, "Member 'Announcement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial::K2Node_CustomEvent_TutorialData' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial, K2Node_CustomEvent_bShow) == 0x0002F8, "Member 'Announcement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial::K2Node_CustomEvent_bShow' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial, K2Node_CreateDelegate_OutputDelegate2) == 0x000300, "Member 'Announcement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial, CallFunc_GetContext_ReturnValue) == 0x000310, "Member 'Announcement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial, CallFunc_GetContext_ReturnValue2) == 0x000318, "Member 'Announcement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial::CallFunc_GetContext_ReturnValue2' has a wrong offset!");

// Function Announcement_Tutorial.Announcement_Tutorial_C.HandleClientEvent_OnboardingHideUI
// 0x0030 (0x0030 - 0x0000)
struct Announcement_Tutorial_C_HandleClientEvent_OnboardingHideUI final
{
public:
	class UObject*                                EventSource;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                EventFocus;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                       ClientEvent;                                       // 0x0010(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(Announcement_Tutorial_C_HandleClientEvent_OnboardingHideUI) == 0x000008, "Wrong alignment on Announcement_Tutorial_C_HandleClientEvent_OnboardingHideUI");
static_assert(sizeof(Announcement_Tutorial_C_HandleClientEvent_OnboardingHideUI) == 0x000030, "Wrong size on Announcement_Tutorial_C_HandleClientEvent_OnboardingHideUI");
static_assert(offsetof(Announcement_Tutorial_C_HandleClientEvent_OnboardingHideUI, EventSource) == 0x000000, "Member 'Announcement_Tutorial_C_HandleClientEvent_OnboardingHideUI::EventSource' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_HandleClientEvent_OnboardingHideUI, EventFocus) == 0x000008, "Member 'Announcement_Tutorial_C_HandleClientEvent_OnboardingHideUI::EventFocus' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_HandleClientEvent_OnboardingHideUI, ClientEvent) == 0x000010, "Member 'Announcement_Tutorial_C_HandleClientEvent_OnboardingHideUI::ClientEvent' has a wrong offset!");

// Function Announcement_Tutorial.Announcement_Tutorial_C.HandleClientEvent_OnboardingShowUI
// 0x0030 (0x0030 - 0x0000)
struct Announcement_Tutorial_C_HandleClientEvent_OnboardingShowUI final
{
public:
	class UObject*                                EventSource;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                EventFocus;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                       ClientEvent;                                       // 0x0010(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(Announcement_Tutorial_C_HandleClientEvent_OnboardingShowUI) == 0x000008, "Wrong alignment on Announcement_Tutorial_C_HandleClientEvent_OnboardingShowUI");
static_assert(sizeof(Announcement_Tutorial_C_HandleClientEvent_OnboardingShowUI) == 0x000030, "Wrong size on Announcement_Tutorial_C_HandleClientEvent_OnboardingShowUI");
static_assert(offsetof(Announcement_Tutorial_C_HandleClientEvent_OnboardingShowUI, EventSource) == 0x000000, "Member 'Announcement_Tutorial_C_HandleClientEvent_OnboardingShowUI::EventSource' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_HandleClientEvent_OnboardingShowUI, EventFocus) == 0x000008, "Member 'Announcement_Tutorial_C_HandleClientEvent_OnboardingShowUI::EventFocus' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_HandleClientEvent_OnboardingShowUI, ClientEvent) == 0x000010, "Member 'Announcement_Tutorial_C_HandleClientEvent_OnboardingShowUI::ClientEvent' has a wrong offset!");

// Function Announcement_Tutorial.Announcement_Tutorial_C.HandleUpdateTutorial
// 0x0148 (0x0148 - 0x0000)
struct Announcement_Tutorial_C_HandleUpdateTutorial final
{
public:
	struct FFortClientAnnouncementData_Tutorial   TutorialData;                                      // 0x0000(0x0140)(Parm)
	bool                                          bShow;                                             // 0x0140(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Announcement_Tutorial_C_HandleUpdateTutorial) == 0x000008, "Wrong alignment on Announcement_Tutorial_C_HandleUpdateTutorial");
static_assert(sizeof(Announcement_Tutorial_C_HandleUpdateTutorial) == 0x000148, "Wrong size on Announcement_Tutorial_C_HandleUpdateTutorial");
static_assert(offsetof(Announcement_Tutorial_C_HandleUpdateTutorial, TutorialData) == 0x000000, "Member 'Announcement_Tutorial_C_HandleUpdateTutorial::TutorialData' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_HandleUpdateTutorial, bShow) == 0x000140, "Member 'Announcement_Tutorial_C_HandleUpdateTutorial::bShow' has a wrong offset!");

// Function Announcement_Tutorial.Announcement_Tutorial_C.AddTextLine
// 0x0068 (0x0068 - 0x0000)
struct Announcement_Tutorial_C_AddTextLine final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(Parm)
	bool                                          Transparent;                                       // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonUserWidget*                      NewLine;                                           // 0x0020(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   LocalText;                                         // 0x0028(0x0018)(Edit)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue2;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTutorialRichText_C*                    CallFunc_Create_ReturnValue;                       // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTutorialTransparentRichText_C*         CallFunc_Create_ReturnValue2;                      // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Announcement_Tutorial_C_AddTextLine) == 0x000008, "Wrong alignment on Announcement_Tutorial_C_AddTextLine");
static_assert(sizeof(Announcement_Tutorial_C_AddTextLine) == 0x000068, "Wrong size on Announcement_Tutorial_C_AddTextLine");
static_assert(offsetof(Announcement_Tutorial_C_AddTextLine, Text) == 0x000000, "Member 'Announcement_Tutorial_C_AddTextLine::Text' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_AddTextLine, Transparent) == 0x000018, "Member 'Announcement_Tutorial_C_AddTextLine::Transparent' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_AddTextLine, NewLine) == 0x000020, "Member 'Announcement_Tutorial_C_AddTextLine::NewLine' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_AddTextLine, LocalText) == 0x000028, "Member 'Announcement_Tutorial_C_AddTextLine::LocalText' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_AddTextLine, CallFunc_GetOwningPlayer_ReturnValue) == 0x000040, "Member 'Announcement_Tutorial_C_AddTextLine::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_AddTextLine, CallFunc_GetOwningPlayer_ReturnValue2) == 0x000048, "Member 'Announcement_Tutorial_C_AddTextLine::CallFunc_GetOwningPlayer_ReturnValue2' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_AddTextLine, CallFunc_Create_ReturnValue) == 0x000050, "Member 'Announcement_Tutorial_C_AddTextLine::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_AddTextLine, CallFunc_Create_ReturnValue2) == 0x000058, "Member 'Announcement_Tutorial_C_AddTextLine::CallFunc_Create_ReturnValue2' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_AddTextLine, CallFunc_AddChild_ReturnValue) == 0x000060, "Member 'Announcement_Tutorial_C_AddTextLine::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function Announcement_Tutorial.Announcement_Tutorial_C.UpdateTutorialData
// 0x0298 (0x0298 - 0x0000)
struct Announcement_Tutorial_C_UpdateTutorialData final
{
public:
	struct FFortClientAnnouncementData_Tutorial   TutorialData;                                      // 0x0000(0x0140)(Parm)
	class UOverlaySlot*                           ContentBoxSlot;                                    // 0x0140(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientAnnouncementData_Tutorial   LocalTutorialData;                                 // 0x0148(0x0140)(Edit)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0289(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetLightboxVisibility_ReturnValue;        // 0x028A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_TextText_ReturnValue;          // 0x028B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x028C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Announcement_Tutorial_C_UpdateTutorialData) == 0x000008, "Wrong alignment on Announcement_Tutorial_C_UpdateTutorialData");
static_assert(sizeof(Announcement_Tutorial_C_UpdateTutorialData) == 0x000298, "Wrong size on Announcement_Tutorial_C_UpdateTutorialData");
static_assert(offsetof(Announcement_Tutorial_C_UpdateTutorialData, TutorialData) == 0x000000, "Member 'Announcement_Tutorial_C_UpdateTutorialData::TutorialData' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_UpdateTutorialData, ContentBoxSlot) == 0x000140, "Member 'Announcement_Tutorial_C_UpdateTutorialData::ContentBoxSlot' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_UpdateTutorialData, LocalTutorialData) == 0x000148, "Member 'Announcement_Tutorial_C_UpdateTutorialData::LocalTutorialData' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_UpdateTutorialData, CallFunc_TextIsEmpty_ReturnValue) == 0x000288, "Member 'Announcement_Tutorial_C_UpdateTutorialData::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_UpdateTutorialData, CallFunc_Not_PreBool_ReturnValue) == 0x000289, "Member 'Announcement_Tutorial_C_UpdateTutorialData::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_UpdateTutorialData, CallFunc_GetLightboxVisibility_ReturnValue) == 0x00028A, "Member 'Announcement_Tutorial_C_UpdateTutorialData::CallFunc_GetLightboxVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_UpdateTutorialData, CallFunc_EqualEqual_TextText_ReturnValue) == 0x00028B, "Member 'Announcement_Tutorial_C_UpdateTutorialData::CallFunc_EqualEqual_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_UpdateTutorialData, CallFunc_Array_Add_ReturnValue) == 0x00028C, "Member 'Announcement_Tutorial_C_UpdateTutorialData::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_UpdateTutorialData, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000290, "Member 'Announcement_Tutorial_C_UpdateTutorialData::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");

// Function Announcement_Tutorial.Announcement_Tutorial_C.RefreshTextLines
// 0x0040 (0x0040 - 0x0000)
struct Announcement_Tutorial_C_RefreshTextLines final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Array_Get_Item;                           // 0x0010(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue2;                // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Announcement_Tutorial_C_RefreshTextLines) == 0x000008, "Wrong alignment on Announcement_Tutorial_C_RefreshTextLines");
static_assert(sizeof(Announcement_Tutorial_C_RefreshTextLines) == 0x000040, "Wrong size on Announcement_Tutorial_C_RefreshTextLines");
static_assert(offsetof(Announcement_Tutorial_C_RefreshTextLines, Temp_int_Array_Index_Variable) == 0x000000, "Member 'Announcement_Tutorial_C_RefreshTextLines::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_RefreshTextLines, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'Announcement_Tutorial_C_RefreshTextLines::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_RefreshTextLines, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'Announcement_Tutorial_C_RefreshTextLines::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_RefreshTextLines, CallFunc_Array_Get_Item) == 0x000010, "Member 'Announcement_Tutorial_C_RefreshTextLines::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_RefreshTextLines, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'Announcement_Tutorial_C_RefreshTextLines::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_RefreshTextLines, CallFunc_Array_Length_ReturnValue2) == 0x00002C, "Member 'Announcement_Tutorial_C_RefreshTextLines::CallFunc_Array_Length_ReturnValue2' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_RefreshTextLines, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'Announcement_Tutorial_C_RefreshTextLines::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_RefreshTextLines, CallFunc_Subtract_IntInt_ReturnValue) == 0x000034, "Member 'Announcement_Tutorial_C_RefreshTextLines::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_RefreshTextLines, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000038, "Member 'Announcement_Tutorial_C_RefreshTextLines::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_RefreshTextLines, CallFunc_Not_PreBool_ReturnValue) == 0x000039, "Member 'Announcement_Tutorial_C_RefreshTextLines::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function Announcement_Tutorial.Announcement_Tutorial_C.GetLightboxVisibility
// 0x0148 (0x0148 - 0x0000)
struct Announcement_Tutorial_C_GetLightboxVisibility final
{
public:
	struct FFortClientAnnouncementData_Tutorial   FortClientAnnouncementData_Tutorial;               // 0x0000(0x0140)(ConstParm, Parm, OutParm, ReferenceParm)
	ESlateVisibility                              ReturnValue;                                       // 0x0140(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0142(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0143(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0145(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Announcement_Tutorial_C_GetLightboxVisibility) == 0x000008, "Wrong alignment on Announcement_Tutorial_C_GetLightboxVisibility");
static_assert(sizeof(Announcement_Tutorial_C_GetLightboxVisibility) == 0x000148, "Wrong size on Announcement_Tutorial_C_GetLightboxVisibility");
static_assert(offsetof(Announcement_Tutorial_C_GetLightboxVisibility, FortClientAnnouncementData_Tutorial) == 0x000000, "Member 'Announcement_Tutorial_C_GetLightboxVisibility::FortClientAnnouncementData_Tutorial' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_GetLightboxVisibility, ReturnValue) == 0x000140, "Member 'Announcement_Tutorial_C_GetLightboxVisibility::ReturnValue' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_GetLightboxVisibility, Temp_bool_Variable) == 0x000141, "Member 'Announcement_Tutorial_C_GetLightboxVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_GetLightboxVisibility, Temp_byte_Variable) == 0x000142, "Member 'Announcement_Tutorial_C_GetLightboxVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_GetLightboxVisibility, CallFunc_BooleanOR_ReturnValue) == 0x000143, "Member 'Announcement_Tutorial_C_GetLightboxVisibility::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_GetLightboxVisibility, Temp_byte_Variable2) == 0x000144, "Member 'Announcement_Tutorial_C_GetLightboxVisibility::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_GetLightboxVisibility, K2Node_Select_Default) == 0x000145, "Member 'Announcement_Tutorial_C_GetLightboxVisibility::K2Node_Select_Default' has a wrong offset!");

// Function Announcement_Tutorial.Announcement_Tutorial_C.CheckContinueTutorial
// 0x0158 (0x0158 - 0x0000)
struct Announcement_Tutorial_C_CheckContinueTutorial final
{
public:
	struct FFortClientAnnouncementData_Tutorial   TutorialData;                                      // 0x0000(0x0140)(Parm)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0140(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0150(0x0008)(NoDestructor)
};
static_assert(alignof(Announcement_Tutorial_C_CheckContinueTutorial) == 0x000008, "Wrong alignment on Announcement_Tutorial_C_CheckContinueTutorial");
static_assert(sizeof(Announcement_Tutorial_C_CheckContinueTutorial) == 0x000158, "Wrong size on Announcement_Tutorial_C_CheckContinueTutorial");
static_assert(offsetof(Announcement_Tutorial_C_CheckContinueTutorial, TutorialData) == 0x000000, "Member 'Announcement_Tutorial_C_CheckContinueTutorial::TutorialData' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_CheckContinueTutorial, K2Node_CreateDelegate_OutputDelegate) == 0x000140, "Member 'Announcement_Tutorial_C_CheckContinueTutorial::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Announcement_Tutorial_C_CheckContinueTutorial, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000150, "Member 'Announcement_Tutorial_C_CheckContinueTutorial::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function Announcement_Tutorial.Announcement_Tutorial_C.ContinueTutorial
// 0x0008 (0x0008 - 0x0000)
struct Announcement_Tutorial_C_ContinueTutorial final
{
public:
	class UFortTutorialContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Announcement_Tutorial_C_ContinueTutorial) == 0x000008, "Wrong alignment on Announcement_Tutorial_C_ContinueTutorial");
static_assert(sizeof(Announcement_Tutorial_C_ContinueTutorial) == 0x000008, "Wrong size on Announcement_Tutorial_C_ContinueTutorial");
static_assert(offsetof(Announcement_Tutorial_C_ContinueTutorial, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'Announcement_Tutorial_C_ContinueTutorial::CallFunc_GetContext_ReturnValue' has a wrong offset!");

}

