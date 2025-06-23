// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include "Utils.h"
#include "Replication.h"

void Main() {
    ReplicationOffsets::Init();
    AllocConsole();
    FILE* f;
    freopen_s(&f, "CONOUT$", "w", stdout);
    SetConsoleTitleA("Sarah 1.7.2: Setting up");
    LogCategory = FName(L"LogGameserver");
    //auto FrontEndGameMode = (AFortGameMode*)UWorld::GetWorld()->AuthorityGameMode;
    //while (FrontEndGameMode->MatchState != FName(L"InProgress"));
    Sleep(2000);

    MH_Initialize();
    for (auto& HookFunc : _HookFuncs)
        HookFunc();
    MH_EnableHook(MH_ALL_HOOKS);
    srand((uint32_t)time(0));

    *(bool*)(ImageBase + Sarah::Offsets::GIsClient) = false;
    //*(bool*)(ImageBase + Sarah::Offsets::GIsClient + 1) = true;
    UWorld::GetWorld()->OwningGameInstance->LocalPlayers.Remove(0);
    UKismetSystemLibrary::ExecuteConsoleCommand(UWorld::GetWorld(), L"open Athena_Terrain", nullptr);
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        std::thread(Main).detach();
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

