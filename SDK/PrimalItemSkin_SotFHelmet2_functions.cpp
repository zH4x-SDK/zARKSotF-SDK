
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

// Function PrimalItemSkin_SotFHelmet2.PrimalItemSkin_SotFHelmet2_C.ExecuteUbergraph_PrimalItemSkin_SotFHelmet2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_SotFHelmet2_C::ExecuteUbergraph_PrimalItemSkin_SotFHelmet2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_SotFHelmet2.PrimalItemSkin_SotFHelmet2_C.ExecuteUbergraph_PrimalItemSkin_SotFHelmet2");

	UPrimalItemSkin_SotFHelmet2_C_ExecuteUbergraph_PrimalItemSkin_SotFHelmet2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
