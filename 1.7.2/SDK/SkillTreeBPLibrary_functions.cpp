﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SkillTreeBPLibrary

#include "Basic.hpp"

#include "SkillTreeBPLibrary_classes.hpp"
#include "SkillTreeBPLibrary_parameters.hpp"


namespace SDK
{

// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.UpdateSkillTreeNodeMaterial_StaticData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          World_Context                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         Material                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHomebaseNode                    NodeData                                               (ConstParm, Parm, OutParm, ReferenceParm)
// struct FFortSkillTreeNodeDisplayData    DisplayData                                            (Parm)
// class UCommonButton*                    Button                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillTreeBPLibrary_C::UpdateSkillTreeNodeMaterial_StaticData(class UObject* World_Context, class UMaterialInstanceDynamic* Material, const struct FHomebaseNode& NodeData, const struct FFortSkillTreeNodeDisplayData& DisplayData, class UCommonButton* Button, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SkillTreeBPLibrary_C", "UpdateSkillTreeNodeMaterial_StaticData");

	Params::SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData Parms{};

	Parms.World_Context = World_Context;
	Parms.Material = Material;
	Parms.NodeData = std::move(NodeData);
	Parms.DisplayData = std::move(DisplayData);
	Parms.Button = Button;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeCostTint
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FHomebaseNode                    HomebaseNode                                           (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                          __WorldContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     NodeTintColour                                         (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillTreeBPLibrary_C::GetSkillTreeNodeCostTint(const struct FHomebaseNode& HomebaseNode, class UObject* __WorldContext, struct FLinearColor* NodeTintColour)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SkillTreeBPLibrary_C", "GetSkillTreeNodeCostTint");

	Params::SkillTreeBPLibrary_C_GetSkillTreeNodeCostTint Parms{};

	Parms.HomebaseNode = std::move(HomebaseNode);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (NodeTintColour != nullptr)
		*NodeTintColour = std::move(Parms.NodeTintColour);
}


// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.UpdateSkillTreeNodeMaterial_DynamicData
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          World_Context                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         Material                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHomebaseNodeState               NodeState                                              (Parm, NoDestructor)
// class UObject*                          __WorldContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillTreeBPLibrary_C::UpdateSkillTreeNodeMaterial_DynamicData(class UObject* World_Context, class UMaterialInstanceDynamic* Material, const struct FHomebaseNodeState& NodeState, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SkillTreeBPLibrary_C", "UpdateSkillTreeNodeMaterial_DynamicData");

	Params::SkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_DynamicData Parms{};

	Parms.World_Context = World_Context;
	Parms.Material = Material;
	Parms.NodeState = std::move(NodeState);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeSizeByMagnitude
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EFortHomebaseNodeMagnitude              Node_Magnitude                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EFortHomebaseNodeDisplayType            Display_Type                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          World_Context                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Size                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillTreeBPLibrary_C::GetSkillTreeNodeSizeByMagnitude(EFortHomebaseNodeMagnitude Node_Magnitude, EFortHomebaseNodeDisplayType Display_Type, class UObject* World_Context, class UObject* __WorldContext, float* Size)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SkillTreeBPLibrary_C", "GetSkillTreeNodeSizeByMagnitude");

	Params::SkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude Parms{};

	Parms.Node_Magnitude = Node_Magnitude;
	Parms.Display_Type = Display_Type;
	Parms.World_Context = World_Context;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Size != nullptr)
		*Size = Parms.Size;
}


// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeShapeByDisplayType
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EFortHomebaseNodeDisplayType            Display_Type                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsSquare                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsExitNode                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillTreeBPLibrary_C::GetSkillTreeNodeShapeByDisplayType(EFortHomebaseNodeDisplayType Display_Type, class UObject* __WorldContext, bool* IsSquare, bool* IsExitNode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SkillTreeBPLibrary_C", "GetSkillTreeNodeShapeByDisplayType");

	Params::SkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType Parms{};

	Parms.Display_Type = Display_Type;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IsSquare != nullptr)
		*IsSquare = Parms.IsSquare;

	if (IsExitNode != nullptr)
		*IsExitNode = Parms.IsExitNode;
}


// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeIconSizeByMagnitude
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EFortHomebaseNodeMagnitude              Node_Magnitude                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortBrushSize                          Icon_Size                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillTreeBPLibrary_C::GetSkillTreeNodeIconSizeByMagnitude(EFortHomebaseNodeMagnitude Node_Magnitude, class UObject* __WorldContext, EFortBrushSize* Icon_Size)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SkillTreeBPLibrary_C", "GetSkillTreeNodeIconSizeByMagnitude");

	Params::SkillTreeBPLibrary_C_GetSkillTreeNodeIconSizeByMagnitude Parms{};

	Parms.Node_Magnitude = Node_Magnitude;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Icon_Size != nullptr)
		*Icon_Size = Parms.Icon_Size;
}

}

