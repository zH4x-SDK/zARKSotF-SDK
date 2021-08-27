
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

// Function SetRunning.SetRunning_C.ReceiveExecute
// (RequiredAPI)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void USetRunning_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SetRunning.SetRunning_C.ReceiveExecute");

	USetRunning_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SetRunning.SetRunning_C.ExecuteUbergraph_SetRunning
// (BlueprintAuthorityOnly, BlueprintCosmetic)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USetRunning_C::ExecuteUbergraph_SetRunning(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SetRunning.SetRunning_C.ExecuteUbergraph_SetRunning");

	USetRunning_C_ExecuteUbergraph_SetRunning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
