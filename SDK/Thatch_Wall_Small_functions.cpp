
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

// Function Thatch_Wall_Small.Thatch_Wall_Small_C.UserConstructionScript
// (Final)

void AThatch_Wall_Small_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thatch_Wall_Small.Thatch_Wall_Small_C.UserConstructionScript");

	AThatch_Wall_Small_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thatch_Wall_Small.Thatch_Wall_Small_C.ExecuteUbergraph_Thatch_Wall_Small
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AThatch_Wall_Small_C::ExecuteUbergraph_Thatch_Wall_Small(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thatch_Wall_Small.Thatch_Wall_Small_C.ExecuteUbergraph_Thatch_Wall_Small");

	AThatch_Wall_Small_C_ExecuteUbergraph_Thatch_Wall_Small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
