
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

// Function PrimalItemDye_Sky.PrimalItemDye_Sky_C.ExecuteUbergraph_PrimalItemDye_Sky
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemDye_Sky_C::ExecuteUbergraph_PrimalItemDye_Sky(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemDye_Sky.PrimalItemDye_Sky_C.ExecuteUbergraph_PrimalItemDye_Sky");

	UPrimalItemDye_Sky_C_ExecuteUbergraph_PrimalItemDye_Sky_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
