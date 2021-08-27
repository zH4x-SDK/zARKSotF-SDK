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

// AnimBlueprintGeneratedClass RocketLauncher_FPV_AnimBP.RocketLauncher_FPV_AnimBP_C
// 0x0000 (0x1214 - 0x1214)
class URocketLauncher_FPV_AnimBP_C : public UFPVWeaponAnimBP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass RocketLauncher_FPV_AnimBP.RocketLauncher_FPV_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_RocketLauncher_FPV_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
