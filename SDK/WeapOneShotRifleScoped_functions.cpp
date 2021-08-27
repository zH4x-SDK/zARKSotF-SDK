
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

// Function WeapOneShotRifleScoped.WeapOneShotRifleScoped_C.UserConstructionScript
// ()

void AWeapOneShotRifleScoped_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapOneShotRifleScoped.WeapOneShotRifleScoped_C.UserConstructionScript");

	AWeapOneShotRifleScoped_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapOneShotRifleScoped.WeapOneShotRifleScoped_C.ExecuteUbergraph_WeapOneShotRifleScoped
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapOneShotRifleScoped_C::ExecuteUbergraph_WeapOneShotRifleScoped(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapOneShotRifleScoped.WeapOneShotRifleScoped_C.ExecuteUbergraph_WeapOneShotRifleScoped");

	AWeapOneShotRifleScoped_C_ExecuteUbergraph_WeapOneShotRifleScoped_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
