﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionAlertIndicator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MissionAlertIndicator.MissionAlertIndicator_C
// 0x0028 (0x0260 - 0x0238)
class UMissionAlertIndicator_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 MissionAlert;                                      // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StormZone;                                         // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  Switcher;                                          // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                           CycleTimer;                                        // 0x0258(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_MissionAlertIndicator(int32 EntryPoint);
	void Construct();
	void ToggleTimer(bool IsEnabled);
	void Update();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionAlertIndicator_C">();
	}
	static class UMissionAlertIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionAlertIndicator_C>();
	}
};
static_assert(alignof(UMissionAlertIndicator_C) == 0x000008, "Wrong alignment on UMissionAlertIndicator_C");
static_assert(sizeof(UMissionAlertIndicator_C) == 0x000260, "Wrong size on UMissionAlertIndicator_C");
static_assert(offsetof(UMissionAlertIndicator_C, UberGraphFrame) == 0x000238, "Member 'UMissionAlertIndicator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMissionAlertIndicator_C, MissionAlert) == 0x000240, "Member 'UMissionAlertIndicator_C::MissionAlert' has a wrong offset!");
static_assert(offsetof(UMissionAlertIndicator_C, StormZone) == 0x000248, "Member 'UMissionAlertIndicator_C::StormZone' has a wrong offset!");
static_assert(offsetof(UMissionAlertIndicator_C, Switcher) == 0x000250, "Member 'UMissionAlertIndicator_C::Switcher' has a wrong offset!");
static_assert(offsetof(UMissionAlertIndicator_C, CycleTimer) == 0x000258, "Member 'UMissionAlertIndicator_C::CycleTimer' has a wrong offset!");

}

