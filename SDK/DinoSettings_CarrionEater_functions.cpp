
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

// Function DinoSettings_CarrionEater.DinoSettings_CarrionEater_C.ExecuteUbergraph_DinoSettings_CarrionEater
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_CarrionEater_C::ExecuteUbergraph_DinoSettings_CarrionEater(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_CarrionEater.DinoSettings_CarrionEater_C.ExecuteUbergraph_DinoSettings_CarrionEater");

	UDinoSettings_CarrionEater_C_ExecuteUbergraph_DinoSettings_CarrionEater_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
