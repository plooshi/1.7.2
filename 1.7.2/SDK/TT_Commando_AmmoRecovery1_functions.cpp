﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TT_Commando_AmmoRecovery1

#include "Basic.hpp"

#include "TT_Commando_AmmoRecovery1_classes.hpp"
#include "TT_Commando_AmmoRecovery1_parameters.hpp"


namespace SDK
{

// Function TT_Commando_AmmoRecovery1.TT_Commando_AmmoRecovery1_C.InitializeAbilityInstanceInternal
// (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGameplayAbility*                 AbilityInstance                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*              Context                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTT_Commando_AmmoRecovery1_C::InitializeAbilityInstanceInternal(const class UGameplayAbility* AbilityInstance, const class UFortTooltipContext* Context) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TT_Commando_AmmoRecovery1_C", "InitializeAbilityInstanceInternal");

	Params::TT_Commando_AmmoRecovery1_C_InitializeAbilityInstanceInternal Parms{};

	Parms.AbilityInstance = AbilityInstance;
	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TT_Commando_AmmoRecovery1.TT_Commando_AmmoRecovery1_C.GetTextForTokenFromAbilityInstanceInternal
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGameplayAbility*                 AbilityInstance                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     Tag                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*              Context                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     Token                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class FText                             OutText                                                (Parm, OutParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTT_Commando_AmmoRecovery1_C::GetTextForTokenFromAbilityInstanceInternal(const class UGameplayAbility* AbilityInstance, const struct FGameplayTag& Tag, const class UFortTooltipContext* Context, const struct FGameplayTag& Token, class FText* OutText) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TT_Commando_AmmoRecovery1_C", "GetTextForTokenFromAbilityInstanceInternal");

	Params::TT_Commando_AmmoRecovery1_C_GetTextForTokenFromAbilityInstanceInternal Parms{};

	Parms.AbilityInstance = AbilityInstance;
	Parms.Tag = std::move(Tag);
	Parms.Context = Context;
	Parms.Token = std::move(Token);

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = std::move(Parms.OutText);

	return Parms.ReturnValue;
}

}

