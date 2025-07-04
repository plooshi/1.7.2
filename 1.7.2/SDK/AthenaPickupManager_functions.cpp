﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaPickupManager

#include "Basic.hpp"

#include "AthenaPickupManager_classes.hpp"
#include "AthenaPickupManager_parameters.hpp"


namespace SDK
{

// Function AthenaPickupManager.AthenaPickupManager_C.ExecuteUbergraph_AthenaPickupManager
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPickupManager_C::ExecuteUbergraph_AthenaPickupManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPickupManager_C", "ExecuteUbergraph_AthenaPickupManager");

	Params::AthenaPickupManager_C_ExecuteUbergraph_AthenaPickupManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaPickupManager.AthenaPickupManager_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaPickupManager_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPickupManager_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaPickupManager.AthenaPickupManager_C.HandleWorldItemListChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortWorldItem*>           ItemsAdded                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UFortWorldItem*>           ItemsRemoved                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaPickupManager_C::HandleWorldItemListChanged(const TArray<class UFortWorldItem*>& ItemsAdded, const TArray<class UFortWorldItem*>& ItemsRemoved)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPickupManager_C", "HandleWorldItemListChanged");

	Params::AthenaPickupManager_C_HandleWorldItemListChanged Parms{};

	Parms.ItemsAdded = std::move(ItemsAdded);
	Parms.ItemsRemoved = std::move(ItemsRemoved);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaPickupManager.AthenaPickupManager_C.HandleWorldItemsChanged
// (BlueprintCallable, BlueprintEvent)

void UAthenaPickupManager_C::HandleWorldItemsChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPickupManager_C", "HandleWorldItemsChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaPickupManager.AthenaPickupManager_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaPickupManager_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPickupManager_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaPickupManager.AthenaPickupManager_C.TryGetNextItem
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaPickupManager_C::TryGetNextItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPickupManager_C", "TryGetNextItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaPickupManager.AthenaPickupManager_C.HandleMessageExpired
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIMessageItemWidget*         Message_Item                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPickupManager_C::HandleMessageExpired(class UFortUIMessageItemWidget* Message_Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPickupManager_C", "HandleMessageExpired");

	Params::AthenaPickupManager_C_HandleMessageExpired Parms{};

	Parms.Message_Item = Message_Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaPickupManager.AthenaPickupManager_C.HandleItemPickedUp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWorldItem*                   NewItem                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Count                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPickupManager_C::HandleItemPickedUp(class UFortWorldItem* NewItem, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPickupManager_C", "HandleItemPickedUp");

	Params::AthenaPickupManager_C_HandleItemPickedUp Parms{};

	Parms.NewItem = NewItem;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaPickupManager.AthenaPickupManager_C.RefreshCounts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaPickupManager_C::RefreshCounts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPickupManager_C", "RefreshCounts");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaPickupManager.AthenaPickupManager_C.UpdateKeybinds
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaPickupManager_C::UpdateKeybinds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPickupManager_C", "UpdateKeybinds");

	UObject::ProcessEvent(Func, nullptr);
}

}

