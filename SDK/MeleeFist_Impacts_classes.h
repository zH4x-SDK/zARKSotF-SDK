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

// BlueprintGeneratedClass MeleeFist_Impacts.MeleeFist_Impacts_C
// 0x0008 (0x0738 - 0x0730)
class AMeleeFist_Impacts_C : public AShooterImpactEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0730(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MeleeFist_Impacts.MeleeFist_Impacts_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MeleeFist_Impacts(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif