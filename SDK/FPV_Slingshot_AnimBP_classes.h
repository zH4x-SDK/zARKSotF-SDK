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

// AnimBlueprintGeneratedClass FPV_Slingshot_AnimBP.FPV_Slingshot_AnimBP_C
// 0x0000 (0x09E9 - 0x09E9)
class UFPV_Slingshot_AnimBP_C : public UFPVBowWeaponAnimBP_NoRun_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPV_Slingshot_AnimBP.FPV_Slingshot_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_FPV_Slingshot_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
