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

// AnimBlueprintGeneratedClass FPVPlacerWeaponAnimBP_Base.FPVPlacerWeaponAnimBP_Base_C
// 0x05D4 (0x0914 - 0x0340)
class UFPVPlacerWeaponAnimBP_Base_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x5D4];                                     // 0x0340(0x05D4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPVPlacerWeaponAnimBP_Base.FPVPlacerWeaponAnimBP_Base_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVPlacerWeaponAnimBP_Base_AnimGraphNode_TransitionResult_690();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVPlacerWeaponAnimBP_Base_AnimGraphNode_TransitionResult_689();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVPlacerWeaponAnimBP_Base_AnimGraphNode_TransitionResult_688();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVPlacerWeaponAnimBP_Base_AnimGraphNode_TransitionResult_687();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVPlacerWeaponAnimBP_Base_AnimGraphNode_TransitionResult_686();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVPlacerWeaponAnimBP_Base_AnimGraphNode_TransitionResult_685();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVPlacerWeaponAnimBP_Base_AnimGraphNode_LayeredBoneBlend_54();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_FPVPlacerWeaponAnimBP_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
