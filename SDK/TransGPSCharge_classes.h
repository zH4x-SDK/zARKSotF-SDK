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

// BlueprintGeneratedClass TransGPSCharge.TransGPSCharge_C
// 0x0008 (0x09F0 - 0x09E8)
class ATransGPSCharge_C : public APrimalStructureExplosiveTransGPS
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x09E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TransGPSCharge.TransGPSCharge_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_TransGPSCharge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
