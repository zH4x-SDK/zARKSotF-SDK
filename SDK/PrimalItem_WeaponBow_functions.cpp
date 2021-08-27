
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

// Function PrimalItem_WeaponBow.PrimalItem_WeaponBow_C.ExecuteUbergraph_PrimalItem_WeaponBow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponBow_C::ExecuteUbergraph_PrimalItem_WeaponBow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponBow.PrimalItem_WeaponBow_C.ExecuteUbergraph_PrimalItem_WeaponBow");

	UPrimalItem_WeaponBow_C_ExecuteUbergraph_PrimalItem_WeaponBow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
