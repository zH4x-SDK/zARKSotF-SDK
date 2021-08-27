
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

// Function WeapRifle.WeapRifle_C.UserConstructionScript
// ()

void AWeapRifle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapRifle.WeapRifle_C.UserConstructionScript");

	AWeapRifle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapRifle.WeapRifle_C.ExecuteUbergraph_WeapRifle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapRifle_C::ExecuteUbergraph_WeapRifle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapRifle.WeapRifle_C.ExecuteUbergraph_WeapRifle");

	AWeapRifle_C_ExecuteUbergraph_WeapRifle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
