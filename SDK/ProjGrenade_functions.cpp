
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

// Function ProjGrenade.ProjGrenade_C.UserConstructionScript
// ()

void AProjGrenade_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGrenade.ProjGrenade_C.UserConstructionScript");

	AProjGrenade_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjGrenade.ProjGrenade_C.OnExplode
// (RequiredAPI)
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjGrenade_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGrenade.ProjGrenade_C.OnExplode");

	AProjGrenade_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjGrenade.ProjGrenade_C.ExecuteUbergraph_ProjGrenade
// (RequiredAPI)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjGrenade_C::ExecuteUbergraph_ProjGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGrenade.ProjGrenade_C.ExecuteUbergraph_ProjGrenade");

	AProjGrenade_C_ExecuteUbergraph_ProjGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
