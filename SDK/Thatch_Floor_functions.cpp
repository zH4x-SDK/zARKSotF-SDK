
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

// Function Thatch_Floor.Thatch_Floor_C.UserConstructionScript
// ()

void AThatch_Floor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thatch_Floor.Thatch_Floor_C.UserConstructionScript");

	AThatch_Floor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thatch_Floor.Thatch_Floor_C.ExecuteUbergraph_Thatch_Floor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AThatch_Floor_C::ExecuteUbergraph_Thatch_Floor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thatch_Floor.Thatch_Floor_C.ExecuteUbergraph_Thatch_Floor");

	AThatch_Floor_C_ExecuteUbergraph_Thatch_Floor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
