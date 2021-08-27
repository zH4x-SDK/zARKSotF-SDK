#pragma once

// Name: ARKSotF, Version: 178.8.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass DinoBlueprintBase.DinoBlueprintBase_C
// 0x0FEE (0x132E - 0x0340)
class UDinoBlueprintBase_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0xFEE];                                     // 0x0340(0x0FEE) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass DinoBlueprintBase.DinoBlueprintBase_C");
		return ptr;
	}


	void BlueprintPlayAnimationEvent(class UAnimMontage** AnimationMontage, float* PlayRate, float* playedAnimLength);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_330();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_755();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_ModifyBone_126();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_329();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_RotationOffsetBlendSpace_30();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_328();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_327();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_326();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_754();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_753();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_325();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_324();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_750();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_749();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_323();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_322();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_748();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_747();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_321();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_320();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_319();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_ModifyBone_125();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_ApplyAdditive_24();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_318();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_317();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_DinoBlueprintBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
