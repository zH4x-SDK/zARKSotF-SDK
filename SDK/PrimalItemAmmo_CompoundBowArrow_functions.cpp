
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

// Function PrimalItemAmmo_CompoundBowArrow.PrimalItemAmmo_CompoundBowArrow_C.ExecuteUbergraph_PrimalItemAmmo_CompoundBowArrow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemAmmo_CompoundBowArrow_C::ExecuteUbergraph_PrimalItemAmmo_CompoundBowArrow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_CompoundBowArrow.PrimalItemAmmo_CompoundBowArrow_C.ExecuteUbergraph_PrimalItemAmmo_CompoundBowArrow");

	UPrimalItemAmmo_CompoundBowArrow_C_ExecuteUbergraph_PrimalItemAmmo_CompoundBowArrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
