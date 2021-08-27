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

// BlueprintGeneratedClass StructurePlacerBlueprint.StructurePlacerBlueprint_C
// 0x0008 (0x04B0 - 0x04A8)
class AStructurePlacerBlueprint_C : public APrimalStructurePlacer
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructurePlacerBlueprint.StructurePlacerBlueprint_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_StructurePlacerBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
