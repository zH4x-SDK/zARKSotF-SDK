
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

// Function PrimalItemConsumable_Seed_Test.PrimalItemConsumable_Seed_Test_C.ExecuteUbergraph_PrimalItemConsumable_Seed_Test
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Seed_Test_C::ExecuteUbergraph_PrimalItemConsumable_Seed_Test(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Seed_Test.PrimalItemConsumable_Seed_Test_C.ExecuteUbergraph_PrimalItemConsumable_Seed_Test");

	UPrimalItemConsumable_Seed_Test_C_ExecuteUbergraph_PrimalItemConsumable_Seed_Test_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
