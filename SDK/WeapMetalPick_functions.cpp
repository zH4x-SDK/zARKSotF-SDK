
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

// Function WeapMetalPick.WeapMetalPick_C.UserConstructionScript
// ()

void AWeapMetalPick_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMetalPick.WeapMetalPick_C.UserConstructionScript");

	AWeapMetalPick_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMetalPick.WeapMetalPick_C.ExecuteUbergraph_WeapMetalPick
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMetalPick_C::ExecuteUbergraph_WeapMetalPick(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMetalPick.WeapMetalPick_C.ExecuteUbergraph_WeapMetalPick");

	AWeapMetalPick_C_ExecuteUbergraph_WeapMetalPick_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
