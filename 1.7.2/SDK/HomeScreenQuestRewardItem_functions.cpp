﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HomeScreenQuestRewardItem

#include "Basic.hpp"

#include "HomeScreenQuestRewardItem_classes.hpp"
#include "HomeScreenQuestRewardItem_parameters.hpp"


namespace SDK
{

// Function HomeScreenQuestRewardItem.HomeScreenQuestRewardItem_C.ExecuteUbergraph_HomeScreenQuestRewardItem
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHomeScreenQuestRewardItem_C::ExecuteUbergraph_HomeScreenQuestRewardItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeScreenQuestRewardItem_C", "ExecuteUbergraph_HomeScreenQuestRewardItem");

	Params::HomeScreenQuestRewardItem_C_ExecuteUbergraph_HomeScreenQuestRewardItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HomeScreenQuestRewardItem.HomeScreenQuestRewardItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHomeScreenQuestRewardItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeScreenQuestRewardItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

