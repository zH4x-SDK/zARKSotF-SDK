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

// AnimBlueprintGeneratedClass FPVBowWeaponAnimBP_Base.FPVBowWeaponAnimBP_Base_C
// 0x06A9 (0x09E9 - 0x0340)
class UFPVBowWeaponAnimBP_Base_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x6A9];                                     // 0x0340(0x06A9) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPVBowWeaponAnimBP_Base.FPVBowWeaponAnimBP_Base_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVBowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_734();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVBowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_733();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVBowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_732();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVBowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_731();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVBowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_730();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVBowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_729();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVBowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_728();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVBowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_727();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVBowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_726();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVBowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_725();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVBowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_724();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVBowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_723();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVBowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_722();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVBowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_721();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVBowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_720();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVBowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_719();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVBowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_718();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVBowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_717();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVBowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_716();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVBowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_715();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVBowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_714();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVBowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_713();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_EnterIdle();
	void AnimNotify_EnterTargetIdle();
	void AnimNotify_EndPullString();
	void ExecuteUbergraph_FPVBowWeaponAnimBP_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
