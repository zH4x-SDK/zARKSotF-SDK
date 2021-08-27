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

// BlueprintGeneratedClass FenceFoundation_Base_New.FenceFoundation_Base_New_C
// 0x0000 (0x0928 - 0x0928)
class AFenceFoundation_Base_New_C : public AStructureBaseBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FenceFoundation_Base_New.FenceFoundation_Base_New_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_FenceFoundation_Base_New(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
