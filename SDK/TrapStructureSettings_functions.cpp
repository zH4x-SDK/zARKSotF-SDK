
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

// Function TrapStructureSettings.TrapStructureSettings_C.ExecuteUbergraph_TrapStructureSettings
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTrapStructureSettings_C::ExecuteUbergraph_TrapStructureSettings(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrapStructureSettings.TrapStructureSettings_C.ExecuteUbergraph_TrapStructureSettings");

	UTrapStructureSettings_C_ExecuteUbergraph_TrapStructureSettings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
