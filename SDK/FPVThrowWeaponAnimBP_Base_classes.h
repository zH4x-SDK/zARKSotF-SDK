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

// AnimBlueprintGeneratedClass FPVThrowWeaponAnimBP_Base.FPVThrowWeaponAnimBP_Base_C
// 0x0541 (0x0881 - 0x0340)
class UFPVThrowWeaponAnimBP_Base_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x541];                                     // 0x0340(0x0541) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPVThrowWeaponAnimBP_Base.FPVThrowWeaponAnimBP_Base_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_678();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_677();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_676();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_675();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_674();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_673();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_672();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_671();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_670();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_669();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_668();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_667();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_666();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_665();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVThrowWeaponAnimBP_Base_AnimGraphNode_TransitionResult_664();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_EnterIdle();
	void AnimNotify_EnterTargetIdle();
	void AnimNotify_EndPullString();
	void ExecuteUbergraph_FPVThrowWeaponAnimBP_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
