﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LobbyPlayerPadTop

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.ExecuteUbergraph_LobbyPlayerPadTop
// 0x00F8 (0x00F8 - 0x0000)
struct LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable2;                             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UFortMatchmakingContext*                CallFunc_GetContext_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMatchmakingContext*                CallFunc_GetContext_ReturnValue2;                  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	class AFortLobbyBeaconClient*                 CallFunc_GetLobbyBeaconClient_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortLobbyBeaconClientRM*               K2Node_DynamicCast_AsFort_Lobby_Beacon_Client_RM;  // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FUniqueNetIdRepl& PlayerNetId, bool bIsReady)> K2Node_CreateDelegate_OutputDelegate2;             // 0x0060(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 Temp_string_Variable3;                             // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue3;                  // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate3;             // 0x0088(0x0010)(ZeroConstructor, NoDestructor)
	ESubGame                                      CallFunc_GetSubGame_ReturnValue;                   // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B[0x1];                                       // 0x009B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_RandomInteger_ReturnValue;                // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable4;                             // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                       K2Node_CustomEvent_PlayerNetId;                    // 0x00B0(0x0018)(HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bIsReady;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_AreUniqueIDsIdentical_ReturnValue;        // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CA[0x2];                                       // 0x00CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00E0(0x0018)()
};
static_assert(alignof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop) == 0x000008, "Wrong alignment on LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop");
static_assert(sizeof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop) == 0x0000F8, "Wrong size on LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, EntryPoint) == 0x000000, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::EntryPoint' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, Temp_string_Variable) == 0x000008, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, Temp_string_Variable2) == 0x000018, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::Temp_string_Variable2' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, CallFunc_GetContext_ReturnValue) == 0x000028, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, CallFunc_GetContext_ReturnValue2) == 0x000030, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, K2Node_CreateDelegate_OutputDelegate) == 0x000038, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, CallFunc_GetLobbyBeaconClient_ReturnValue) == 0x000048, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::CallFunc_GetLobbyBeaconClient_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, K2Node_DynamicCast_AsFort_Lobby_Beacon_Client_RM) == 0x000050, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::K2Node_DynamicCast_AsFort_Lobby_Beacon_Client_RM' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, K2Node_CreateDelegate_OutputDelegate2) == 0x000060, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, Temp_string_Variable3) == 0x000070, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::Temp_string_Variable3' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, CallFunc_GetContext_ReturnValue3) == 0x000080, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::CallFunc_GetContext_ReturnValue3' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, K2Node_CreateDelegate_OutputDelegate3) == 0x000088, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, CallFunc_GetSubGame_ReturnValue) == 0x000098, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::CallFunc_GetSubGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, K2Node_SwitchEnum_CmpSuccess) == 0x000099, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, K2Node_Event_IsDesignTime) == 0x00009A, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, CallFunc_RandomInteger_ReturnValue) == 0x00009C, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::CallFunc_RandomInteger_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, Temp_string_Variable4) == 0x0000A0, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::Temp_string_Variable4' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, K2Node_CustomEvent_PlayerNetId) == 0x0000B0, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::K2Node_CustomEvent_PlayerNetId' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, K2Node_CustomEvent_bIsReady) == 0x0000C8, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::K2Node_CustomEvent_bIsReady' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, CallFunc_AreUniqueIDsIdentical_ReturnValue) == 0x0000C9, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::CallFunc_AreUniqueIDsIdentical_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, Temp_int_Variable) == 0x0000CC, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, K2Node_Select_Default) == 0x0000D0, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop, CallFunc_Conv_StringToText_ReturnValue) == 0x0000E0, "Member 'LobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnUpdateLobbyPlayerPadTop
// 0x0020 (0x0020 - 0x0000)
struct LobbyPlayerPadTop_C_OnUpdateLobbyPlayerPadTop final
{
public:
	struct FUniqueNetIdRepl                       PlayerNetId;                                       // 0x0000(0x0018)(Parm, HasGetValueTypeHash)
	bool                                          bIsReady;                                          // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LobbyPlayerPadTop_C_OnUpdateLobbyPlayerPadTop) == 0x000008, "Wrong alignment on LobbyPlayerPadTop_C_OnUpdateLobbyPlayerPadTop");
static_assert(sizeof(LobbyPlayerPadTop_C_OnUpdateLobbyPlayerPadTop) == 0x000020, "Wrong size on LobbyPlayerPadTop_C_OnUpdateLobbyPlayerPadTop");
static_assert(offsetof(LobbyPlayerPadTop_C_OnUpdateLobbyPlayerPadTop, PlayerNetId) == 0x000000, "Member 'LobbyPlayerPadTop_C_OnUpdateLobbyPlayerPadTop::PlayerNetId' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_OnUpdateLobbyPlayerPadTop, bIsReady) == 0x000018, "Member 'LobbyPlayerPadTop_C_OnUpdateLobbyPlayerPadTop::bIsReady' has a wrong offset!");

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct LobbyPlayerPadTop_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LobbyPlayerPadTop_C_PreConstruct) == 0x000001, "Wrong alignment on LobbyPlayerPadTop_C_PreConstruct");
static_assert(sizeof(LobbyPlayerPadTop_C_PreConstruct) == 0x000001, "Wrong size on LobbyPlayerPadTop_C_PreConstruct");
static_assert(offsetof(LobbyPlayerPadTop_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'LobbyPlayerPadTop_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.RefreshHomeBasePower
// 0x0018 (0x0018 - 0x0000)
struct LobbyPlayerPadTop_C_RefreshHomeBasePower final
{
public:
	class UHomeBaseContext*                       CallFunc_GetContext_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTotalHomebaseRating_Rating;            // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTotalHomebaseRating_ProgressFraction;  // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetTotalHomebaseRating_ReturnValue;       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LobbyPlayerPadTop_C_RefreshHomeBasePower) == 0x000008, "Wrong alignment on LobbyPlayerPadTop_C_RefreshHomeBasePower");
static_assert(sizeof(LobbyPlayerPadTop_C_RefreshHomeBasePower) == 0x000018, "Wrong size on LobbyPlayerPadTop_C_RefreshHomeBasePower");
static_assert(offsetof(LobbyPlayerPadTop_C_RefreshHomeBasePower, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'LobbyPlayerPadTop_C_RefreshHomeBasePower::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_RefreshHomeBasePower, CallFunc_GetTotalHomebaseRating_Rating) == 0x000008, "Member 'LobbyPlayerPadTop_C_RefreshHomeBasePower::CallFunc_GetTotalHomebaseRating_Rating' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_RefreshHomeBasePower, CallFunc_GetTotalHomebaseRating_ProgressFraction) == 0x00000C, "Member 'LobbyPlayerPadTop_C_RefreshHomeBasePower::CallFunc_GetTotalHomebaseRating_ProgressFraction' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_RefreshHomeBasePower, CallFunc_GetTotalHomebaseRating_ReturnValue) == 0x000010, "Member 'LobbyPlayerPadTop_C_RefreshHomeBasePower::CallFunc_GetTotalHomebaseRating_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_RefreshHomeBasePower, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000014, "Member 'LobbyPlayerPadTop_C_RefreshHomeBasePower::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.RefreshPlayerName
// 0x0004 (0x0004 - 0x0000)
struct LobbyPlayerPadTop_C_RefreshPlayerName final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LobbyPlayerPadTop_C_RefreshPlayerName) == 0x000001, "Wrong alignment on LobbyPlayerPadTop_C_RefreshPlayerName");
static_assert(sizeof(LobbyPlayerPadTop_C_RefreshPlayerName) == 0x000004, "Wrong size on LobbyPlayerPadTop_C_RefreshPlayerName");
static_assert(offsetof(LobbyPlayerPadTop_C_RefreshPlayerName, Temp_bool_Variable) == 0x000000, "Member 'LobbyPlayerPadTop_C_RefreshPlayerName::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_RefreshPlayerName, Temp_byte_Variable) == 0x000001, "Member 'LobbyPlayerPadTop_C_RefreshPlayerName::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_RefreshPlayerName, Temp_byte_Variable2) == 0x000002, "Member 'LobbyPlayerPadTop_C_RefreshPlayerName::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_RefreshPlayerName, K2Node_Select_Default) == 0x000003, "Member 'LobbyPlayerPadTop_C_RefreshPlayerName::K2Node_Select_Default' has a wrong offset!");

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.Refresh
// 0x0048 (0x0048 - 0x0000)
struct LobbyPlayerPadTop_C_Refresh final
{
public:
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue2;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMatchmakingContext*                CallFunc_GetContext_ReturnValue3;                  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubGame                                      CallFunc_GetSubGame_ReturnValue;                   // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortLobbyBeaconClient*                 CallFunc_GetLobbyBeaconClient_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortLobbyBeaconClientRM*               K2Node_DynamicCast_AsFort_Lobby_Beacon_Client_RM;  // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable3;                               // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable4;                               // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAthenaPartyMemberReady_ReturnValue;     // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable2;                               // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select2_Default;                            // 0x0047(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LobbyPlayerPadTop_C_Refresh) == 0x000008, "Wrong alignment on LobbyPlayerPadTop_C_Refresh");
static_assert(sizeof(LobbyPlayerPadTop_C_Refresh) == 0x000048, "Wrong size on LobbyPlayerPadTop_C_Refresh");
static_assert(offsetof(LobbyPlayerPadTop_C_Refresh, Temp_byte_Variable) == 0x000000, "Member 'LobbyPlayerPadTop_C_Refresh::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_Refresh, Temp_byte_Variable2) == 0x000001, "Member 'LobbyPlayerPadTop_C_Refresh::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_Refresh, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'LobbyPlayerPadTop_C_Refresh::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_Refresh, CallFunc_GetContext_ReturnValue2) == 0x000010, "Member 'LobbyPlayerPadTop_C_Refresh::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_Refresh, CallFunc_GetContext_ReturnValue3) == 0x000018, "Member 'LobbyPlayerPadTop_C_Refresh::CallFunc_GetContext_ReturnValue3' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_Refresh, CallFunc_GetSubGame_ReturnValue) == 0x000020, "Member 'LobbyPlayerPadTop_C_Refresh::CallFunc_GetSubGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_Refresh, CallFunc_GetLobbyBeaconClient_ReturnValue) == 0x000028, "Member 'LobbyPlayerPadTop_C_Refresh::CallFunc_GetLobbyBeaconClient_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_Refresh, K2Node_SwitchEnum_CmpSuccess) == 0x000030, "Member 'LobbyPlayerPadTop_C_Refresh::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_Refresh, K2Node_DynamicCast_AsFort_Lobby_Beacon_Client_RM) == 0x000038, "Member 'LobbyPlayerPadTop_C_Refresh::K2Node_DynamicCast_AsFort_Lobby_Beacon_Client_RM' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_Refresh, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'LobbyPlayerPadTop_C_Refresh::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_Refresh, Temp_bool_Variable) == 0x000041, "Member 'LobbyPlayerPadTop_C_Refresh::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_Refresh, Temp_byte_Variable3) == 0x000042, "Member 'LobbyPlayerPadTop_C_Refresh::Temp_byte_Variable3' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_Refresh, Temp_byte_Variable4) == 0x000043, "Member 'LobbyPlayerPadTop_C_Refresh::Temp_byte_Variable4' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_Refresh, CallFunc_IsAthenaPartyMemberReady_ReturnValue) == 0x000044, "Member 'LobbyPlayerPadTop_C_Refresh::CallFunc_IsAthenaPartyMemberReady_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_Refresh, Temp_bool_Variable2) == 0x000045, "Member 'LobbyPlayerPadTop_C_Refresh::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_Refresh, K2Node_Select_Default) == 0x000046, "Member 'LobbyPlayerPadTop_C_Refresh::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_Refresh, K2Node_Select2_Default) == 0x000047, "Member 'LobbyPlayerPadTop_C_Refresh::K2Node_Select2_Default' has a wrong offset!");

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.SetTeamMemberInfo
// 0x0190 (0x0190 - 0x0000)
struct LobbyPlayerPadTop_C_SetTeamMemberInfo final
{
public:
	struct FFortTeamMemberInfo                    TeamMemberInfo_0;                                  // 0x0000(0x0190)(Parm)
};
static_assert(alignof(LobbyPlayerPadTop_C_SetTeamMemberInfo) == 0x000008, "Wrong alignment on LobbyPlayerPadTop_C_SetTeamMemberInfo");
static_assert(sizeof(LobbyPlayerPadTop_C_SetTeamMemberInfo) == 0x000190, "Wrong size on LobbyPlayerPadTop_C_SetTeamMemberInfo");
static_assert(offsetof(LobbyPlayerPadTop_C_SetTeamMemberInfo, TeamMemberInfo_0) == 0x000000, "Member 'LobbyPlayerPadTop_C_SetTeamMemberInfo::TeamMemberInfo_0' has a wrong offset!");

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnLobbyPlayerHovered
// 0x0008 (0x0008 - 0x0000)
struct LobbyPlayerPadTop_C_OnLobbyPlayerHovered final
{
public:
	int32                                         PlayerIndex_0;                                     // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LobbyPlayerPadTop_C_OnLobbyPlayerHovered) == 0x000004, "Wrong alignment on LobbyPlayerPadTop_C_OnLobbyPlayerHovered");
static_assert(sizeof(LobbyPlayerPadTop_C_OnLobbyPlayerHovered) == 0x000008, "Wrong size on LobbyPlayerPadTop_C_OnLobbyPlayerHovered");
static_assert(offsetof(LobbyPlayerPadTop_C_OnLobbyPlayerHovered, PlayerIndex_0) == 0x000000, "Member 'LobbyPlayerPadTop_C_OnLobbyPlayerHovered::PlayerIndex_0' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_OnLobbyPlayerHovered, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000004, "Member 'LobbyPlayerPadTop_C_OnLobbyPlayerHovered::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.InitializeContextEvents
// 0x0048 (0x0048 - 0x0000)
struct LobbyPlayerPadTop_C_InitializeContextEvents final
{
public:
	TDelegate<void(struct FUniqueNetIdRepl& UniqueId, bool bReady)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 PlayerIndex)>            K2Node_CreateDelegate_OutputDelegate2;             // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue2;                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 PlayerIndex)>            K2Node_CreateDelegate_OutputDelegate3;             // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue3;                  // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LobbyPlayerPadTop_C_InitializeContextEvents) == 0x000008, "Wrong alignment on LobbyPlayerPadTop_C_InitializeContextEvents");
static_assert(sizeof(LobbyPlayerPadTop_C_InitializeContextEvents) == 0x000048, "Wrong size on LobbyPlayerPadTop_C_InitializeContextEvents");
static_assert(offsetof(LobbyPlayerPadTop_C_InitializeContextEvents, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'LobbyPlayerPadTop_C_InitializeContextEvents::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_InitializeContextEvents, CallFunc_GetContext_ReturnValue) == 0x000010, "Member 'LobbyPlayerPadTop_C_InitializeContextEvents::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_InitializeContextEvents, K2Node_CreateDelegate_OutputDelegate2) == 0x000018, "Member 'LobbyPlayerPadTop_C_InitializeContextEvents::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_InitializeContextEvents, CallFunc_GetContext_ReturnValue2) == 0x000028, "Member 'LobbyPlayerPadTop_C_InitializeContextEvents::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_InitializeContextEvents, K2Node_CreateDelegate_OutputDelegate3) == 0x000030, "Member 'LobbyPlayerPadTop_C_InitializeContextEvents::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_InitializeContextEvents, CallFunc_GetContext_ReturnValue3) == 0x000040, "Member 'LobbyPlayerPadTop_C_InitializeContextEvents::CallFunc_GetContext_ReturnValue3' has a wrong offset!");

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.Initialize
// 0x0004 (0x0004 - 0x0000)
struct LobbyPlayerPadTop_C_Initialize final
{
public:
	int32                                         PlayerIndex_0;                                     // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LobbyPlayerPadTop_C_Initialize) == 0x000004, "Wrong alignment on LobbyPlayerPadTop_C_Initialize");
static_assert(sizeof(LobbyPlayerPadTop_C_Initialize) == 0x000004, "Wrong size on LobbyPlayerPadTop_C_Initialize");
static_assert(offsetof(LobbyPlayerPadTop_C_Initialize, PlayerIndex_0) == 0x000000, "Member 'LobbyPlayerPadTop_C_Initialize::PlayerIndex_0' has a wrong offset!");

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnLobbyPlayerUnhovered
// 0x0008 (0x0008 - 0x0000)
struct LobbyPlayerPadTop_C_OnLobbyPlayerUnhovered final
{
public:
	int32                                         PlayerIndex_0;                                     // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LobbyPlayerPadTop_C_OnLobbyPlayerUnhovered) == 0x000004, "Wrong alignment on LobbyPlayerPadTop_C_OnLobbyPlayerUnhovered");
static_assert(sizeof(LobbyPlayerPadTop_C_OnLobbyPlayerUnhovered) == 0x000008, "Wrong size on LobbyPlayerPadTop_C_OnLobbyPlayerUnhovered");
static_assert(offsetof(LobbyPlayerPadTop_C_OnLobbyPlayerUnhovered, PlayerIndex_0) == 0x000000, "Member 'LobbyPlayerPadTop_C_OnLobbyPlayerUnhovered::PlayerIndex_0' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_OnLobbyPlayerUnhovered, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000004, "Member 'LobbyPlayerPadTop_C_OnLobbyPlayerUnhovered::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnAthenaReadyStateChanged
// 0x0020 (0x0020 - 0x0000)
struct LobbyPlayerPadTop_C_OnAthenaReadyStateChanged final
{
public:
	struct FUniqueNetIdRepl                       Member_Id;                                         // 0x0000(0x0018)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                          Ready;                                             // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue; // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LobbyPlayerPadTop_C_OnAthenaReadyStateChanged) == 0x000008, "Wrong alignment on LobbyPlayerPadTop_C_OnAthenaReadyStateChanged");
static_assert(sizeof(LobbyPlayerPadTop_C_OnAthenaReadyStateChanged) == 0x000020, "Wrong size on LobbyPlayerPadTop_C_OnAthenaReadyStateChanged");
static_assert(offsetof(LobbyPlayerPadTop_C_OnAthenaReadyStateChanged, Member_Id) == 0x000000, "Member 'LobbyPlayerPadTop_C_OnAthenaReadyStateChanged::Member_Id' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_OnAthenaReadyStateChanged, Ready) == 0x000018, "Member 'LobbyPlayerPadTop_C_OnAthenaReadyStateChanged::Ready' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_OnAthenaReadyStateChanged, CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue) == 0x000019, "Member 'LobbyPlayerPadTop_C_OnAthenaReadyStateChanged::CallFunc_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_ReturnValue' has a wrong offset!");

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.RefreshReadyState
// 0x0070 (0x0070 - 0x0000)
struct LobbyPlayerPadTop_C_RefreshReadyState final
{
public:
	bool                                          Ready;                                             // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable2;                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable2;                               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_Select_Default;                             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Temp_text_Variable;                                // 0x0028(0x0018)()
	class FText                                   Temp_text_Variable2;                               // 0x0040(0x0018)()
	class FText                                   K2Node_Select2_Default;                            // 0x0058(0x0018)()
};
static_assert(alignof(LobbyPlayerPadTop_C_RefreshReadyState) == 0x000008, "Wrong alignment on LobbyPlayerPadTop_C_RefreshReadyState");
static_assert(sizeof(LobbyPlayerPadTop_C_RefreshReadyState) == 0x000070, "Wrong size on LobbyPlayerPadTop_C_RefreshReadyState");
static_assert(offsetof(LobbyPlayerPadTop_C_RefreshReadyState, Ready) == 0x000000, "Member 'LobbyPlayerPadTop_C_RefreshReadyState::Ready' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_RefreshReadyState, Temp_bool_Variable) == 0x000001, "Member 'LobbyPlayerPadTop_C_RefreshReadyState::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_RefreshReadyState, Temp_class_Variable) == 0x000008, "Member 'LobbyPlayerPadTop_C_RefreshReadyState::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_RefreshReadyState, Temp_class_Variable2) == 0x000010, "Member 'LobbyPlayerPadTop_C_RefreshReadyState::Temp_class_Variable2' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_RefreshReadyState, Temp_bool_Variable2) == 0x000018, "Member 'LobbyPlayerPadTop_C_RefreshReadyState::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_RefreshReadyState, K2Node_Select_Default) == 0x000020, "Member 'LobbyPlayerPadTop_C_RefreshReadyState::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_RefreshReadyState, Temp_text_Variable) == 0x000028, "Member 'LobbyPlayerPadTop_C_RefreshReadyState::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_RefreshReadyState, Temp_text_Variable2) == 0x000040, "Member 'LobbyPlayerPadTop_C_RefreshReadyState::Temp_text_Variable2' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadTop_C_RefreshReadyState, K2Node_Select2_Default) == 0x000058, "Member 'LobbyPlayerPadTop_C_RefreshReadyState::K2Node_Select2_Default' has a wrong offset!");

}

