
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

// Function PrimalItemWeaponGenericNoStats.PrimalItemWeaponGenericNoStats_C.ExecuteUbergraph_PrimalItemWeaponGenericNoStats
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemWeaponGenericNoStats_C::ExecuteUbergraph_PrimalItemWeaponGenericNoStats(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemWeaponGenericNoStats.PrimalItemWeaponGenericNoStats_C.ExecuteUbergraph_PrimalItemWeaponGenericNoStats");

	UPrimalItemWeaponGenericNoStats_C_ExecuteUbergraph_PrimalItemWeaponGenericNoStats_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
