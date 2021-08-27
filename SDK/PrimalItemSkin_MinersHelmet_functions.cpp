
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

// Function PrimalItemSkin_MinersHelmet.PrimalItemSkin_MinersHelmet_C.ExecuteUbergraph_PrimalItemSkin_MinersHelmet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_MinersHelmet_C::ExecuteUbergraph_PrimalItemSkin_MinersHelmet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_MinersHelmet.PrimalItemSkin_MinersHelmet_C.ExecuteUbergraph_PrimalItemSkin_MinersHelmet");

	UPrimalItemSkin_MinersHelmet_C_ExecuteUbergraph_PrimalItemSkin_MinersHelmet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
