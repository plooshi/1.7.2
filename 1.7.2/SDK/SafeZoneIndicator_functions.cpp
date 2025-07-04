﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SafeZoneIndicator

#include "Basic.hpp"

#include "SafeZoneIndicator_classes.hpp"
#include "SafeZoneIndicator_parameters.hpp"


namespace SDK
{

// Function SafeZoneIndicator.SafeZoneIndicator_C.HandleInsideOutsideMix
// (Public, BlueprintCallable, BlueprintEvent)

void ASafeZoneIndicator_C::HandleInsideOutsideMix()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SafeZoneIndicator_C", "HandleInsideOutsideMix");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.InitClosestPointAudio
// (Public, BlueprintCallable, BlueprintEvent)

void ASafeZoneIndicator_C::InitClosestPointAudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SafeZoneIndicator_C", "InitClosestPointAudio");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.UpdateClosestPointAudioLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASafeZoneIndicator_C::UpdateClosestPointAudioLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SafeZoneIndicator_C", "UpdateClosestPointAudioLocation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.GetClosestPointOnSafeZone
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          PlayerLocation                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASafeZoneIndicator_C::GetClosestPointOnSafeZone(const struct FVector& PlayerLocation, struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SafeZoneIndicator_C", "GetClosestPointOnSafeZone");

	Params::SafeZoneIndicator_C_GetClosestPointOnSafeZone Parms{};

	Parms.PlayerLocation = std::move(PlayerLocation);

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASafeZoneIndicator_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SafeZoneIndicator_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.Movement Audio Crossfader__FinishedFunc
// (BlueprintEvent)

void ASafeZoneIndicator_C::Movement_Audio_Crossfader__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SafeZoneIndicator_C", "Movement Audio Crossfader__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.Movement Audio Crossfader__UpdateFunc
// (BlueprintEvent)

void ASafeZoneIndicator_C::Movement_Audio_Crossfader__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SafeZoneIndicator_C", "Movement Audio Crossfader__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.Holding Audio Crossfader__FinishedFunc
// (BlueprintEvent)

void ASafeZoneIndicator_C::Holding_Audio_Crossfader__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SafeZoneIndicator_C", "Holding Audio Crossfader__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.Holding Audio Crossfader__UpdateFunc
// (BlueprintEvent)

void ASafeZoneIndicator_C::Holding_Audio_Crossfader__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SafeZoneIndicator_C", "Holding Audio Crossfader__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASafeZoneIndicator_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SafeZoneIndicator_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASafeZoneIndicator_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SafeZoneIndicator_C", "ReceiveTick");

	Params::SafeZoneIndicator_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.OnSafeZoneStateChange
// (Event, Public, BlueprintEvent)
// Parameters:
// EFortSafeZoneState                      NewState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASafeZoneIndicator_C::OnSafeZoneStateChange(EFortSafeZoneState NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SafeZoneIndicator_C", "OnSafeZoneStateChange");

	Params::SafeZoneIndicator_C_OnSafeZoneStateChange Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.ExecuteUbergraph_SafeZoneIndicator
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASafeZoneIndicator_C::ExecuteUbergraph_SafeZoneIndicator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SafeZoneIndicator_C", "ExecuteUbergraph_SafeZoneIndicator");

	Params::SafeZoneIndicator_C_ExecuteUbergraph_SafeZoneIndicator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

