
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

// Function PrimalItemConsumable_Berry_Azulberry.PrimalItemConsumable_Berry_Azulberry_C.ExecuteUbergraph_PrimalItemConsumable_Berry_Azulberry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Berry_Azulberry_C::ExecuteUbergraph_PrimalItemConsumable_Berry_Azulberry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Berry_Azulberry.PrimalItemConsumable_Berry_Azulberry_C.ExecuteUbergraph_PrimalItemConsumable_Berry_Azulberry");

	UPrimalItemConsumable_Berry_Azulberry_C_ExecuteUbergraph_PrimalItemConsumable_Berry_Azulberry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
