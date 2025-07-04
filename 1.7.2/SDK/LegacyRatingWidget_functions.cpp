﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LegacyRatingWidget

#include "Basic.hpp"

#include "LegacyRatingWidget_classes.hpp"
#include "LegacyRatingWidget_parameters.hpp"


namespace SDK
{

// Function LegacyRatingWidget.LegacyRatingWidget_C.ExecuteUbergraph_LegacyRatingWidget
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyRatingWidget_C::ExecuteUbergraph_LegacyRatingWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyRatingWidget_C", "ExecuteUbergraph_LegacyRatingWidget");

	Params::LegacyRatingWidget_C_ExecuteUbergraph_LegacyRatingWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LegacyRatingWidget.LegacyRatingWidget_C.PlayerStateChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo              PlayerInfo                                             (ConstParm, Parm, OutParm, ReferenceParm)

void ULegacyRatingWidget_C::PlayerStateChanged(const struct FFortTeamMemberInfo& PlayerInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyRatingWidget_C", "PlayerStateChanged");

	Params::LegacyRatingWidget_C_PlayerStateChanged Parms{};

	Parms.PlayerInfo = std::move(PlayerInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LegacyRatingWidget.LegacyRatingWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULegacyRatingWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyRatingWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LegacyRatingWidget.LegacyRatingWidget_C.PlayerInfoChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl                 UniqueId_0                                             (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void ULegacyRatingWidget_C::PlayerInfoChanged(const struct FUniqueNetIdRepl& UniqueId_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyRatingWidget_C", "PlayerInfoChanged");

	Params::LegacyRatingWidget_C_PlayerInfoChanged Parms{};

	Parms.UniqueId_0 = std::move(UniqueId_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LegacyRatingWidget.LegacyRatingWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegacyRatingWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyRatingWidget_C", "PreConstruct");

	Params::LegacyRatingWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LegacyRatingWidget.LegacyRatingWidget_C.Update Rating Value
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Rating                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyRatingWidget_C::Update_Rating_Value(int32 Rating)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyRatingWidget_C", "Update Rating Value");

	Params::LegacyRatingWidget_C_Update_Rating_Value Parms{};

	Parms.Rating = Rating;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LegacyRatingWidget.LegacyRatingWidget_C.Set Size Box
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULegacyRatingWidget_C::Set_Size_Box()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyRatingWidget_C", "Set Size Box");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LegacyRatingWidget.LegacyRatingWidget_C.Set Padding
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULegacyRatingWidget_C::Set_Padding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyRatingWidget_C", "Set Padding");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LegacyRatingWidget.LegacyRatingWidget_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void ULegacyRatingWidget_C::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyRatingWidget_C", "Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LegacyRatingWidget.LegacyRatingWidget_C.Set Unique ID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl                 ID                                                     (Parm, HasGetValueTypeHash)

void ULegacyRatingWidget_C::Set_Unique_ID(const struct FUniqueNetIdRepl& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyRatingWidget_C", "Set Unique ID");

	Params::LegacyRatingWidget_C_Set_Unique_ID Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LegacyRatingWidget.LegacyRatingWidget_C.Update From Unique ID
// (Protected, BlueprintCallable, BlueprintEvent)

void ULegacyRatingWidget_C::Update_From_Unique_ID()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyRatingWidget_C", "Update From Unique ID");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LegacyRatingWidget.LegacyRatingWidget_C.Update Base Material
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULegacyRatingWidget_C::Update_Base_Material()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyRatingWidget_C", "Update Base Material");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LegacyRatingWidget.LegacyRatingWidget_C.Set Texture2D Parameter From Multi Size Brush
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*         Mid                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Parameter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortMultiSizeBrush              MBrush                                                 (Parm)

void ULegacyRatingWidget_C::Set_Texture2D_Parameter_From_Multi_Size_Brush(class UMaterialInstanceDynamic* Mid, class FName Parameter, const struct FFortMultiSizeBrush& MBrush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyRatingWidget_C", "Set Texture2D Parameter From Multi Size Brush");

	Params::LegacyRatingWidget_C_Set_Texture2D_Parameter_From_Multi_Size_Brush Parms{};

	Parms.Mid = Mid;
	Parms.Parameter = Parameter;
	Parms.MBrush = std::move(MBrush);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LegacyRatingWidget.LegacyRatingWidget_C.Override Default Color Set
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Override                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                     Light_Color                                            (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     Medium_Color                                           (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     Dark_Color                                             (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyRatingWidget_C::Override_Default_Color_Set(bool Override, const struct FLinearColor& Light_Color, const struct FLinearColor& Medium_Color, const struct FLinearColor& Dark_Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyRatingWidget_C", "Override Default Color Set");

	Params::LegacyRatingWidget_C_Override_Default_Color_Set Parms{};

	Parms.Override = Override;
	Parms.Light_Color = std::move(Light_Color);
	Parms.Medium_Color = std::move(Medium_Color);
	Parms.Dark_Color = std::move(Dark_Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LegacyRatingWidget.LegacyRatingWidget_C.SetShouldShowTeamPowerRating
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ShowTeamRating                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegacyRatingWidget_C::SetShouldShowTeamPowerRating(bool ShowTeamRating)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyRatingWidget_C", "SetShouldShowTeamPowerRating");

	Params::LegacyRatingWidget_C_SetShouldShowTeamPowerRating Parms{};

	Parms.ShowTeamRating = ShowTeamRating;

	UObject::ProcessEvent(Func, &Parms);
}

}

