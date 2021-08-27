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

// AnimBlueprintGeneratedClass crossbow_FPV_AnimBlueprint.crossbow_FPV_AnimBlueprint_C
// 0x0000 (0x1214 - 0x1214)
class Ucrossbow_FPV_AnimBlueprint_C : public UFPVWeaponAnimBP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass crossbow_FPV_AnimBlueprint.crossbow_FPV_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_crossbow_FPV_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
