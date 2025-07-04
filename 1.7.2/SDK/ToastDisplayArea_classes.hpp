﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ToastDisplayArea

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ToastDisplayArea.ToastDisplayArea_C
// 0x0038 (0x0270 - 0x0238)
class UToastDisplayArea_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UPowerToastWidget_C*                    PowerToastWidget;                                  // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UToastWidget_C*                         ToastWidget;                                       // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortUINotificationQueue*               ToastQueue;                                        // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINotification*                    CurrentToast;                                      // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCurrentlyDisplayingToast;                         // 0x0268(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ToastDisplayArea(int32 EntryPoint);
	void BndEvt__PowerToastWidget_K2Node_ComponentBoundEvent_8_OnFinishedToast__DelegateSignature();
	void BndEvt__ToastWidget_K2Node_ComponentBoundEvent_2_OnFinishedToast__DelegateSignature();
	void Destruct();
	void HandleNewToastAvailable();
	void Construct();
	void RegisterToastHandler();
	void AttemptDisplayNextToast();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ToastDisplayArea_C">();
	}
	static class UToastDisplayArea_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UToastDisplayArea_C>();
	}
};
static_assert(alignof(UToastDisplayArea_C) == 0x000008, "Wrong alignment on UToastDisplayArea_C");
static_assert(sizeof(UToastDisplayArea_C) == 0x000270, "Wrong size on UToastDisplayArea_C");
static_assert(offsetof(UToastDisplayArea_C, UberGraphFrame) == 0x000238, "Member 'UToastDisplayArea_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UToastDisplayArea_C, PowerToastWidget) == 0x000240, "Member 'UToastDisplayArea_C::PowerToastWidget' has a wrong offset!");
static_assert(offsetof(UToastDisplayArea_C, SafeZone_0) == 0x000248, "Member 'UToastDisplayArea_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UToastDisplayArea_C, ToastWidget) == 0x000250, "Member 'UToastDisplayArea_C::ToastWidget' has a wrong offset!");
static_assert(offsetof(UToastDisplayArea_C, ToastQueue) == 0x000258, "Member 'UToastDisplayArea_C::ToastQueue' has a wrong offset!");
static_assert(offsetof(UToastDisplayArea_C, CurrentToast) == 0x000260, "Member 'UToastDisplayArea_C::CurrentToast' has a wrong offset!");
static_assert(offsetof(UToastDisplayArea_C, bCurrentlyDisplayingToast) == 0x000268, "Member 'UToastDisplayArea_C::bCurrentlyDisplayingToast' has a wrong offset!");

}

