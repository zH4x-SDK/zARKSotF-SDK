
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

// Function WeapTripWireC4.WeapTripWireC4_C.UserConstructionScript
// ()

void AWeapTripWireC4_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTripWireC4.WeapTripWireC4_C.UserConstructionScript");

	AWeapTripWireC4_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTripWireC4.WeapTripWireC4_C.ExecuteUbergraph_WeapTripWireC4
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTripWireC4_C::ExecuteUbergraph_WeapTripWireC4(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTripWireC4.WeapTripWireC4_C.ExecuteUbergraph_WeapTripWireC4");

	AWeapTripWireC4_C_ExecuteUbergraph_WeapTripWireC4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
