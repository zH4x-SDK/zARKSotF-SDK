
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

// Function WebExplosionEmitter.WebExplosionEmitter_C.UserConstructionScript
// (Final)

void AWebExplosionEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WebExplosionEmitter.WebExplosionEmitter_C.UserConstructionScript");

	AWebExplosionEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebExplosionEmitter.WebExplosionEmitter_C.ExecuteUbergraph_WebExplosionEmitter
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWebExplosionEmitter_C::ExecuteUbergraph_WebExplosionEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WebExplosionEmitter.WebExplosionEmitter_C.ExecuteUbergraph_WebExplosionEmitter");

	AWebExplosionEmitter_C_ExecuteUbergraph_WebExplosionEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
