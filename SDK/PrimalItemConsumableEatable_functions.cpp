
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

// Function PrimalItemConsumableEatable.PrimalItemConsumableEatable_C.ExecuteUbergraph_PrimalItemConsumableEatable
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumableEatable_C::ExecuteUbergraph_PrimalItemConsumableEatable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumableEatable.PrimalItemConsumableEatable_C.ExecuteUbergraph_PrimalItemConsumableEatable");

	UPrimalItemConsumableEatable_C_ExecuteUbergraph_PrimalItemConsumableEatable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
