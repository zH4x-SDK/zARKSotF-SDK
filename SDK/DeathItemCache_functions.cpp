
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

// Function DeathItemCache.DeathItemCache_C.UserConstructionScript
// ()

void ADeathItemCache_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathItemCache.DeathItemCache_C.UserConstructionScript");

	ADeathItemCache_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathItemCache.DeathItemCache_C.ExecuteUbergraph_DeathItemCache
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADeathItemCache_C::ExecuteUbergraph_DeathItemCache(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathItemCache.DeathItemCache_C.ExecuteUbergraph_DeathItemCache");

	ADeathItemCache_C_ExecuteUbergraph_DeathItemCache_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
