
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

// Function PrimalItemConsumable_Seed_Tintoberry.PrimalItemConsumable_Seed_Tintoberry_C.ExecuteUbergraph_PrimalItemConsumable_Seed_Tintoberry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Seed_Tintoberry_C::ExecuteUbergraph_PrimalItemConsumable_Seed_Tintoberry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Seed_Tintoberry.PrimalItemConsumable_Seed_Tintoberry_C.ExecuteUbergraph_PrimalItemConsumable_Seed_Tintoberry");

	UPrimalItemConsumable_Seed_Tintoberry_C_ExecuteUbergraph_PrimalItemConsumable_Seed_Tintoberry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
