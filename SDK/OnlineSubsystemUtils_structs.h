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

// Enum OnlineSubsystemUtils.PartyBeaconState.EPartyReservationResult
enum class EPartyReservationResult : uint8_t
{
	EPartyReservationResult__RequestPending = 0,
	EPartyReservationResult__PartyLimitReached = 1,
	EPartyReservationResult__RequestTimedOut = 2,
	EPartyReservationResult__ReservationNotFound = 3,
	EPartyReservationResult__ReservationDenied = 4,
	EPartyReservationResult__ReservationRequestCanceled = 5,
	CheckRefireTimer               = 6,
	SimulateInstantHit             = 7,
	ByteProperty                   = 8
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystemUtils.PartyBeaconState.PlayerReservation
// 0x0028
struct FPlayerReservation
{
	struct FUniqueNetIdRepl                            UniqueID;                                                 // 0x0000(0x0010) (Transient)
	struct FString                                     ValidationStr;                                            // 0x0000(0x0010) (ZeroConstructor, Transient)
	float                                              ElapsedTime;                                              // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x0004(0x0024) MISSED OFFSET
};

// ScriptStruct OnlineSubsystemUtils.PartyBeaconState.PartyReservation
// 0x0028
struct FPartyReservation
{
	int                                                TeamNum;                                                  // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FUniqueNetIdRepl                            PartyLeader;                                              // 0x0000(0x0010) (Transient)
	TArray<struct FPlayerReservation>                  PartyMembers;                                             // 0x0000(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
