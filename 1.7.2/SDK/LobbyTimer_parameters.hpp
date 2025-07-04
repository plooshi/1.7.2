﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LobbyTimer

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function LobbyTimer.LobbyTimer_C.ExecuteUbergraph_LobbyTimer
// 0x0004 (0x0004 - 0x0000)
struct LobbyTimer_C_ExecuteUbergraph_LobbyTimer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LobbyTimer_C_ExecuteUbergraph_LobbyTimer) == 0x000004, "Wrong alignment on LobbyTimer_C_ExecuteUbergraph_LobbyTimer");
static_assert(sizeof(LobbyTimer_C_ExecuteUbergraph_LobbyTimer) == 0x000004, "Wrong size on LobbyTimer_C_ExecuteUbergraph_LobbyTimer");
static_assert(offsetof(LobbyTimer_C_ExecuteUbergraph_LobbyTimer, EntryPoint) == 0x000000, "Member 'LobbyTimer_C_ExecuteUbergraph_LobbyTimer::EntryPoint' has a wrong offset!");

// Function LobbyTimer.LobbyTimer_C.Show Lobby Timer
// 0x0001 (0x0001 - 0x0000)
struct LobbyTimer_C_Show_Lobby_Timer final
{
public:
	bool                                          Show;                                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LobbyTimer_C_Show_Lobby_Timer) == 0x000001, "Wrong alignment on LobbyTimer_C_Show_Lobby_Timer");
static_assert(sizeof(LobbyTimer_C_Show_Lobby_Timer) == 0x000001, "Wrong size on LobbyTimer_C_Show_Lobby_Timer");
static_assert(offsetof(LobbyTimer_C_Show_Lobby_Timer, Show) == 0x000000, "Member 'LobbyTimer_C_Show_Lobby_Timer::Show' has a wrong offset!");

// Function LobbyTimer.LobbyTimer_C.Bind Delegates
// 0x0048 (0x0048 - 0x0000)
struct LobbyTimer_C_Bind_Delegates final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	class UFortMatchmakingContext*                CallFunc_GetContext_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate2;             // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	class UFortMatchmakingContext*                CallFunc_GetContext_ReturnValue2;                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 CurrentTime)>            K2Node_CreateDelegate_OutputDelegate3;             // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	class UFortMatchmakingContext*                CallFunc_GetContext_ReturnValue3;                  // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LobbyTimer_C_Bind_Delegates) == 0x000008, "Wrong alignment on LobbyTimer_C_Bind_Delegates");
static_assert(sizeof(LobbyTimer_C_Bind_Delegates) == 0x000048, "Wrong size on LobbyTimer_C_Bind_Delegates");
static_assert(offsetof(LobbyTimer_C_Bind_Delegates, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'LobbyTimer_C_Bind_Delegates::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LobbyTimer_C_Bind_Delegates, CallFunc_GetContext_ReturnValue) == 0x000010, "Member 'LobbyTimer_C_Bind_Delegates::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyTimer_C_Bind_Delegates, K2Node_CreateDelegate_OutputDelegate2) == 0x000018, "Member 'LobbyTimer_C_Bind_Delegates::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(LobbyTimer_C_Bind_Delegates, CallFunc_GetContext_ReturnValue2) == 0x000028, "Member 'LobbyTimer_C_Bind_Delegates::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(LobbyTimer_C_Bind_Delegates, K2Node_CreateDelegate_OutputDelegate3) == 0x000030, "Member 'LobbyTimer_C_Bind_Delegates::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(LobbyTimer_C_Bind_Delegates, CallFunc_GetContext_ReturnValue3) == 0x000040, "Member 'LobbyTimer_C_Bind_Delegates::CallFunc_GetContext_ReturnValue3' has a wrong offset!");

// Function LobbyTimer.LobbyTimer_C.Handle Show Lobby Timer
// 0x0001 (0x0001 - 0x0000)
struct LobbyTimer_C_Handle_Show_Lobby_Timer final
{
public:
	bool                                          Show;                                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LobbyTimer_C_Handle_Show_Lobby_Timer) == 0x000001, "Wrong alignment on LobbyTimer_C_Handle_Show_Lobby_Timer");
static_assert(sizeof(LobbyTimer_C_Handle_Show_Lobby_Timer) == 0x000001, "Wrong size on LobbyTimer_C_Handle_Show_Lobby_Timer");
static_assert(offsetof(LobbyTimer_C_Handle_Show_Lobby_Timer, Show) == 0x000000, "Member 'LobbyTimer_C_Handle_Show_Lobby_Timer::Show' has a wrong offset!");

// Function LobbyTimer.LobbyTimer_C.Handle Lobby Timer Updated
// 0x0030 (0x0030 - 0x0000)
struct LobbyTimer_C_Handle_Lobby_Timer_Updated final
{
public:
	int32                                         Seconds_Remaining;                                 // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_MakeTimespan_ReturnValue;                 // 0x0008(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_AsTimespan_Timespan_ReturnValue;          // 0x0010(0x0018)()
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LobbyTimer_C_Handle_Lobby_Timer_Updated) == 0x000008, "Wrong alignment on LobbyTimer_C_Handle_Lobby_Timer_Updated");
static_assert(sizeof(LobbyTimer_C_Handle_Lobby_Timer_Updated) == 0x000030, "Wrong size on LobbyTimer_C_Handle_Lobby_Timer_Updated");
static_assert(offsetof(LobbyTimer_C_Handle_Lobby_Timer_Updated, Seconds_Remaining) == 0x000000, "Member 'LobbyTimer_C_Handle_Lobby_Timer_Updated::Seconds_Remaining' has a wrong offset!");
static_assert(offsetof(LobbyTimer_C_Handle_Lobby_Timer_Updated, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'LobbyTimer_C_Handle_Lobby_Timer_Updated::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(LobbyTimer_C_Handle_Lobby_Timer_Updated, CallFunc_MakeTimespan_ReturnValue) == 0x000008, "Member 'LobbyTimer_C_Handle_Lobby_Timer_Updated::CallFunc_MakeTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyTimer_C_Handle_Lobby_Timer_Updated, CallFunc_AsTimespan_Timespan_ReturnValue) == 0x000010, "Member 'LobbyTimer_C_Handle_Lobby_Timer_Updated::CallFunc_AsTimespan_Timespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyTimer_C_Handle_Lobby_Timer_Updated, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000028, "Member 'LobbyTimer_C_Handle_Lobby_Timer_Updated::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyTimer_C_Handle_Lobby_Timer_Updated, Temp_bool_IsClosed_Variable) == 0x000029, "Member 'LobbyTimer_C_Handle_Lobby_Timer_Updated::Temp_bool_IsClosed_Variable' has a wrong offset!");

}

