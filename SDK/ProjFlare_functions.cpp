
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

// Function ProjFlare.ProjFlare_C.UserConstructionScript
// ()

void AProjFlare_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFlare.ProjFlare_C.UserConstructionScript");

	AProjFlare_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFlare.ProjFlare_C.ExecuteUbergraph_ProjFlare
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjFlare_C::ExecuteUbergraph_ProjFlare(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFlare.ProjFlare_C.ExecuteUbergraph_ProjFlare");

	AProjFlare_C_ExecuteUbergraph_ProjFlare_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
