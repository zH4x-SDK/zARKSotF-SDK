
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

// Function PrimalItemConsumable_Narcotic.PrimalItemConsumable_Narcotic_C.ExecuteUbergraph_PrimalItemConsumable_Narcotic
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Narcotic_C::ExecuteUbergraph_PrimalItemConsumable_Narcotic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Narcotic.PrimalItemConsumable_Narcotic_C.ExecuteUbergraph_PrimalItemConsumable_Narcotic");

	UPrimalItemConsumable_Narcotic_C_ExecuteUbergraph_PrimalItemConsumable_Narcotic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
