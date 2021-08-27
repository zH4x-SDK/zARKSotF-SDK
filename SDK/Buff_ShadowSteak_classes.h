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

// BlueprintGeneratedClass Buff_ShadowSteak.Buff_ShadowSteak_C
// 0x0000 (0x06C0 - 0x06C0)
class ABuff_ShadowSteak_C : public ABuff_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ShadowSteak.Buff_ShadowSteak_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ShadowSteak(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
