﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SurvivorTraitsDetailWidget

#include "Basic.hpp"

#include "SurvivorTraitsDetailWidget_classes.hpp"
#include "SurvivorTraitsDetailWidget_parameters.hpp"


namespace SDK
{

// Function SurvivorTraitsDetailWidget.SurvivorTraitsDetailWidget_C.ExecuteUbergraph_SurvivorTraitsDetailWidget
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USurvivorTraitsDetailWidget_C::ExecuteUbergraph_SurvivorTraitsDetailWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SurvivorTraitsDetailWidget_C", "ExecuteUbergraph_SurvivorTraitsDetailWidget");

	Params::SurvivorTraitsDetailWidget_C_ExecuteUbergraph_SurvivorTraitsDetailWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SurvivorTraitsDetailWidget.SurvivorTraitsDetailWidget_C.HandlePostDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)

void USurvivorTraitsDetailWidget_C::HandlePostDifferentItemToDetailSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SurvivorTraitsDetailWidget_C", "HandlePostDifferentItemToDetailSet");

	UObject::ProcessEvent(Func, nullptr);
}

}

