
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

// Function WeapGun.WeapGun_C.UserConstructionScript
// ()

void AWeapGun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGun.WeapGun_C.UserConstructionScript");

	AWeapGun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGun.WeapGun_C.ExecuteUbergraph_WeapGun
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapGun_C::ExecuteUbergraph_WeapGun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGun.WeapGun_C.ExecuteUbergraph_WeapGun");

	AWeapGun_C_ExecuteUbergraph_WeapGun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
