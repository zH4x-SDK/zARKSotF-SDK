
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

// Function PrimalItemSkin_DinoSantaHat.PrimalItemSkin_DinoSantaHat_C.ExecuteUbergraph_PrimalItemSkin_DinoSantaHat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_DinoSantaHat_C::ExecuteUbergraph_PrimalItemSkin_DinoSantaHat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_DinoSantaHat.PrimalItemSkin_DinoSantaHat_C.ExecuteUbergraph_PrimalItemSkin_DinoSantaHat");

	UPrimalItemSkin_DinoSantaHat_C_ExecuteUbergraph_PrimalItemSkin_DinoSantaHat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
