
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

// Function WeapSpear.WeapSpear_C.UserConstructionScript
// ()

void AWeapSpear_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSpear.WeapSpear_C.UserConstructionScript");

	AWeapSpear_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapSpear.WeapSpear_C.ExecuteUbergraph_WeapSpear
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapSpear_C::ExecuteUbergraph_WeapSpear(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSpear.WeapSpear_C.ExecuteUbergraph_WeapSpear");

	AWeapSpear_C_ExecuteUbergraph_WeapSpear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
