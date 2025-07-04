﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LCD_Constr_PortoPotty

#include "Basic.hpp"

#include "LCD_Constr_PortoPotty_classes.hpp"
#include "LCD_Constr_PortoPotty_parameters.hpp"


namespace SDK
{

// Function LCD_Constr_PortoPotty.LCD_Constr_PortoPotty_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALCD_Constr_PortoPotty_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LCD_Constr_PortoPotty_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LCD_Constr_PortoPotty.LCD_Constr_PortoPotty_C.OnLoot
// (Event, Public, BlueprintEvent)

void ALCD_Constr_PortoPotty_C::OnLoot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LCD_Constr_PortoPotty_C", "OnLoot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LCD_Constr_PortoPotty.LCD_Constr_PortoPotty_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            DamageTags                                             (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                          Momentum                                               (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                        InstigatedBy                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandle     EffectContext                                          (Parm)

void ALCD_Constr_PortoPotty_C::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LCD_Constr_PortoPotty_C", "OnDeathPlayEffects");

	Params::LCD_Constr_PortoPotty_C_OnDeathPlayEffects Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LCD_Constr_PortoPotty.LCD_Constr_PortoPotty_C.ExecuteUbergraph_LCD_Constr_PortoPotty
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALCD_Constr_PortoPotty_C::ExecuteUbergraph_LCD_Constr_PortoPotty(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LCD_Constr_PortoPotty_C", "ExecuteUbergraph_LCD_Constr_PortoPotty");

	Params::LCD_Constr_PortoPotty_C_ExecuteUbergraph_LCD_Constr_PortoPotty Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

