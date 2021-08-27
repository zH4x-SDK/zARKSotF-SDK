
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

// Function PrimalItemWeaponGeneric.PrimalItemWeaponGeneric_C.ExecuteUbergraph_PrimalItemWeaponGeneric
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemWeaponGeneric_C::ExecuteUbergraph_PrimalItemWeaponGeneric(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemWeaponGeneric.PrimalItemWeaponGeneric_C.ExecuteUbergraph_PrimalItemWeaponGeneric");

	UPrimalItemWeaponGeneric_C_ExecuteUbergraph_PrimalItemWeaponGeneric_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
