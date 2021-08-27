
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

// Function PrimalItemSkin_SotFHelmet5.PrimalItemSkin_SotFHelmet5_C.ExecuteUbergraph_PrimalItemSkin_SotFHelmet5
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_SotFHelmet5_C::ExecuteUbergraph_PrimalItemSkin_SotFHelmet5(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_SotFHelmet5.PrimalItemSkin_SotFHelmet5_C.ExecuteUbergraph_PrimalItemSkin_SotFHelmet5");

	UPrimalItemSkin_SotFHelmet5_C_ExecuteUbergraph_PrimalItemSkin_SotFHelmet5_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
