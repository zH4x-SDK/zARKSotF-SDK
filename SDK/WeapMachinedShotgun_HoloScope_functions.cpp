
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

// Function WeapMachinedShotgun_HoloScope.WeapMachinedShotgun_HoloScope_C.UserConstructionScript
// (Final)

void AWeapMachinedShotgun_HoloScope_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedShotgun_HoloScope.WeapMachinedShotgun_HoloScope_C.UserConstructionScript");

	AWeapMachinedShotgun_HoloScope_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMachinedShotgun_HoloScope.WeapMachinedShotgun_HoloScope_C.ExecuteUbergraph_WeapMachinedShotgun_HoloScope
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMachinedShotgun_HoloScope_C::ExecuteUbergraph_WeapMachinedShotgun_HoloScope(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedShotgun_HoloScope.WeapMachinedShotgun_HoloScope_C.ExecuteUbergraph_WeapMachinedShotgun_HoloScope");

	AWeapMachinedShotgun_HoloScope_C_ExecuteUbergraph_WeapMachinedShotgun_HoloScope_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
