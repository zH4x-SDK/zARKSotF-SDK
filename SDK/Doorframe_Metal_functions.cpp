
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

// Function Doorframe_Metal.Doorframe_Metal_C.UserConstructionScript
// (Final)

void ADoorframe_Metal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Doorframe_Metal.Doorframe_Metal_C.UserConstructionScript");

	ADoorframe_Metal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Doorframe_Metal.Doorframe_Metal_C.ExecuteUbergraph_Doorframe_Metal
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADoorframe_Metal_C::ExecuteUbergraph_Doorframe_Metal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Doorframe_Metal.Doorframe_Metal_C.ExecuteUbergraph_Doorframe_Metal");

	ADoorframe_Metal_C_ExecuteUbergraph_Doorframe_Metal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
