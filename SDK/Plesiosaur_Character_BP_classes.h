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

// BlueprintGeneratedClass Plesiosaur_Character_BP.Plesiosaur_Character_BP_C
// 0x0008 (0x1AB0 - 0x1AA8)
class APlesiosaur_Character_BP_C : public ADino_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x1AA8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Plesiosaur_Character_BP.Plesiosaur_Character_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Plesiosaur_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
