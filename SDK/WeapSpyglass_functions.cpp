
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

// Function WeapSpyglass.WeapSpyglass_C.UserConstructionScript
// ()

void AWeapSpyglass_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSpyglass.WeapSpyglass_C.UserConstructionScript");

	AWeapSpyglass_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapSpyglass.WeapSpyglass_C.ExecuteUbergraph_WeapSpyglass
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapSpyglass_C::ExecuteUbergraph_WeapSpyglass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSpyglass.WeapSpyglass_C.ExecuteUbergraph_WeapSpyglass");

	AWeapSpyglass_C_ExecuteUbergraph_WeapSpyglass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
