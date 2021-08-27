
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

// Function WeapCrossbow_GrapplingHook.WeapCrossbow_GrapplingHook_C.UserConstructionScript
// ()

void AWeapCrossbow_GrapplingHook_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCrossbow_GrapplingHook.WeapCrossbow_GrapplingHook_C.UserConstructionScript");

	AWeapCrossbow_GrapplingHook_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCrossbow_GrapplingHook.WeapCrossbow_GrapplingHook_C.ExecuteUbergraph_WeapCrossbow_GrapplingHook
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapCrossbow_GrapplingHook_C::ExecuteUbergraph_WeapCrossbow_GrapplingHook(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCrossbow_GrapplingHook.WeapCrossbow_GrapplingHook_C.ExecuteUbergraph_WeapCrossbow_GrapplingHook");

	AWeapCrossbow_GrapplingHook_C_ExecuteUbergraph_WeapCrossbow_GrapplingHook_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
