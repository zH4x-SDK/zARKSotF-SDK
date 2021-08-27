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

// AnimBlueprintGeneratedClass FPVWeaponAnimBP_Base_MachinePistol.FPVWeaponAnimBP_Base_MachinePistol_C
// 0x05BF (0x08FF - 0x0340)
class UFPVWeaponAnimBP_Base_MachinePistol_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x5BF];                                     // 0x0340(0x05BF) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPVWeaponAnimBP_Base_MachinePistol.FPVWeaponAnimBP_Base_MachinePistol_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_MachinePistol_AnimGraphNode_TransitionResult_648();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_MachinePistol_AnimGraphNode_TransitionResult_647();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_MachinePistol_AnimGraphNode_TransitionResult_646();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_MachinePistol_AnimGraphNode_TransitionResult_645();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_MachinePistol_AnimGraphNode_BlendListByBool_190();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_MachinePistol_AnimGraphNode_ModifyBone_98();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_MachinePistol_AnimGraphNode_SequencePlayer_532();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_MachinePistol_AnimGraphNode_BlendListByBool_191();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_MachinePistol_AnimGraphNode_SequencePlayer_533();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_MachinePistol_AnimGraphNode_BlendListByBool_192();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_FPVWeaponAnimBP_Base_MachinePistol(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
