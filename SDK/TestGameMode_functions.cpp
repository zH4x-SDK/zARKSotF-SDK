
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

// Function TestGameMode.TestGameMode_C.UserConstructionScript
// ()

void ATestGameMode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TestGameMode.TestGameMode_C.UserConstructionScript");

	ATestGameMode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TestGameMode.TestGameMode_C.ExecuteUbergraph_TestGameMode
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATestGameMode_C::ExecuteUbergraph_TestGameMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TestGameMode.TestGameMode_C.ExecuteUbergraph_TestGameMode");

	ATestGameMode_C_ExecuteUbergraph_TestGameMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
