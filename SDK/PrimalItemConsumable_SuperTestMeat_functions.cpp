
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

// Function PrimalItemConsumable_SuperTestMeat.PrimalItemConsumable_SuperTestMeat_C.ExecuteUbergraph_PrimalItemConsumable_SuperTestMeat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_SuperTestMeat_C::ExecuteUbergraph_PrimalItemConsumable_SuperTestMeat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_SuperTestMeat.PrimalItemConsumable_SuperTestMeat_C.ExecuteUbergraph_PrimalItemConsumable_SuperTestMeat");

	UPrimalItemConsumable_SuperTestMeat_C_ExecuteUbergraph_PrimalItemConsumable_SuperTestMeat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
