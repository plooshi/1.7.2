﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Bedroom_Dresser_02

#include "Basic.hpp"

#include "Bedroom_Dresser_02_classes.hpp"
#include "Bedroom_Dresser_02_parameters.hpp"


namespace SDK
{

// Function Bedroom_Dresser_02.Bedroom_Dresser_02_C.ExecuteUbergraph_Bedroom_Dresser_02
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABedroom_Dresser_02_C::ExecuteUbergraph_Bedroom_Dresser_02(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bedroom_Dresser_02_C", "ExecuteUbergraph_Bedroom_Dresser_02");

	Params::Bedroom_Dresser_02_C_ExecuteUbergraph_Bedroom_Dresser_02 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Bedroom_Dresser_02.Bedroom_Dresser_02_C.OnBeginSearch
// (Event, Public, BlueprintEvent)

void ABedroom_Dresser_02_C::OnBeginSearch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bedroom_Dresser_02_C", "OnBeginSearch");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Bedroom_Dresser_02.Bedroom_Dresser_02_C.OnLootRepeat
// (Event, Public, BlueprintEvent)

void ABedroom_Dresser_02_C::OnLootRepeat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bedroom_Dresser_02_C", "OnLootRepeat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Bedroom_Dresser_02.Bedroom_Dresser_02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABedroom_Dresser_02_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bedroom_Dresser_02_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

