
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

// Function PrimalItemArmorGeneric.PrimalItemArmorGeneric_C.ExecuteUbergraph_PrimalItemArmorGeneric
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmorGeneric_C::ExecuteUbergraph_PrimalItemArmorGeneric(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmorGeneric.PrimalItemArmorGeneric_C.ExecuteUbergraph_PrimalItemArmorGeneric");

	UPrimalItemArmorGeneric_C_ExecuteUbergraph_PrimalItemArmorGeneric_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
