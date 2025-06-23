#pragma once
#include "pch.h"
#include "Utils.h"


class Player {
private:
	DefUHookOg(ServerReadyToStartMatch);
	static void ServerAcknowledgePossession(UObject*, FFrame&);
public:
	DefHookOg(void, GetPlayerViewPoint, APlayerController*, FVector&, FRotator&);
private:
	static void ServerExecuteInventoryItem(UObject*, FFrame&);
	static void ServerReturnToMainMenu(UObject*, FFrame&);
	static void ServerPlayEmoteItem(UObject*, FFrame&);
	DefUHookOg(ServerAttemptAircraftJump);
	DefUHookOg(ServerSendZiplineState);
	DefUHookOg(ServerHandlePickupInfo);
	static void MovingEmoteStopped(UObject*, FFrame&);
public:
	static void InternalPickup(AFortPlayerControllerAthena*, FFortItemEntry);
private:
	DefHookOg(bool, CompletePickupAnimation, AFortPickup*);
	DefHookOg(void, NetMulticast_Athena_BatchedDamageCues, AFortPlayerPawnAthena*, FAthenaBatchedDamageGameplayCues);
	static void ReloadWeapon(AFortWeapon*, int);
	DefHookOg(void, ClientOnPawnDied, AFortPlayerControllerAthena*, FFortPlayerDeathReport&);
	static void ServerAttemptInventoryDrop(UObject*, FFrame&);

	DefHookOg(void, OnCapsuleBeginOverlap, UObject*, FFrame&);


	InitHooks;
};