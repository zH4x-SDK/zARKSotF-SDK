
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

// Function FogOfWarBlueprint.FogOfWarBlueprint_C.ExecuteUbergraph_FogOfWarBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UFogOfWarBlueprint_C::ExecuteUbergraph_FogOfWarBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FogOfWarBlueprint.FogOfWarBlueprint_C.ExecuteUbergraph_FogOfWarBlueprint");

	UFogOfWarBlueprint_C_ExecuteUbergraph_FogOfWarBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
