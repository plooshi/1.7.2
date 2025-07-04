﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BluGlo_Node

#include "Basic.hpp"

#include "BluGlo_Node_classes.hpp"
#include "BluGlo_Node_parameters.hpp"


namespace SDK
{

// Function BluGlo_Node.BluGlo_Node_C.ExecuteUbergraph_BluGlo_Node
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABluGlo_Node_C::ExecuteUbergraph_BluGlo_Node(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluGlo_Node_C", "ExecuteUbergraph_BluGlo_Node");

	Params::BluGlo_Node_C_ExecuteUbergraph_BluGlo_Node Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BluGlo_Node.BluGlo_Node_C.ShowSpawnTrail
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          StartLocation_0                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   AnimDelay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABluGlo_Node_C::ShowSpawnTrail(const struct FVector& StartLocation_0, float AnimDelay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluGlo_Node_C", "ShowSpawnTrail");

	Params::BluGlo_Node_C_ShowSpawnTrail Parms{};

	Parms.StartLocation_0 = std::move(StartLocation_0);
	Parms.AnimDelay = AnimDelay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BluGlo_Node.BluGlo_Node_C.HandleMissionEvent_LocateBluGlo
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

void ABluGlo_Node_C::HandleMissionEvent_LocateBluGlo(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params_0, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, const class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, const class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluGlo_Node_C", "HandleMissionEvent_LocateBluGlo");

	Params::BluGlo_Node_C_HandleMissionEvent_LocateBluGlo Parms{};

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


// Function BluGlo_Node.BluGlo_Node_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABluGlo_Node_C::BlueprintOnInteract(const class AFortPawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluGlo_Node_C", "BlueprintOnInteract");

	Params::BluGlo_Node_C_BlueprintOnInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BluGlo_Node.BluGlo_Node_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABluGlo_Node_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluGlo_Node_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BluGlo_Node.BluGlo_Node_C.Trail__UpdateFunc
// (BlueprintEvent)

void ABluGlo_Node_C::Trail__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluGlo_Node_C", "Trail__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BluGlo_Node.BluGlo_Node_C.Trail__FinishedFunc
// (BlueprintEvent)

void ABluGlo_Node_C::Trail__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluGlo_Node_C", "Trail__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BluGlo_Node.BluGlo_Node_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABluGlo_Node_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluGlo_Node_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BluGlo_Node.BluGlo_Node_C.OnRep_ActivateEffects
// (BlueprintCallable, BlueprintEvent)

void ABluGlo_Node_C::OnRep_ActivateEffects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluGlo_Node_C", "OnRep_ActivateEffects");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BluGlo_Node.BluGlo_Node_C.OnRep_DeActivateEffects
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABluGlo_Node_C::OnRep_DeActivateEffects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluGlo_Node_C", "OnRep_DeActivateEffects");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BluGlo_Node.BluGlo_Node_C.OnRep_CanInteract
// (BlueprintCallable, BlueprintEvent)

void ABluGlo_Node_C::OnRep_CanInteract()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluGlo_Node_C", "OnRep_CanInteract");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BluGlo_Node.BluGlo_Node_C.BlueprintCanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABluGlo_Node_C::BlueprintCanInteract(const class AFortPawn* InteractingPawn) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluGlo_Node_C", "BlueprintCanInteract");

	Params::BluGlo_Node_C_BlueprintCanInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BluGlo_Node.BluGlo_Node_C.BlueprintGetInteractionString
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText ABluGlo_Node_C::BlueprintGetInteractionString(const class AFortPawn* InteractingPawn) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluGlo_Node_C", "BlueprintGetInteractionString");

	Params::BluGlo_Node_C_BlueprintGetInteractionString Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

