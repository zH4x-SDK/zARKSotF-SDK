
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

// Function PrimalItem_WeaponC4.PrimalItem_WeaponC4_C.ExecuteUbergraph_PrimalItem_WeaponC4
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponC4_C::ExecuteUbergraph_PrimalItem_WeaponC4(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponC4.PrimalItem_WeaponC4_C.ExecuteUbergraph_PrimalItem_WeaponC4");

	UPrimalItem_WeaponC4_C_ExecuteUbergraph_PrimalItem_WeaponC4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
