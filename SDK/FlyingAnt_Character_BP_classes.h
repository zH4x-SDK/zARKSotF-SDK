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

// BlueprintGeneratedClass FlyingAnt_Character_BP.FlyingAnt_Character_BP_C
// 0x0010 (0x1AB8 - 0x1AA8)
class AFlyingAnt_Character_BP_C : public AAnt_Character_Base_C
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x1AA8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FlyingAnt_Character_BP.FlyingAnt_Character_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_FlyingAnt_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
