
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

// Function PrimalItemConsumable_Veggie_Longrass.PrimalItemConsumable_Veggie_Longrass_C.ExecuteUbergraph_PrimalItemConsumable_Veggie_Longrass
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Veggie_Longrass_C::ExecuteUbergraph_PrimalItemConsumable_Veggie_Longrass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Veggie_Longrass.PrimalItemConsumable_Veggie_Longrass_C.ExecuteUbergraph_PrimalItemConsumable_Veggie_Longrass");

	UPrimalItemConsumable_Veggie_Longrass_C_ExecuteUbergraph_PrimalItemConsumable_Veggie_Longrass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
