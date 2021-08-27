#pragma once

// Name: ARKSotF, Version: 178.8.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum InputCore.InputCoreTypes.ETouchType
enum class ETouchType : uint8_t
{
	ETouchType__Began              = 0,
	ETouchType__Stationary         = 1,
	ETouchType__NumTypes           = 2,
	EBabyCuddleType__PET           = 3,
	EBabyCuddleType__WALK          = 4,
	EBabyCuddleType__EBabyCuddleType_MAX = 5
};


// Enum InputCore.InputCoreTypes.EConsoleForGamepadLabels
enum class EConsoleForGamepadLabels : uint8_t
{
	EConsoleForGamepadLabels__None = 0,
	EConsoleForGamepadLabels__PS4  = 1,
	TRAVEL_Absolute                = 2,
	TRAVEL_Relative                = 3
};


// Enum InputCore.InputCoreTypes.ETouchIndex
enum class ETouchIndex : uint8_t
{
	ETouchIndex__Touch1            = 0,
	ETouchIndex__Touch3            = 1,
	ETouchIndex__Touch5            = 2,
	ETouchIndex__Touch7            = 3,
	ETouchIndex__Touch9            = 4,
	ETouchIndex__ETouchIndex_MAX   = 5
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct InputCore.InputCoreTypes.Key
// 0x0018
struct FKey
{
	struct FName                                       KeyName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
