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

// BlueprintGeneratedClass EngramEntry_StonePillar.EngramEntry_StonePillar_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_StonePillar_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_StonePillar.EngramEntry_StonePillar_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_StonePillar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
