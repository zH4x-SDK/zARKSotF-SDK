
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

// Function SpyglassWeaponAnimBP.SpyglassWeaponAnimBP_C.ExecuteUbergraph_SpyglassWeaponAnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USpyglassWeaponAnimBP_C::ExecuteUbergraph_SpyglassWeaponAnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpyglassWeaponAnimBP.SpyglassWeaponAnimBP_C.ExecuteUbergraph_SpyglassWeaponAnimBP");

	USpyglassWeaponAnimBP_C_ExecuteUbergraph_SpyglassWeaponAnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
