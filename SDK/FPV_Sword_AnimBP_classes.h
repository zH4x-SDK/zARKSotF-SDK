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

// AnimBlueprintGeneratedClass FPV_Sword_AnimBP.FPV_Sword_AnimBP_C
// 0x0000 (0x09AC - 0x09AC)
class UFPV_Sword_AnimBP_C : public UFPVMeleeWeaponAnimBP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPV_Sword_AnimBP.FPV_Sword_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_FPV_Sword_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
