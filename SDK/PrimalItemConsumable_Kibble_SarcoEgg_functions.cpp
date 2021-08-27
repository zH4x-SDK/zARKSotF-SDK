
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

// Function PrimalItemConsumable_Kibble_SarcoEgg.PrimalItemConsumable_Kibble_SarcoEgg_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_SarcoEgg
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Kibble_SarcoEgg_C::ExecuteUbergraph_PrimalItemConsumable_Kibble_SarcoEgg(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Kibble_SarcoEgg.PrimalItemConsumable_Kibble_SarcoEgg_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_SarcoEgg");

	UPrimalItemConsumable_Kibble_SarcoEgg_C_ExecuteUbergraph_PrimalItemConsumable_Kibble_SarcoEgg_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
