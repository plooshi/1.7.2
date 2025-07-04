﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XpBoostCounts

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass XpBoostCounts.XpBoostCounts_C
// 0x0038 (0x0270 - 0x0238)
class UXpBoostCounts_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UFortSZAwareImage*                      GiftableBoostImage;                                // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                GiftableBoostsAvailable;                           // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       GiftableText;                                      // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortSZAwareImage*                      PersonalBoostImage;                                // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                PersonalBoostsAvailable;                           // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       PersonalText;                                      // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_XpBoostCounts(int32 EntryPoint);
	void Xp_Boost_Changed(int32 BoostAmount);
	void HandleAccountUpdate(const struct FFortPublicAccountInfo& NewInfo);
	void Construct();
	void Update_Available_Boosts();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"XpBoostCounts_C">();
	}
	static class UXpBoostCounts_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXpBoostCounts_C>();
	}
};
static_assert(alignof(UXpBoostCounts_C) == 0x000008, "Wrong alignment on UXpBoostCounts_C");
static_assert(sizeof(UXpBoostCounts_C) == 0x000270, "Wrong size on UXpBoostCounts_C");
static_assert(offsetof(UXpBoostCounts_C, UberGraphFrame) == 0x000238, "Member 'UXpBoostCounts_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UXpBoostCounts_C, GiftableBoostImage) == 0x000240, "Member 'UXpBoostCounts_C::GiftableBoostImage' has a wrong offset!");
static_assert(offsetof(UXpBoostCounts_C, GiftableBoostsAvailable) == 0x000248, "Member 'UXpBoostCounts_C::GiftableBoostsAvailable' has a wrong offset!");
static_assert(offsetof(UXpBoostCounts_C, GiftableText) == 0x000250, "Member 'UXpBoostCounts_C::GiftableText' has a wrong offset!");
static_assert(offsetof(UXpBoostCounts_C, PersonalBoostImage) == 0x000258, "Member 'UXpBoostCounts_C::PersonalBoostImage' has a wrong offset!");
static_assert(offsetof(UXpBoostCounts_C, PersonalBoostsAvailable) == 0x000260, "Member 'UXpBoostCounts_C::PersonalBoostsAvailable' has a wrong offset!");
static_assert(offsetof(UXpBoostCounts_C, PersonalText) == 0x000268, "Member 'UXpBoostCounts_C::PersonalText' has a wrong offset!");

}

