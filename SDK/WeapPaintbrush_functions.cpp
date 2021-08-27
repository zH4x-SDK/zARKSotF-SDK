
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

// Function WeapPaintbrush.WeapPaintbrush_C.UserConstructionScript
// ()

void AWeapPaintbrush_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapPaintbrush.WeapPaintbrush_C.UserConstructionScript");

	AWeapPaintbrush_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapPaintbrush.WeapPaintbrush_C.ExecuteUbergraph_WeapPaintbrush
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapPaintbrush_C::ExecuteUbergraph_WeapPaintbrush(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapPaintbrush.WeapPaintbrush_C.ExecuteUbergraph_WeapPaintbrush");

	AWeapPaintbrush_C_ExecuteUbergraph_WeapPaintbrush_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
