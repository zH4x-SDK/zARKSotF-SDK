
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

// Function PrimalItem_WeaponBasePick.PrimalItem_WeaponBasePick_C.ExecuteUbergraph_PrimalItem_WeaponBasePick
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponBasePick_C::ExecuteUbergraph_PrimalItem_WeaponBasePick(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponBasePick.PrimalItem_WeaponBasePick_C.ExecuteUbergraph_PrimalItem_WeaponBasePick");

	UPrimalItem_WeaponBasePick_C_ExecuteUbergraph_PrimalItem_WeaponBasePick_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
