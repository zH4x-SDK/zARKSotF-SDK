
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

// Function PrimalItemConsumable_Egg_Sarco.PrimalItemConsumable_Egg_Sarco_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Sarco
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_Sarco_C::ExecuteUbergraph_PrimalItemConsumable_Egg_Sarco(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_Sarco.PrimalItemConsumable_Egg_Sarco_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Sarco");

	UPrimalItemConsumable_Egg_Sarco_C_ExecuteUbergraph_PrimalItemConsumable_Egg_Sarco_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
