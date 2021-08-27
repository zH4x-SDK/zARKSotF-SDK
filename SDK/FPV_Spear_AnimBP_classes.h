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

// AnimBlueprintGeneratedClass FPV_Spear_AnimBP.FPV_Spear_AnimBP_C
// 0x0000 (0x0881 - 0x0881)
class UFPV_Spear_AnimBP_C : public UFPVThrowWeaponAnimBP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPV_Spear_AnimBP.FPV_Spear_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_FPV_Spear_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
