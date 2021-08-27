
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

// Function PrimalItemConsumableSeed.PrimalItemConsumableSeed_C.ExecuteUbergraph_PrimalItemConsumableSeed
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumableSeed_C::ExecuteUbergraph_PrimalItemConsumableSeed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumableSeed.PrimalItemConsumableSeed_C.ExecuteUbergraph_PrimalItemConsumableSeed");

	UPrimalItemConsumableSeed_C_ExecuteUbergraph_PrimalItemConsumableSeed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
