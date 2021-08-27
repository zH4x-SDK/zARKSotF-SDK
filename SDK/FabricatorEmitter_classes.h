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

// BlueprintGeneratedClass FabricatorEmitter.FabricatorEmitter_C
// 0x0000 (0x04D0 - 0x04D0)
class AFabricatorEmitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FabricatorEmitter.FabricatorEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_FabricatorEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
