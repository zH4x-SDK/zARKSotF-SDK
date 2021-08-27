
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

// Function PrimalItemCostume_GigaBionic.PrimalItemCostume_GigaBionic_C.ExecuteUbergraph_PrimalItemCostume_GigaBionic
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCostume_GigaBionic_C::ExecuteUbergraph_PrimalItemCostume_GigaBionic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_GigaBionic.PrimalItemCostume_GigaBionic_C.ExecuteUbergraph_PrimalItemCostume_GigaBionic");

	UPrimalItemCostume_GigaBionic_C_ExecuteUbergraph_PrimalItemCostume_GigaBionic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
