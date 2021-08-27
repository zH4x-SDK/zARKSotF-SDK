
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

// Function DragonAttackStateFire.DragonAttackStateFire_C.ExecuteUbergraph_DragonAttackStateFire
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDragonAttackStateFire_C::ExecuteUbergraph_DragonAttackStateFire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DragonAttackStateFire.DragonAttackStateFire_C.ExecuteUbergraph_DragonAttackStateFire");

	UDragonAttackStateFire_C_ExecuteUbergraph_DragonAttackStateFire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
