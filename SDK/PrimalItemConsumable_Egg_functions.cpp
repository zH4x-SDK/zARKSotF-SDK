
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

// Function PrimalItemConsumable_Egg.PrimalItemConsumable_Egg_C.ExecuteUbergraph_PrimalItemConsumable_Egg
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_C::ExecuteUbergraph_PrimalItemConsumable_Egg(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg.PrimalItemConsumable_Egg_C.ExecuteUbergraph_PrimalItemConsumable_Egg");

	UPrimalItemConsumable_Egg_C_ExecuteUbergraph_PrimalItemConsumable_Egg_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
