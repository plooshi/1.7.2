﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_PlayerController

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Athena_PlayerController.Athena_PlayerController_C
// 0x0010 (0x32A0 - 0x3290)
class AAthena_PlayerController_C final : public AFortPlayerControllerAthena
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x3290(0x0008)(Transient, DuplicateTransient)
	class USceneComponent*                        ListenerOverride;                                  // 0x3298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Athena_PlayerController(int32 EntryPoint);
	void PlayWinEffects();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_PlayerController_C">();
	}
	static class AAthena_PlayerController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAthena_PlayerController_C>();
	}
};
static_assert(alignof(AAthena_PlayerController_C) == 0x000008, "Wrong alignment on AAthena_PlayerController_C");
static_assert(sizeof(AAthena_PlayerController_C) == 0x0032A0, "Wrong size on AAthena_PlayerController_C");
static_assert(offsetof(AAthena_PlayerController_C, UberGraphFrame) == 0x003290, "Member 'AAthena_PlayerController_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAthena_PlayerController_C, ListenerOverride) == 0x003298, "Member 'AAthena_PlayerController_C::ListenerOverride' has a wrong offset!");

}

