
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

// Function PrimalItemConsumable_WaterJarCraftable.PrimalItemConsumable_WaterJarCraftable_C.ExecuteUbergraph_PrimalItemConsumable_WaterJarCraftable
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_WaterJarCraftable_C::ExecuteUbergraph_PrimalItemConsumable_WaterJarCraftable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_WaterJarCraftable.PrimalItemConsumable_WaterJarCraftable_C.ExecuteUbergraph_PrimalItemConsumable_WaterJarCraftable");

	UPrimalItemConsumable_WaterJarCraftable_C_ExecuteUbergraph_PrimalItemConsumable_WaterJarCraftable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
