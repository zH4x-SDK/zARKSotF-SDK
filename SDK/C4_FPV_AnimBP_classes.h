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

// AnimBlueprintGeneratedClass C4_FPV_AnimBP.C4_FPV_AnimBP_C
// 0x0000 (0x0914 - 0x0914)
class UC4_FPV_AnimBP_C : public UFPVPlacerWeaponAnimBP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass C4_FPV_AnimBP.C4_FPV_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_C4_FPV_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
