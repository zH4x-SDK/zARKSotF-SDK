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

// BlueprintGeneratedClass EngramEntry_WoodPillar.EngramEntry_WoodPillar_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_WoodPillar_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_WoodPillar.EngramEntry_WoodPillar_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_WoodPillar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
