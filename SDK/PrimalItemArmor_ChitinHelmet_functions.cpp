
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

// Function PrimalItemArmor_ChitinHelmet.PrimalItemArmor_ChitinHelmet_C.ExecuteUbergraph_PrimalItemArmor_ChitinHelmet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_ChitinHelmet_C::ExecuteUbergraph_PrimalItemArmor_ChitinHelmet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ChitinHelmet.PrimalItemArmor_ChitinHelmet_C.ExecuteUbergraph_PrimalItemArmor_ChitinHelmet");

	UPrimalItemArmor_ChitinHelmet_C_ExecuteUbergraph_PrimalItemArmor_ChitinHelmet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
