
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

// Function PrimalItem_WeaponSlingshot.PrimalItem_WeaponSlingshot_C.ExecuteUbergraph_PrimalItem_WeaponSlingshot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponSlingshot_C::ExecuteUbergraph_PrimalItem_WeaponSlingshot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponSlingshot.PrimalItem_WeaponSlingshot_C.ExecuteUbergraph_PrimalItem_WeaponSlingshot");

	UPrimalItem_WeaponSlingshot_C_ExecuteUbergraph_PrimalItem_WeaponSlingshot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
