﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerChoiceButtonWidget

#include "Basic.hpp"

#include "PlayerChoiceButtonWidget_classes.hpp"
#include "PlayerChoiceButtonWidget_parameters.hpp"


namespace SDK
{

// Function PlayerChoiceButtonWidget.PlayerChoiceButtonWidget_C.ExecuteUbergraph_PlayerChoiceButtonWidget
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerChoiceButtonWidget_C::ExecuteUbergraph_PlayerChoiceButtonWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerChoiceButtonWidget_C", "ExecuteUbergraph_PlayerChoiceButtonWidget");

	Params::PlayerChoiceButtonWidget_C_ExecuteUbergraph_PlayerChoiceButtonWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerChoiceButtonWidget.PlayerChoiceButtonWidget_C.BndEvt__Button_K2Node_ComponentBoundEvent_98_FortBaseButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortBaseButton*                  Button_0                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerChoiceButtonWidget_C::BndEvt__Button_K2Node_ComponentBoundEvent_98_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerChoiceButtonWidget_C", "BndEvt__Button_K2Node_ComponentBoundEvent_98_FortBaseButtonClicked__DelegateSignature");

	Params::PlayerChoiceButtonWidget_C_BndEvt__Button_K2Node_ComponentBoundEvent_98_FortBaseButtonClicked__DelegateSignature Parms{};

	Parms.Button_0 = Button_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerChoiceButtonWidget.PlayerChoiceButtonWidget_C.ConfigureChoice
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FChoiceDataEntry                 Choice                                                 (Parm)
// int32                                   ChoiceID_0                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerChoiceWidget_C*            Owner_0                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerChoiceButtonWidget_C::ConfigureChoice(const struct FChoiceDataEntry& Choice, int32 ChoiceID_0, class UPlayerChoiceWidget_C* Owner_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerChoiceButtonWidget_C", "ConfigureChoice");

	Params::PlayerChoiceButtonWidget_C_ConfigureChoice Parms{};

	Parms.Choice = std::move(Choice);
	Parms.ChoiceID_0 = ChoiceID_0;
	Parms.Owner_0 = Owner_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

