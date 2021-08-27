
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

// Function PrimalItemConsumable_Seed_Stimberry.PrimalItemConsumable_Seed_Stimberry_C.ExecuteUbergraph_PrimalItemConsumable_Seed_Stimberry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Seed_Stimberry_C::ExecuteUbergraph_PrimalItemConsumable_Seed_Stimberry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Seed_Stimberry.PrimalItemConsumable_Seed_Stimberry_C.ExecuteUbergraph_PrimalItemConsumable_Seed_Stimberry");

	UPrimalItemConsumable_Seed_Stimberry_C_ExecuteUbergraph_PrimalItemConsumable_Seed_Stimberry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
