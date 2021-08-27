
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

// Function PrimalItem_WeaponMetalHatchet.PrimalItem_WeaponMetalHatchet_C.ExecuteUbergraph_PrimalItem_WeaponMetalHatchet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponMetalHatchet_C::ExecuteUbergraph_PrimalItem_WeaponMetalHatchet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponMetalHatchet.PrimalItem_WeaponMetalHatchet_C.ExecuteUbergraph_PrimalItem_WeaponMetalHatchet");

	UPrimalItem_WeaponMetalHatchet_C_ExecuteUbergraph_PrimalItem_WeaponMetalHatchet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
