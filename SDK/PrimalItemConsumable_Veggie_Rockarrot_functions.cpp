
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

// Function PrimalItemConsumable_Veggie_Rockarrot.PrimalItemConsumable_Veggie_Rockarrot_C.ExecuteUbergraph_PrimalItemConsumable_Veggie_Rockarrot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Veggie_Rockarrot_C::ExecuteUbergraph_PrimalItemConsumable_Veggie_Rockarrot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Veggie_Rockarrot.PrimalItemConsumable_Veggie_Rockarrot_C.ExecuteUbergraph_PrimalItemConsumable_Veggie_Rockarrot");

	UPrimalItemConsumable_Veggie_Rockarrot_C_ExecuteUbergraph_PrimalItemConsumable_Veggie_Rockarrot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
