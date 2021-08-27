
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

// Function PlayerPawnTest_Female.PlayerPawnTest_Female_C.UserConstructionScript
// (Final)

void APlayerPawnTest_Female_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnTest_Female.PlayerPawnTest_Female_C.UserConstructionScript");

	APlayerPawnTest_Female_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnTest_Female.PlayerPawnTest_Female_C.ExecuteUbergraph_PlayerPawnTest_Female
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnTest_Female_C::ExecuteUbergraph_PlayerPawnTest_Female(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnTest_Female.PlayerPawnTest_Female_C.ExecuteUbergraph_PlayerPawnTest_Female");

	APlayerPawnTest_Female_C_ExecuteUbergraph_PlayerPawnTest_Female_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
