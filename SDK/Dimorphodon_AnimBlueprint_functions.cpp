
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

// Function Dimorphodon_AnimBlueprint.Dimorphodon_AnimBlueprint_C.ExecuteUbergraph_Dimorphodon_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDimorphodon_AnimBlueprint_C::ExecuteUbergraph_Dimorphodon_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dimorphodon_AnimBlueprint.Dimorphodon_AnimBlueprint_C.ExecuteUbergraph_Dimorphodon_AnimBlueprint");

	UDimorphodon_AnimBlueprint_C_ExecuteUbergraph_Dimorphodon_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
