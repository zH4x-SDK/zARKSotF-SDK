
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

// Function PrimalItemConsumable_WaterskinRefill.PrimalItemConsumable_WaterskinRefill_C.ExecuteUbergraph_PrimalItemConsumable_WaterskinRefill
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_WaterskinRefill_C::ExecuteUbergraph_PrimalItemConsumable_WaterskinRefill(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_WaterskinRefill.PrimalItemConsumable_WaterskinRefill_C.ExecuteUbergraph_PrimalItemConsumable_WaterskinRefill");

	UPrimalItemConsumable_WaterskinRefill_C_ExecuteUbergraph_PrimalItemConsumable_WaterskinRefill_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
