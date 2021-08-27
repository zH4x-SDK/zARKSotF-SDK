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

// BlueprintGeneratedClass ProjSpiderAcid.ProjSpiderAcid_C
// 0x0008 (0x05D8 - 0x05D0)
class AProjSpiderAcid_C : public APrimalProjectileSpiderAcid
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x05D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjSpiderAcid.ProjSpiderAcid_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjSpiderAcid(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
