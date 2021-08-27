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

// AnimBlueprintGeneratedClass DragonAnimBlueprint.DragonAnimBlueprint_C
// 0x0000 (0x11C4 - 0x11C4)
class UDragonAnimBlueprint_C : public UDinoBlueprintBase_RootTransformIK_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass DragonAnimBlueprint.DragonAnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_DragonAnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
