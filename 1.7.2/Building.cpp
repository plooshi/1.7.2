#include "pch.h"
#include "Building.h"
#include "Inventory.h"

UFortResourceItemDefinition* Building::GetResourceItemDefinition(EFortResourceType Type)
{
	static auto WoodItemData = Utils::FindObject<UFortResourceItemDefinition>(L"/Game/Items/ResourcePickups/WoodItemData.WoodItemData");
	static auto StoneItemData = Utils::FindObject<UFortResourceItemDefinition>(L"/Game/Items/ResourcePickups/StoneItemData.StoneItemData");
	static auto MetalItemData = Utils::FindObject<UFortResourceItemDefinition>(L"/Game/Items/ResourcePickups/MetalItemData.MetalItemData");

	if (Type == EFortResourceType::Wood)
		return WoodItemData;
	else if (Type == EFortResourceType::Stone)
		return StoneItemData;
	else if (Type == EFortResourceType::Metal)
		return MetalItemData;

	return nullptr;
}

void Building::ServerCreateBuildingActor(UObject* Context, FFrame& Stack)
{
	FBuildingClassData BuildingClassData;
	FVector_NetQuantize10 BuildLoc;
	FRotator BuildRot;
	bool bMirrored;
	Stack.StepCompiledIn(&BuildingClassData);
	Stack.StepCompiledIn(&BuildLoc);
	Stack.StepCompiledIn(&BuildRot);
	Stack.StepCompiledIn(&bMirrored);
	Stack.IncrementCode();

	Log(L"fix ");
	auto PlayerController = (AFortPlayerController*)Context;
	if (!PlayerController)
		return callOG(PlayerController, Stack.CurrentNativeFunction, ServerCreateBuildingActor, BuildingClassData, BuildLoc, BuildRot, bMirrored);
	auto BuildingClass = BuildingClassData.BuildingClass;

	TArray<ABuildingSMActor*> RemoveBuildings;
	char _Unknown;
	static auto CantBuild = (__int64 (*)(UWorld*, UObject*, FVector, FRotator, bool, TArray<ABuildingSMActor*> *, char*))(ImageBase + 0x5aa4b0);
	if (CantBuild(UWorld::GetWorld(), BuildingClass, BuildLoc, BuildRot, bMirrored, &RemoveBuildings, &_Unknown))
		return callOG(PlayerController, Stack.CurrentNativeFunction, ServerCreateBuildingActor, BuildingClassData, BuildLoc, BuildRot, bMirrored);
	auto Resource = GetResourceItemDefinition(((ABuildingSMActor*)BuildingClass->DefaultObject)->ResourceType);
	auto ItemEntry = PlayerController->WorldInventory->Inventory.ReplicatedEntries.Search([&](FFortItemEntry& entry)
		{ return entry.ItemDefinition == Resource; });
	if (!ItemEntry || ItemEntry->Count < 10)
		return callOG(PlayerController, Stack.CurrentNativeFunction, ServerCreateBuildingActor, BuildingClassData, BuildLoc, BuildRot, bMirrored);

	ItemEntry->Count -= 10;
	if (ItemEntry->Count <= 0)
		Inventory::Remove(PlayerController, ItemEntry->ItemGuid);
	Inventory::ReplaceEntry((AFortPlayerControllerAthena*)PlayerController, *ItemEntry);

	for (auto& RemoveBuilding : RemoveBuildings)
		RemoveBuilding->K2_DestroyActor();
	RemoveBuildings.Free();

	ABuildingSMActor* Building = Utils::FinishSpawnActor<ABuildingSMActor>(Utils::SpawnActorUnfinished<ABuildingSMActor>(BuildingClass, BuildLoc, BuildRot, PlayerController), BuildLoc, BuildRot);
	Building->bPlayerPlaced = true;
	Building->InitializeKismetSpawnedBuildingActor(Building, PlayerController);
	Building->Team = ((AFortPlayerStateAthena*)PlayerController->PlayerState)->TeamIndex;
	//PlayerController->bBuildFree = true;

	//return OG(PlayerController, CreateBuildingData);
	return callOG(PlayerController, Stack.CurrentNativeFunction, ServerCreateBuildingActor, BuildingClassData, BuildLoc, BuildRot, bMirrored);
}

void Building::ServerBeginEditingBuildingActor(UObject* Context, FFrame& Stack)
{
	ABuildingSMActor* Building;
	Stack.StepCompiledIn(&Building);
	Stack.IncrementCode();
	auto PlayerController = (AFortPlayerController*)Context;
	if (!PlayerController || !PlayerController->MyFortPawn || !Building || Building->Team != static_cast<AFortPlayerStateAthena*>(PlayerController->PlayerState)->TeamIndex)
		return;

	AFortPlayerStateAthena* PlayerState = (AFortPlayerStateAthena*)PlayerController->PlayerState;
	if (!PlayerState)
		return;

	auto ItemEntry = PlayerController->WorldInventory->Inventory.ReplicatedEntries.Search([](FFortItemEntry& entry)
		{ return entry.ItemDefinition->IsA<UFortEditToolItemDefinition>(); });
	if (!ItemEntry)
		return;

	PlayerController->ServerExecuteInventoryItem(ItemEntry->ItemGuid);


	auto EditTool = PlayerController->MyFortPawn->CurrentWeapon->Cast<AFortWeap_EditingTool>();
	EditTool->EditActor = Building;
	EditTool->OnRep_EditActor();

}

void Building::ServerEditBuildingActor(UObject* Context, FFrame& Stack)
{
	ABuildingSMActor* Building;
	TSubclassOf<ABuildingSMActor> NewClass;
	uint8 RotationIterations;
	bool bMirrored;
	Stack.StepCompiledIn(&Building);
	Stack.StepCompiledIn(&NewClass);
	Stack.StepCompiledIn(&RotationIterations);
	Stack.StepCompiledIn(&bMirrored);
	Stack.IncrementCode();
	auto PlayerController = (AFortPlayerController*)Context;

	if (!PlayerController || !Building || !NewClass || !Building->IsA<ABuildingSMActor>() || Building->Team != static_cast<AFortPlayerStateAthena*>(PlayerController->PlayerState)->TeamIndex)
		return;

	Building->SetNetDormancy(ENetDormancy::DORM_DormantAll);
	Building->EditingPlayer = nullptr;

	static auto ReplaceBuildingActor = (ABuildingSMActor * (*)(ABuildingSMActor*, unsigned int, UObject*, unsigned int, int, bool, AFortPlayerController*))(ImageBase + 0x47d5d0);

	ABuildingSMActor* NewBuild = ReplaceBuildingActor(Building, 1, NewClass, Building->CurrentBuildingLevel, RotationIterations, bMirrored, PlayerController);

	if (NewBuild)
		NewBuild->bPlayerPlaced = true;
}

void Building::ServerEndEditingBuildingActor(UObject* Context, FFrame& Stack)
{
	ABuildingSMActor* Building;
	Stack.StepCompiledIn(&Building);
	Stack.IncrementCode();
	auto PlayerController = (AFortPlayerController*)Context;
	if (!PlayerController || !PlayerController->MyFortPawn || !Building || Building->EditingPlayer != (AFortPlayerStateZone*)PlayerController->PlayerState || Building->Team != static_cast<AFortPlayerStateAthena*>(PlayerController->PlayerState)->TeamIndex)
		return;

	Building->SetNetDormancy(ENetDormancy::DORM_DormantAll);
	Building->EditingPlayer = nullptr;

	AFortWeap_EditingTool* EditTool = PlayerController->MyFortPawn->CurrentWeapon->Cast<AFortWeap_EditingTool>();

	if (!EditTool)
		return;

	EditTool->EditActor = nullptr;
	EditTool->OnRep_EditActor();
}

void Building::ServerRepairBuildingActor(UObject* Context, FFrame& Stack)
{
	ABuildingSMActor* Building;
	Stack.StepCompiledIn(&Building);
	Stack.IncrementCode();
	auto PlayerController = (AFortPlayerController*)Context;
	if (!PlayerController)
		return;

	auto Price = (int32)std::floor((10.f * (1.f - Building->GetHealthPercent())) * 0.75f);
	auto res = GetResourceItemDefinition(Building->ResourceType);
	auto itemEntry = PlayerController->WorldInventory->Inventory.ReplicatedEntries.Search([res](FFortItemEntry& entry)
		{ return entry.ItemDefinition == res; });
	itemEntry->Count -= Price;
	if (itemEntry->Count <= 0)
		Inventory::Remove(PlayerController, itemEntry->ItemGuid);
	else
		Inventory::ReplaceEntry(PlayerController, *itemEntry);

	Building->RepairBuilding(PlayerController, Price);
}

void Building::OnDamageServer(ABuildingSMActor* Actor, float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, AFortPlayerControllerAthena* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext) {
	auto GameState = ((AFortGameStateAthena*)UWorld::GetWorld()->GameState);
	if (!Actor->IsA<ABuildingSMActor>() || !InstigatedBy || Actor->bPlayerPlaced || Actor->GetHealth() == 1) return OnDamageServerOG(Actor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);
	if (!DamageCauser || !DamageCauser->IsA<AFortWeapon>() || !((AFortWeapon*)DamageCauser)->WeaponData->IsA<UFortWeaponMeleeItemDefinition>()) return OnDamageServerOG(Actor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);

	static auto PickaxeTag = FName(L"Weapon.Melee.Impact.Pickaxe");
	auto entry = DamageTags.GameplayTags.Search([](FGameplayTag& entry) {
		return entry.TagName.ComparisonIndex == PickaxeTag.ComparisonIndex;
		});
	if (!entry) return OnDamageServerOG(Actor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);

	auto Resource = GetResourceItemDefinition(Actor->ResourceType);
	if (!Resource) return OnDamageServerOG(Actor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);


	auto MaxMat = Resource->MaxStackSize;


	FCurveTableRowHandle& BuildingResourceAmountOverride = Actor->BuildingResourceAmountOverride;
	int ResCount = 0;

	if (Actor->BuildingResourceAmountOverride.RowName.ComparisonIndex > 0) {
		float Out;
		UDataTableFunctionLibrary::EvaluateCurveTableRow(Actor->BuildingResourceAmountOverride.CurveTable, Actor->BuildingResourceAmountOverride.RowName, 0.f, nullptr, &Out, FString());

		float RC = Out / (Actor->GetMaxHealth() / Damage);

		ResCount = (int)round(RC);
	}

	if (ResCount > 0) {
		auto itemEntry = InstigatedBy->WorldInventory->Inventory.ReplicatedEntries.Search([&](FFortItemEntry& entry) {
			return entry.ItemDefinition == Resource;
			});

		if (itemEntry) {
			itemEntry->Count += ResCount;
			if (itemEntry->Count > MaxMat)
			{
				Inventory::SpawnPickup(InstigatedBy->Pawn->K2_GetActorLocation(), itemEntry->ItemDefinition, itemEntry->Count - MaxMat, 0, InstigatedBy->MyFortPawn);
				itemEntry->Count = MaxMat;
			}
			Inventory::ReplaceEntry(InstigatedBy, *itemEntry);
		}
		else {
			if (ResCount > MaxMat) {
				Inventory::SpawnPickup(InstigatedBy->Pawn->K2_GetActorLocation(), Resource, ResCount - MaxMat, 0, InstigatedBy->MyFortPawn);
				ResCount = MaxMat;
			}
			Inventory::GiveItem(InstigatedBy, Resource, ResCount, 0, 0, false);
		}
	}
	InstigatedBy->ClientReportDamagedResourceBuilding(Actor, ResCount == 0 ? EFortResourceType::None : Actor->ResourceType, ResCount, Actor->GetHealth() - Damage <= 0, Damage == 100.f);
	Actor->ForceNetUpdate();
	return OnDamageServerOG(Actor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);
}

void Building::Hook() {
	Utils::ExecHook(L"/Script/FortniteGame.FortPlayerController.ServerCreateBuildingActor", ServerCreateBuildingActor, ServerCreateBuildingActorOG);
	Utils::ExecHook(L"/Script/FortniteGame.FortPlayerController.ServerBeginEditingBuildingActor", ServerBeginEditingBuildingActor);
	Utils::ExecHook(L"/Script/FortniteGame.FortPlayerController.ServerEditBuildingActor", ServerEditBuildingActor);
	Utils::ExecHook(L"/Script/FortniteGame.FortPlayerController.ServerEndEditingBuildingActor", ServerEndEditingBuildingActor);
	Utils::ExecHook(L"/Script/FortniteGame.FortPlayerController.ServerRepairBuildingActor", ServerRepairBuildingActor);
	Utils::Hook(ImageBase + 0xa14680, OnDamageServer, OnDamageServerOG);
}