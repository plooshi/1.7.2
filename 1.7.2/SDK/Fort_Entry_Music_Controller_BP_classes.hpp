﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Fort_Entry_Music_Controller_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C
// 0x0068 (0x03F0 - 0x0388)
class AFort_Entry_Music_Controller_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0388(0x0008)(Transient, DuplicateTransient)
	class UAudioComponent*                        MenuMusic_B;                                       // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        MenuMusic_A;                                       // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Hexmap_Music;                                      // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Homebase_Music;                                    // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        OverView_Music;                                    // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        LobbyMusic;                                        // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        LlamaVO;                                           // 0x03C0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        LoginMusic;                                        // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         FadeOutTime;                                       // 0x03D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DC[0x4];                                      // 0x03DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Sound_Current_Music_A;                             // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound_Current_Music_B;                             // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Fort_Entry_Music_Controller_BP(int32 EntryPoint);
	void Music_Lobby_Athena_FadeIn();
	void On_Sub_Game_Changed(ESubGame SubGame);
	void ReceiveBeginPlay();
	void VBucks_Menu_Enter();
	void Store_Intro_Loop();
	void Store_HitLlamaAndLoop();
	void Store_CardpackSummaryOpenAndLoop();
	void Store_Llama_HangingOut();
	void Store_Transition_To_Purchase();
	void Music_Store_CardIntro_Fadein();
	void Music_Vault_FadeIn();
	void Music_Heroes_FadeIn();
	void Music_Hexmap_FadeIn();
	void Music_HomeBase_FadeIn();
	void Music_WorldOverview_FadeIn();
	void Music_Lobby_FadeIn();
	void Music_Store_FadeIn();
	void Music_Login_FadeIn();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fort_Entry_Music_Controller_BP_C">();
	}
	static class AFort_Entry_Music_Controller_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFort_Entry_Music_Controller_BP_C>();
	}
};
static_assert(alignof(AFort_Entry_Music_Controller_BP_C) == 0x000008, "Wrong alignment on AFort_Entry_Music_Controller_BP_C");
static_assert(sizeof(AFort_Entry_Music_Controller_BP_C) == 0x0003F0, "Wrong size on AFort_Entry_Music_Controller_BP_C");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, UberGraphFrame) == 0x000388, "Member 'AFort_Entry_Music_Controller_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, MenuMusic_B) == 0x000390, "Member 'AFort_Entry_Music_Controller_BP_C::MenuMusic_B' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, MenuMusic_A) == 0x000398, "Member 'AFort_Entry_Music_Controller_BP_C::MenuMusic_A' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, Hexmap_Music) == 0x0003A0, "Member 'AFort_Entry_Music_Controller_BP_C::Hexmap_Music' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, Homebase_Music) == 0x0003A8, "Member 'AFort_Entry_Music_Controller_BP_C::Homebase_Music' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, OverView_Music) == 0x0003B0, "Member 'AFort_Entry_Music_Controller_BP_C::OverView_Music' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, LobbyMusic) == 0x0003B8, "Member 'AFort_Entry_Music_Controller_BP_C::LobbyMusic' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, LlamaVO) == 0x0003C0, "Member 'AFort_Entry_Music_Controller_BP_C::LlamaVO' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, LoginMusic) == 0x0003C8, "Member 'AFort_Entry_Music_Controller_BP_C::LoginMusic' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, DefaultSceneRoot) == 0x0003D0, "Member 'AFort_Entry_Music_Controller_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, FadeOutTime) == 0x0003D8, "Member 'AFort_Entry_Music_Controller_BP_C::FadeOutTime' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, Sound_Current_Music_A) == 0x0003E0, "Member 'AFort_Entry_Music_Controller_BP_C::Sound_Current_Music_A' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, Sound_Current_Music_B) == 0x0003E8, "Member 'AFort_Entry_Music_Controller_BP_C::Sound_Current_Music_B' has a wrong offset!");

}

