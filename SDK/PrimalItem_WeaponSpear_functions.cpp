
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

// Function PrimalItem_WeaponSpear.PrimalItem_WeaponSpear_C.ExecuteUbergraph_PrimalItem_WeaponSpear
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponSpear_C::ExecuteUbergraph_PrimalItem_WeaponSpear(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponSpear.PrimalItem_WeaponSpear_C.ExecuteUbergraph_PrimalItem_WeaponSpear");

	UPrimalItem_WeaponSpear_C_ExecuteUbergraph_PrimalItem_WeaponSpear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
