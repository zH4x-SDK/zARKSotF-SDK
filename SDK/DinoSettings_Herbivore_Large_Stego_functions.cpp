
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

// Function DinoSettings_Herbivore_Large_Stego.DinoSettings_Herbivore_Large_Stego_C.ExecuteUbergraph_DinoSettings_Herbivore_Large_Stego
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Herbivore_Large_Stego_C::ExecuteUbergraph_DinoSettings_Herbivore_Large_Stego(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Herbivore_Large_Stego.DinoSettings_Herbivore_Large_Stego_C.ExecuteUbergraph_DinoSettings_Herbivore_Large_Stego");

	UDinoSettings_Herbivore_Large_Stego_C_ExecuteUbergraph_DinoSettings_Herbivore_Large_Stego_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
