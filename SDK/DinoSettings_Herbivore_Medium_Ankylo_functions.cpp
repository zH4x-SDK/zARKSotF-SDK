
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

// Function DinoSettings_Herbivore_Medium_Ankylo.DinoSettings_Herbivore_Medium_Ankylo_C.ExecuteUbergraph_DinoSettings_Herbivore_Medium_Ankylo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Herbivore_Medium_Ankylo_C::ExecuteUbergraph_DinoSettings_Herbivore_Medium_Ankylo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Herbivore_Medium_Ankylo.DinoSettings_Herbivore_Medium_Ankylo_C.ExecuteUbergraph_DinoSettings_Herbivore_Medium_Ankylo");

	UDinoSettings_Herbivore_Medium_Ankylo_C_ExecuteUbergraph_DinoSettings_Herbivore_Medium_Ankylo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
