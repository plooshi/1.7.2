﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeroSquadBonus

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HeroSquadBonus.HeroSquadBonus_C
// 0x0120 (0x03F0 - 0x02D0)
class UHeroSquadBonus_C final : public UFortPerkWidget_NUI
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(Transient, DuplicateTransient)
	class UCommonTextBlock*                       BonusPerkDescription;                              // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BonusPerkIcon;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       BonusPerkTitle;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          BorderHighlightLeft;                               // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          BorderHighlightRight;                              // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorderBackground;                            // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageLock;                                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageSquadBonusType;                               // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageSquadBonusTypeShadow;                         // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                            EmptyBrush;                                        // 0x0320(0x0090)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   EmptyText;                                         // 0x03B0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   BonusPerkTItleText;                                // 0x03C8(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FVector2D                              Skill_Icon_Size;                                   // 0x03E0(0x0008)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortSupportBonusType                         SquadBonusType;                                    // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_HeroSquadBonus(int32 EntryPoint);
	void Construct();
	void OnPerkUpdated();
	void PreConstruct(bool IsDesignTime);
	void UpdateBonusPerk();
	void UpdateSquadBonusIconState();
	void SetBackgroundGlow(bool GlowBackground);
	class UWidget* Get_ToolTipWidget();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HeroSquadBonus_C">();
	}
	static class UHeroSquadBonus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHeroSquadBonus_C>();
	}
};
static_assert(alignof(UHeroSquadBonus_C) == 0x000008, "Wrong alignment on UHeroSquadBonus_C");
static_assert(sizeof(UHeroSquadBonus_C) == 0x0003F0, "Wrong size on UHeroSquadBonus_C");
static_assert(offsetof(UHeroSquadBonus_C, UberGraphFrame) == 0x0002D0, "Member 'UHeroSquadBonus_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHeroSquadBonus_C, BonusPerkDescription) == 0x0002D8, "Member 'UHeroSquadBonus_C::BonusPerkDescription' has a wrong offset!");
static_assert(offsetof(UHeroSquadBonus_C, BonusPerkIcon) == 0x0002E0, "Member 'UHeroSquadBonus_C::BonusPerkIcon' has a wrong offset!");
static_assert(offsetof(UHeroSquadBonus_C, BonusPerkTitle) == 0x0002E8, "Member 'UHeroSquadBonus_C::BonusPerkTitle' has a wrong offset!");
static_assert(offsetof(UHeroSquadBonus_C, BorderHighlightLeft) == 0x0002F0, "Member 'UHeroSquadBonus_C::BorderHighlightLeft' has a wrong offset!");
static_assert(offsetof(UHeroSquadBonus_C, BorderHighlightRight) == 0x0002F8, "Member 'UHeroSquadBonus_C::BorderHighlightRight' has a wrong offset!");
static_assert(offsetof(UHeroSquadBonus_C, CommonBorderBackground) == 0x000300, "Member 'UHeroSquadBonus_C::CommonBorderBackground' has a wrong offset!");
static_assert(offsetof(UHeroSquadBonus_C, ImageLock) == 0x000308, "Member 'UHeroSquadBonus_C::ImageLock' has a wrong offset!");
static_assert(offsetof(UHeroSquadBonus_C, ImageSquadBonusType) == 0x000310, "Member 'UHeroSquadBonus_C::ImageSquadBonusType' has a wrong offset!");
static_assert(offsetof(UHeroSquadBonus_C, ImageSquadBonusTypeShadow) == 0x000318, "Member 'UHeroSquadBonus_C::ImageSquadBonusTypeShadow' has a wrong offset!");
static_assert(offsetof(UHeroSquadBonus_C, EmptyBrush) == 0x000320, "Member 'UHeroSquadBonus_C::EmptyBrush' has a wrong offset!");
static_assert(offsetof(UHeroSquadBonus_C, EmptyText) == 0x0003B0, "Member 'UHeroSquadBonus_C::EmptyText' has a wrong offset!");
static_assert(offsetof(UHeroSquadBonus_C, BonusPerkTItleText) == 0x0003C8, "Member 'UHeroSquadBonus_C::BonusPerkTItleText' has a wrong offset!");
static_assert(offsetof(UHeroSquadBonus_C, Skill_Icon_Size) == 0x0003E0, "Member 'UHeroSquadBonus_C::Skill_Icon_Size' has a wrong offset!");
static_assert(offsetof(UHeroSquadBonus_C, SquadBonusType) == 0x0003E8, "Member 'UHeroSquadBonus_C::SquadBonusType' has a wrong offset!");

}

