
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

// Function Window_Stone_BP.Window_Stone_BP_C.UserConstructionScript
// (Final)

void AWindow_Stone_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Window_Stone_BP.Window_Stone_BP_C.UserConstructionScript");

	AWindow_Stone_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Window_Stone_BP.Window_Stone_BP_C.ExecuteUbergraph_Window_Stone_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWindow_Stone_BP_C::ExecuteUbergraph_Window_Stone_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Window_Stone_BP.Window_Stone_BP_C.ExecuteUbergraph_Window_Stone_BP");

	AWindow_Stone_BP_C_ExecuteUbergraph_Window_Stone_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
