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

// AnimBlueprintGeneratedClass FPVGrenadeWeaponAnimBP_Base.FPVGrenadeWeaponAnimBP_Base_C
// 0x03D5 (0x0715 - 0x0340)
class UFPVGrenadeWeaponAnimBP_Base_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x3D5];                                     // 0x0340(0x03D5) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPVGrenadeWeaponAnimBP_Base.FPVGrenadeWeaponAnimBP_Base_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVGrenadeWeaponAnimBP_Base_AnimGraphNode_TransitionResult_594();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVGrenadeWeaponAnimBP_Base_AnimGraphNode_TransitionResult_593();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVGrenadeWeaponAnimBP_Base_AnimGraphNode_TransitionResult_592();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVGrenadeWeaponAnimBP_Base_AnimGraphNode_TransitionResult_591();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVGrenadeWeaponAnimBP_Base_AnimGraphNode_TransitionResult_590();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVGrenadeWeaponAnimBP_Base_AnimGraphNode_TransitionResult_589();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVGrenadeWeaponAnimBP_Base_AnimGraphNode_TransitionResult_588();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVGrenadeWeaponAnimBP_Base_AnimGraphNode_TransitionResult_587();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVGrenadeWeaponAnimBP_Base_AnimGraphNode_TransitionResult_586();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_FPVGrenadeWeaponAnimBP_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
