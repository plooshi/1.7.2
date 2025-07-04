﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MtxStoreRoot

#include "Basic.hpp"


namespace SDK::Params
{

// Function MtxStoreRoot.MtxStoreRoot_C.ExecuteUbergraph_MtxStoreRoot
// 0x0030 (0x0030 - 0x0000)
struct MtxStoreRoot_C_ExecuteUbergraph_MtxStoreRoot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortStoreContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ExitCurrencyStore_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bSuccess;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MtxStoreRoot_C_ExecuteUbergraph_MtxStoreRoot) == 0x000008, "Wrong alignment on MtxStoreRoot_C_ExecuteUbergraph_MtxStoreRoot");
static_assert(sizeof(MtxStoreRoot_C_ExecuteUbergraph_MtxStoreRoot) == 0x000030, "Wrong size on MtxStoreRoot_C_ExecuteUbergraph_MtxStoreRoot");
static_assert(offsetof(MtxStoreRoot_C_ExecuteUbergraph_MtxStoreRoot, EntryPoint) == 0x000000, "Member 'MtxStoreRoot_C_ExecuteUbergraph_MtxStoreRoot::EntryPoint' has a wrong offset!");
static_assert(offsetof(MtxStoreRoot_C_ExecuteUbergraph_MtxStoreRoot, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'MtxStoreRoot_C_ExecuteUbergraph_MtxStoreRoot::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(MtxStoreRoot_C_ExecuteUbergraph_MtxStoreRoot, CallFunc_ExitCurrencyStore_ReturnValue) == 0x000010, "Member 'MtxStoreRoot_C_ExecuteUbergraph_MtxStoreRoot::CallFunc_ExitCurrencyStore_ReturnValue' has a wrong offset!");
static_assert(offsetof(MtxStoreRoot_C_ExecuteUbergraph_MtxStoreRoot, CallFunc_SpawnSound2D_ReturnValue) == 0x000018, "Member 'MtxStoreRoot_C_ExecuteUbergraph_MtxStoreRoot::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MtxStoreRoot_C_ExecuteUbergraph_MtxStoreRoot, K2Node_ComponentBoundEvent_Button) == 0x000020, "Member 'MtxStoreRoot_C_ExecuteUbergraph_MtxStoreRoot::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(MtxStoreRoot_C_ExecuteUbergraph_MtxStoreRoot, K2Node_ComponentBoundEvent_bSuccess) == 0x000028, "Member 'MtxStoreRoot_C_ExecuteUbergraph_MtxStoreRoot::K2Node_ComponentBoundEvent_bSuccess' has a wrong offset!");

// Function MtxStoreRoot.MtxStoreRoot_C.BndEvt__MtxOffersList_2_K2Node_ComponentBoundEvent_31_PurchaseComplete__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MtxStoreRoot_C_BndEvt__MtxOffersList_2_K2Node_ComponentBoundEvent_31_PurchaseComplete__DelegateSignature final
{
public:
	bool                                          bSuccess;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MtxStoreRoot_C_BndEvt__MtxOffersList_2_K2Node_ComponentBoundEvent_31_PurchaseComplete__DelegateSignature) == 0x000001, "Wrong alignment on MtxStoreRoot_C_BndEvt__MtxOffersList_2_K2Node_ComponentBoundEvent_31_PurchaseComplete__DelegateSignature");
static_assert(sizeof(MtxStoreRoot_C_BndEvt__MtxOffersList_2_K2Node_ComponentBoundEvent_31_PurchaseComplete__DelegateSignature) == 0x000001, "Wrong size on MtxStoreRoot_C_BndEvt__MtxOffersList_2_K2Node_ComponentBoundEvent_31_PurchaseComplete__DelegateSignature");
static_assert(offsetof(MtxStoreRoot_C_BndEvt__MtxOffersList_2_K2Node_ComponentBoundEvent_31_PurchaseComplete__DelegateSignature, bSuccess) == 0x000000, "Member 'MtxStoreRoot_C_BndEvt__MtxOffersList_2_K2Node_ComponentBoundEvent_31_PurchaseComplete__DelegateSignature::bSuccess' has a wrong offset!");

// Function MtxStoreRoot.MtxStoreRoot_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_215_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct MtxStoreRoot_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_215_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MtxStoreRoot_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_215_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on MtxStoreRoot_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_215_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(MtxStoreRoot_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_215_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on MtxStoreRoot_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_215_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(MtxStoreRoot_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_215_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'MtxStoreRoot_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_215_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function MtxStoreRoot.MtxStoreRoot_C.ClosePopup
// 0x0018 (0x0018 - 0x0000)
struct MtxStoreRoot_C_ClosePopup final
{
public:
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortStoreContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ExitCurrencyStore_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MtxStoreRoot_C_ClosePopup) == 0x000008, "Wrong alignment on MtxStoreRoot_C_ClosePopup");
static_assert(sizeof(MtxStoreRoot_C_ClosePopup) == 0x000018, "Wrong size on MtxStoreRoot_C_ClosePopup");
static_assert(offsetof(MtxStoreRoot_C_ClosePopup, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000000, "Member 'MtxStoreRoot_C_ClosePopup::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(MtxStoreRoot_C_ClosePopup, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'MtxStoreRoot_C_ClosePopup::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(MtxStoreRoot_C_ClosePopup, CallFunc_ExitCurrencyStore_ReturnValue) == 0x000010, "Member 'MtxStoreRoot_C_ClosePopup::CallFunc_ExitCurrencyStore_ReturnValue' has a wrong offset!");

}

