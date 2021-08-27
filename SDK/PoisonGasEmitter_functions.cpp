
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

// Function PoisonGasEmitter.PoisonGasEmitter_C.UserConstructionScript
// (Final)

void APoisonGasEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoisonGasEmitter.PoisonGasEmitter_C.UserConstructionScript");

	APoisonGasEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoisonGasEmitter.PoisonGasEmitter_C.ExecuteUbergraph_PoisonGasEmitter
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APoisonGasEmitter_C::ExecuteUbergraph_PoisonGasEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PoisonGasEmitter.PoisonGasEmitter_C.ExecuteUbergraph_PoisonGasEmitter");

	APoisonGasEmitter_C_ExecuteUbergraph_PoisonGasEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
