
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

// Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.ExecuteUbergraph_PrimalItem_WeaponSpyglass
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponSpyglass_C::ExecuteUbergraph_PrimalItem_WeaponSpyglass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.ExecuteUbergraph_PrimalItem_WeaponSpyglass");

	UPrimalItem_WeaponSpyglass_C_ExecuteUbergraph_PrimalItem_WeaponSpyglass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
