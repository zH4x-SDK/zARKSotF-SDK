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

// BlueprintGeneratedClass ProjFlare.ProjFlare_C
// 0x0010 (0x0608 - 0x05F8)
class AProjFlare_C : public APrimalProjectileFlare
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x05F8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjFlare.ProjFlare_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjFlare(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
