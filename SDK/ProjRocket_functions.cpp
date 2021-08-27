
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

// Function ProjRocket.ProjRocket_C.UserConstructionScript
// ()

void AProjRocket_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjRocket.ProjRocket_C.UserConstructionScript");

	AProjRocket_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjRocket.ProjRocket_C.ExecuteUbergraph_ProjRocket
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjRocket_C::ExecuteUbergraph_ProjRocket(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjRocket.ProjRocket_C.ExecuteUbergraph_ProjRocket");

	AProjRocket_C_ExecuteUbergraph_ProjRocket_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
