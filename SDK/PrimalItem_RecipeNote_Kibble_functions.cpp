
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

// Function PrimalItem_RecipeNote_Kibble.PrimalItem_RecipeNote_Kibble_C.ExecuteUbergraph_PrimalItem_RecipeNote_Kibble
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_RecipeNote_Kibble_C::ExecuteUbergraph_PrimalItem_RecipeNote_Kibble(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_RecipeNote_Kibble.PrimalItem_RecipeNote_Kibble_C.ExecuteUbergraph_PrimalItem_RecipeNote_Kibble");

	UPrimalItem_RecipeNote_Kibble_C_ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
