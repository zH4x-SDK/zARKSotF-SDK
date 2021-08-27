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

// AnimBlueprintGeneratedClass turret_rig_AnimBlueprint.turret_rig_AnimBlueprint_C
// 0x01D8 (0x0518 - 0x0340)
class Uturret_rig_AnimBlueprint_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x1D8];                                     // 0x0340(0x01D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass turret_rig_AnimBlueprint.turret_rig_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_turret_rig_AnimBlueprint_AnimGraphNode_ModifyBone_102();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_turret_rig_AnimBlueprint_AnimGraphNode_ModifyBone_101();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_turret_rig_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
