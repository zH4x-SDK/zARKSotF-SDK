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

// AnimBlueprintGeneratedClass FPVMeleeWeaponAnimBP_Base.FPVMeleeWeaponAnimBP_Base_C
// 0x066C (0x09AC - 0x0340)
class UFPVMeleeWeaponAnimBP_Base_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x66C];                                     // 0x0340(0x066C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPVMeleeWeaponAnimBP_Base.FPVMeleeWeaponAnimBP_Base_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Base_AnimGraphNode_TransitionResult_576();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Base_AnimGraphNode_TransitionResult_575();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Base_AnimGraphNode_ModifyBone_94();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Base_AnimGraphNode_TransitionResult_574();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Base_AnimGraphNode_TransitionResult_573();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Base_AnimGraphNode_TransitionResult_572();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Base_AnimGraphNode_TransitionResult_571();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Base_AnimGraphNode_TransitionResult_570();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Base_AnimGraphNode_LayeredBoneBlend_44();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Base_AnimGraphNode_TwoWayBlend_6();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_FPVMeleeWeaponAnimBP_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
