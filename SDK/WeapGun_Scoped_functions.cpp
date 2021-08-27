
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

// Function WeapGun_Scoped.WeapGun_Scoped_C.UserConstructionScript
// (Final)

void AWeapGun_Scoped_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGun_Scoped.WeapGun_Scoped_C.UserConstructionScript");

	AWeapGun_Scoped_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGun_Scoped.WeapGun_Scoped_C.ExecuteUbergraph_WeapGun_Scoped
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapGun_Scoped_C::ExecuteUbergraph_WeapGun_Scoped(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGun_Scoped.WeapGun_Scoped_C.ExecuteUbergraph_WeapGun_Scoped");

	AWeapGun_Scoped_C_ExecuteUbergraph_WeapGun_Scoped_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
