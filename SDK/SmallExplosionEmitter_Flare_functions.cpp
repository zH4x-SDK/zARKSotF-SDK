
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

// Function SmallExplosionEmitter_Flare.SmallExplosionEmitter_Flare_C.UserConstructionScript
// (Final)

void ASmallExplosionEmitter_Flare_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallExplosionEmitter_Flare.SmallExplosionEmitter_Flare_C.UserConstructionScript");

	ASmallExplosionEmitter_Flare_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallExplosionEmitter_Flare.SmallExplosionEmitter_Flare_C.ExecuteUbergraph_SmallExplosionEmitter_Flare
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASmallExplosionEmitter_Flare_C::ExecuteUbergraph_SmallExplosionEmitter_Flare(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallExplosionEmitter_Flare.SmallExplosionEmitter_Flare_C.ExecuteUbergraph_SmallExplosionEmitter_Flare");

	ASmallExplosionEmitter_Flare_C_ExecuteUbergraph_SmallExplosionEmitter_Flare_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
