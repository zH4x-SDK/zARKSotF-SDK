
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

// Function PrimalItem_WeaponMachinedPistol.PrimalItem_WeaponMachinedPistol_C.ExecuteUbergraph_PrimalItem_WeaponMachinedPistol
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponMachinedPistol_C::ExecuteUbergraph_PrimalItem_WeaponMachinedPistol(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponMachinedPistol.PrimalItem_WeaponMachinedPistol_C.ExecuteUbergraph_PrimalItem_WeaponMachinedPistol");

	UPrimalItem_WeaponMachinedPistol_C_ExecuteUbergraph_PrimalItem_WeaponMachinedPistol_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
