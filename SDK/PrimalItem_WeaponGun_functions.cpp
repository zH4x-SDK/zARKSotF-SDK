
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

// Function PrimalItem_WeaponGun.PrimalItem_WeaponGun_C.ExecuteUbergraph_PrimalItem_WeaponGun
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponGun_C::ExecuteUbergraph_PrimalItem_WeaponGun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponGun.PrimalItem_WeaponGun_C.ExecuteUbergraph_PrimalItem_WeaponGun");

	UPrimalItem_WeaponGun_C_ExecuteUbergraph_PrimalItem_WeaponGun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
