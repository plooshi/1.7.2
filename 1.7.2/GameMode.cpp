#include "pch.h"
#include "GameMode.h"
#include "Misc.h"
#include "Abilities.h"
#include "Player.h"
#include "Inventory.h"

void SetPlaylist(AFortGameModeAthena* GameMode) {
	auto GameState = (AFortGameStateAthena*)GameMode->GameState;

	GameState->CurrentPlaylistId = GameMode->CurrentPlaylistId = 1;

	GameMode->bAlwaysDBNO = false;
}

bool bReady = false;
void GameMode::ReadyToStartMatch(UObject* Context, FFrame& Stack, bool* Ret) {
	Stack.IncrementCode();
	auto GameMode = Context->Cast<AFortGameModeAthena>();
	if (!GameMode) {
		*Ret = callOGWithRet(((AGameMode*)Context), Stack.CurrentNativeFunction, ReadyToStartMatch);
		return;
	}
	auto GameState = ((AFortGameStateAthena*)GameMode->GameState);
	static bool bWhy = false;
	if (!bWhy) {
		bWhy = true;
		GameMode->WarmupRequiredPlayerCount = 1;

		SetPlaylist(GameMode);
	}

	if (!GameMode->bWorldIsReady) {
		auto Starts = Utils::GetAll<AFortPlayerStartWarmup>();
		auto StartsNum = Starts.Num();
		Starts.Free();
		if (StartsNum == 0 || !GameState->MapInfo) {
			*Ret = false;
			return;
		}

		AbilitySets.Add(Utils::FindObject<UFortAbilitySet>(L"/Game/Abilities/Player/Generic/Traits/DefaultPlayer/GAS_DefaultPlayer.GAS_DefaultPlayer"));

		GameMode->DefaultPawnClass = Utils::FindObject<UClass>(L"/Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C");
		Utils::Patch<uint8>(ImageBase + 0x137DBC0, 0xc3);
		SetConsoleTitleA("Sarah 1.7.2: Ready");
		GameMode->bWorldIsReady = true;
	}

	*Ret = callOGWithRet(((AGameMode*)Context), Stack.CurrentNativeFunction, ReadyToStartMatch);
}

APawn* GameMode::SpawnDefaultPawnFor(UObject* Context, FFrame& Stack, APawn** Ret) {
	AController* NewPlayer;
	AActor* StartSpot;
	Stack.StepCompiledIn(&NewPlayer);
	Stack.StepCompiledIn(&StartSpot);
	Stack.IncrementCode();
	auto GameMode = (AFortGameModeAthena*)Context;
	auto Transform = StartSpot->GetTransform();
	auto Pawn = GameMode->SpawnDefaultPawnAtTransform(NewPlayer, Transform);

	auto PlayerController = NewPlayer->Cast<AFortPlayerControllerAthena>();
	if (!PlayerController) return *Ret = Pawn;

	auto Num = PlayerController->WorldInventory->Inventory.ReplicatedEntries.Num();
	if (Num != 0) {
		//PlayerController->WorldInventory->Inventory.ReplicatedEntries.ResetNum();
		//PlayerController->WorldInventory->Inventory.ItemInstances.ResetNum();
		bool bStarting = false;
		for (auto& Entry : PlayerController->WorldInventory->Inventory.ReplicatedEntries)
		{
			for (auto& StartingItem : ((AFortGameModeAthena*)GameMode)->StartingItems)
				if (StartingItem.Item == Entry.ItemDefinition)
					bStarting = true;
			
			if (!bStarting)
				Inventory::Remove(PlayerController, Entry.ItemGuid);
		}
	}
	else 
	{
		Inventory::GiveItem(PlayerController, Utils::FindObject<UFortItemDefinition>(L"/Game/Athena/Items/Weapons/WID_Harvest_Pickaxe_Athena_C_T01.WID_Harvest_Pickaxe_Athena_C_T01"));
		for (auto& StartingItem : ((AFortGameModeAthena*)GameMode)->StartingItems)
		{
			if (StartingItem.Count)
			{
				Inventory::GiveItem(PlayerController, StartingItem.Item, StartingItem.Count);
			}
		}
	}


	if (Num == 0)
	{
		auto PlayerState = (AFortPlayerStateAthena*)PlayerController->PlayerState;

		for (auto& AbilitySet : AbilitySets)
			Abilities::GiveAbilitySet(PlayerState->AbilitySystemComponent, AbilitySet);


		/**lstatic auto Head = Utils::FindObject<UCustomCharacterPart>(L"/Game/Characters/CharacterParts/Female/Medium/Heads/F_Med_Head1.F_Med_Head1");
		static auto Body = Utils::FindObject<UCustomCharacterPart>(L"/Game/Characters/CharacterParts/Female/Medium/Bodies/F_Med_Soldier_01.F_Med_Soldier_01");
		PlayerState->CharacterParts[(int)EFortCustomPartType::Head] = Head;
		PlayerState->CharacterParts[(int)EFortCustomPartType::Body] = Body;*/


		TArray<UFortHeroType*> HeroTypes;
		for (int i = 0; i < UObject::GObjects->Num(); i++)
		{
			auto HeroType = UObject::GObjects->GetByIndex(i)->Cast<UFortHeroType>();
			if (UKismetSystemLibrary::GetPathName(HeroType).ToString().starts_with("/Game/Athena/Heroes/"))
				HeroTypes.Add(HeroType);
		}

		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<std::size_t> dist(0, HeroTypes.Num() - 1); // maps the random number to [0..number of words]

		for (auto& Spec : HeroTypes[int32(dist(gen))]->Specializations)
		{
			for (auto& Part : Spec->CharacterParts)
			{
				PlayerState->CharacterParts[(int) Part->CharacterPartType] = Part;
			}
		}

		((void (*)(APlayerState*, APawn*)) (ImageBase + 0x217db10))(PlayerController->PlayerState, Pawn);
	}

	return *Ret = Pawn;
}

EFortTeam GameMode::PickTeam(AFortGameModeAthena* GameMode, uint8_t PreferredTeam, AFortPlayerControllerAthena* Controller) {
	uint8_t ret = CurrentTeam;

	if (++PlayersOnCurTeam >= 1) {
		CurrentTeam++;
		PlayersOnCurTeam = 0;
	}

	return EFortTeam(ret);
}

UClass** GetGameSessionClass(AFortGameMode*, UClass** OutClass) {
	*OutClass = AFortGameSessionDedicated::StaticClass();
	return OutClass;
}


void GameMode::HandleStartingNewPlayer(UObject* Context, FFrame& Stack) {
	AFortPlayerControllerAthena* NewPlayer;
	Stack.StepCompiledIn(&NewPlayer);
	Stack.IncrementCode();
	auto GameMode = (AFortGameModeAthena*)Context;
	auto GameState = (AFortGameStateAthena*)GameMode->GameState;
	AFortPlayerStateAthena* PlayerState = (AFortPlayerStateAthena*)NewPlayer->PlayerState;

	return callOG(GameMode, Stack.CurrentNativeFunction, HandleStartingNewPlayer, NewPlayer);
}


void GameMode::Hook()
{
	Utils::ExecHook(L"/Script/Engine.GameMode.ReadyToStartMatch", ReadyToStartMatch, ReadyToStartMatchOG);
	Utils::ExecHook(L"/Script/Engine.GameModeBase.SpawnDefaultPawnFor", SpawnDefaultPawnFor);
	//Utils::Hook(ImageBase + 0x444620, PickTeam, PickTeamOG);
	Utils::ExecHook(L"/Script/Engine.GameModeBase.HandleStartingNewPlayer", HandleStartingNewPlayer, HandleStartingNewPlayerOG);
	//Utils::Hook(Sarah::Offsets::ImageBase + 0x19A2D44, GetGameSessionClass);
}
