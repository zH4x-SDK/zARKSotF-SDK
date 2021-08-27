
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

// Function PrimalItem_WeaponCompass.PrimalItem_WeaponCompass_C.ExecuteUbergraph_PrimalItem_WeaponCompass
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponCompass_C::ExecuteUbergraph_PrimalItem_WeaponCompass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponCompass.PrimalItem_WeaponCompass_C.ExecuteUbergraph_PrimalItem_WeaponCompass");

	UPrimalItem_WeaponCompass_C_ExecuteUbergraph_PrimalItem_WeaponCompass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
