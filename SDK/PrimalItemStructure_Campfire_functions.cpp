
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

// Function PrimalItemStructure_Campfire.PrimalItemStructure_Campfire_C.ExecuteUbergraph_PrimalItemStructure_Campfire
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Campfire_C::ExecuteUbergraph_PrimalItemStructure_Campfire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Campfire.PrimalItemStructure_Campfire_C.ExecuteUbergraph_PrimalItemStructure_Campfire");

	UPrimalItemStructure_Campfire_C_ExecuteUbergraph_PrimalItemStructure_Campfire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
