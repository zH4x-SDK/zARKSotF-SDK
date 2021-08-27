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

// BlueprintGeneratedClass ProjArrow_Compound.ProjArrow_Compound_C
// 0x0000 (0x05E8 - 0x05E8)
class AProjArrow_Compound_C : public APrimalProjectileArrow
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjArrow_Compound.ProjArrow_Compound_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjArrow_Compound(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
