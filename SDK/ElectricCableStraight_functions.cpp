
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

// Function ElectricCableStraight.ElectricCableStraight_C.UserConstructionScript
// ()

void AElectricCableStraight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElectricCableStraight.ElectricCableStraight_C.UserConstructionScript");

	AElectricCableStraight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElectricCableStraight.ElectricCableStraight_C.ExecuteUbergraph_ElectricCableStraight
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AElectricCableStraight_C::ExecuteUbergraph_ElectricCableStraight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElectricCableStraight.ElectricCableStraight_C.ExecuteUbergraph_ElectricCableStraight");

	AElectricCableStraight_C_ExecuteUbergraph_ElectricCableStraight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
