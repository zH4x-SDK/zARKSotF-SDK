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

// BlueprintGeneratedClass EngramEntry_MetalDoor.EngramEntry_MetalDoor_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_MetalDoor_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_MetalDoor.EngramEntry_MetalDoor_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_MetalDoor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
