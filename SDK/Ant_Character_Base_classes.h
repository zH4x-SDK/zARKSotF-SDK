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

// BlueprintGeneratedClass Ant_Character_Base.Ant_Character_Base_C
// 0x0000 (0x1AA8 - 0x1AA8)
class AAnt_Character_Base_C : public AInsect_Character_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ant_Character_Base.Ant_Character_Base_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Ant_Character_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
