
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

// Function ThatchDoorFramePlacementEmitter.ThatchDoorFramePlacementEmitter_C.UserConstructionScript
// ()

void AThatchDoorFramePlacementEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ThatchDoorFramePlacementEmitter.ThatchDoorFramePlacementEmitter_C.UserConstructionScript");

	AThatchDoorFramePlacementEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThatchDoorFramePlacementEmitter.ThatchDoorFramePlacementEmitter_C.ExecuteUbergraph_ThatchDoorFramePlacementEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AThatchDoorFramePlacementEmitter_C::ExecuteUbergraph_ThatchDoorFramePlacementEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThatchDoorFramePlacementEmitter.ThatchDoorFramePlacementEmitter_C.ExecuteUbergraph_ThatchDoorFramePlacementEmitter");

	AThatchDoorFramePlacementEmitter_C_ExecuteUbergraph_ThatchDoorFramePlacementEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
