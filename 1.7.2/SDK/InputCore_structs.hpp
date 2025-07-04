﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InputCore

#include "Basic.hpp"


namespace SDK
{

// Enum InputCore.ETouchIndex
// NumValues: 0x000B
enum class ETouchIndex : uint8
{
	Touch1                                   = 0,
	Touch2                                   = 1,
	Touch3                                   = 2,
	Touch4                                   = 3,
	Touch5                                   = 4,
	Touch6                                   = 5,
	Touch7                                   = 6,
	Touch8                                   = 7,
	Touch9                                   = 8,
	Touch10                                  = 9,
	ETouchIndex_MAX                          = 10,
};

// Enum InputCore.ETouchType
// NumValues: 0x0006
enum class ETouchType : uint8
{
	Began                                    = 0,
	Moved                                    = 1,
	Stationary                               = 2,
	Ended                                    = 3,
	NumTypes                                 = 4,
	ETouchType_MAX                           = 5,
};

// Enum InputCore.EConsoleForGamepadLabels
// NumValues: 0x0004
enum class EConsoleForGamepadLabels : uint8
{
	None                                     = 0,
	XBoxOne                                  = 1,
	PS4                                      = 2,
	EConsoleForGamepadLabels_MAX             = 3,
};

// Enum InputCore.EControllerHand
// NumValues: 0x000F
enum class EControllerHand : uint8
{
	Left                                     = 0,
	Right                                    = 1,
	Pad                                      = 2,
	ExternalCamera                           = 3,
	Gun                                      = 4,
	Special_1                                = 5,
	Special_2                                = 6,
	Special_3                                = 7,
	Special_4                                = 8,
	Special_5                                = 9,
	Special_6                                = 10,
	Special_7                                = 11,
	Special_8                                = 12,
	Special_9                                = 13,
	EControllerHand_MAX                      = 14,
};

// ScriptStruct InputCore.Key
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) FKey final
{
public:
	class FName                                   KeyName;                                           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_8[0x10];                                       // 0x0008(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FKey) == 0x000008, "Wrong alignment on FKey");
static_assert(sizeof(FKey) == 0x000018, "Wrong size on FKey");
static_assert(offsetof(FKey, KeyName) == 0x000000, "Member 'FKey::KeyName' has a wrong offset!");

}

