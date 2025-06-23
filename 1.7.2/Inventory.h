#pragma once
#include "pch.h"

class Inventory
{
public:
	static FFortRangedWeaponStats* GetStats(UFortWeaponItemDefinition*);
	static int GetLevel(const FDataTableCategoryHandle&);
	static FFortItemEntry* MakeItemEntry(UFortItemDefinition*, int32, int32);
	static void TriggerInventoryUpdate(AFortPlayerController*, FFortItemEntry*);
	static UFortWorldItem* GiveItem(AFortPlayerController*, UFortItemDefinition*, int = 1, int = 0, int = 0, bool = true, bool = true, int = 0);
	static UFortWorldItem* GiveItem(AFortPlayerController*, FFortItemEntry, int = -1, bool = true, bool = true);
	static EFortQuickBars GetQuickbar(UFortItemDefinition*);
	static AFortPickupAthena* SpawnPickup(FVector, FFortItemEntry&, AFortPlayerPawn* = nullptr, int = -1, bool = true, bool = true, bool = true);
	static AFortPickupAthena* SpawnPickup(FVector, UFortItemDefinition*, int, int, AFortPlayerPawn* = nullptr, bool = true, bool = true);
	static void ReplaceEntry(AFortPlayerController*, FFortItemEntry&);
	static void Remove(AFortPlayerController*, FGuid);
};