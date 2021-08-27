
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

// Function WeapCrossbow.WeapCrossbow_C.UserConstructionScript
// ()

void AWeapCrossbow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCrossbow.WeapCrossbow_C.UserConstructionScript");

	AWeapCrossbow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapCrossbow.WeapCrossbow_C.ExecuteUbergraph_WeapCrossbow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapCrossbow_C::ExecuteUbergraph_WeapCrossbow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapCrossbow.WeapCrossbow_C.ExecuteUbergraph_WeapCrossbow");

	AWeapCrossbow_C_ExecuteUbergraph_WeapCrossbow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
