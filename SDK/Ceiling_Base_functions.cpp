
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

// Function Ceiling_Base.Ceiling_Base_C.UserConstructionScript
// ()

void ACeiling_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ceiling_Base.Ceiling_Base_C.UserConstructionScript");

	ACeiling_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ceiling_Base.Ceiling_Base_C.ExecuteUbergraph_Ceiling_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACeiling_Base_C::ExecuteUbergraph_Ceiling_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ceiling_Base.Ceiling_Base_C.ExecuteUbergraph_Ceiling_Base");

	ACeiling_Base_C_ExecuteUbergraph_Ceiling_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
