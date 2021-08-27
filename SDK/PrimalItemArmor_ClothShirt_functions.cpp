
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

// Function PrimalItemArmor_ClothShirt.PrimalItemArmor_ClothShirt_C.ExecuteUbergraph_PrimalItemArmor_ClothShirt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_ClothShirt_C::ExecuteUbergraph_PrimalItemArmor_ClothShirt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ClothShirt.PrimalItemArmor_ClothShirt_C.ExecuteUbergraph_PrimalItemArmor_ClothShirt");

	UPrimalItemArmor_ClothShirt_C_ExecuteUbergraph_PrimalItemArmor_ClothShirt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
