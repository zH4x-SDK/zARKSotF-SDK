
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

// Function PrimalItemConsumable_HumanPoop.PrimalItemConsumable_HumanPoop_C.ExecuteUbergraph_PrimalItemConsumable_HumanPoop
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_HumanPoop_C::ExecuteUbergraph_PrimalItemConsumable_HumanPoop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_HumanPoop.PrimalItemConsumable_HumanPoop_C.ExecuteUbergraph_PrimalItemConsumable_HumanPoop");

	UPrimalItemConsumable_HumanPoop_C_ExecuteUbergraph_PrimalItemConsumable_HumanPoop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
