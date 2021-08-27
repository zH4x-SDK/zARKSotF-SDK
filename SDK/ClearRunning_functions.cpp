
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

// Function ClearRunning.ClearRunning_C.ReceiveExecute
// (RequiredAPI)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UClearRunning_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ClearRunning.ClearRunning_C.ReceiveExecute");

	UClearRunning_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ClearRunning.ClearRunning_C.ExecuteUbergraph_ClearRunning
// (BlueprintAuthorityOnly, BlueprintCosmetic)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UClearRunning_C::ExecuteUbergraph_ClearRunning(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ClearRunning.ClearRunning_C.ExecuteUbergraph_ClearRunning");

	UClearRunning_C_ExecuteUbergraph_ClearRunning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
