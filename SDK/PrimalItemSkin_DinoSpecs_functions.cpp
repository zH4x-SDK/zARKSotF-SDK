
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

// Function PrimalItemSkin_DinoSpecs.PrimalItemSkin_DinoSpecs_C.ExecuteUbergraph_PrimalItemSkin_DinoSpecs
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_DinoSpecs_C::ExecuteUbergraph_PrimalItemSkin_DinoSpecs(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_DinoSpecs.PrimalItemSkin_DinoSpecs_C.ExecuteUbergraph_PrimalItemSkin_DinoSpecs");

	UPrimalItemSkin_DinoSpecs_C_ExecuteUbergraph_PrimalItemSkin_DinoSpecs_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
