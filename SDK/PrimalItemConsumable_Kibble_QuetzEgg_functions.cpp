
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

// Function PrimalItemConsumable_Kibble_QuetzEgg.PrimalItemConsumable_Kibble_QuetzEgg_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_QuetzEgg
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Kibble_QuetzEgg_C::ExecuteUbergraph_PrimalItemConsumable_Kibble_QuetzEgg(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Kibble_QuetzEgg.PrimalItemConsumable_Kibble_QuetzEgg_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_QuetzEgg");

	UPrimalItemConsumable_Kibble_QuetzEgg_C_ExecuteUbergraph_PrimalItemConsumable_Kibble_QuetzEgg_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
