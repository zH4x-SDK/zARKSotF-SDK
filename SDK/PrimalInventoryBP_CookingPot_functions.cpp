
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

// Function PrimalInventoryBP_CookingPot.PrimalInventoryBP_CookingPot_C.ExecuteUbergraph_PrimalInventoryBP_CookingPot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_CookingPot_C::ExecuteUbergraph_PrimalInventoryBP_CookingPot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_CookingPot.PrimalInventoryBP_CookingPot_C.ExecuteUbergraph_PrimalInventoryBP_CookingPot");

	UPrimalInventoryBP_CookingPot_C_ExecuteUbergraph_PrimalInventoryBP_CookingPot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
