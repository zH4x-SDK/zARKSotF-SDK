
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

// Function PrimalItemConsumable_WaterskinCraftable.PrimalItemConsumable_WaterskinCraftable_C.ExecuteUbergraph_PrimalItemConsumable_WaterskinCraftable
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_WaterskinCraftable_C::ExecuteUbergraph_PrimalItemConsumable_WaterskinCraftable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_WaterskinCraftable.PrimalItemConsumable_WaterskinCraftable_C.ExecuteUbergraph_PrimalItemConsumable_WaterskinCraftable");

	UPrimalItemConsumable_WaterskinCraftable_C_ExecuteUbergraph_PrimalItemConsumable_WaterskinCraftable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
