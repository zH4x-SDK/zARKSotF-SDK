
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

// Function DinoSettings_Carnivore_Tiny.DinoSettings_Carnivore_Tiny_C.ExecuteUbergraph_DinoSettings_Carnivore_Tiny
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Carnivore_Tiny_C::ExecuteUbergraph_DinoSettings_Carnivore_Tiny(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Carnivore_Tiny.DinoSettings_Carnivore_Tiny_C.ExecuteUbergraph_DinoSettings_Carnivore_Tiny");

	UDinoSettings_Carnivore_Tiny_C_ExecuteUbergraph_DinoSettings_Carnivore_Tiny_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
