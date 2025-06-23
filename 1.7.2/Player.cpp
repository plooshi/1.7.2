#include "pch.h"
#include "Player.h"
#include "Abilities.h"


void Player::ServerReadyToStartMatch(UObject* Context, FFrame& Stack)
{
	Stack.IncrementCode();
	auto PlayerController = (AFortPlayerController*)Context;

	PlayerController->QuickBars = Utils::SpawnActor<AFortQuickBars>(FVector{});
	PlayerController->QuickBars->SetOwner(PlayerController);

	callOG(PlayerController, Stack.CurrentNativeFunction, ServerReadyToStartMatch);
}

void Player::ServerAcknowledgePossession(UObject* Context, FFrame& Stack)
{
	APawn* Pawn;
	Stack.StepCompiledIn(&Pawn);
	Stack.IncrementCode();
	auto PlayerController = (AFortPlayerController*)Context;
	PlayerController->AcknowledgedPawn = Pawn;
}

void Player::GetPlayerViewPoint(APlayerController* PlayerController, FVector& Loc, FRotator& Rot)
{
	static auto SFName = FName(L"Spectating");
	if (PlayerController->StateName == SFName)
	{
		Loc = PlayerController->LastSpectatorSyncLocation;
		Rot = PlayerController->LastSpectatorSyncRotation;
	}
	else if (PlayerController->GetViewTarget())
	{
		Loc = PlayerController->GetViewTarget()->K2_GetActorLocation();
		Rot = PlayerController->GetControlRotation();
	}
	else return GetPlayerViewPointOG(PlayerController, Loc, Rot);
}

void Player::ServerExecuteInventoryItem(UObject* Context, FFrame& Stack)
{
	FGuid ItemGuid;
	Stack.StepCompiledIn(&ItemGuid);
	Stack.IncrementCode();
	auto PlayerController = (AFortPlayerController*)Context;
	if (!PlayerController) return;
	auto entry = PlayerController->WorldInventory->Inventory.ReplicatedEntries.Search([&](FFortItemEntry& entry) {
		return entry.ItemGuid == ItemGuid;
		});

	if (!entry || !PlayerController->MyFortPawn) return;
	UFortWeaponItemDefinition* ItemDefinition = entry->ItemDefinition->IsA<UFortGadgetItemDefinition>() ? ((UFortGadgetItemDefinition*)entry->ItemDefinition)->GetDecoItemDefinition() : (UFortWeaponItemDefinition*)entry->ItemDefinition;
	auto Weapon = PlayerController->MyFortPawn->EquipWeaponDefinition(ItemDefinition, ItemGuid);
	if (auto BuildingTool = Weapon->Cast<AFortWeap_BuildingTool>())
	{
		static auto RoofPiece = Utils::FindObject<UFortBuildingItemDefinition>(L"/Game/Items/Weapons/BuildingTools/BuildingItemData_RoofS.BuildingItemData_RoofS");
		static auto FloorPiece = Utils::FindObject<UFortBuildingItemDefinition>(L"/Game/Items/Weapons/BuildingTools/BuildingItemData_Floor.BuildingItemData_Floor");
		static auto WallPiece = Utils::FindObject<UFortBuildingItemDefinition>(L"/Game/Items/Weapons/BuildingTools/BuildingItemData_Wall.BuildingItemData_Wall");
		static auto StairPiece = Utils::FindObject<UFortBuildingItemDefinition>(L"/Game/Items/Weapons/BuildingTools/BuildingItemData_Stair_W.BuildingItemData_Stair_W");


		if (ItemDefinition == RoofPiece)
		{
			static auto RoofMetadata = Utils::FindObject<UBuildingEditModeMetadata>(L"/Game/Building/EditModePatterns/Roof/EMP_Roof_RoofC.EMP_Roof_RoofC");
			BuildingTool->DefaultMetadata = RoofMetadata;
		}
		else if (ItemDefinition == StairPiece)
		{
			static auto StairMetadata = Utils::FindObject<UBuildingEditModeMetadata>(L"/Game/Building/EditModePatterns/Stair/EMP_Stair_StairW.EMP_Stair_StairW");
			BuildingTool->DefaultMetadata = StairMetadata;
		}
		else if (ItemDefinition == WallPiece)
		{
			static auto WallMetadata = Utils::FindObject<UBuildingEditModeMetadata>(L"/Game/Building/EditModePatterns/Wall/EMP_Wall_Solid.EMP_Wall_Solid");
			BuildingTool->DefaultMetadata = WallMetadata;
		}
		else if (ItemDefinition == FloorPiece)
		{
			static auto FloorMetadata = Utils::FindObject<UBuildingEditModeMetadata>(L"/Game/Building/EditModePatterns/Floor/EMP_Floor_Floor.EMP_Floor_Floor");
			BuildingTool->DefaultMetadata = FloorMetadata;
		}

		BuildingTool->OnRep_DefaultMetadata();
	}
}

void Player::ServerReturnToMainMenu(UObject* Context, FFrame& Stack)
{
	Stack.IncrementCode();
	return ((AFortPlayerController*)Context)->ClientReturnToMainMenu(L"");
}

/*void Player::ServerAttemptAircraftJump(UObject* Context, FFrame& Stack)
{
	FRotator Rotation;
	Stack.StepCompiledIn(&Rotation);
	Stack.IncrementCode();

	auto Component = (UFortControllerComponent_Aircraft*)Context;
	auto PlayerController = (AFortPlayerController*)Component->GetOwner();
	auto PlayerState = (AFortPlayerState*)PlayerController->PlayerState;
	auto GameMode = (AFortGameModeAthena*)UWorld::GetWorld()->AuthorityGameMode;

	GameMode->RestartPlayer(PlayerController);
	PlayerController->ClientSetRotation(Rotation, true);
	if (PlayerController->MyFortPawn) {
		PlayerController->MyFortPawn->BeginSkydiving(true);
		PlayerController->MyFortPawn->SetHealth(100);
	}
}

void Player::ServerPlayEmoteItem(UObject* Context, FFrame& Stack)
{
	UFortMontageItemDefinitionBase* Asset;
	float RandomNumber;
	Stack.StepCompiledIn(&Asset);
	Stack.StepCompiledIn(&RandomNumber);
	Stack.IncrementCode();
	auto PlayerController = (AFortPlayerController*)Context;

	if (!PlayerController || !PlayerController->MyFortPawn || !Asset) return;

	auto* AbilitySystemComponent = ((AFortPlayerStateAthena*)PlayerController->PlayerState)->AbilitySystemComponent;
	FGameplayAbilitySpec NewSpec = {};
	UObject* AbilityToUse = nullptr;

	if (Asset->IsA<UAthenaSprayItemDefinition>()) {
		static auto SprayAbilityClass = Utils::FindObject<UBlueprintGeneratedClass>(L"/Game/Abilities/Sprays/GAB_Spray_Generic.GAB_Spray_Generic_C");
		AbilityToUse = SprayAbilityClass->DefaultObject;
	}
	else if (auto ToyAsset = Asset->Cast<UAthenaToyItemDefinition>()) {
		AbilityToUse = ToyAsset->ToySpawnAbility->DefaultObject;
	}
	else if (auto DanceAsset = Asset->Cast<UAthenaDanceItemDefinition>())
	{
		PlayerController->MyFortPawn->bMovingEmote = DanceAsset->bMovingEmote;
		PlayerController->MyFortPawn->EmoteWalkSpeed = DanceAsset->WalkForwardSpeed;
		static auto EmoteAbilityClass = Utils::FindObject<UBlueprintGeneratedClass>(L"/Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C");
		AbilityToUse = DanceAsset->CustomDanceAbility ? DanceAsset->CustomDanceAbility->DefaultObject : EmoteAbilityClass->DefaultObject;
	}

	if (AbilityToUse) {
		((void (*)(FGameplayAbilitySpec*, UObject*, int, int, UObject*))(ImageBase + 0x1959d48))(&NewSpec, AbilityToUse, 1, -1, Asset);
		FGameplayAbilitySpecHandle handle;
		((void (*)(UFortAbilitySystemComponent*, FGameplayAbilitySpecHandle*, FGameplayAbilitySpec*, void*))(ImageBase + 0x4f3a488))(AbilitySystemComponent, &handle, &NewSpec, nullptr);
	}
}

void Player::ServerSendZiplineState(UObject* Context, FFrame& Stack)
{
	FZiplinePawnState State;

	Stack.StepCompiledIn(&State);
	Stack.IncrementCode();

	auto Pawn = (AFortPlayerPawn*)Context;

	if (!Pawn)
		return;

	Pawn->ZiplineState = State;

	((void (*)(AFortPlayerPawn*))(ImageBase + 0x672c300))(Pawn);

	if (State.bJumped)
	{
		auto Velocity = Pawn->CharacterMovement->Velocity;
		auto VelocityX = Velocity.X * -0.5f;
		auto VelocityY = Velocity.Y * -0.5f;
		Pawn->LaunchCharacterJump({ VelocityX >= -750 ? min(VelocityX, 750) : -750, VelocityY >= -750 ? min(VelocityY, 750) : -750, 1200 }, false, false, true, true);
	}
}

void Player::ServerHandlePickupInfo(UObject* Context, FFrame& Stack)
{
	AFortPickup* Pickup;
	FFortPickupRequestInfo Params;
	Stack.StepCompiledIn(&Pickup);
	Stack.StepCompiledIn(&Params);
	Stack.IncrementCode();
	auto Pawn = (AFortPlayerPawn*)Context;

	if (!Pawn || !Pickup || Pickup->bPickedUp)
		return;

	if ((Params.bTrySwapWithWeapon || Params.bUseRequestedSwap) && Pawn->CurrentWeapon && Inventory::GetQuickbar(Pawn->CurrentWeapon->WeaponData) == EFortQuickBars::Primary && Inventory::GetQuickbar(Pickup->PrimaryPickupItemEntry.ItemDefinition) == EFortQuickBars::Primary)
	{
		auto PC = (AFortPlayerControllerAthena*)Pawn->Controller;
		auto SwapEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Search([&](FFortItemEntry& entry)
			{ return entry.ItemGuid == Params.SwapWithItem; });
		PC->SwappingItemDefinition = (UFortWorldItemDefinition*)SwapEntry; // proper af
	}
	Pawn->IncomingPickups.Add(Pickup);

	Pickup->PickupLocationData.bPlayPickupSound = Params.bPlayPickupSound;
	Pickup->PickupLocationData.FlyTime = 0.4f;
	Pickup->PickupLocationData.ItemOwner = Pawn;
	Pickup->PickupLocationData.PickupGuid = Pickup->PrimaryPickupItemEntry.ItemGuid;
	Pickup->PickupLocationData.PickupTarget = Pawn;
	//Pickup->PickupLocationData.StartDirection = Params.Direction.QuantizeNormal();
	Pickup->OnRep_PickupLocationData();

	Pickup->bPickedUp = true;
	Pickup->OnRep_bPickedUp();
}

void Player::MovingEmoteStopped(UObject* Context, FFrame& Stack)
{
	Stack.IncrementCode();

	AFortPawn* Pawn = (AFortPawn*)Context;
	Pawn->bMovingEmote = false;
	Pawn->bMovingEmoteFollowingOnly = false;
}

void Player::InternalPickup(AFortPlayerControllerAthena* PlayerController, FFortItemEntry PickupEntry)
{
	auto MaxStack = (int32)Utils::EvaluateScalableFloat(PickupEntry.ItemDefinition->MaxStackSize);
	int ItemCount = 0;
	for (auto& Item : PlayerController->WorldInventory->Inventory.ReplicatedEntries)
	{
		if (Inventory::GetQuickbar(Item.ItemDefinition) == EFortQuickBars::Primary)
			ItemCount += ((UFortWorldItemDefinition*)Item.ItemDefinition)->NumberOfSlotsToTake;
	}
	auto GiveOrSwap = [&]() {
		if (ItemCount == 5 && Inventory::GetQuickbar(PickupEntry.ItemDefinition) == EFortQuickBars::Primary) {
			if (Inventory::GetQuickbar(PlayerController->MyFortPawn->CurrentWeapon->WeaponData) == EFortQuickBars::Primary) {
				auto itemEntry = PlayerController->WorldInventory->Inventory.ReplicatedEntries.Search([PlayerController](FFortItemEntry& entry)
					{ return entry.ItemGuid == PlayerController->MyFortPawn->CurrentWeapon->ItemEntryGuid; });
				Inventory::SpawnPickup(PlayerController->GetViewTarget()->K2_GetActorLocation(), *itemEntry, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, PlayerController->MyFortPawn);
				Inventory::Remove(PlayerController, PlayerController->MyFortPawn->CurrentWeapon->ItemEntryGuid);
				Inventory::GiveItem(PlayerController, PickupEntry, PickupEntry.Count, true);
			}
			else {
				Inventory::SpawnPickup(PlayerController->GetViewTarget()->K2_GetActorLocation(), (FFortItemEntry&)PickupEntry, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, PlayerController->MyFortPawn);
			}
		}
		else
			Inventory::GiveItem(PlayerController, PickupEntry, PickupEntry.Count, true);
		};
	auto GiveOrSwapStack = [&](int32 OriginalCount) {
		if (PickupEntry.ItemDefinition->bAllowMultipleStacks && ItemCount < 5)
			Inventory::GiveItem(PlayerController, PickupEntry, OriginalCount - MaxStack, true);
		else
			Inventory::SpawnPickup(PlayerController->GetViewTarget()->K2_GetActorLocation(), (FFortItemEntry&)PickupEntry, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, PlayerController->MyFortPawn, OriginalCount - MaxStack);
		};
	if (PickupEntry.ItemDefinition->IsStackable()) {
		auto itemEntry = PlayerController->WorldInventory->Inventory.ReplicatedEntries.Search([PickupEntry, MaxStack](FFortItemEntry& entry)
			{ return entry.ItemDefinition == PickupEntry.ItemDefinition && entry.Count < MaxStack; });
		if (itemEntry) {
			auto State = itemEntry->StateValues.Search([](FFortItemEntryStateValue& Value)
				{ return Value.StateType == EFortItemEntryState::ShouldShowItemToast; });
			if (!State) {
				FFortItemEntryStateValue Value{};
				Value.StateType = EFortItemEntryState::ShouldShowItemToast;
				Value.IntValue = true;
				itemEntry->StateValues.Add(Value);
			}
			else State->IntValue = true;

			if ((itemEntry->Count += PickupEntry.Count) > MaxStack) {
				auto OriginalCount = itemEntry->Count;
				itemEntry->Count = MaxStack;

				GiveOrSwapStack(OriginalCount);
			}
			Inventory::ReplaceEntry(PlayerController, *itemEntry);
		}
		else {
			if (PickupEntry.Count > MaxStack) {
				auto OriginalCount = PickupEntry.Count;
				PickupEntry.Count = MaxStack;

				GiveOrSwapStack(OriginalCount);
			}
			GiveOrSwap();
		}
	}
	else {
		GiveOrSwap();
	}
}

bool Player::CompletePickupAnimation(AFortPickup* Pickup) {
	auto Pawn = (AFortPlayerPawnAthena*)Pickup->PickupLocationData.PickupTarget;
	if (!Pawn)
		return CompletePickupAnimationOG(Pickup);
	auto PlayerController = (AFortPlayerControllerAthena*)Pawn->Controller;
	if (!PlayerController)
		return CompletePickupAnimationOG(Pickup);
	if (auto entry = (FFortItemEntry*)PlayerController->SwappingItemDefinition)
	{
		Inventory::SpawnPickup(PlayerController->GetViewTarget()->K2_GetActorLocation(), *entry, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, PlayerController->MyFortPawn);
		// SwapEntry(PC, *entry, Pickup->PrimaryPickupItemEntry);
		Inventory::Remove(PlayerController, entry->ItemGuid);
		Inventory::GiveItem(PlayerController, Pickup->PrimaryPickupItemEntry);
		PlayerController->SwappingItemDefinition = nullptr;
	}
	else
	{
		InternalPickup(PlayerController, Pickup->PrimaryPickupItemEntry);
	}
	return CompletePickupAnimationOG(Pickup);
}

void Player::NetMulticast_Athena_BatchedDamageCues(AFortPlayerPawnAthena* Pawn, FAthenaBatchedDamageGameplayCues_Shared SharedData, FAthenaBatchedDamageGameplayCues_NonShared NonSharedData)
{
	if (!Pawn || !Pawn->Controller || !Pawn->CurrentWeapon) return;

	if (Pawn->CurrentWeapon && !Pawn->CurrentWeapon->WeaponData->bUsesPhantomReserveAmmo && Inventory::GetStats(Pawn->CurrentWeapon->WeaponData) && Inventory::GetStats(Pawn->CurrentWeapon->WeaponData)->ClipSize > 0)
	{
		auto ent = ((AFortPlayerControllerAthena*)Pawn->Controller)->WorldInventory->Inventory.ReplicatedEntries.Search([Pawn](FFortItemEntry& entry)
			{ return entry.ItemGuid == Pawn->CurrentWeapon->ItemEntryGuid; });
		if (ent)
		{
			ent->LoadedAmmo = Pawn->CurrentWeapon->AmmoCount;
			Inventory::ReplaceEntry((AFortPlayerControllerAthena*)Pawn->Controller, *ent);
		}
	}
	else if (Pawn->CurrentWeapon && Pawn->CurrentWeapon->WeaponData->bUsesPhantomReserveAmmo)
	{
		auto ent = ((AFortPlayerControllerAthena*)Pawn->Controller)->WorldInventory->Inventory.ReplicatedEntries.Search([Pawn](FFortItemEntry& entry)
			{ return entry.ItemGuid == Pawn->CurrentWeapon->ItemEntryGuid; });
		if (ent)
		{
			ent->LoadedAmmo = Pawn->CurrentWeapon->AmmoCount;
			Inventory::ReplaceEntry((AFortPlayerControllerAthena*)Pawn->Controller, *ent);
		}
	}

	return NetMulticast_Athena_BatchedDamageCuesOG(Pawn, SharedData, NonSharedData);
}

void Player::ReloadWeapon(AFortWeapon* Weapon, int AmmoToRemove)
{
	AFortPlayerControllerAthena* PC = (AFortPlayerControllerAthena*)((AFortPlayerPawnAthena*)Weapon->Owner)->Controller;
	AFortInventory* Inventory;
	if (auto Bot = PC->Cast<AFortAthenaAIBotController>())
	{
		Inventory = Bot->Inventory;
	}
	else
	{
		Inventory = PC->WorldInventory;
	}
	if (!PC || !Inventory || !Weapon)
		return;
	if (Weapon->WeaponData->bUsesPhantomReserveAmmo)
	{
		Weapon->PhantomReserveAmmo -= AmmoToRemove;
		Weapon->OnRep_PhantomReserveAmmo();
		return;
	}
	auto Ammo = Weapon->WeaponData->GetAmmoWorldItemDefinition_BP();
	auto ent = Inventory->Inventory.ReplicatedEntries.Search([&](FFortItemEntry& entry)
		{ return Weapon->WeaponData == Ammo ? entry.ItemGuid == Weapon->ItemEntryGuid : entry.ItemDefinition == Ammo; });
	auto WeaponEnt = Inventory->Inventory.ReplicatedEntries.Search([&](FFortItemEntry& entry)
		{ return entry.ItemGuid == Weapon->ItemEntryGuid; });
	if (!WeaponEnt)
		return;

	if (ent)
	{
		ent->Count -= AmmoToRemove;
		if (ent->Count <= 0)
			Inventory::Remove(PC, ent->ItemGuid);
		else
			Inventory::ReplaceEntry(PC, *ent);
	}
	WeaponEnt->LoadedAmmo += AmmoToRemove;
	Inventory::ReplaceEntry(PC, *WeaponEnt);
}*/


void Player::ClientOnPawnDied(AFortPlayerControllerAthena* PlayerController, FFortPlayerDeathReport& DeathReport)
{
	if (!PlayerController)
		return ClientOnPawnDiedOG(PlayerController, DeathReport);
	auto GameMode = (AFortGameModeAthena*)UWorld::GetWorld()->AuthorityGameMode;
	auto GameState = (AFortGameStateAthena*)GameMode->GameState;
	auto PlayerState = (AFortPlayerStateAthena*)PlayerController->PlayerState;

	auto KillerPlayerState = (AFortPlayerStateAthena*)DeathReport.KillerPlayerState;
	auto KillerPawn = (AFortPlayerPawnAthena*)DeathReport.KillerPawn;

	if (KillerPlayerState && KillerPawn && KillerPawn->Controller && KillerPawn->Controller->IsA<AFortPlayerControllerAthena>() && KillerPawn->Controller != PlayerController)
	{
		KillerPlayerState->Kills++;
		KillerPlayerState->OnRep_Kills();

		KillerPlayerState->ClientReportKill(L"uhh");

		auto KillerPC = (AFortPlayerControllerAthena*)KillerPlayerState->Owner;
	}


	PlayerState->DeathInfo.bDBNO = PlayerController->MyFortPawn ? PlayerController->MyFortPawn->IsDBNO() : false;
	//PlayerState->DeathInfo.DeathCause = AFortPlayerStateAthena::ToDeathCause(PlayerController->MyFortPawn ? *(FGameplayTagContainer*)(__int64(PlayerController->MyFortPawn) + 0x20a8) : DeathReport.Tags, PlayerState->DeathInfo.bDBNO);
	PlayerState->OnRep_DeathInfo();

	if (PlayerController->MyFortPawn ? !PlayerController->MyFortPawn->IsDBNO() : true)
	{

		PlayerState->Place = GameState->PlayersLeft;
		PlayerState->OnRep_Place();

		AFortWeapon* DamageCauser = nullptr;
		if (auto Weapon = DeathReport.DamageCauser ? DeathReport.DamageCauser->Cast<AFortWeapon>() : nullptr)
			DamageCauser = Weapon;

		//((void (*)(AFortGameModeAthena*, AFortPlayerController*, APlayerState*, AFortPawn*, UFortWeaponItemDefinition*, EDeathCause, char))(ImageBase + 0x606f83c))(GameMode, PlayerController, KillerPlayerState, KillerPawn, DamageCauser ? DamageCauser->WeaponData : nullptr, PlayerState->DeathInfo.DeathCause, 0);

		if (PlayerController->MyFortPawn && ((KillerPlayerState && KillerPlayerState->Place == 1) || PlayerState->Place == 1))
		{
			if (PlayerState->Place == 1)
			{
				KillerPlayerState = PlayerState;
				KillerPawn = (AFortPlayerPawnAthena*)PlayerController->MyFortPawn;
			}
			auto KillerPlayerController = (AFortPlayerControllerAthena*)KillerPlayerState->Owner;
			auto KillerWeapon = DamageCauser ? DamageCauser->WeaponData : nullptr;

			KillerPlayerController->PlayWinEffects();
			KillerPlayerController->ClientNotifyWon();
			KillerPlayerController->ClientNotifyTeamWon();

			GameState->WinningTeam = int32(KillerPlayerState->TeamIndex);
			GameState->OnRep_WinningTeam();
		}
	}

	return ClientOnPawnDiedOG(PlayerController, DeathReport);
}


/*void Player::ServerAttemptInventoryDrop(UObject* Context, FFrame& Stack)
{
	FGuid Guid;
	int32 Count;
	bool bTrash;
	Stack.StepCompiledIn(&Guid);
	Stack.StepCompiledIn(&Count);
	Stack.StepCompiledIn(&bTrash);
	Stack.IncrementCode();
	auto PlayerController = (AFortPlayerControllerAthena*)Context;

	if (!PlayerController || !PlayerController->Pawn)
		return;
	auto ItemEntry = PlayerController->WorldInventory->Inventory.ReplicatedEntries.Search([&](FFortItemEntry& entry)
		{ return entry.ItemGuid == Guid; });
	if (!ItemEntry || (ItemEntry->Count - Count) < 0)
		return;
	ItemEntry->Count -= Count;
	Inventory::SpawnPickup(PlayerController->Pawn->K2_GetActorLocation() + PlayerController->Pawn->GetActorForwardVector() * 70.f + FVector(0, 0, 50), *ItemEntry, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, PlayerController->MyFortPawn, Count);
	if (ItemEntry->Count == 0)
		Inventory::Remove(PlayerController, Guid);
	else
		Inventory::ReplaceEntry(PlayerController, *ItemEntry);
}

void Player::OnCapsuleBeginOverlap(UObject* Context, FFrame& Stack)
{
	UPrimitiveComponent* OverlappedComp;
	AActor* OtherActor;
	UPrimitiveComponent* OtherComp;
	int32 OtherBodyIndex;
	bool bFromSweep;
	FHitResult SweepResult;
	Stack.StepCompiledIn(&OverlappedComp);
	Stack.StepCompiledIn(&OtherActor);
	Stack.StepCompiledIn(&OtherComp);
	Stack.StepCompiledIn(&OtherBodyIndex);
	Stack.StepCompiledIn(&bFromSweep);
	Stack.StepCompiledIn(&SweepResult);
	Stack.IncrementCode();
	auto Pawn = (AFortPlayerPawnAthena*)Context;
	if (!Pawn || !Pawn->Controller)
		return callOG(Pawn, Stack.CurrentNativeFunction, OnCapsuleBeginOverlap, OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
	auto Pickup = OtherActor->Cast<AFortPickup>();
	if (!Pickup || !Pickup->PrimaryPickupItemEntry.ItemDefinition)
		return callOG(Pawn, Stack.CurrentNativeFunction, OnCapsuleBeginOverlap, OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);

	auto MaxStack = Pickup->PrimaryPickupItemEntry.ItemDefinition->MaxStackSize;
	auto itemEntry = ((AFortPlayerControllerAthena*)Pawn->Controller)->WorldInventory->Inventory.ReplicatedEntries.Search([&](FFortItemEntry& entry)
		{ return entry.ItemDefinition == Pickup->PrimaryPickupItemEntry.ItemDefinition && entry.Count <= MaxStack; });
	if (Pickup && Pickup->PawnWhoDroppedPickup != Pawn)
	{
		if ((!itemEntry && Inventory::GetQuickbar(Pickup->PrimaryPickupItemEntry.ItemDefinition) == EFortQuickBars::Secondary) || (itemEntry && itemEntry->Count < MaxStack))
			Pawn->ServerHandlePickup(Pickup, 0.4f, FVector(), true);
	}
	return callOG(Pawn, Stack.CurrentNativeFunction, OnCapsuleBeginOverlap, OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
}*/

void Player::Hook()
{
	Utils::ExecHook(L"/Script/FortniteGame.FortPlayerController.ServerReadyToStartMatch", ServerReadyToStartMatch, ServerReadyToStartMatchOG);
	Utils::ExecHook(L"/Script/Engine.PlayerController.ServerAcknowledgePossession", ServerAcknowledgePossession);
	Utils::Hook(ImageBase + 0x2320d00, GetPlayerViewPoint, GetPlayerViewPointOG);
	//Utils::ExecHook(L"/Script/FortniteGame.FortPlayerController.ServerPlayEmoteItem", ServerPlayEmoteItem);
	Utils::ExecHook(L"/Script/FortniteGame.FortPlayerController.ServerExecuteInventoryItem", ServerExecuteInventoryItem);
	Utils::ExecHook(L"/Script/FortniteGame.FortPlayerController.ServerReturnToMainMenu", ServerReturnToMainMenu);
	//Utils::ExecHook(L"/Script/FortniteGame.FortPawn.MovingEmoteStopped", MovingEmoteStopped);
	//Utils::ExecHook(L"/Script/FortniteGame.FortPlayerPawn.ServerSendZiplineState", ServerSendZiplineState);
	//Utils::ExecHook(L"/Script/FortniteGame.FortPlayerPawn.ServerHandlePickupInfo", ServerHandlePickupInfo);
	//Utils::Hook(ImageBase + 0x1d29a0c, CompletePickupAnimation, CompletePickupAnimationOG);
	//Utils::Hook<AFortPlayerPawnAthena>(uint32(0x12c), NetMulticast_Athena_BatchedDamageCues, NetMulticast_Athena_BatchedDamageCuesOG);
	//Utils::Hook(ImageBase + 0x69814d0, ReloadWeapon);
	Utils::Hook(ImageBase + 0x9ca190, ClientOnPawnDied, ClientOnPawnDiedOG);
	//Utils::ExecHook(L"/Script/FortniteGame.FortPlayerController.ServerAttemptInventoryDrop", ServerAttemptInventoryDrop);
	//Utils::ExecHook(L"/Script/FortniteGame.FortPlayerPawnAthena.OnCapsuleBeginOverlap", OnCapsuleBeginOverlap, OnCapsuleBeginOverlapOG);
}
