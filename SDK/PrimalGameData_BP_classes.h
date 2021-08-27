#pragma once

// Name: ARKSotF, Version: 178.8.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalGameData_BP.PrimalGameData_BP_C
// 0x0000 (0x1AD8 - 0x1AD8)
class UPrimalGameData_BP_C : public UBASE_PrimalGameData_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalGameData_BP.PrimalGameData_BP_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalGameData_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
