﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BluGloManager

#include "Basic.hpp"

#include "BluGloManager_classes.hpp"
#include "BluGloManager_parameters.hpp"


namespace SDK
{

// Function BluGloManager.BluGloManager_C.ExecuteUbergraph_BluGloManager
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABluGloManager_C::ExecuteUbergraph_BluGloManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluGloManager_C", "ExecuteUbergraph_BluGloManager");

	Params::BluGloManager_C_ExecuteUbergraph_BluGloManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BluGloManager.BluGloManager_C.HandleMissionEvent_RequestBluGloSpawnUseEQS
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

void ABluGloManager_C::HandleMissionEvent_RequestBluGloSpawnUseEQS(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params_0, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, const class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, const class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluGloManager_C", "HandleMissionEvent_RequestBluGloSpawnUseEQS");

	Params::BluGloManager_C_HandleMissionEvent_RequestBluGloSpawnUseEQS Parms{};

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


// Function BluGloManager.BluGloManager_C.AddMoreBluGloInWorld
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMission*                     Mission                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABluGloManager_C::AddMoreBluGloInWorld(class AFortMission* Mission)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluGloManager_C", "AddMoreBluGloInWorld");

	Params::BluGloManager_C_AddMoreBluGloInWorld Parms{};

	Parms.Mission = Mission;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BluGloManager.BluGloManager_C.SpawnBluGloGroupEvent
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          SpawnCenter                                            (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABluGloManager_C::SpawnBluGloGroupEvent(const struct FVector& SpawnCenter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluGloManager_C", "SpawnBluGloGroupEvent");

	Params::BluGloManager_C_SpawnBluGloGroupEvent Parms{};

	Parms.SpawnCenter = std::move(SpawnCenter);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BluGloManager.BluGloManager_C.SpawnFXComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent*         PSystem                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABluGloManager_C::SpawnFXComplete(class UParticleSystemComponent* PSystem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluGloManager_C", "SpawnFXComplete");

	Params::BluGloManager_C_SpawnFXComplete Parms{};

	Parms.PSystem = PSystem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BluGloManager.BluGloManager_C.OnBluGloQueryFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           ActorToSpawnFrom                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          LocationToSpawnFromIfActorInvalid                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EEnvQueryStatus                         QueryStatus                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnvQueryInstanceBlueprintWrapper*QueryInstance                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NumBluGloToSpawn                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABluGloManager_C::OnBluGloQueryFinished(class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFromIfActorInvalid, EEnvQueryStatus QueryStatus, class UEnvQueryInstanceBlueprintWrapper* QueryInstance, int32 NumBluGloToSpawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluGloManager_C", "OnBluGloQueryFinished");

	Params::BluGloManager_C_OnBluGloQueryFinished Parms{};

	Parms.ActorToSpawnFrom = ActorToSpawnFrom;
	Parms.LocationToSpawnFromIfActorInvalid = std::move(LocationToSpawnFromIfActorInvalid);
	Parms.QueryStatus = QueryStatus;
	Parms.QueryInstance = QueryInstance;
	Parms.NumBluGloToSpawn = NumBluGloToSpawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BluGloManager.BluGloManager_C.StopSpawnFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    off                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABluGloManager_C::StopSpawnFX(bool off)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluGloManager_C", "StopSpawnFX");

	Params::BluGloManager_C_StopSpawnFX Parms{};

	Parms.off = off;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BluGloManager.BluGloManager_C.HandleMissionEvent_RequestBluGloSpawnUseActor
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

void ABluGloManager_C::HandleMissionEvent_RequestBluGloSpawnUseActor(const struct FGuid& MissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params_0, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, const class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, const class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluGloManager_C", "HandleMissionEvent_RequestBluGloSpawnUseActor");

	Params::BluGloManager_C_HandleMissionEvent_RequestBluGloSpawnUseActor Parms{};

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


// Function BluGloManager.BluGloManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABluGloManager_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluGloManager_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BluGloManager.BluGloManager_C.RequestedBluGo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMission*                     Mission                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          EQS_Start_Location                                     (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Actor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABluGloManager_C::RequestedBluGo(class AFortMission* Mission, const struct FVector& EQS_Start_Location, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluGloManager_C", "RequestedBluGo");

	Params::BluGloManager_C_RequestedBluGo Parms{};

	Parms.Mission = Mission;
	Parms.EQS_Start_Location = std::move(EQS_Start_Location);
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BluGloManager.BluGloManager_C.RemoveOccupiedNodes
// (Public, BlueprintCallable, BlueprintEvent)

void ABluGloManager_C::RemoveOccupiedNodes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluGloManager_C", "RemoveOccupiedNodes");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BluGloManager.BluGloManager_C.SpawnBluGlo
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          SpawnLocation                                          (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          SpawnFromLocation                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABluGloManager_C::SpawnBluGlo(const struct FVector& SpawnLocation, const struct FVector& SpawnFromLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluGloManager_C", "SpawnBluGlo");

	Params::BluGloManager_C_SpawnBluGlo Parms{};

	Parms.SpawnLocation = std::move(SpawnLocation);
	Parms.SpawnFromLocation = std::move(SpawnFromLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BluGloManager.BluGloManager_C.IssueBluGloRequest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NumBluGloToSpawn                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           ActorToSpawnFrom                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          LocationToSpawnFromIfActorInvalid                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABluGloManager_C::IssueBluGloRequest(int32 NumBluGloToSpawn, class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFromIfActorInvalid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluGloManager_C", "IssueBluGloRequest");

	Params::BluGloManager_C_IssueBluGloRequest Parms{};

	Parms.NumBluGloToSpawn = NumBluGloToSpawn;
	Parms.ActorToSpawnFrom = ActorToSpawnFrom;
	Parms.LocationToSpawnFromIfActorInvalid = std::move(LocationToSpawnFromIfActorInvalid);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BluGloManager.BluGloManager_C.BuildSpawnLocations
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EEnvQueryStatus                         QueryStatus                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnvQueryInstanceBlueprintWrapper*QueryInstance                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NumBluGloToSpawn                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          SpawnCenter                                            (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>                  LocationsForSpawningBluGlo                             (Parm, OutParm, ZeroConstructor)

void ABluGloManager_C::BuildSpawnLocations(EEnvQueryStatus QueryStatus, class UEnvQueryInstanceBlueprintWrapper* QueryInstance, int32 NumBluGloToSpawn, const struct FVector& SpawnCenter, TArray<struct FVector>* LocationsForSpawningBluGlo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluGloManager_C", "BuildSpawnLocations");

	Params::BluGloManager_C_BuildSpawnLocations Parms{};

	Parms.QueryStatus = QueryStatus;
	Parms.QueryInstance = QueryInstance;
	Parms.NumBluGloToSpawn = NumBluGloToSpawn;
	Parms.SpawnCenter = std::move(SpawnCenter);

	UObject::ProcessEvent(Func, &Parms);

	if (LocationsForSpawningBluGlo != nullptr)
		*LocationsForSpawningBluGlo = std::move(Parms.LocationsForSpawningBluGlo);
}


// Function BluGloManager.BluGloManager_C.BuildSpawnLocationsFromQueryLocations
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NumBluGloToSpawn                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>                  QueryResultLocations                                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>                  LocationsForSpawningBluGlo                             (Parm, OutParm, ZeroConstructor)

void ABluGloManager_C::BuildSpawnLocationsFromQueryLocations(int32 NumBluGloToSpawn, TArray<struct FVector>& QueryResultLocations, TArray<struct FVector>* LocationsForSpawningBluGlo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluGloManager_C", "BuildSpawnLocationsFromQueryLocations");

	Params::BluGloManager_C_BuildSpawnLocationsFromQueryLocations Parms{};

	Parms.NumBluGloToSpawn = NumBluGloToSpawn;
	Parms.QueryResultLocations = std::move(QueryResultLocations);

	UObject::ProcessEvent(Func, &Parms);

	QueryResultLocations = std::move(Parms.QueryResultLocations);

	if (LocationsForSpawningBluGlo != nullptr)
		*LocationsForSpawningBluGlo = std::move(Parms.LocationsForSpawningBluGlo);
}


// Function BluGloManager.BluGloManager_C.BuildSpawnLocationsRandomly
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          LocationToSpawnFrom                                    (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NumBluGloToSpawn                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>                  LocationsForSpawningBluGlo                             (Parm, OutParm, ZeroConstructor)

void ABluGloManager_C::BuildSpawnLocationsRandomly(const struct FVector& LocationToSpawnFrom, int32 NumBluGloToSpawn, TArray<struct FVector>* LocationsForSpawningBluGlo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluGloManager_C", "BuildSpawnLocationsRandomly");

	Params::BluGloManager_C_BuildSpawnLocationsRandomly Parms{};

	Parms.LocationToSpawnFrom = std::move(LocationToSpawnFrom);
	Parms.NumBluGloToSpawn = NumBluGloToSpawn;

	UObject::ProcessEvent(Func, &Parms);

	if (LocationsForSpawningBluGlo != nullptr)
		*LocationsForSpawningBluGlo = std::move(Parms.LocationsForSpawningBluGlo);
}


// Function BluGloManager.BluGloManager_C.ChooseSpawnCenter
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           ActorToSpawnFrom                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          LocationToSpawnFrom                                    (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          SpawnCenter                                            (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABluGloManager_C::ChooseSpawnCenter(class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFrom, struct FVector* SpawnCenter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluGloManager_C", "ChooseSpawnCenter");

	Params::BluGloManager_C_ChooseSpawnCenter Parms{};

	Parms.ActorToSpawnFrom = ActorToSpawnFrom;
	Parms.LocationToSpawnFrom = std::move(LocationToSpawnFrom);

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnCenter != nullptr)
		*SpawnCenter = std::move(Parms.SpawnCenter);
}


// Function BluGloManager.BluGloManager_C.SpawnBluGloGroup
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           ActorToSpawnFrom                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          LocationToSpawnFromIfActorInvalid                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EEnvQueryStatus                         QueryStatus                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnvQueryInstanceBlueprintWrapper*QueryInstance                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NumBluGloToSpawn                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABluGloManager_C::SpawnBluGloGroup(class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFromIfActorInvalid, EEnvQueryStatus QueryStatus, class UEnvQueryInstanceBlueprintWrapper* QueryInstance, int32 NumBluGloToSpawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluGloManager_C", "SpawnBluGloGroup");

	Params::BluGloManager_C_SpawnBluGloGroup Parms{};

	Parms.ActorToSpawnFrom = ActorToSpawnFrom;
	Parms.LocationToSpawnFromIfActorInvalid = std::move(LocationToSpawnFromIfActorInvalid);
	Parms.QueryStatus = QueryStatus;
	Parms.QueryInstance = QueryInstance;
	Parms.NumBluGloToSpawn = NumBluGloToSpawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BluGloManager.BluGloManager_C.StartSpawnFXAndAudio
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          SpawnCenter                                            (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*         SpawnFXEmitter                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABluGloManager_C::StartSpawnFXAndAudio(const struct FVector& SpawnCenter, class UParticleSystemComponent** SpawnFXEmitter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluGloManager_C", "StartSpawnFXAndAudio");

	Params::BluGloManager_C_StartSpawnFXAndAudio Parms{};

	Parms.SpawnCenter = std::move(SpawnCenter);

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnFXEmitter != nullptr)
		*SpawnFXEmitter = Parms.SpawnFXEmitter;
}


// Function BluGloManager.BluGloManager_C.IssueBluGloRequestForMission
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMission*                     Mission                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           ActorToSpawnBluGloFrom                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABluGloManager_C::IssueBluGloRequestForMission(class AFortMission* Mission, class AActor* ActorToSpawnBluGloFrom)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BluGloManager_C", "IssueBluGloRequestForMission");

	Params::BluGloManager_C_IssueBluGloRequestForMission Parms{};

	Parms.Mission = Mission;
	Parms.ActorToSpawnBluGloFrom = ActorToSpawnBluGloFrom;

	UObject::ProcessEvent(Func, &Parms);
}

}

