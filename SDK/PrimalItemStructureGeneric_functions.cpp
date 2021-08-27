
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

// Function PrimalItemStructureGeneric.PrimalItemStructureGeneric_C.ExecuteUbergraph_PrimalItemStructureGeneric
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructureGeneric_C::ExecuteUbergraph_PrimalItemStructureGeneric(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructureGeneric.PrimalItemStructureGeneric_C.ExecuteUbergraph_PrimalItemStructureGeneric");

	UPrimalItemStructureGeneric_C_ExecuteUbergraph_PrimalItemStructureGeneric_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
