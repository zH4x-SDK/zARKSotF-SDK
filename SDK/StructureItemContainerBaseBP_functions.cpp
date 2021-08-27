
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

// Function StructureItemContainerBaseBP.StructureItemContainerBaseBP_C.UserConstructionScript
// ()

void AStructureItemContainerBaseBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureItemContainerBaseBP.StructureItemContainerBaseBP_C.UserConstructionScript");

	AStructureItemContainerBaseBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureItemContainerBaseBP.StructureItemContainerBaseBP_C.ExecuteUbergraph_StructureItemContainerBaseBP
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructureItemContainerBaseBP_C::ExecuteUbergraph_StructureItemContainerBaseBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureItemContainerBaseBP.StructureItemContainerBaseBP_C.ExecuteUbergraph_StructureItemContainerBaseBP");

	AStructureItemContainerBaseBP_C_ExecuteUbergraph_StructureItemContainerBaseBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
