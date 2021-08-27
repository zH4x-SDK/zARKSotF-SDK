
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

// Function Door_Metal.Door_Metal_C.UserConstructionScript
// (Final)

void ADoor_Metal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Door_Metal.Door_Metal_C.UserConstructionScript");

	ADoor_Metal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Door_Metal.Door_Metal_C.ExecuteUbergraph_Door_Metal
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADoor_Metal_C::ExecuteUbergraph_Door_Metal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Door_Metal.Door_Metal_C.ExecuteUbergraph_Door_Metal");

	ADoor_Metal_C_ExecuteUbergraph_Door_Metal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
