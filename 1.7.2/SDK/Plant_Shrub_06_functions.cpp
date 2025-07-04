﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Plant_Shrub_06

#include "Basic.hpp"

#include "Plant_Shrub_06_classes.hpp"
#include "Plant_Shrub_06_parameters.hpp"


namespace SDK
{

// Function Plant_Shrub_06.Plant_Shrub_06_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlant_Shrub_06_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Plant_Shrub_06_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Plant_Shrub_06.Plant_Shrub_06_C.OnLoot
// (Event, Public, BlueprintEvent)

void APlant_Shrub_06_C::OnLoot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Plant_Shrub_06_C", "OnLoot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Plant_Shrub_06.Plant_Shrub_06_C.ExecuteUbergraph_Plant_Shrub_06
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlant_Shrub_06_C::ExecuteUbergraph_Plant_Shrub_06(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Plant_Shrub_06_C", "ExecuteUbergraph_Plant_Shrub_06");

	Params::Plant_Shrub_06_C_ExecuteUbergraph_Plant_Shrub_06 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

