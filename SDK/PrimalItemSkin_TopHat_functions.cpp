
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

// Function PrimalItemSkin_TopHat.PrimalItemSkin_TopHat_C.ExecuteUbergraph_PrimalItemSkin_TopHat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_TopHat_C::ExecuteUbergraph_PrimalItemSkin_TopHat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TopHat.PrimalItemSkin_TopHat_C.ExecuteUbergraph_PrimalItemSkin_TopHat");

	UPrimalItemSkin_TopHat_C_ExecuteUbergraph_PrimalItemSkin_TopHat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
