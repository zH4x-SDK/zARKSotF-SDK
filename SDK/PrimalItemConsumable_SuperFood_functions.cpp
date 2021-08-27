
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

// Function PrimalItemConsumable_SuperFood.PrimalItemConsumable_SuperFood_C.ExecuteUbergraph_PrimalItemConsumable_SuperFood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_SuperFood_C::ExecuteUbergraph_PrimalItemConsumable_SuperFood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_SuperFood.PrimalItemConsumable_SuperFood_C.ExecuteUbergraph_PrimalItemConsumable_SuperFood");

	UPrimalItemConsumable_SuperFood_C_ExecuteUbergraph_PrimalItemConsumable_SuperFood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
