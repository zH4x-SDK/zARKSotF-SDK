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

// AnimBlueprintGeneratedClass rocketLauncher_TPV_RIG_AnimBlueprint.rocketLauncher_TPV_RIG_AnimBlueprint_C
// 0x0064 (0x03A4 - 0x0340)
class UrocketLauncher_TPV_RIG_AnimBlueprint_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x64];                                      // 0x0340(0x0064) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass rocketLauncher_TPV_RIG_AnimBlueprint.rocketLauncher_TPV_RIG_AnimBlueprint_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_rocketLauncher_TPV_RIG_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
