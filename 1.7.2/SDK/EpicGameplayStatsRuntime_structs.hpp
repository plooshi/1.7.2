﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EpicGameplayStatsRuntime

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Enum EpicGameplayStatsRuntime.EEpicLeaderboardUpdateFunction
// NumValues: 0x0005
enum class EEpicLeaderboardUpdateFunction : uint8
{
	Min                                      = 0,
	Max                                      = 1,
	Sum                                      = 2,
	MostRecent                               = 3,
	EEpicLeaderboardUpdateFunction_MAX       = 4,
};

// Enum EpicGameplayStatsRuntime.EEpicLeaderboardTimeWindow
// NumValues: 0x0005
enum class EEpicLeaderboardTimeWindow : uint8
{
	Daily                                    = 0,
	Weekly                                   = 1,
	Monthly                                  = 2,
	AllTime                                  = 3,
	EEpicLeaderboardTimeWindow_MAX           = 4,
};

// Enum EpicGameplayStatsRuntime.EEpicLeaderboardDataType
// NumValues: 0x0003
enum class EEpicLeaderboardDataType : uint8
{
	Integer                                  = 0,
	Double                                   = 1,
	EEpicLeaderboardDataType_MAX             = 2,
};

// ScriptStruct EpicGameplayStatsRuntime.GameplayStatTag
// 0x0008 (0x0010 - 0x0008)
struct FGameplayStatTag final : public FGameplayTag
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0008(0x0008)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};
static_assert(alignof(FGameplayStatTag) == 0x000008, "Wrong alignment on FGameplayStatTag");
static_assert(sizeof(FGameplayStatTag) == 0x000010, "Wrong size on FGameplayStatTag");
static_assert(offsetof(FGameplayStatTag, Tag) == 0x000008, "Member 'FGameplayStatTag::Tag' has a wrong offset!");

// ScriptStruct EpicGameplayStatsRuntime.TagTableManagerHelper
// 0x0001 (0x0001 - 0x0000)
struct FTagTableManagerHelper final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FTagTableManagerHelper) == 0x000001, "Wrong alignment on FTagTableManagerHelper");
static_assert(sizeof(FTagTableManagerHelper) == 0x000001, "Wrong size on FTagTableManagerHelper");

// ScriptStruct EpicGameplayStatsRuntime.GameplayStatMetadataTableRow
// 0x0088 (0x0090 - 0x0008)
struct FGameplayStatMetadataTableRow final : public FTableRowBase
{
public:
	class FString                                 BackendName;                                       // 0x0008(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   DisplayName;                                       // 0x0018(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<EEpicLeaderboardTimeWindow>            Windows;                                           // 0x0030(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	EEpicLeaderboardUpdateFunction                Metric;                                            // 0x0040(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EEpicLeaderboardDataType                      DataType;                                          // 0x0041(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bPublish;                                          // 0x0042(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43[0x1];                                       // 0x0043(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         WeeklyRefreshInterval;                             // 0x0044(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportToBackEnd;                                  // 0x0048(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowInFrontEnd;                                   // 0x0049(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4A[0x6];                                       // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagReferenceHelper            ReferenceHelper;                                   // 0x0050(0x0040)(Edit, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameplayStatMetadataTableRow) == 0x000010, "Wrong alignment on FGameplayStatMetadataTableRow");
static_assert(sizeof(FGameplayStatMetadataTableRow) == 0x000090, "Wrong size on FGameplayStatMetadataTableRow");
static_assert(offsetof(FGameplayStatMetadataTableRow, BackendName) == 0x000008, "Member 'FGameplayStatMetadataTableRow::BackendName' has a wrong offset!");
static_assert(offsetof(FGameplayStatMetadataTableRow, DisplayName) == 0x000018, "Member 'FGameplayStatMetadataTableRow::DisplayName' has a wrong offset!");
static_assert(offsetof(FGameplayStatMetadataTableRow, Windows) == 0x000030, "Member 'FGameplayStatMetadataTableRow::Windows' has a wrong offset!");
static_assert(offsetof(FGameplayStatMetadataTableRow, Metric) == 0x000040, "Member 'FGameplayStatMetadataTableRow::Metric' has a wrong offset!");
static_assert(offsetof(FGameplayStatMetadataTableRow, DataType) == 0x000041, "Member 'FGameplayStatMetadataTableRow::DataType' has a wrong offset!");
static_assert(offsetof(FGameplayStatMetadataTableRow, bPublish) == 0x000042, "Member 'FGameplayStatMetadataTableRow::bPublish' has a wrong offset!");
static_assert(offsetof(FGameplayStatMetadataTableRow, WeeklyRefreshInterval) == 0x000044, "Member 'FGameplayStatMetadataTableRow::WeeklyRefreshInterval' has a wrong offset!");
static_assert(offsetof(FGameplayStatMetadataTableRow, bExportToBackEnd) == 0x000048, "Member 'FGameplayStatMetadataTableRow::bExportToBackEnd' has a wrong offset!");
static_assert(offsetof(FGameplayStatMetadataTableRow, bShowInFrontEnd) == 0x000049, "Member 'FGameplayStatMetadataTableRow::bShowInFrontEnd' has a wrong offset!");
static_assert(offsetof(FGameplayStatMetadataTableRow, ReferenceHelper) == 0x000050, "Member 'FGameplayStatMetadataTableRow::ReferenceHelper' has a wrong offset!");

// ScriptStruct EpicGameplayStatsRuntime.ManagedGameplayTagDataTableItem
// 0x0010 (0x0010 - 0x0000)
struct FManagedGameplayTagDataTableItem final
{
public:
	struct FGameplayTag                           RootTag;                                           // 0x0000(0x0008)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                             DataTable;                                         // 0x0008(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FManagedGameplayTagDataTableItem) == 0x000008, "Wrong alignment on FManagedGameplayTagDataTableItem");
static_assert(sizeof(FManagedGameplayTagDataTableItem) == 0x000010, "Wrong size on FManagedGameplayTagDataTableItem");
static_assert(offsetof(FManagedGameplayTagDataTableItem, RootTag) == 0x000000, "Member 'FManagedGameplayTagDataTableItem::RootTag' has a wrong offset!");
static_assert(offsetof(FManagedGameplayTagDataTableItem, DataTable) == 0x000008, "Member 'FManagedGameplayTagDataTableItem::DataTable' has a wrong offset!");

}

