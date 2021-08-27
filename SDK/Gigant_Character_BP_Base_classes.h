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

// BlueprintGeneratedClass Gigant_Character_BP_Base.Gigant_Character_BP_Base_C
// 0x0008 (0x1AB0 - 0x1AA8)
class AGigant_Character_BP_Base_C : public ADino_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x1AA8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gigant_Character_BP_Base.Gigant_Character_BP_Base_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Gigant_Character_BP_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
