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

// AnimBlueprintGeneratedClass Compass_FPV_RIG_AnimBlueprint.Compass_FPV_RIG_AnimBlueprint_C
// 0x0168 (0x04A8 - 0x0340)
class UCompass_FPV_RIG_AnimBlueprint_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x168];                                     // 0x0340(0x0168) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Compass_FPV_RIG_AnimBlueprint.Compass_FPV_RIG_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Compass_FPV_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_96();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Compass_FPV_RIG_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
