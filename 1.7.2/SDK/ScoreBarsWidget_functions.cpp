﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ScoreBarsWidget

#include "Basic.hpp"

#include "ScoreBarsWidget_classes.hpp"
#include "ScoreBarsWidget_parameters.hpp"


namespace SDK
{

// Function ScoreBarsWidget.ScoreBarsWidget_C.ExecuteUbergraph_ScoreBarsWidget
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScoreBarsWidget_C::ExecuteUbergraph_ScoreBarsWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoreBarsWidget_C", "ExecuteUbergraph_ScoreBarsWidget");

	Params::ScoreBarsWidget_C_ExecuteUbergraph_ScoreBarsWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UScoreBarsWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoreBarsWidget_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UScoreBarsWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoreBarsWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.HandleMissionsUpdated
// (Public, BlueprintCallable, BlueprintEvent)

void UScoreBarsWidget_C::HandleMissionsUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoreBarsWidget_C", "HandleMissionsUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.InitializeScoreBars
// (Public, BlueprintCallable, BlueprintEvent)

void UScoreBarsWidget_C::InitializeScoreBars()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoreBarsWidget_C", "InitializeScoreBars");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.HasValidBadgeInfos
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bHasValidBadgeInfos                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UScoreBarsWidget_C::HasValidBadgeInfos(bool* bHasValidBadgeInfos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoreBarsWidget_C", "HasValidBadgeInfos");

	Params::ScoreBarsWidget_C_HasValidBadgeInfos Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bHasValidBadgeInfos != nullptr)
		*bHasValidBadgeInfos = Parms.bHasValidBadgeInfos;
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.UpdateScoreTotals
// (Public, BlueprintCallable, BlueprintEvent)

void UScoreBarsWidget_C::UpdateScoreTotals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoreBarsWidget_C", "UpdateScoreTotals");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.HandleUpdateUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMissionState*                Mission                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScoreBarsWidget_C::HandleUpdateUI(class AFortMissionState* Mission)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoreBarsWidget_C", "HandleUpdateUI");

	Params::ScoreBarsWidget_C_HandleUpdateUI Parms{};

	Parms.Mission = Mission;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.UpdateScoreBars
// (Public, BlueprintCallable, BlueprintEvent)

void UScoreBarsWidget_C::UpdateScoreBars()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoreBarsWidget_C", "UpdateScoreBars");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.InitializeIcons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UScoreBarsWidget_C::InitializeIcons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoreBarsWidget_C", "InitializeIcons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.HandleScoreStatChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Delta                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Name_0                                                 (Parm, OutParm, ReferenceParm)
// EFortReplicatedStat                     StatType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EStatCategory                           StatCategory                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UScoreBarsWidget_C::HandleScoreStatChanged(int32 Delta, class FText& Name_0, EFortReplicatedStat StatType, EStatCategory StatCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoreBarsWidget_C", "HandleScoreStatChanged");

	Params::ScoreBarsWidget_C_HandleScoreStatChanged Parms{};

	Parms.Delta = Delta;
	Parms.Name_0 = std::move(Name_0);
	Parms.StatType = StatType;
	Parms.StatCategory = StatCategory;

	UObject::ProcessEvent(Func, &Parms);

	Name_0 = std::move(Parms.Name_0);
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.TryGetNextScoreMessage
// (Public, BlueprintCallable, BlueprintEvent)

void UScoreBarsWidget_C::TryGetNextScoreMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoreBarsWidget_C", "TryGetNextScoreMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.HandleScoreMessageExpired
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIMessageItemWidget*         Expired_Message                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScoreBarsWidget_C::HandleScoreMessageExpired(class UFortUIMessageItemWidget* Expired_Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoreBarsWidget_C", "HandleScoreMessageExpired");

	Params::ScoreBarsWidget_C_HandleScoreMessageExpired Parms{};

	Parms.Expired_Message = Expired_Message;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.RegisterForScoreStreamEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UScoreBarsWidget_C::RegisterForScoreStreamEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoreBarsWidget_C", "RegisterForScoreStreamEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.HideScoreMessageSlots
// (Public, BlueprintCallable, BlueprintEvent)

void UScoreBarsWidget_C::HideScoreMessageSlots()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoreBarsWidget_C", "HideScoreMessageSlots");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.HandleMessageDisplayed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIMessageItemWidget*         ItemWidget                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScoreBarsWidget_C::HandleMessageDisplayed(class UFortUIMessageItemWidget* ItemWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoreBarsWidget_C", "HandleMessageDisplayed");

	Params::ScoreBarsWidget_C_HandleMessageDisplayed Parms{};

	Parms.ItemWidget = ItemWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.HandleScoreNumberChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EStatCategory                           ScoreCategory                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UScoreBarsWidget_C::HandleScoreNumberChanged(EStatCategory ScoreCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoreBarsWidget_C", "HandleScoreNumberChanged");

	Params::ScoreBarsWidget_C_HandleScoreNumberChanged Parms{};

	Parms.ScoreCategory = ScoreCategory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ScoreBarsWidget.ScoreBarsWidget_C.UnregisterForScoreStreamEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UScoreBarsWidget_C::UnregisterForScoreStreamEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoreBarsWidget_C", "UnregisterForScoreStreamEvents");

	UObject::ProcessEvent(Func, nullptr);
}

}

