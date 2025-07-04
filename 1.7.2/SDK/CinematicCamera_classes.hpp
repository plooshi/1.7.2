﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CinematicCamera

#include "Basic.hpp"

#include "CinematicCamera_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class CinematicCamera.CameraRig_Crane
// 0x0050 (0x03D8 - 0x0388)
class ACameraRig_Crane final : public AActor
{
public:
	float                                         CranePitch;                                        // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CraneYaw;                                          // 0x038C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CraneArmLength;                                    // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLockMountPitch;                                   // 0x0394(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLockMountYaw;                                     // 0x0395(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_396[0x2];                                      // 0x0396(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        TransformComponent;                                // 0x0398(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                        CraneYawControl;                                   // 0x03A0(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                        CranePitchControl;                                 // 0x03A8(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                        CraneCameraMount;                                  // 0x03B0(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                   PreviewMesh_CraneArm;                              // 0x03B8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                   PreviewMesh_CraneBase;                             // 0x03C0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                   PreviewMesh_CraneMount;                            // 0x03C8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                   PreviewMesh_CraneCounterWeight;                    // 0x03D0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraRig_Crane">();
	}
	static class ACameraRig_Crane* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACameraRig_Crane>();
	}
};
static_assert(alignof(ACameraRig_Crane) == 0x000008, "Wrong alignment on ACameraRig_Crane");
static_assert(sizeof(ACameraRig_Crane) == 0x0003D8, "Wrong size on ACameraRig_Crane");
static_assert(offsetof(ACameraRig_Crane, CranePitch) == 0x000388, "Member 'ACameraRig_Crane::CranePitch' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, CraneYaw) == 0x00038C, "Member 'ACameraRig_Crane::CraneYaw' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, CraneArmLength) == 0x000390, "Member 'ACameraRig_Crane::CraneArmLength' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, bLockMountPitch) == 0x000394, "Member 'ACameraRig_Crane::bLockMountPitch' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, bLockMountYaw) == 0x000395, "Member 'ACameraRig_Crane::bLockMountYaw' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, TransformComponent) == 0x000398, "Member 'ACameraRig_Crane::TransformComponent' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, CraneYawControl) == 0x0003A0, "Member 'ACameraRig_Crane::CraneYawControl' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, CranePitchControl) == 0x0003A8, "Member 'ACameraRig_Crane::CranePitchControl' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, CraneCameraMount) == 0x0003B0, "Member 'ACameraRig_Crane::CraneCameraMount' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, PreviewMesh_CraneArm) == 0x0003B8, "Member 'ACameraRig_Crane::PreviewMesh_CraneArm' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, PreviewMesh_CraneBase) == 0x0003C0, "Member 'ACameraRig_Crane::PreviewMesh_CraneBase' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, PreviewMesh_CraneMount) == 0x0003C8, "Member 'ACameraRig_Crane::PreviewMesh_CraneMount' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, PreviewMesh_CraneCounterWeight) == 0x0003D0, "Member 'ACameraRig_Crane::PreviewMesh_CraneCounterWeight' has a wrong offset!");

// Class CinematicCamera.CameraRig_Rail
// 0x0048 (0x03D0 - 0x0388)
class ACameraRig_Rail final : public AActor
{
public:
	float                                         CurrentPositionOnRail;                             // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_38C[0x4];                                      // 0x038C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        TransformComponent;                                // 0x0390(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USplineComponent*                       RailSplineComponent;                               // 0x0398(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                        RailCameraMount;                                   // 0x03A0(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USplineMeshComponent*                   PreviewMesh_Rail;                                  // 0x03A8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class USplineMeshComponent*>           PreviewRailMeshSegments;                           // 0x03B0(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UStaticMesh*                            PreviewRailStaticMesh;                             // 0x03C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                   PreviewMesh_Mount;                                 // 0x03C8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraRig_Rail">();
	}
	static class ACameraRig_Rail* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACameraRig_Rail>();
	}
};
static_assert(alignof(ACameraRig_Rail) == 0x000008, "Wrong alignment on ACameraRig_Rail");
static_assert(sizeof(ACameraRig_Rail) == 0x0003D0, "Wrong size on ACameraRig_Rail");
static_assert(offsetof(ACameraRig_Rail, CurrentPositionOnRail) == 0x000388, "Member 'ACameraRig_Rail::CurrentPositionOnRail' has a wrong offset!");
static_assert(offsetof(ACameraRig_Rail, TransformComponent) == 0x000390, "Member 'ACameraRig_Rail::TransformComponent' has a wrong offset!");
static_assert(offsetof(ACameraRig_Rail, RailSplineComponent) == 0x000398, "Member 'ACameraRig_Rail::RailSplineComponent' has a wrong offset!");
static_assert(offsetof(ACameraRig_Rail, RailCameraMount) == 0x0003A0, "Member 'ACameraRig_Rail::RailCameraMount' has a wrong offset!");
static_assert(offsetof(ACameraRig_Rail, PreviewMesh_Rail) == 0x0003A8, "Member 'ACameraRig_Rail::PreviewMesh_Rail' has a wrong offset!");
static_assert(offsetof(ACameraRig_Rail, PreviewRailMeshSegments) == 0x0003B0, "Member 'ACameraRig_Rail::PreviewRailMeshSegments' has a wrong offset!");
static_assert(offsetof(ACameraRig_Rail, PreviewRailStaticMesh) == 0x0003C0, "Member 'ACameraRig_Rail::PreviewRailStaticMesh' has a wrong offset!");
static_assert(offsetof(ACameraRig_Rail, PreviewMesh_Mount) == 0x0003C8, "Member 'ACameraRig_Rail::PreviewMesh_Mount' has a wrong offset!");

// Class CinematicCamera.CineCameraActor
// 0x0040 (0x08C0 - 0x0880)
class ACineCameraActor final : public ACameraActor
{
public:
	struct FCameraLookatTrackingSettings          LookatTrackingSettings;                            // 0x0880(0x0030)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_8B0[0x10];                                     // 0x08B0(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UCineCameraComponent* GetCineCameraComponent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CineCameraActor">();
	}
	static class ACineCameraActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACineCameraActor>();
	}
};
static_assert(alignof(ACineCameraActor) == 0x000010, "Wrong alignment on ACineCameraActor");
static_assert(sizeof(ACineCameraActor) == 0x0008C0, "Wrong size on ACineCameraActor");
static_assert(offsetof(ACineCameraActor, LookatTrackingSettings) == 0x000880, "Member 'ACineCameraActor::LookatTrackingSettings' has a wrong offset!");

// Class CinematicCamera.CineCameraComponent
// 0x00B0 (0x0880 - 0x07D0)
class UCineCameraComponent final : public UCameraComponent
{
public:
	struct FCameraFilmbackSettings                FilmbackSettings;                                  // 0x07D0(0x000C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FCameraLensSettings                    LensSettings;                                      // 0x07DC(0x0014)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FCameraFocusSettings                   FocusSettings;                                     // 0x07F0(0x0030)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                         CurrentFocalLength;                                // 0x0820(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CurrentAperture;                                   // 0x0824(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CurrentFocusDistance;                              // 0x0828(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_82C[0xC];                                      // 0x082C(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FNamedFilmbackPreset>           FilmbackPresets;                                   // 0x0838(0x0010)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TArray<struct FNamedLensPreset>               LensPresets;                                       // 0x0848(0x0010)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	class FString                                 DefaultFilmbackPresetName;                         // 0x0858(0x0010)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                 DefaultLensPresetName;                             // 0x0868(0x0010)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         DefaultLensFocalLength;                            // 0x0878(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         DefaultLensFStop;                                  // 0x087C(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	float GetHorizontalFieldOfView() const;
	float GetVerticalFieldOfView() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CineCameraComponent">();
	}
	static class UCineCameraComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCineCameraComponent>();
	}
};
static_assert(alignof(UCineCameraComponent) == 0x000010, "Wrong alignment on UCineCameraComponent");
static_assert(sizeof(UCineCameraComponent) == 0x000880, "Wrong size on UCineCameraComponent");
static_assert(offsetof(UCineCameraComponent, FilmbackSettings) == 0x0007D0, "Member 'UCineCameraComponent::FilmbackSettings' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, LensSettings) == 0x0007DC, "Member 'UCineCameraComponent::LensSettings' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, FocusSettings) == 0x0007F0, "Member 'UCineCameraComponent::FocusSettings' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, CurrentFocalLength) == 0x000820, "Member 'UCineCameraComponent::CurrentFocalLength' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, CurrentAperture) == 0x000824, "Member 'UCineCameraComponent::CurrentAperture' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, CurrentFocusDistance) == 0x000828, "Member 'UCineCameraComponent::CurrentFocusDistance' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, FilmbackPresets) == 0x000838, "Member 'UCineCameraComponent::FilmbackPresets' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, LensPresets) == 0x000848, "Member 'UCineCameraComponent::LensPresets' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, DefaultFilmbackPresetName) == 0x000858, "Member 'UCineCameraComponent::DefaultFilmbackPresetName' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, DefaultLensPresetName) == 0x000868, "Member 'UCineCameraComponent::DefaultLensPresetName' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, DefaultLensFocalLength) == 0x000878, "Member 'UCineCameraComponent::DefaultLensFocalLength' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, DefaultLensFStop) == 0x00087C, "Member 'UCineCameraComponent::DefaultLensFStop' has a wrong offset!");

}

