
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

// Function ProjRock_Impacts.ProjRock_Impacts_C.UserConstructionScript
// (Final)

void AProjRock_Impacts_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjRock_Impacts.ProjRock_Impacts_C.UserConstructionScript");

	AProjRock_Impacts_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjRock_Impacts.ProjRock_Impacts_C.ExecuteUbergraph_ProjRock_Impacts
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjRock_Impacts_C::ExecuteUbergraph_ProjRock_Impacts(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjRock_Impacts.ProjRock_Impacts_C.ExecuteUbergraph_ProjRock_Impacts");

	AProjRock_Impacts_C_ExecuteUbergraph_ProjRock_Impacts_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
