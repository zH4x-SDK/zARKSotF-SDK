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

// BlueprintGeneratedClass Spider_AIController.Spider_AIController_C
// 0x0000 (0x0871 - 0x0871)
class ASpider_AIController_C : public ADino_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Spider_AIController.Spider_AIController_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Spider_AIController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
