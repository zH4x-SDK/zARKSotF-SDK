
#include "../SDK.h"

// Name: ARKSotF, Version: 178.8.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function PrimalItem_RecipeNote_Base.PrimalItem_RecipeNote_Base_C.ExecuteUbergraph_PrimalItem_RecipeNote_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_RecipeNote_Base_C::ExecuteUbergraph_PrimalItem_RecipeNote_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_RecipeNote_Base.PrimalItem_RecipeNote_Base_C.ExecuteUbergraph_PrimalItem_RecipeNote_Base");

	UPrimalItem_RecipeNote_Base_C_ExecuteUbergraph_PrimalItem_RecipeNote_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
