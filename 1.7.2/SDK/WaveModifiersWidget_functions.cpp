﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WaveModifiersWidget

#include "Basic.hpp"

#include "WaveModifiersWidget_classes.hpp"
#include "WaveModifiersWidget_parameters.hpp"


namespace SDK
{

// Function WaveModifiersWidget.WaveModifiersWidget_C.OnModifiersAdded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortGameplayModifierItemDefinition*>Modifiers                                              (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                                    StartPresentationImmediately                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWaveModifiersWidget_C::OnModifiersAdded(TArray<class UFortGameplayModifierItemDefinition*>& Modifiers, bool StartPresentationImmediately)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaveModifiersWidget_C", "OnModifiersAdded");

	Params::WaveModifiersWidget_C_OnModifiersAdded Parms{};

	Parms.Modifiers = std::move(Modifiers);
	Parms.StartPresentationImmediately = StartPresentationImmediately;

	UObject::ProcessEvent(Func, &Parms);

	Modifiers = std::move(Parms.Modifiers);
}


// Function WaveModifiersWidget.WaveModifiersWidget_C.PresentNextModifier
// (Public, BlueprintCallable, BlueprintEvent)

void UWaveModifiersWidget_C::PresentNextModifier()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WaveModifiersWidget_C", "PresentNextModifier");

	UObject::ProcessEvent(Func, nullptr);
}

}

