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

// AnimBlueprintGeneratedClass DinoBlueprintBase_MovementBlendSpace.DinoBlueprintBase_MovementBlendSpace_C
// 0x1478 (0x17B8 - 0x0340)
class UDinoBlueprintBase_MovementBlendSpace_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x1478];                                    // 0x0340(0x1478) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass DinoBlueprintBase_MovementBlendSpace.DinoBlueprintBase_MovementBlendSpace_C");
		return ptr;
	}


	void BlueprintPlayAnimationEvent(class UAnimMontage** AnimationMontage, float* PlayRate, float* playedAnimLength);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_BlendListByBool_516();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_ModifyBone_150();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_BlendListByBool_515();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_BlendListByBool_514();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_BlendListByBool_513();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_BlendListByBool_512();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_SequencePlayer_909();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_RotationOffsetBlendSpace_42();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_SequencePlayer_908();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_BlendListByBool_511();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_BlendListByBool_510();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_SequencePlayer_907();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_SequencePlayer_906();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_BlendListByBool_509();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_BlendListByBool_508();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_BlendListByBool_507();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_ModifyBone_149();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_BlendListByBool_506();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_BlendListByBool_505();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_SequencePlayer_904();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_SequencePlayer_903();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_BlendListByBool_504();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_GroundBones_24();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_GroundBones_23();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_ApplyAdditive_36();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_BlendListByBool_503();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_BlendSpacePlayer_24();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_SequencePlayer_901();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace_AnimGraphNode_BlendListByBool_502();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_DinoBlueprintBase_MovementBlendSpace(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
