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

// BlueprintGeneratedClass WeapTripWireC4.WeapTripWireC4_C
// 0x0000 (0x0BD8 - 0x0BD8)
class AWeapTripWireC4_C : public AShooterWeapon_Placer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapTripWireC4.WeapTripWireC4_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapTripWireC4(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
