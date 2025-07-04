﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LegacyItem_DO_NOT_USE

#include "Basic.hpp"

#include "LegacyItem_DO_NOT_USE_classes.hpp"
#include "LegacyItem_DO_NOT_USE_parameters.hpp"


namespace SDK
{

// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.ExecuteUbergraph_LegacyItem_DO_NOT_USE
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyItem_DO_NOT_USE_C::ExecuteUbergraph_LegacyItem_DO_NOT_USE(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "ExecuteUbergraph_LegacyItem_DO_NOT_USE");

	Params::LegacyItem_DO_NOT_USE_C_ExecuteUbergraph_LegacyItem_DO_NOT_USE Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.BPOnActivatableChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bNewActivatable                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegacyItem_DO_NOT_USE_C::BPOnActivatableChanged(bool bNewActivatable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "BPOnActivatableChanged");

	Params::LegacyItem_DO_NOT_USE_C_BPOnActivatableChanged Parms{};

	Parms.bNewActivatable = bNewActivatable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.BPOnCooldownSecondsChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   NewCooldownSeconds                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyItem_DO_NOT_USE_C::BPOnCooldownSecondsChanged(int32 NewCooldownSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "BPOnCooldownSecondsChanged");

	Params::LegacyItem_DO_NOT_USE_C_BPOnCooldownSecondsChanged Parms{};

	Parms.NewCooldownSeconds = NewCooldownSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, Parm, OutParm, ReferenceParm)

void ULegacyItem_DO_NOT_USE_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "OnMouseEnter");

	Params::LegacyItem_DO_NOT_USE_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnCursorModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bCursorModeEnabled                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             ActionName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      CursorModeContentWidget                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyItem_DO_NOT_USE_C::OnCursorModeChanged(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CursorModeContentWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "OnCursorModeChanged");

	Params::LegacyItem_DO_NOT_USE_C_OnCursorModeChanged Parms{};

	Parms.bCursorModeEnabled = bCursorModeEnabled;
	Parms.ActionName = ActionName;
	Parms.CursorModeContentWidget = CursorModeContentWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.BPOnItemSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItem*                        NewItem                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyItem_DO_NOT_USE_C::BPOnItemSet(class UFortItem* NewItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "BPOnItemSet");

	Params::LegacyItem_DO_NOT_USE_C_BPOnItemSet Parms{};

	Parms.NewItem = NewItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegacyItem_DO_NOT_USE_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "PreConstruct");

	Params::LegacyItem_DO_NOT_USE_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.BPOnItemChanged
// (Event, Protected, BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::BPOnItemChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "BPOnItemChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Base Material
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Update_Base_Material()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Update Base Material");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Item Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                        Item_Data                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyItem_DO_NOT_USE_C::Set_Item_Data(class UFortItem* Item_Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Set Item Data");

	Params::LegacyItem_DO_NOT_USE_C_Set_Item_Data Parms{};

	Parms.Item_Data = Item_Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Stack Counter
// (Protected, BlueprintCallable, BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Update_Stack_Counter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Update Stack Counter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update All
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Update_All()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Update All");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply ULegacyItem_DO_NOT_USE_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "OnMouseButtonDown");

	Params::LegacyItem_DO_NOT_USE_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    PointerEvent                                           (ConstParm, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*               Operation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyItem_DO_NOT_USE_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "OnDragDetected");

	Params::LegacyItem_DO_NOT_USE_C_OnDragDetected Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);

	UObject::ProcessEvent(Func, &Parms);

	if (Operation != nullptr)
		*Operation = Parms.Operation;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Size Box
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Update_Size_Box()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Update Size Box");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Get Item Texture Set
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemDisplayStyle                       Display_Style                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemTextureSet                  Texture_Set                                            (Parm, OutParm, HasGetValueTypeHash)

void ULegacyItem_DO_NOT_USE_C::Get_Item_Texture_Set(EItemDisplayStyle Display_Style, struct FItemTextureSet* Texture_Set)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Get Item Texture Set");

	Params::LegacyItem_DO_NOT_USE_C_Get_Item_Texture_Set Parms{};

	Parms.Display_Style = Display_Style;

	UObject::ProcessEvent(Func, &Parms);

	if (Texture_Set != nullptr)
		*Texture_Set = std::move(Parms.Texture_Set);
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Primary Icon
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Update_Primary_Icon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Update Primary Icon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Tier Badge
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Update_Tier_Badge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Update Tier Badge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Get Display Style
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortItemType                           Item_Type                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EItemDisplayStyle                       Style_0                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyItem_DO_NOT_USE_C::Get_Display_Style(EFortItemType Item_Type, EItemDisplayStyle* Style_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Get Display Style");

	Params::LegacyItem_DO_NOT_USE_C_Get_Display_Style Parms{};

	Parms.Item_Type = Item_Type;

	UObject::ProcessEvent(Func, &Parms);

	if (Style_0 != nullptr)
		*Style_0 = Parms.Style_0;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Subtype Icons & Ammo
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Update_Subtype_Icons___Ammo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Update Subtype Icons & Ammo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Ammo Count
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Count                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyItem_DO_NOT_USE_C::Set_Ammo_Count(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Set Ammo Count");

	Params::LegacyItem_DO_NOT_USE_C_Set_Ammo_Count Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Display Mode
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortUIState                            Current_UI_State                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Cursor_Mode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegacyItem_DO_NOT_USE_C::Set_Display_Mode(EFortUIState Current_UI_State, bool Cursor_Mode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Set Display Mode");

	Params::LegacyItem_DO_NOT_USE_C_Set_Display_Mode Parms{};

	Parms.Current_UI_State = Current_UI_State;
	Parms.Cursor_Mode = Cursor_Mode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Get Item Tooltip
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   OverrideStackCount                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* ULegacyItem_DO_NOT_USE_C::Get_Item_Tooltip(int32 OverrideStackCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Get Item Tooltip");

	Params::LegacyItem_DO_NOT_USE_C_Get_Item_Tooltip Parms{};

	Parms.OverrideStackCount = OverrideStackCount;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Tooltip Header
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Header_Text                                            (Parm)
// class USlateBrushAsset*                 Icon_Brush                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyItem_DO_NOT_USE_C::Set_Tooltip_Header(const class FText& Header_Text, class USlateBrushAsset* Icon_Brush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Set Tooltip Header");

	Params::LegacyItem_DO_NOT_USE_C_Set_Tooltip_Header Parms{};

	Parms.Header_Text = std::move(Header_Text);
	Parms.Icon_Brush = Icon_Brush;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Durability Meter
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Update_Durability_Meter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Update Durability Meter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Cooldown Meter
// (Protected, BlueprintCallable, BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Update_Cooldown_Meter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Update Cooldown Meter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Durability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Durability                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyItem_DO_NOT_USE_C::Set_Durability(float Durability)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Set Durability");

	Params::LegacyItem_DO_NOT_USE_C_Set_Durability Parms{};

	Parms.Durability = Durability;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Stack Count
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Count                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyItem_DO_NOT_USE_C::Set_Stack_Count(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Set Stack Count");

	Params::LegacyItem_DO_NOT_USE_C_Set_Stack_Count Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Resize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortBrushSize                          Brush_Size                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyItem_DO_NOT_USE_C::Resize(EFortBrushSize Brush_Size)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Resize");

	Params::LegacyItem_DO_NOT_USE_C_Resize Parms{};

	Parms.Brush_Size = Brush_Size;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        InMyGeometry                                           (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    InMouseEvent                                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply ULegacyItem_DO_NOT_USE_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "OnMouseButtonDoubleClick");

	Params::LegacyItem_DO_NOT_USE_C_OnMouseButtonDoubleClick Parms{};

	Parms.InMyGeometry = std::move(InMyGeometry);
	Parms.InMouseEvent = std::move(InMouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Subtype Icons & Ammo Color
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Override_Secondary_Icon_Color                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                     Secondary_Icon_Override_Color                          (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Override_Tertiary_Icon_Color                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                     Tertiary_Icon_Override_Color                           (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyItem_DO_NOT_USE_C::Set_Subtype_Icons___Ammo_Color(bool Override_Secondary_Icon_Color, const struct FLinearColor& Secondary_Icon_Override_Color, bool Override_Tertiary_Icon_Color, const struct FLinearColor& Tertiary_Icon_Override_Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Set Subtype Icons & Ammo Color");

	Params::LegacyItem_DO_NOT_USE_C_Set_Subtype_Icons___Ammo_Color Parms{};

	Parms.Override_Secondary_Icon_Color = Override_Secondary_Icon_Color;
	Parms.Secondary_Icon_Override_Color = std::move(Secondary_Icon_Override_Color);
	Parms.Override_Tertiary_Icon_Color = Override_Tertiary_Icon_Color;
	Parms.Tertiary_Icon_Override_Color = std::move(Tertiary_Icon_Override_Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Primary Icon Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Override_Icon_Visibility                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        Item_Icon_Visibility                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegacyItem_DO_NOT_USE_C::Set_Primary_Icon_Visibility(bool Override_Icon_Visibility, ESlateVisibility Item_Icon_Visibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Set Primary Icon Visibility");

	Params::LegacyItem_DO_NOT_USE_C_Set_Primary_Icon_Visibility Parms{};

	Parms.Override_Icon_Visibility = Override_Icon_Visibility;
	Parms.Item_Icon_Visibility = Item_Icon_Visibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Hide Subtype Icons
// (Public, BlueprintCallable, BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Hide_Subtype_Icons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Hide Subtype Icons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Set Display Style
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Override_Display_Style                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EItemDisplayStyle                       DisplayStyle_0                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacyItem_DO_NOT_USE_C::Set_Display_Style(bool Override_Display_Style, EItemDisplayStyle DisplayStyle_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Set Display Style");

	Params::LegacyItem_DO_NOT_USE_C_Set_Display_Style Parms{};

	Parms.Override_Display_Style = Override_Display_Style;
	Parms.DisplayStyle_0 = DisplayStyle_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Get Num in Stack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ULegacyItem_DO_NOT_USE_C::Get_Num_in_Stack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Get Num in Stack");

	Params::LegacyItem_DO_NOT_USE_C_Get_Num_in_Stack Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Get Texture2D From Multi Size Brush
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortMultiSizeBrush              Multi_Size_Brush                                       (Parm)
// EFortBrushSize                          Brush_Size                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       Texture2D                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegacyItem_DO_NOT_USE_C::Get_Texture2D_From_Multi_Size_Brush(const struct FFortMultiSizeBrush& Multi_Size_Brush, EFortBrushSize Brush_Size, class UTexture2D** Texture2D, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Get Texture2D From Multi Size Brush");

	Params::LegacyItem_DO_NOT_USE_C_Get_Texture2D_From_Multi_Size_Brush Parms{};

	Parms.Multi_Size_Brush = std::move(Multi_Size_Brush);
	Parms.Brush_Size = Brush_Size;

	UObject::ProcessEvent(Func, &Parms);

	if (Texture2D != nullptr)
		*Texture2D = Parms.Texture2D;

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Rating Tag
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Update_Rating_Tag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Update Rating Tag");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Activatable State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Activatable                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULegacyItem_DO_NOT_USE_C::Update_Activatable_State(bool Activatable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Update Activatable State");

	Params::LegacyItem_DO_NOT_USE_C_Update_Activatable_State Parms{};

	Parms.Activatable = Activatable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.Update Base Opacity
// (Public, BlueprintCallable, BlueprintEvent)

void ULegacyItem_DO_NOT_USE_C::Update_Base_Opacity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "Update Base Opacity");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LegacyItem_DO_NOT_USE.LegacyItem_DO_NOT_USE_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    PointerEvent                                           (Parm)
// class UDragDropOperation*               Operation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ULegacyItem_DO_NOT_USE_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LegacyItem_DO_NOT_USE_C", "OnDrop");

	Params::LegacyItem_DO_NOT_USE_C_OnDrop Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

