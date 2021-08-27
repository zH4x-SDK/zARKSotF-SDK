
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

// Function PrimalItemSkin_SotFHelmet4.PrimalItemSkin_SotFHelmet4_C.ExecuteUbergraph_PrimalItemSkin_SotFHelmet4
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_SotFHelmet4_C::ExecuteUbergraph_PrimalItemSkin_SotFHelmet4(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_SotFHelmet4.PrimalItemSkin_SotFHelmet4_C.ExecuteUbergraph_PrimalItemSkin_SotFHelmet4");

	UPrimalItemSkin_SotFHelmet4_C_ExecuteUbergraph_PrimalItemSkin_SotFHelmet4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
