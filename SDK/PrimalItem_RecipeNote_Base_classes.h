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

// BlueprintGeneratedClass PrimalItem_RecipeNote_Base.PrimalItem_RecipeNote_Base_C
// 0x0000 (0x07B0 - 0x07B0)
class UPrimalItem_RecipeNote_Base_C : public UPrimalItem_Note_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_RecipeNote_Base.PrimalItem_RecipeNote_Base_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_RecipeNote_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
