
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

// Function Buff_NoBuild.Buff_NoBuild_C.UserConstructionScript
// ()

void ABuff_NoBuild_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NoBuild.Buff_NoBuild_C.UserConstructionScript");

	ABuff_NoBuild_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_NoBuild.Buff_NoBuild_C.ExecuteUbergraph_Buff_NoBuild
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_NoBuild_C::ExecuteUbergraph_Buff_NoBuild(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NoBuild.Buff_NoBuild_C.ExecuteUbergraph_Buff_NoBuild");

	ABuff_NoBuild_C_ExecuteUbergraph_Buff_NoBuild_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
