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

// AnimBlueprintGeneratedClass DinoBlueprintBase_RootTransformIK.DinoBlueprintBase_RootTransformIK_C
// 0x0E84 (0x11C4 - 0x0340)
class UDinoBlueprintBase_RootTransformIK_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0xE84];                                     // 0x0340(0x0E84) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass DinoBlueprintBase_RootTransformIK.DinoBlueprintBase_RootTransformIK_C");
		return ptr;
	}


	void BlueprintPlayAnimationEvent(class UAnimMontage** AnimationMontage, float* PlayRate, float* playedAnimLength);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_BlendListByBool_600();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_ModifyBone_156();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_BlendListByBool_599();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_RotationOffsetBlendSpace_48();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_BlendListByBool_598();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_BlendListByBool_597();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_SequencePlayer_988();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_BlendListByBool_596();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_BlendListByBool_595();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_SequencePlayer_987();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_SequencePlayer_986();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_BlendListByBool_594();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_SequencePlayer_985();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_BlendListByBool_593();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_BlendListByBool_592();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_SequencePlayer_983();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_BlendListByBool_591();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_BlendListByBool_590();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_SequencePlayer_982();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_SequencePlayer_981();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_BlendListByBool_589();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_BlendListByBool_588();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_SequencePlayer_980();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_SequencePlayer_979();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransformIK_AnimGraphNode_SequencePlayer_978();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_DinoBlueprintBase_RootTransformIK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
