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

// BlueprintGeneratedClass DroppedItemGeneric_NoStasisDelete.DroppedItemGeneric_NoStasisDelete_C
// 0x0000 (0x05D0 - 0x05D0)
class ADroppedItemGeneric_NoStasisDelete_C : public ADroppedItemGenericLowQuality_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DroppedItemGeneric_NoStasisDelete.DroppedItemGeneric_NoStasisDelete_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_DroppedItemGeneric_NoStasisDelete(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
