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

// BlueprintGeneratedClass DroppedItemGenericLowQuality.DroppedItemGenericLowQuality_C
// 0x0008 (0x05D0 - 0x05C8)
class ADroppedItemGenericLowQuality_C : public ADroppedItemLowQuality
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x05C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DroppedItemGenericLowQuality.DroppedItemGenericLowQuality_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_DroppedItemGenericLowQuality(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
