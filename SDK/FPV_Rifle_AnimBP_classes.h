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

// AnimBlueprintGeneratedClass FPV_Rifle_AnimBP.FPV_Rifle_AnimBP_C
// 0x0000 (0x1214 - 0x1214)
class UFPV_Rifle_AnimBP_C : public UFPVWeaponAnimBP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPV_Rifle_AnimBP.FPV_Rifle_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_FPV_Rifle_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
