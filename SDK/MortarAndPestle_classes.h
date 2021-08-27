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

// BlueprintGeneratedClass MortarAndPestle.MortarAndPestle_C
// 0x0008 (0x0B98 - 0x0B90)
class AMortarAndPestle_C : public AStructureItemContainerBaseBP_C
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0B90(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MortarAndPestle.MortarAndPestle_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MortarAndPestle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
