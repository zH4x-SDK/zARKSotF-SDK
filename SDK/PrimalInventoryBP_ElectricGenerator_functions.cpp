
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

// Function PrimalInventoryBP_ElectricGenerator.PrimalInventoryBP_ElectricGenerator_C.ExecuteUbergraph_PrimalInventoryBP_ElectricGenerator
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_ElectricGenerator_C::ExecuteUbergraph_PrimalInventoryBP_ElectricGenerator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_ElectricGenerator.PrimalInventoryBP_ElectricGenerator_C.ExecuteUbergraph_PrimalInventoryBP_ElectricGenerator");

	UPrimalInventoryBP_ElectricGenerator_C_ExecuteUbergraph_PrimalInventoryBP_ElectricGenerator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
