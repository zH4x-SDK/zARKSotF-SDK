
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

// Function DragonAnimBlueprint.DragonAnimBlueprint_C.ExecuteUbergraph_DragonAnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDragonAnimBlueprint_C::ExecuteUbergraph_DragonAnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DragonAnimBlueprint.DragonAnimBlueprint_C.ExecuteUbergraph_DragonAnimBlueprint");

	UDragonAnimBlueprint_C_ExecuteUbergraph_DragonAnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
