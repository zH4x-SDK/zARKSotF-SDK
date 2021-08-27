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

// BlueprintGeneratedClass WeapMachinedPistol_Laser1.WeapMachinedPistol_Laser1_C
// 0x0020 (0x0BE8 - 0x0BC8)
class AWeapMachinedPistol_Laser1_C : public AWeapMachinedPistol_C
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0BC8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapMachinedPistol_Laser1.WeapMachinedPistol_Laser1_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapMachinedPistol_Laser1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
