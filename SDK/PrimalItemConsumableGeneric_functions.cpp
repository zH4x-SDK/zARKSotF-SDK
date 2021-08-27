
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

// Function PrimalItemConsumableGeneric.PrimalItemConsumableGeneric_C.ExecuteUbergraph_PrimalItemConsumableGeneric
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumableGeneric_C::ExecuteUbergraph_PrimalItemConsumableGeneric(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumableGeneric.PrimalItemConsumableGeneric_C.ExecuteUbergraph_PrimalItemConsumableGeneric");

	UPrimalItemConsumableGeneric_C_ExecuteUbergraph_PrimalItemConsumableGeneric_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
