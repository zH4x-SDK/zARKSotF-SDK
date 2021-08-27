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

// BlueprintGeneratedClass ElectricCableDiagonal.ElectricCableDiagonal_C
// 0x0000 (0x0948 - 0x0948)
class AElectricCableDiagonal_C : public AElectricCableBaseBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ElectricCableDiagonal.ElectricCableDiagonal_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ElectricCableDiagonal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
