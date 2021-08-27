
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

// Function PrimalItemConsumable_Egg_Turtle.PrimalItemConsumable_Egg_Turtle_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Turtle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_Turtle_C::ExecuteUbergraph_PrimalItemConsumable_Egg_Turtle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_Turtle.PrimalItemConsumable_Egg_Turtle_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Turtle");

	UPrimalItemConsumable_Egg_Turtle_C_ExecuteUbergraph_PrimalItemConsumable_Egg_Turtle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
