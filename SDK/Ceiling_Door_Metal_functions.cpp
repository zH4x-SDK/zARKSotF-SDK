
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

// Function Ceiling_Door_Metal.Ceiling_Door_Metal_C.UserConstructionScript
// (Final)

void ACeiling_Door_Metal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ceiling_Door_Metal.Ceiling_Door_Metal_C.UserConstructionScript");

	ACeiling_Door_Metal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ceiling_Door_Metal.Ceiling_Door_Metal_C.ExecuteUbergraph_Ceiling_Door_Metal
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACeiling_Door_Metal_C::ExecuteUbergraph_Ceiling_Door_Metal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ceiling_Door_Metal.Ceiling_Door_Metal_C.ExecuteUbergraph_Ceiling_Door_Metal");

	ACeiling_Door_Metal_C_ExecuteUbergraph_Ceiling_Door_Metal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
