
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

// Function PrimalItem_RecipeNote_Dye.PrimalItem_RecipeNote_Dye_C.ExecuteUbergraph_PrimalItem_RecipeNote_Dye
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_RecipeNote_Dye_C::ExecuteUbergraph_PrimalItem_RecipeNote_Dye(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_RecipeNote_Dye.PrimalItem_RecipeNote_Dye_C.ExecuteUbergraph_PrimalItem_RecipeNote_Dye");

	UPrimalItem_RecipeNote_Dye_C_ExecuteUbergraph_PrimalItem_RecipeNote_Dye_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
