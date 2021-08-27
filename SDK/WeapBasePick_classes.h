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

// BlueprintGeneratedClass WeapBasePick.WeapBasePick_C
// 0x0000 (0x0B50 - 0x0B50)
class AWeapBasePick_C : public AShooterWeapon_Melee
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapBasePick.WeapBasePick_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapBasePick(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
