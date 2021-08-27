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

// WidgetBlueprintGeneratedClass PlayerHUDNew.PlayerHUDNew_C
// 0x0028 (0x0400 - 0x03D8)
class UPlayerHUDNew_C : public UPlayerHUDUI
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x03D8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerHUDNew.PlayerHUDNew_C");
		return ptr;
	}


	void ExecuteUbergraph_PlayerHUDNew(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
