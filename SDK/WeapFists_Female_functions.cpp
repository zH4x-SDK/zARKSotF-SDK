
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

// Function WeapFists_Female.WeapFists_Female_C.UserConstructionScript
// (Final)

void AWeapFists_Female_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFists_Female.WeapFists_Female_C.UserConstructionScript");

	AWeapFists_Female_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFists_Female.WeapFists_Female_C.ExecuteUbergraph_WeapFists_Female
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFists_Female_C::ExecuteUbergraph_WeapFists_Female(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFists_Female.WeapFists_Female_C.ExecuteUbergraph_WeapFists_Female");

	AWeapFists_Female_C_ExecuteUbergraph_WeapFists_Female_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
