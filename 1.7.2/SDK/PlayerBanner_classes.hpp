﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerBanner

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerBanner.PlayerBanner_C
// 0x00E0 (0x0318 - 0x0238)
class UPlayerBanner_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 BannerImage;                                       // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLoadGuard*                       LoadGuard;                                         // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                            Brush;                                             // 0x0250(0x0090)(Edit, BlueprintVisible)
	bool                                          bUseLargeTexture;                                  // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E1[0x7];                                      // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUniqueNetIdRepl                       OwnerNetID;                                        // 0x02E8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class FName                                   CurrentBannerColorId;                              // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShouldUseIconRepresentation;                      // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_309[0x7];                                      // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CurrentBannerIconId;                               // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PlayerBanner(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo);
	void SetBannerImage(const struct FFortHomeBaseInfo& Image_info, bool* Success);
	void SetBannerIconId(class FName InBannerIconId);
	void SetBannerColorId(class FName InBannerColorId);
	void SetBannerOwner(const struct FUniqueNetIdRepl& OwnerId);
	void GetBannerMID(class UMaterialInstanceDynamic** BannerMID);
	void OnBannerIconLoaded(class UObject* LoadedObject);
	void ClearBannerState();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerBanner_C">();
	}
	static class UPlayerBanner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerBanner_C>();
	}
};
static_assert(alignof(UPlayerBanner_C) == 0x000008, "Wrong alignment on UPlayerBanner_C");
static_assert(sizeof(UPlayerBanner_C) == 0x000318, "Wrong size on UPlayerBanner_C");
static_assert(offsetof(UPlayerBanner_C, UberGraphFrame) == 0x000238, "Member 'UPlayerBanner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerBanner_C, BannerImage) == 0x000240, "Member 'UPlayerBanner_C::BannerImage' has a wrong offset!");
static_assert(offsetof(UPlayerBanner_C, LoadGuard) == 0x000248, "Member 'UPlayerBanner_C::LoadGuard' has a wrong offset!");
static_assert(offsetof(UPlayerBanner_C, Brush) == 0x000250, "Member 'UPlayerBanner_C::Brush' has a wrong offset!");
static_assert(offsetof(UPlayerBanner_C, bUseLargeTexture) == 0x0002E0, "Member 'UPlayerBanner_C::bUseLargeTexture' has a wrong offset!");
static_assert(offsetof(UPlayerBanner_C, OwnerNetID) == 0x0002E8, "Member 'UPlayerBanner_C::OwnerNetID' has a wrong offset!");
static_assert(offsetof(UPlayerBanner_C, CurrentBannerColorId) == 0x000300, "Member 'UPlayerBanner_C::CurrentBannerColorId' has a wrong offset!");
static_assert(offsetof(UPlayerBanner_C, bShouldUseIconRepresentation) == 0x000308, "Member 'UPlayerBanner_C::bShouldUseIconRepresentation' has a wrong offset!");
static_assert(offsetof(UPlayerBanner_C, CurrentBannerIconId) == 0x000310, "Member 'UPlayerBanner_C::CurrentBannerIconId' has a wrong offset!");

}

