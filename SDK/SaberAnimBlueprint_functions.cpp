
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

// Function SaberAnimBlueprint.SaberAnimBlueprint_C.ExecuteUbergraph_SaberAnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USaberAnimBlueprint_C::ExecuteUbergraph_SaberAnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SaberAnimBlueprint.SaberAnimBlueprint_C.ExecuteUbergraph_SaberAnimBlueprint");

	USaberAnimBlueprint_C_ExecuteUbergraph_SaberAnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
