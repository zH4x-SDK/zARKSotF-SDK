
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

// Function PrimalItemDye_Slate.PrimalItemDye_Slate_C.ExecuteUbergraph_PrimalItemDye_Slate
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemDye_Slate_C::ExecuteUbergraph_PrimalItemDye_Slate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemDye_Slate.PrimalItemDye_Slate_C.ExecuteUbergraph_PrimalItemDye_Slate");

	UPrimalItemDye_Slate_C_ExecuteUbergraph_PrimalItemDye_Slate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
