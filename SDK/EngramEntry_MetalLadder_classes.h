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

// BlueprintGeneratedClass EngramEntry_MetalLadder.EngramEntry_MetalLadder_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_MetalLadder_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_MetalLadder.EngramEntry_MetalLadder_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_MetalLadder(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
