
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

// Function DinoSettings_Carnivore_Small.DinoSettings_Carnivore_Small_C.ExecuteUbergraph_DinoSettings_Carnivore_Small
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Carnivore_Small_C::ExecuteUbergraph_DinoSettings_Carnivore_Small(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Carnivore_Small.DinoSettings_Carnivore_Small_C.ExecuteUbergraph_DinoSettings_Carnivore_Small");

	UDinoSettings_Carnivore_Small_C_ExecuteUbergraph_DinoSettings_Carnivore_Small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
