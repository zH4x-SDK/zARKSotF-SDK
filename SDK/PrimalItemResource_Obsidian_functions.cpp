
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

// Function PrimalItemResource_Obsidian.PrimalItemResource_Obsidian_C.ExecuteUbergraph_PrimalItemResource_Obsidian
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_Obsidian_C::ExecuteUbergraph_PrimalItemResource_Obsidian(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Obsidian.PrimalItemResource_Obsidian_C.ExecuteUbergraph_PrimalItemResource_Obsidian");

	UPrimalItemResource_Obsidian_C_ExecuteUbergraph_PrimalItemResource_Obsidian_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
