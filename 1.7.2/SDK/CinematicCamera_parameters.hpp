﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CinematicCamera

#include "Basic.hpp"


namespace SDK::Params
{

// Function CinematicCamera.CineCameraActor.GetCineCameraComponent
// 0x0008 (0x0008 - 0x0000)
struct CineCameraActor_GetCineCameraComponent final
{
public:
	class UCineCameraComponent*                   ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CineCameraActor_GetCineCameraComponent) == 0x000008, "Wrong alignment on CineCameraActor_GetCineCameraComponent");
static_assert(sizeof(CineCameraActor_GetCineCameraComponent) == 0x000008, "Wrong size on CineCameraActor_GetCineCameraComponent");
static_assert(offsetof(CineCameraActor_GetCineCameraComponent, ReturnValue) == 0x000000, "Member 'CineCameraActor_GetCineCameraComponent::ReturnValue' has a wrong offset!");

// Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
// 0x0004 (0x0004 - 0x0000)
struct CineCameraComponent_GetHorizontalFieldOfView final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CineCameraComponent_GetHorizontalFieldOfView) == 0x000004, "Wrong alignment on CineCameraComponent_GetHorizontalFieldOfView");
static_assert(sizeof(CineCameraComponent_GetHorizontalFieldOfView) == 0x000004, "Wrong size on CineCameraComponent_GetHorizontalFieldOfView");
static_assert(offsetof(CineCameraComponent_GetHorizontalFieldOfView, ReturnValue) == 0x000000, "Member 'CineCameraComponent_GetHorizontalFieldOfView::ReturnValue' has a wrong offset!");

// Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
// 0x0004 (0x0004 - 0x0000)
struct CineCameraComponent_GetVerticalFieldOfView final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CineCameraComponent_GetVerticalFieldOfView) == 0x000004, "Wrong alignment on CineCameraComponent_GetVerticalFieldOfView");
static_assert(sizeof(CineCameraComponent_GetVerticalFieldOfView) == 0x000004, "Wrong size on CineCameraComponent_GetVerticalFieldOfView");
static_assert(offsetof(CineCameraComponent_GetVerticalFieldOfView, ReturnValue) == 0x000000, "Member 'CineCameraComponent_GetVerticalFieldOfView::ReturnValue' has a wrong offset!");

}

