
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

// Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.ExecuteUbergraph_PrimalItemResource_Gasoline
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_Gasoline_C::ExecuteUbergraph_PrimalItemResource_Gasoline(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.ExecuteUbergraph_PrimalItemResource_Gasoline");

	UPrimalItemResource_Gasoline_C_ExecuteUbergraph_PrimalItemResource_Gasoline_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
