﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VinderTech_GliderChute_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass VinderTech_GliderChute_AnimBP.VinderTech_GliderChute_AnimBP_C
// 0x0688 (0x09E0 - 0x0358)
class UVinderTech_GliderChute_AnimBP_C final : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0358(0x0008)(Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_EBDA468D4AE5D250B2B622A7005664B6; // 0x0360(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_928EDF8F48A9073F91162CAB58A14585; // 0x03A8(0x0060)()
	uint8                                         Pad_408[0x8];                                      // 0x0408(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_953326594E4978729F3C6F9E722F8648; // 0x0410(0x0080)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_326A11214546037B4E81ADB615DF6BEE; // 0x0490(0x0080)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_713B895F48F2801365CB0CA497F43775; // 0x0510(0x0080)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6AAED3AF491F53722B9FE2B1DDF77122; // 0x0590(0x0080)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_A98464EC49847793447025870BB3567D; // 0x0610(0x0070)()
	struct FAnimNode_Root                         AnimGraphNode_StateResult_2439A6B841320C06C4EE708432E4C44C; // 0x0680(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2133C7F047F09F18A630588EBA7E4D65; // 0x06C8(0x0070)()
	struct FAnimNode_Root                         AnimGraphNode_StateResult_ECEA977D46C391A751D73BB4275664EB; // 0x0738(0x0048)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_7E66AFF7488A41D3156C3C9367D0163D; // 0x0780(0x0120)()
	struct FAnimNode_Root                         AnimGraphNode_StateResult_FD572ED741F2DDF85C3E83969BA5DAA1; // 0x08A0(0x0048)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_B9156DAE4FE14BBC3C91B2BFEE37264F; // 0x08E8(0x00D8)()
	bool                                          IsParachuteOpen;                                   // 0x09C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C1[0x3];                                      // 0x09C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DeltaSeconds;                                      // 0x09C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LeftRight;                                         // 0x09C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         YawDeltaSmoothed;                                  // 0x09CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AimPitch;                                          // 0x09D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_GliderChute_AnimBP_AnimGraphNode_TransitionResult_713B895F48F2801365CB0CA497F43775();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_GliderChute_AnimBP_AnimGraphNode_TransitionResult_6AAED3AF491F53722B9FE2B1DDF77122();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_GliderChute_AnimBP_AnimGraphNode_TransitionResult_326A11214546037B4E81ADB615DF6BEE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_7E66AFF7488A41D3156C3C9367D0163D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_GliderChute_AnimBP_AnimGraphNode_TransitionResult_953326594E4978729F3C6F9E722F8648();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_VinderTech_GliderChute_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VinderTech_GliderChute_AnimBP_C">();
	}
	static class UVinderTech_GliderChute_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVinderTech_GliderChute_AnimBP_C>();
	}
};
static_assert(alignof(UVinderTech_GliderChute_AnimBP_C) == 0x000010, "Wrong alignment on UVinderTech_GliderChute_AnimBP_C");
static_assert(sizeof(UVinderTech_GliderChute_AnimBP_C) == 0x0009E0, "Wrong size on UVinderTech_GliderChute_AnimBP_C");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, UberGraphFrame) == 0x000358, "Member 'UVinderTech_GliderChute_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, AnimGraphNode_Root_EBDA468D4AE5D250B2B622A7005664B6) == 0x000360, "Member 'UVinderTech_GliderChute_AnimBP_C::AnimGraphNode_Root_EBDA468D4AE5D250B2B622A7005664B6' has a wrong offset!");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, AnimGraphNode_Slot_928EDF8F48A9073F91162CAB58A14585) == 0x0003A8, "Member 'UVinderTech_GliderChute_AnimBP_C::AnimGraphNode_Slot_928EDF8F48A9073F91162CAB58A14585' has a wrong offset!");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, AnimGraphNode_TransitionResult_953326594E4978729F3C6F9E722F8648) == 0x000410, "Member 'UVinderTech_GliderChute_AnimBP_C::AnimGraphNode_TransitionResult_953326594E4978729F3C6F9E722F8648' has a wrong offset!");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, AnimGraphNode_TransitionResult_326A11214546037B4E81ADB615DF6BEE) == 0x000490, "Member 'UVinderTech_GliderChute_AnimBP_C::AnimGraphNode_TransitionResult_326A11214546037B4E81ADB615DF6BEE' has a wrong offset!");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, AnimGraphNode_TransitionResult_713B895F48F2801365CB0CA497F43775) == 0x000510, "Member 'UVinderTech_GliderChute_AnimBP_C::AnimGraphNode_TransitionResult_713B895F48F2801365CB0CA497F43775' has a wrong offset!");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, AnimGraphNode_TransitionResult_6AAED3AF491F53722B9FE2B1DDF77122) == 0x000590, "Member 'UVinderTech_GliderChute_AnimBP_C::AnimGraphNode_TransitionResult_6AAED3AF491F53722B9FE2B1DDF77122' has a wrong offset!");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, AnimGraphNode_SequencePlayer_A98464EC49847793447025870BB3567D) == 0x000610, "Member 'UVinderTech_GliderChute_AnimBP_C::AnimGraphNode_SequencePlayer_A98464EC49847793447025870BB3567D' has a wrong offset!");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, AnimGraphNode_StateResult_2439A6B841320C06C4EE708432E4C44C) == 0x000680, "Member 'UVinderTech_GliderChute_AnimBP_C::AnimGraphNode_StateResult_2439A6B841320C06C4EE708432E4C44C' has a wrong offset!");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, AnimGraphNode_SequencePlayer_2133C7F047F09F18A630588EBA7E4D65) == 0x0006C8, "Member 'UVinderTech_GliderChute_AnimBP_C::AnimGraphNode_SequencePlayer_2133C7F047F09F18A630588EBA7E4D65' has a wrong offset!");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, AnimGraphNode_StateResult_ECEA977D46C391A751D73BB4275664EB) == 0x000738, "Member 'UVinderTech_GliderChute_AnimBP_C::AnimGraphNode_StateResult_ECEA977D46C391A751D73BB4275664EB' has a wrong offset!");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, AnimGraphNode_BlendSpacePlayer_7E66AFF7488A41D3156C3C9367D0163D) == 0x000780, "Member 'UVinderTech_GliderChute_AnimBP_C::AnimGraphNode_BlendSpacePlayer_7E66AFF7488A41D3156C3C9367D0163D' has a wrong offset!");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, AnimGraphNode_StateResult_FD572ED741F2DDF85C3E83969BA5DAA1) == 0x0008A0, "Member 'UVinderTech_GliderChute_AnimBP_C::AnimGraphNode_StateResult_FD572ED741F2DDF85C3E83969BA5DAA1' has a wrong offset!");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, AnimGraphNode_StateMachine_B9156DAE4FE14BBC3C91B2BFEE37264F) == 0x0008E8, "Member 'UVinderTech_GliderChute_AnimBP_C::AnimGraphNode_StateMachine_B9156DAE4FE14BBC3C91B2BFEE37264F' has a wrong offset!");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, IsParachuteOpen) == 0x0009C0, "Member 'UVinderTech_GliderChute_AnimBP_C::IsParachuteOpen' has a wrong offset!");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, DeltaSeconds) == 0x0009C4, "Member 'UVinderTech_GliderChute_AnimBP_C::DeltaSeconds' has a wrong offset!");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, LeftRight) == 0x0009C8, "Member 'UVinderTech_GliderChute_AnimBP_C::LeftRight' has a wrong offset!");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, YawDeltaSmoothed) == 0x0009CC, "Member 'UVinderTech_GliderChute_AnimBP_C::YawDeltaSmoothed' has a wrong offset!");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, AimPitch) == 0x0009D0, "Member 'UVinderTech_GliderChute_AnimBP_C::AimPitch' has a wrong offset!");

}

