
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

// Function PrimalItemAmmo_ArrowBase.PrimalItemAmmo_ArrowBase_C.ExecuteUbergraph_PrimalItemAmmo_ArrowBase
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemAmmo_ArrowBase_C::ExecuteUbergraph_PrimalItemAmmo_ArrowBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_ArrowBase.PrimalItemAmmo_ArrowBase_C.ExecuteUbergraph_PrimalItemAmmo_ArrowBase");

	UPrimalItemAmmo_ArrowBase_C_ExecuteUbergraph_PrimalItemAmmo_ArrowBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
