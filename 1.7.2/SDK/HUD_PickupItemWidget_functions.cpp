﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_PickupItemWidget

#include "Basic.hpp"

#include "HUD_PickupItemWidget_classes.hpp"
#include "HUD_PickupItemWidget_parameters.hpp"


namespace SDK
{

// Function HUD-PickupItemWidget.HUD-PickupItemWidget_C.ExecuteUbergraph_HUD-PickupItemWidget
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_PickupItemWidget_C::ExecuteUbergraph_HUD_PickupItemWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD-PickupItemWidget_C", "ExecuteUbergraph_HUD-PickupItemWidget");

	Params::HUD_PickupItemWidget_C_ExecuteUbergraph_HUD_PickupItemWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUD-PickupItemWidget.HUD-PickupItemWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_PickupItemWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD-PickupItemWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD-PickupItemWidget.HUD-PickupItemWidget_C.InitializeItemData
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_PickupItemWidget_C::InitializeItemData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD-PickupItemWidget_C", "InitializeItemData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD-PickupItemWidget.HUD-PickupItemWidget_C.InitializeInteractionFailureText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHUD_PickupItemWidget_C::InitializeInteractionFailureText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD-PickupItemWidget_C", "InitializeInteractionFailureText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUD-PickupItemWidget.HUD-PickupItemWidget_C.SetPickup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPickup*                      NewPickup                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_PickupItemWidget_C::SetPickup(class AFortPickup* NewPickup)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUD-PickupItemWidget_C", "SetPickup");

	Params::HUD_PickupItemWidget_C_SetPickup Parms{};

	Parms.NewPickup = NewPickup;

	UObject::ProcessEvent(Func, &Parms);
}

}

