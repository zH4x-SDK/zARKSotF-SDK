
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

// Function Wall_Metal.Wall_Metal_C.UserConstructionScript
// (Final)

void AWall_Metal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wall_Metal.Wall_Metal_C.UserConstructionScript");

	AWall_Metal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wall_Metal.Wall_Metal_C.ExecuteUbergraph_Wall_Metal
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWall_Metal_C::ExecuteUbergraph_Wall_Metal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wall_Metal.Wall_Metal_C.ExecuteUbergraph_Wall_Metal");

	AWall_Metal_C_ExecuteUbergraph_Wall_Metal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
