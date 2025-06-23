#include "pch.h"
#include "Misc.h"
#include "Replication.h"

int Misc::GetNetMode() {
	return 1;
}

float Misc::GetMaxTickRate(UEngine* Engine, float DeltaTime, bool bAllowFrameRateSmoothing) {
	// improper, DS is supposed to do hitching differently
	return std::clamp(1.f / DeltaTime, 1.f, 30.f);
}

bool Misc::RetTrue() { return true; }

void Misc::TickFlush(UNetDriver* Driver, float DeltaTime)
{
	Replication::ServerReplicateActors(Driver, DeltaTime);

	return TickFlushOG(Driver, DeltaTime);
}

void* Misc::DispatchRequest(void* Arg1, void* MCPData, int)
{
	*(int*)(__int64(MCPData) + 0x60) = 3;
	return DispatchRequestOG(Arg1, MCPData, 3);
}

void Misc::Listen(UWorld *World) {
	auto Engine = UEngine::GetEngine();
	auto NetDriverName = FName(L"GameNetDriver");
	auto NetDriver = World->NetDriver = ((UNetDriver * (*)(UEngine*, UWorld*, FName))(ImageBase + Sarah::Offsets::CreateNetDriver))(Engine, World, NetDriverName);

	NetDriver->NetDriverName = NetDriverName;
	NetDriver->World = World;

	for (auto& Collection : World->LevelCollections) Collection.NetDriver = NetDriver;

	FURL imlazy;
	imlazy.Port = 7777;
	FString Err;
	if (Funcs::InitListen(NetDriver, World, /*World->PersistentLevel->URL*/ imlazy, false, Err)) {
		Funcs::SetWorld(NetDriver, World);
	}
	else {
		Log(L"Failed to listen");
	}
}


bool Misc::RetFalse()
{
	return false;
}

void Misc::ApplyHomebaseEffectsOnPlayerSetup(
	__int64* a1,
	__int64 a2,
	__int64 a3,
	__int64 a4,
	UFortHero* a5,
	char a6,
	unsigned __int8 a7)
{
	a5->ItemDefinition = Utils::FindObject<UFortHeroType>(L"/Game/Athena/Heroes/HID_Commando_Athena_Menu.HID_Commando_Athena_Menu");
	return ApplyHomebaseEffectsOnPlayerSetupOG(a1, a2, a3, a4, a5, a6, a7);
}

void Misc::Hook() {
	Utils::Hook(ImageBase + 0x2629e60, Listen);
	Utils::Hook(ImageBase + Sarah::Offsets::GetNetMode, GetNetMode);
	Utils::Hook(ImageBase + Sarah::Offsets::GetMaxTickRate, GetMaxTickRate, GetMaxTickRateOG);
	Utils::Hook(ImageBase + Sarah::Offsets::TickFlush, TickFlush, TickFlushOG);
	Utils::Hook(ImageBase + Sarah::Offsets::DispatchRequest, DispatchRequest, DispatchRequestOG);
	Utils::Patch<uint8_t>(ImageBase + EncryptionPatch, 0x74);
	Utils::Patch<uint8_t>(ImageBase + GameSessionPatch, 0x85);
	for (auto& NullFunc : Sarah::Offsets::NullFuncs)
		Utils::Patch<uint8_t>(ImageBase + NullFunc, 0xc3);
	for (auto& RetTrueFunc : Sarah::Offsets::RetTrueFuncs) {
		Utils::Patch<uint32_t>(ImageBase + RetTrueFunc, 0xc0ffc031);
		Utils::Patch<uint8_t>(ImageBase + RetTrueFunc + 4, 0xc3);
	}
	Utils::Hook(ImageBase + 0x5696d0, ApplyHomebaseEffectsOnPlayerSetup, ApplyHomebaseEffectsOnPlayerSetupOG);
	Utils::Patch<uint32_t>(ImageBase + 0x245cd86, 0x1cd0d6);
	Utils::Patch<uint32_t>(ImageBase + 0x2231b2c, 0x90909090);
	Utils::Patch<uint8_t>(ImageBase + 0x2231b30, 0x90);
	Utils::Patch<uint32_t>(ImageBase + 0x22327ed, 0x90909090);
	Utils::Patch<uint32_t>(ImageBase + 0x22327f1, 0x90909090);
	Utils::Patch<uint8_t>(ImageBase + 0x22327f5, 0xeb);
}
