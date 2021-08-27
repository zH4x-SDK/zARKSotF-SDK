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

// BlueprintGeneratedClass PrimalGlobalsBlueprint.PrimalGlobalsBlueprint_C
// 0x0000 (0x0168 - 0x0168)
class UPrimalGlobalsBlueprint_C : public UPrimalGlobals
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalGlobalsBlueprint.PrimalGlobalsBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalGlobalsBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
