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

// BlueprintGeneratedClass WeapGPS.WeapGPS_C
// 0x0008 (0x0DD0 - 0x0DC8)
class AWeapGPS_C : public APrimalWeaponGPS
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0DC8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapGPS.WeapGPS_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapGPS(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
