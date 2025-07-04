﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Plant_Shrub_02

#include "Basic.hpp"

#include "Plant_Shrub_02_classes.hpp"
#include "Plant_Shrub_02_parameters.hpp"


namespace SDK
{

// Function Plant_Shrub_02.Plant_Shrub_02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlant_Shrub_02_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Plant_Shrub_02_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Plant_Shrub_02.Plant_Shrub_02_C.OnLoot
// (Event, Public, BlueprintEvent)

void APlant_Shrub_02_C::OnLoot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Plant_Shrub_02_C", "OnLoot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Plant_Shrub_02.Plant_Shrub_02_C.ExecuteUbergraph_Plant_Shrub_02
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlant_Shrub_02_C::ExecuteUbergraph_Plant_Shrub_02(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Plant_Shrub_02_C", "ExecuteUbergraph_Plant_Shrub_02");

	Params::Plant_Shrub_02_C_ExecuteUbergraph_Plant_Shrub_02 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

