
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

// Function WindowWall_Metal.WindowWall_Metal_C.UserConstructionScript
// (Final)

void AWindowWall_Metal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowWall_Metal.WindowWall_Metal_C.UserConstructionScript");

	AWindowWall_Metal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindowWall_Metal.WindowWall_Metal_C.ExecuteUbergraph_WindowWall_Metal
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWindowWall_Metal_C::ExecuteUbergraph_WindowWall_Metal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowWall_Metal.WindowWall_Metal_C.ExecuteUbergraph_WindowWall_Metal");

	AWindowWall_Metal_C_ExecuteUbergraph_WindowWall_Metal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
