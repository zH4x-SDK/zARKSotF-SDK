
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

// Function DinoSettings_Herbivore_Medium_Turtle.DinoSettings_Herbivore_Medium_Turtle_C.ExecuteUbergraph_DinoSettings_Herbivore_Medium_Turtle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Herbivore_Medium_Turtle_C::ExecuteUbergraph_DinoSettings_Herbivore_Medium_Turtle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Herbivore_Medium_Turtle.DinoSettings_Herbivore_Medium_Turtle_C.ExecuteUbergraph_DinoSettings_Herbivore_Medium_Turtle");

	UDinoSettings_Herbivore_Medium_Turtle_C_ExecuteUbergraph_DinoSettings_Herbivore_Medium_Turtle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
