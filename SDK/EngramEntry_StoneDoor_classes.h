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

// BlueprintGeneratedClass EngramEntry_StoneDoor.EngramEntry_StoneDoor_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_StoneDoor_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_StoneDoor.EngramEntry_StoneDoor_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_StoneDoor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
