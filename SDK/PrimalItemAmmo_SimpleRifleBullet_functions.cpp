
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

// Function PrimalItemAmmo_SimpleRifleBullet.PrimalItemAmmo_SimpleRifleBullet_C.ExecuteUbergraph_PrimalItemAmmo_SimpleRifleBullet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemAmmo_SimpleRifleBullet_C::ExecuteUbergraph_PrimalItemAmmo_SimpleRifleBullet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_SimpleRifleBullet.PrimalItemAmmo_SimpleRifleBullet_C.ExecuteUbergraph_PrimalItemAmmo_SimpleRifleBullet");

	UPrimalItemAmmo_SimpleRifleBullet_C_ExecuteUbergraph_PrimalItemAmmo_SimpleRifleBullet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
