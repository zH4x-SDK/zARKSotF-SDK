
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

// Function Thatch_Doorframe.Thatch_Doorframe_C.UserConstructionScript
// ()

void AThatch_Doorframe_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thatch_Doorframe.Thatch_Doorframe_C.UserConstructionScript");

	AThatch_Doorframe_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thatch_Doorframe.Thatch_Doorframe_C.ExecuteUbergraph_Thatch_Doorframe
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AThatch_Doorframe_C::ExecuteUbergraph_Thatch_Doorframe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thatch_Doorframe.Thatch_Doorframe_C.ExecuteUbergraph_Thatch_Doorframe");

	AThatch_Doorframe_C_ExecuteUbergraph_Thatch_Doorframe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
