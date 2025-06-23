#pragma once
#include "pch.h"
#include "Utils.h"

class Misc {
private:
	static int GetNetMode();
public:
	DefHookOg(float, GetMaxTickRate, UEngine*, float, bool);
	static void Listen(UWorld*);
private:
	static bool RetTrue();
	static bool RetFalse();
	DefHookOg(void, ApplyHomebaseEffectsOnPlayerSetup, __int64*, __int64, __int64, __int64, UFortHero*, char, unsigned __int8);
	DefHookOg(void, TickFlush, UNetDriver*, float);
	DefHookOg(void*, DispatchRequest, void*, void*, int);

	InitHooks;
};