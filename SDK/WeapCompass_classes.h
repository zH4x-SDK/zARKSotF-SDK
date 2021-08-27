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

// BlueprintGeneratedClass WeapCompass.WeapCompass_C
// 0x0000 (0x0DD0 - 0x0DD0)
class AWeapCompass_C : public AWeapGPS_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapCompass.WeapCompass_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapCompass(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
