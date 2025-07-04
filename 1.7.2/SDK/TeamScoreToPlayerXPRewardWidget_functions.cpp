﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TeamScoreToPlayerXPRewardWidget

#include "Basic.hpp"

#include "TeamScoreToPlayerXPRewardWidget_classes.hpp"
#include "TeamScoreToPlayerXPRewardWidget_parameters.hpp"


namespace SDK
{

// Function TeamScoreToPlayerXPRewardWidget.TeamScoreToPlayerXPRewardWidget_C.ExecuteUbergraph_TeamScoreToPlayerXPRewardWidget
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeamScoreToPlayerXPRewardWidget_C::ExecuteUbergraph_TeamScoreToPlayerXPRewardWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamScoreToPlayerXPRewardWidget_C", "ExecuteUbergraph_TeamScoreToPlayerXPRewardWidget");

	Params::TeamScoreToPlayerXPRewardWidget_C_ExecuteUbergraph_TeamScoreToPlayerXPRewardWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TeamScoreToPlayerXPRewardWidget.TeamScoreToPlayerXPRewardWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTeamScoreToPlayerXPRewardWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamScoreToPlayerXPRewardWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TeamScoreToPlayerXPRewardWidget.TeamScoreToPlayerXPRewardWidget_C.OnLevelChanged
// (BlueprintCallable, BlueprintEvent)

void UTeamScoreToPlayerXPRewardWidget_C::OnLevelChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamScoreToPlayerXPRewardWidget_C", "OnLevelChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TeamScoreToPlayerXPRewardWidget.TeamScoreToPlayerXPRewardWidget_C.Update XP LERP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   LERP_Factor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeamScoreToPlayerXPRewardWidget_C::Update_XP_LERP(float LERP_Factor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamScoreToPlayerXPRewardWidget_C", "Update XP LERP");

	Params::TeamScoreToPlayerXPRewardWidget_C_Update_XP_LERP Parms{};

	Parms.LERP_Factor = LERP_Factor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TeamScoreToPlayerXPRewardWidget.TeamScoreToPlayerXPRewardWidget_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortUIXpInfo                    XPinfo_0                                               (Parm, NoDestructor)

void UTeamScoreToPlayerXPRewardWidget_C::Initialize(const struct FFortUIXpInfo& XPinfo_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamScoreToPlayerXPRewardWidget_C", "Initialize");

	Params::TeamScoreToPlayerXPRewardWidget_C_Initialize Parms{};

	Parms.XPinfo_0 = std::move(XPinfo_0);

	UObject::ProcessEvent(Func, &Parms);
}

}

