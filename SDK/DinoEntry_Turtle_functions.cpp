
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

// Function DinoEntry_Turtle.DinoEntry_Turtle_C.ExecuteUbergraph_DinoEntry_Turtle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Turtle_C::ExecuteUbergraph_DinoEntry_Turtle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Turtle.DinoEntry_Turtle_C.ExecuteUbergraph_DinoEntry_Turtle");

	UDinoEntry_Turtle_C_ExecuteUbergraph_DinoEntry_Turtle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
