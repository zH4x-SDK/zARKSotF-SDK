
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

// Function StructureSettings_BrokenByExplosives_WeakMetalDmg.StructureSettings_BrokenByExplosives_WeakMetalDmg_C.ExecuteUbergraph_StructureSettings_BrokenByExplosives_WeakMetalDmg
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStructureSettings_BrokenByExplosives_WeakMetalDmg_C::ExecuteUbergraph_StructureSettings_BrokenByExplosives_WeakMetalDmg(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureSettings_BrokenByExplosives_WeakMetalDmg.StructureSettings_BrokenByExplosives_WeakMetalDmg_C.ExecuteUbergraph_StructureSettings_BrokenByExplosives_WeakMetalDmg");

	UStructureSettings_BrokenByExplosives_WeakMetalDmg_C_ExecuteUbergraph_StructureSettings_BrokenByExplosives_WeakMetalDmg_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
