﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaKillerPortraitWidget

#include "Basic.hpp"

#include "AthenaKillerPortraitWidget_classes.hpp"
#include "AthenaKillerPortraitWidget_parameters.hpp"


namespace SDK
{

// Function AthenaKillerPortraitWidget.AthenaKillerPortraitWidget_C.Init
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPlayerDeathReport           DeathReport                                            (Parm, OutParm, ReferenceParm)

void UAthenaKillerPortraitWidget_C::Init(struct FFortPlayerDeathReport& DeathReport)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaKillerPortraitWidget_C", "Init");

	Params::AthenaKillerPortraitWidget_C_Init Parms{};

	Parms.DeathReport = std::move(DeathReport);

	UObject::ProcessEvent(Func, &Parms);

	DeathReport = std::move(Parms.DeathReport);
}


// Function AthenaKillerPortraitWidget.AthenaKillerPortraitWidget_C.GetOwningPlayerState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*           AsFort_Player_State_Athena                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaKillerPortraitWidget_C::GetOwningPlayerState(class AFortPlayerStateAthena** AsFort_Player_State_Athena)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaKillerPortraitWidget_C", "GetOwningPlayerState");

	Params::AthenaKillerPortraitWidget_C_GetOwningPlayerState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AsFort_Player_State_Athena != nullptr)
		*AsFort_Player_State_Athena = Parms.AsFort_Player_State_Athena;
}

}

