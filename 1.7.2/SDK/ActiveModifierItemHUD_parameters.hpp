﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ActiveModifierItemHUD

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ActiveModifierItemHUD.ActiveModifierItemHUD_C.AssignIcon
// 0x0090 (0x0090 - 0x0000)
struct ActiveModifierItemHUD_C_AssignIcon final
{
public:
	struct FSlateBrush                            inIconSlateBrush;                                  // 0x0000(0x0090)(Parm)
};
static_assert(alignof(ActiveModifierItemHUD_C_AssignIcon) == 0x000008, "Wrong alignment on ActiveModifierItemHUD_C_AssignIcon");
static_assert(sizeof(ActiveModifierItemHUD_C_AssignIcon) == 0x000090, "Wrong size on ActiveModifierItemHUD_C_AssignIcon");
static_assert(offsetof(ActiveModifierItemHUD_C_AssignIcon, inIconSlateBrush) == 0x000000, "Member 'ActiveModifierItemHUD_C_AssignIcon::inIconSlateBrush' has a wrong offset!");

}

