
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

// Function ProjGiantRock.ProjGiantRock_C.UserConstructionScript
// ()

void AProjGiantRock_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGiantRock.ProjGiantRock_C.UserConstructionScript");

	AProjGiantRock_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjGiantRock.ProjGiantRock_C.ExecuteUbergraph_ProjGiantRock
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjGiantRock_C::ExecuteUbergraph_ProjGiantRock(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGiantRock.ProjGiantRock_C.ExecuteUbergraph_ProjGiantRock");

	AProjGiantRock_C_ExecuteUbergraph_ProjGiantRock_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
