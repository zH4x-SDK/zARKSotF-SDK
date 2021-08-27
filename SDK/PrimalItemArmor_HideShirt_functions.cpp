
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

// Function PrimalItemArmor_HideShirt.PrimalItemArmor_HideShirt_C.ExecuteUbergraph_PrimalItemArmor_HideShirt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_HideShirt_C::ExecuteUbergraph_PrimalItemArmor_HideShirt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_HideShirt.PrimalItemArmor_HideShirt_C.ExecuteUbergraph_PrimalItemArmor_HideShirt");

	UPrimalItemArmor_HideShirt_C_ExecuteUbergraph_PrimalItemArmor_HideShirt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
