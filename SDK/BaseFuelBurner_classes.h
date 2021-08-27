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

// BlueprintGeneratedClass BaseFuelBurner.BaseFuelBurner_C
// 0x0000 (0x0B90 - 0x0B90)
class ABaseFuelBurner_C : public AStructureItemContainerBaseBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BaseFuelBurner.BaseFuelBurner_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BaseFuelBurner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
