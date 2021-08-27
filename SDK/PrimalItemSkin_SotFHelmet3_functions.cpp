
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

// Function PrimalItemSkin_SotFHelmet3.PrimalItemSkin_SotFHelmet3_C.ExecuteUbergraph_PrimalItemSkin_SotFHelmet3
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_SotFHelmet3_C::ExecuteUbergraph_PrimalItemSkin_SotFHelmet3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_SotFHelmet3.PrimalItemSkin_SotFHelmet3_C.ExecuteUbergraph_PrimalItemSkin_SotFHelmet3");

	UPrimalItemSkin_SotFHelmet3_C_ExecuteUbergraph_PrimalItemSkin_SotFHelmet3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
