
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

// Function WeapMetalHatchet.WeapMetalHatchet_C.UserConstructionScript
// ()

void AWeapMetalHatchet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMetalHatchet.WeapMetalHatchet_C.UserConstructionScript");

	AWeapMetalHatchet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMetalHatchet.WeapMetalHatchet_C.ExecuteUbergraph_WeapMetalHatchet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMetalHatchet_C::ExecuteUbergraph_WeapMetalHatchet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMetalHatchet.WeapMetalHatchet_C.ExecuteUbergraph_WeapMetalHatchet");

	AWeapMetalHatchet_C_ExecuteUbergraph_WeapMetalHatchet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
