
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

// Function PrimalItemWeaponAttachmentGeneric.PrimalItemWeaponAttachmentGeneric_C.ExecuteUbergraph_PrimalItemWeaponAttachmentGeneric
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemWeaponAttachmentGeneric_C::ExecuteUbergraph_PrimalItemWeaponAttachmentGeneric(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemWeaponAttachmentGeneric.PrimalItemWeaponAttachmentGeneric_C.ExecuteUbergraph_PrimalItemWeaponAttachmentGeneric");

	UPrimalItemWeaponAttachmentGeneric_C_ExecuteUbergraph_PrimalItemWeaponAttachmentGeneric_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
