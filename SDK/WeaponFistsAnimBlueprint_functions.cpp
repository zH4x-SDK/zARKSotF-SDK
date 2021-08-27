
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

// Function WeaponFistsAnimBlueprint.WeaponFistsAnimBlueprint_C.ExecuteUbergraph_WeaponFistsAnimBlueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponFistsAnimBlueprint_C::ExecuteUbergraph_WeaponFistsAnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFistsAnimBlueprint.WeaponFistsAnimBlueprint_C.ExecuteUbergraph_WeaponFistsAnimBlueprint");

	UWeaponFistsAnimBlueprint_C_ExecuteUbergraph_WeaponFistsAnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
