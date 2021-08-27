
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

// Function DinoSettings_Carnivore_Boss.DinoSettings_Carnivore_Boss_C.ExecuteUbergraph_DinoSettings_Carnivore_Boss
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Carnivore_Boss_C::ExecuteUbergraph_DinoSettings_Carnivore_Boss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Carnivore_Boss.DinoSettings_Carnivore_Boss_C.ExecuteUbergraph_DinoSettings_Carnivore_Boss");

	UDinoSettings_Carnivore_Boss_C_ExecuteUbergraph_DinoSettings_Carnivore_Boss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
