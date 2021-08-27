
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

// Function PrimalItemC4Ammo.PrimalItemC4Ammo_C.ExecuteUbergraph_PrimalItemC4Ammo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemC4Ammo_C::ExecuteUbergraph_PrimalItemC4Ammo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemC4Ammo.PrimalItemC4Ammo_C.ExecuteUbergraph_PrimalItemC4Ammo");

	UPrimalItemC4Ammo_C_ExecuteUbergraph_PrimalItemC4Ammo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
