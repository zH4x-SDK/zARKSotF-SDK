
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

// Function PrimalItemConsumable_Kibble_AnkyloEgg.PrimalItemConsumable_Kibble_AnkyloEgg_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_AnkyloEgg
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Kibble_AnkyloEgg_C::ExecuteUbergraph_PrimalItemConsumable_Kibble_AnkyloEgg(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Kibble_AnkyloEgg.PrimalItemConsumable_Kibble_AnkyloEgg_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_AnkyloEgg");

	UPrimalItemConsumable_Kibble_AnkyloEgg_C_ExecuteUbergraph_PrimalItemConsumable_Kibble_AnkyloEgg_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
