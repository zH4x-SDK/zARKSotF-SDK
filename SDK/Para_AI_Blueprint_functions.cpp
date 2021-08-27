
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

// Function Para_AI_Blueprint.Para_AI_Blueprint_C.UserConstructionScript
// (Final)

void APara_AI_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_AI_Blueprint.Para_AI_Blueprint_C.UserConstructionScript");

	APara_AI_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Para_AI_Blueprint.Para_AI_Blueprint_C.ExecuteUbergraph_Para_AI_Blueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APara_AI_Blueprint_C::ExecuteUbergraph_Para_AI_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_AI_Blueprint.Para_AI_Blueprint_C.ExecuteUbergraph_Para_AI_Blueprint");

	APara_AI_Blueprint_C_ExecuteUbergraph_Para_AI_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
