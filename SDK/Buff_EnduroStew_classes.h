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

// BlueprintGeneratedClass Buff_EnduroStew.Buff_EnduroStew_C
// 0x0000 (0x06C0 - 0x06C0)
class ABuff_EnduroStew_C : public ABuff_Base_DamageStew_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_EnduroStew.Buff_EnduroStew_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_EnduroStew(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
