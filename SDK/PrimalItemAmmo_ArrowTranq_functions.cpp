
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

// Function PrimalItemAmmo_ArrowTranq.PrimalItemAmmo_ArrowTranq_C.ExecuteUbergraph_PrimalItemAmmo_ArrowTranq
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemAmmo_ArrowTranq_C::ExecuteUbergraph_PrimalItemAmmo_ArrowTranq(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_ArrowTranq.PrimalItemAmmo_ArrowTranq_C.ExecuteUbergraph_PrimalItemAmmo_ArrowTranq");

	UPrimalItemAmmo_ArrowTranq_C_ExecuteUbergraph_PrimalItemAmmo_ArrowTranq_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
