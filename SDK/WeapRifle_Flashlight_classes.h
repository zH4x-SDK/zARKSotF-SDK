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

// BlueprintGeneratedClass WeapRifle_Flashlight.WeapRifle_Flashlight_C
// 0x0030 (0x0BF8 - 0x0BC8)
class AWeapRifle_Flashlight_C : public AWeapRifle_C
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0BC8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapRifle_Flashlight.WeapRifle_Flashlight_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapRifle_Flashlight(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
