﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Keep_AmmoStash

#include "Basic.hpp"

#include "B_Keep_AmmoStash_classes.hpp"
#include "B_Keep_AmmoStash_parameters.hpp"


namespace SDK
{

// Function B_Keep_AmmoStash.B_Keep_AmmoStash_C.AmmoTaken
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   AmmoPos                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AKeepItemContainer*               Reference                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Keep_AmmoStash_C::AmmoTaken(int32 AmmoPos, class AKeepItemContainer* Reference)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Keep_AmmoStash_C", "AmmoTaken");

	Params::B_Keep_AmmoStash_C_AmmoTaken Parms{};

	Parms.AmmoPos = AmmoPos;
	Parms.Reference = Reference;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Keep_AmmoStash.B_Keep_AmmoStash_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Keep_AmmoStash_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Keep_AmmoStash_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Keep_AmmoStash.B_Keep_AmmoStash_C.HandleMissionEvent_OnDefenseStarted
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            MissionGuid                                            (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            ObjectiveHandle                                        (Parm)
// class UFortMissionEventParams*          Params_0                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    DO_NOT_USE_THIS_OR_VARIABLES_BELOW                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          EventFocus                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                       EventContent                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           EventInstigator                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   GenericInt                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   GenericFloat                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             GenericText                                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer            GameplayTags                                           (Parm)
// struct FFortMissionEvent                MissionEvent                                           (ConstParm, Parm, OutParm, ReferenceParm)

void AB_Keep_AmmoStash_C::HandleMissionEvent_OnDefenseStarted(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params_0, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, const class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, const class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Keep_AmmoStash_C", "HandleMissionEvent_OnDefenseStarted");

	Params::B_Keep_AmmoStash_C_HandleMissionEvent_OnDefenseStarted Parms{};

	Parms.MissionGuid = std::move(MissionGuid);
	Parms.ObjectiveHandle = std::move(ObjectiveHandle);
	Parms.Params_0 = Params_0;
	Parms.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	Parms.EventFocus = EventFocus;
	Parms.EventContent = EventContent;
	Parms.EventInstigator = EventInstigator;
	Parms.GenericInt = GenericInt;
	Parms.GenericFloat = GenericFloat;
	Parms.GenericText = std::move(GenericText);
	Parms.GameplayTags = std::move(GameplayTags);
	Parms.MissionEvent = std::move(MissionEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Keep_AmmoStash.B_Keep_AmmoStash_C.HandleMissionEvent_OnDefenseStopped
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            MissionGuid                                            (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            ObjectiveHandle                                        (Parm)
// class UFortMissionEventParams*          Params_0                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    DO_NOT_USE_THIS_OR_VARIABLES_BELOW                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          EventFocus                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                       EventContent                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           EventInstigator                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   GenericInt                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   GenericFloat                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             GenericText                                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer            GameplayTags                                           (Parm)
// struct FFortMissionEvent                MissionEvent                                           (ConstParm, Parm, OutParm, ReferenceParm)

void AB_Keep_AmmoStash_C::HandleMissionEvent_OnDefenseStopped(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params_0, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, const class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, const class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Keep_AmmoStash_C", "HandleMissionEvent_OnDefenseStopped");

	Params::B_Keep_AmmoStash_C_HandleMissionEvent_OnDefenseStopped Parms{};

	Parms.MissionGuid = std::move(MissionGuid);
	Parms.ObjectiveHandle = std::move(ObjectiveHandle);
	Parms.Params_0 = Params_0;
	Parms.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	Parms.EventFocus = EventFocus;
	Parms.EventContent = EventContent;
	Parms.EventInstigator = EventInstigator;
	Parms.GenericInt = GenericInt;
	Parms.GenericFloat = GenericFloat;
	Parms.GenericText = std::move(GenericText);
	Parms.GameplayTags = std::move(GameplayTags);
	Parms.MissionEvent = std::move(MissionEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Keep_AmmoStash.B_Keep_AmmoStash_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Keep_AmmoStash_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Keep_AmmoStash_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Keep_AmmoStash.B_Keep_AmmoStash_C.ExecuteUbergraph_B_Keep_AmmoStash
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Keep_AmmoStash_C::ExecuteUbergraph_B_Keep_AmmoStash(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Keep_AmmoStash_C", "ExecuteUbergraph_B_Keep_AmmoStash");

	Params::B_Keep_AmmoStash_C_ExecuteUbergraph_B_Keep_AmmoStash Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Keep_AmmoStash.B_Keep_AmmoStash_C.BlueprintCanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AB_Keep_AmmoStash_C::BlueprintCanInteract(const class AFortPawn* InteractingPawn) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Keep_AmmoStash_C", "BlueprintCanInteract");

	Params::B_Keep_AmmoStash_C_BlueprintCanInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

