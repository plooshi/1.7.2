﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_PlayerDBNOResurrect

#include "Basic.hpp"

#include "GAB_PlayerDBNOResurrect_classes.hpp"
#include "GAB_PlayerDBNOResurrect_parameters.hpp"


namespace SDK
{

// Function GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C.ExecuteUbergraph_GAB_PlayerDBNOResurrect
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_PlayerDBNOResurrect_C::ExecuteUbergraph_GAB_PlayerDBNOResurrect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_PlayerDBNOResurrect_C", "ExecuteUbergraph_GAB_PlayerDBNOResurrect");

	Params::GAB_PlayerDBNOResurrect_C_ExecuteUbergraph_GAB_PlayerDBNOResurrect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)

void UGAB_PlayerDBNOResurrect_C::K2_OnEndAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_PlayerDBNOResurrect_C", "K2_OnEndAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, Parm, OutParm, ReferenceParm)

void UGAB_PlayerDBNOResurrect_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_PlayerDBNOResurrect_C", "K2_ActivateAbilityFromEvent");

	Params::GAB_PlayerDBNOResurrect_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C.Targeted_8E1AEF7D40AE1D4CCBACC68EEB3D87D6
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_PlayerDBNOResurrect_C::Targeted_8E1AEF7D40AE1D4CCBACC68EEB3D87D6(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_PlayerDBNOResurrect_C", "Targeted_8E1AEF7D40AE1D4CCBACC68EEB3D87D6");

	Params::GAB_PlayerDBNOResurrect_C_Targeted_8E1AEF7D40AE1D4CCBACC68EEB3D87D6 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C.Cancelled_8E1AEF7D40AE1D4CCBACC68EEB3D87D6
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_PlayerDBNOResurrect_C::Cancelled_8E1AEF7D40AE1D4CCBACC68EEB3D87D6(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_PlayerDBNOResurrect_C", "Cancelled_8E1AEF7D40AE1D4CCBACC68EEB3D87D6");

	Params::GAB_PlayerDBNOResurrect_C_Cancelled_8E1AEF7D40AE1D4CCBACC68EEB3D87D6 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C.Triggered_0B41E4DC44D3371D619734A714E9FE50
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_PlayerDBNOResurrect_C::Triggered_0B41E4DC44D3371D619734A714E9FE50(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_PlayerDBNOResurrect_C", "Triggered_0B41E4DC44D3371D619734A714E9FE50");

	Params::GAB_PlayerDBNOResurrect_C_Triggered_0B41E4DC44D3371D619734A714E9FE50 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C.Cancelled_0B41E4DC44D3371D619734A714E9FE50
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_PlayerDBNOResurrect_C::Cancelled_0B41E4DC44D3371D619734A714E9FE50(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_PlayerDBNOResurrect_C", "Cancelled_0B41E4DC44D3371D619734A714E9FE50");

	Params::GAB_PlayerDBNOResurrect_C_Cancelled_0B41E4DC44D3371D619734A714E9FE50 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C.Completed_0B41E4DC44D3371D619734A714E9FE50
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_PlayerDBNOResurrect_C::Completed_0B41E4DC44D3371D619734A714E9FE50(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_PlayerDBNOResurrect_C", "Completed_0B41E4DC44D3371D619734A714E9FE50");

	Params::GAB_PlayerDBNOResurrect_C_Completed_0B41E4DC44D3371D619734A714E9FE50 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}

}

