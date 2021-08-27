
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

// Function PrimalItemConsumable_CanteenCraftable.PrimalItemConsumable_CanteenCraftable_C.ExecuteUbergraph_PrimalItemConsumable_CanteenCraftable
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_CanteenCraftable_C::ExecuteUbergraph_PrimalItemConsumable_CanteenCraftable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_CanteenCraftable.PrimalItemConsumable_CanteenCraftable_C.ExecuteUbergraph_PrimalItemConsumable_CanteenCraftable");

	UPrimalItemConsumable_CanteenCraftable_C_ExecuteUbergraph_PrimalItemConsumable_CanteenCraftable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
