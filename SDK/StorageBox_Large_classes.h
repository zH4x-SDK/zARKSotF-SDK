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

// BlueprintGeneratedClass StorageBox_Large.StorageBox_Large_C
// 0x0008 (0x0B98 - 0x0B90)
class AStorageBox_Large_C : public AStructureItemContainerBaseBP_C
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0B90(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StorageBox_Large.StorageBox_Large_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_StorageBox_Large(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
