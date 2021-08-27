
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

// Function Mammoth_AI_Blueprint.Mammoth_AI_Blueprint_C.UserConstructionScript
// (Final)

void AMammoth_AI_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_AI_Blueprint.Mammoth_AI_Blueprint_C.UserConstructionScript");

	AMammoth_AI_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mammoth_AI_Blueprint.Mammoth_AI_Blueprint_C.ExecuteUbergraph_Mammoth_AI_Blueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMammoth_AI_Blueprint_C::ExecuteUbergraph_Mammoth_AI_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth_AI_Blueprint.Mammoth_AI_Blueprint_C.ExecuteUbergraph_Mammoth_AI_Blueprint");

	AMammoth_AI_Blueprint_C_ExecuteUbergraph_Mammoth_AI_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
