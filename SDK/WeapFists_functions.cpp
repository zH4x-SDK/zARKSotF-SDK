
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

// Function WeapFists.WeapFists_C.UserConstructionScript
// ()

void AWeapFists_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFists.WeapFists_C.UserConstructionScript");

	AWeapFists_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFists.WeapFists_C.ExecuteUbergraph_WeapFists
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFists_C::ExecuteUbergraph_WeapFists(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFists.WeapFists_C.ExecuteUbergraph_WeapFists");

	AWeapFists_C_ExecuteUbergraph_WeapFists_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
