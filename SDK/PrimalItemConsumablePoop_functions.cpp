
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

// Function PrimalItemConsumablePoop.PrimalItemConsumablePoop_C.ExecuteUbergraph_PrimalItemConsumablePoop
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumablePoop_C::ExecuteUbergraph_PrimalItemConsumablePoop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumablePoop.PrimalItemConsumablePoop_C.ExecuteUbergraph_PrimalItemConsumablePoop");

	UPrimalItemConsumablePoop_C_ExecuteUbergraph_PrimalItemConsumablePoop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
