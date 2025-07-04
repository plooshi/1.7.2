﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaMatchmakingWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaMatchmakingWidget.AthenaMatchmakingWidget_C
// 0x0010 (0x0490 - 0x0480)
class UAthenaMatchmakingWidget_C final : public UFortAthenaMatchmakingWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0480(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 MatchmakingSpinner;                                // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaMatchmakingWidget(int32 EntryPoint);
	void BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature(int32 Value);
	void BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature(int32 Value);
	void SetCancelButtonState(bool bIsMatchmaking);
	void Construct();
	void SetPlayButtonState(bool bCanMatchmake);
	void OnActivated();
	void BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void RefreshInput();
	void SetAutoFillOptions();
	void PlaylistChange(bool bDirection);
	void FillChange(bool bDirection);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaMatchmakingWidget_C">();
	}
	static class UAthenaMatchmakingWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaMatchmakingWidget_C>();
	}
};
static_assert(alignof(UAthenaMatchmakingWidget_C) == 0x000008, "Wrong alignment on UAthenaMatchmakingWidget_C");
static_assert(sizeof(UAthenaMatchmakingWidget_C) == 0x000490, "Wrong size on UAthenaMatchmakingWidget_C");
static_assert(offsetof(UAthenaMatchmakingWidget_C, UberGraphFrame) == 0x000480, "Member 'UAthenaMatchmakingWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingWidget_C, MatchmakingSpinner) == 0x000488, "Member 'UAthenaMatchmakingWidget_C::MatchmakingSpinner' has a wrong offset!");

}

