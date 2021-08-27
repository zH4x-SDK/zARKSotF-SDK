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

// Class ShooterGame.AnimNotify_CustomEvent
// 0x0010 (0x0040 - 0x0030)
class UAnimNotify_CustomEvent : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.AnimNotify_CustomEvent");
		return ptr;
	}

};


// Class ShooterGame.AnimNotify_StopSound
// 0x0010 (0x0040 - 0x0030)
class UAnimNotify_StopSound : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.AnimNotify_StopSound");
		return ptr;
	}

};


// Class ShooterGame.AnimNotifyState_Custom
// 0x0010 (0x0038 - 0x0028)
class UAnimNotifyState_Custom : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.AnimNotifyState_Custom");
		return ptr;
	}

};


// Class ShooterGame.BasePlayerController
// 0x0028 (0x07C8 - 0x07A0)
class ABasePlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x07A0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.BasePlayerController");
		return ptr;
	}


	void SimulateInputKey(const struct FKey& Key, bool bPressed);
	void ServerCheat(const struct FString& Msg);
	void Say(const struct FString& Msg);
	void ClientStartOnlineGame();
	void ClientSetSpectatorCamera(const struct FVector& CameraLocation, const struct FRotator& CameraRotation);
	void ClientSendRoundEndEvent(bool bIsWinner, int ExpendedTimeInSeconds);
	void ClientGameStarted();
	void ClientEndOnlineGame();
};


// Class ShooterGame.PrimalGlobals
// 0x0140 (0x0168 - 0x0028)
class UPrimalGlobals : public UObject
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0028(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalGlobals");
		return ptr;
	}


	void OnConfirmationDialogClosed(bool bAccept);
	class ADayCycleManager* GetDayCycleManager(class UWorld* World);
	void FinishedLoadingGameMedia();
};


// Class ShooterGame.DataListProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UDataListProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.DataListProviderInterface");
		return ptr;
	}

};


// Class ShooterGame.PrimalGameData
// 0x1AB0 (0x1AD8 - 0x0028)
class UPrimalGameData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1AB0];                                    // 0x0028(0x1AB0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalGameData");
		return ptr;
	}

};


// Class ShooterGame.DataListEntryInterface
// 0x0000 (0x0028 - 0x0028)
class UDataListEntryInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.DataListEntryInterface");
		return ptr;
	}

};


// Class ShooterGame.PrimalItem
// 0x0788 (0x07B0 - 0x0028)
class UPrimalItem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x788];                                     // 0x0028(0x0788) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalItem");
		return ptr;
	}


	struct FLinearColor StaticGetColorForItemColorID(int ID);
	bool IsCooldownReadyForUse();
	bool IsActiveEquipped();
	int IncrementItemQuantity(int amount, bool bRepicateToClient, bool bDontUpdateWeight, bool bIsFromUseConsumption, bool bIsArkTributeItem, bool bIsFromCraftingConsumption);
	void EquippedBlueprintTick(float DeltaSeconds);
	void BPUsedOntoItem(class UPrimalItem* DestinationItem, int AdditionalData);
	bool BPSupportUseOntoItem(class UPrimalItem* DestinationItem);
	class UParticleSystem* BPGetFuelParticleSystemOverride(class APrimalStructure* ForStructure);
	class USoundBase* BPGetFuelAudioOverride(class APrimalStructure* ForStructure);
	bool BPCanUse(bool bIgnoreCooldown);
	bool BPCanAddToInventory(class UPrimalInventoryComponent* toInventory);
	struct FString BPAllowCrafting(class AShooterPlayerController* ForPC);
	void BlueprintUsed();
	void BlueprintUnequipped();
	void BlueprintEquipped(bool bIsFromSaveGame);
	class UPrimalItem* AddNewItem(class UClass* ItemArchetype, class UPrimalInventoryComponent* GiveToInventory, bool bEquipItem, bool bDontStack, float ItemQuality, bool bForceNoBlueprint, int quantityOverride, bool bForceBlueprint);
	void AddItemDurability(float durabilityToAdd);
};


// Class ShooterGame.ShooterHUD
// 0x0528 (0x0A38 - 0x0510)
class AShooterHUD : public AHUD
{
public:
	unsigned char                                      UnknownData00[0x528];                                     // 0x0510(0x0528) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterHUD");
		return ptr;
	}


	class APlayerController* GetPlayerOwner();
};


// Class ShooterGame.PrimalInventoryComponent
// 0x0358 (0x0460 - 0x0108)
class UPrimalInventoryComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x358];                                     // 0x0108(0x0358) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalInventoryComponent");
		return ptr;
	}


	void UpdateTribeGroupInventoryRank(unsigned char NewRank);
	void StaticDropNewItem(class AActor* forActor, class UClass* AnItemClass, float ItemQuality, bool bForceNoBlueprint, int quantityOverride, bool bForceBlueprint, class UClass* TheDroppedTemplateOverride, const struct FRotator& DroppedRotationOffset, bool bOverrideSpawnTransform, const struct FVector& LocationOverride, const struct FRotator& RotationOverride, bool bPreventDropImpulse, bool bThrow, bool bSecondaryAction, bool bSetItemDropLocation);
	void SetNextItemSpoilingID(const struct FItemNetID& NextItemID);
	void SetNextItemConsumptionID(const struct FItemNetID& NextItemID);
	void SetCraftingEnabled(bool bEnable);
	void ServerSplitItemStack(const struct FItemNetID& ItemId, int AmountToSplit);
	void ServerRemoveItemFromSlot(const struct FItemNetID& ItemId);
	void ServerMergeItemStack(const struct FItemNetID& ItemId);
	void ServerMakeRecipeItem(class APrimalStructureItemContainer* Container, const struct FItemNetID& NoteToConsume, class UClass* RecipeItemTemplate, const struct FString& CustomName, const struct FString& CustomDescription, TArray<struct FColor> CustomColors, TArray<struct FCraftingResourceRequirement> CustomRequirements);
	void ServerForceMergeItemStack(const struct FItemNetID& Item1ID, const struct FItemNetID& Item2ID);
	void ServerCraftItem(class AShooterPlayerController* ByPC, struct FItemNetID* ItemId);
	void ServerAddItemToSlot(const struct FItemNetID& ItemId, int SlotIndex);
	bool RemoveItem(bool bDoDrop, bool bSecondryAction, bool bForceRemoval, struct FItemNetID* ItemId);
	bool RemoteInventoryAllowViewing(class AShooterPlayerController* PC);
	bool RemoteInventoryAllowRepairingItems(class AShooterPlayerController* PC, bool bIgnoreEnabled);
	bool RemoteInventoryAllowCraftingItems(class AShooterPlayerController* PC, bool bIgnoreEnabled);
	bool IsRepairingAllowed();
	bool IsLocal();
	bool IsCraftingAllowed(class UPrimalItem* anItem);
	float GetTotalEquippedItemStat(TEnumAsByte<EPrimalItemStat> statType);
	int GetMaxInventoryItems(bool bIgnoreHiddenDefaultInventory);
	int GetItemTemplateQuantity(class UClass* ItemTemplate, class UPrimalItem* IgnoreItem, bool bIgnoreBlueprints, bool bCheckValidForCrafting, bool bRequireExactClassMatch);
	class UPrimalItem* GetEquippedItemOfType(TEnumAsByte<EPrimalEquipmentType> aType);
	float GetEquippedArmorRating(TEnumAsByte<EPrimalEquipmentType> EquipmentType);
	bool GenerateCrateItems(float MinQualityMultiplier, float MaxQualityMultiplier);
	void ConsumeArmorDurability(float ConsumptionAmount, bool bAllArmorTypes, TEnumAsByte<EPrimalEquipmentType> SpecificArmorType);
	void ClientItemMessageNotification(const struct FItemNetID& ItemId, TEnumAsByte<EPrimalItemMessage> ItemMessageType);
	bool BPRemoteInventoryAllowRemoveItems(class AShooterPlayerController* PC, class UPrimalItem* anItemToTransfer);
	float BPOverrideItemMinimumUseInterval(class UPrimalItem* theItem);
	void BPNotifyItemRemoved(class UPrimalItem* anItem);
	void BPNotifyItemQuantityUpdated(class UPrimalItem* anItem, int amount);
	void BPNotifyItemAdded(class UPrimalItem* anItem, bool bEquipItem);
	void BPInventoryRefresh();
	int BPIncrementItemTemplateQuantity(class UClass* ItemTemplate, int amount, bool bReplicateToClient, bool bIsBlueprint, bool bRequireExactClassMatch, bool bIsCraftingResourceConsumption, bool bIsFromUseConsumption, bool bIsArkTributeItem);
	class UPrimalItem* BPGetItemOfTemplate(class UClass* ItemTemplate, bool bOnlyInventoryItems, bool bOnlyEquippedItems, bool IgnoreItemsWithFullQuantity, bool bFavorSlotItems, bool bIsBlueprint, bool bRequiresExactClassMatch, bool bIgnoreSlotItems, bool bOnlyArkItems, bool bPreferEngram, bool bIsForCraftingConsumption);
	void BPDropInventoryDeposit(double DestroyAtTime);
	void BPCraftingFinishedNotification(class UPrimalItem* itemToBeCrafted);
	bool BPAllowUseInInventory(class UPrimalItem* theItem, bool bIsRemoteInventory, class AShooterPlayerController* ByPC);
	void BPAccessedInventory(class AShooterPlayerController* ForPC);
};


// Class ShooterGame.FogOfWar
// 0x0060 (0x0088 - 0x0028)
class UFogOfWar : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.FogOfWar");
		return ptr;
	}

};


// Class ShooterGame.PrimalLocalProfile
// 0x0118 (0x0140 - 0x0028)
class UPrimalLocalProfile : public UObject
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x0028(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalLocalProfile");
		return ptr;
	}

};


// Class ShooterGame.PrimalPlayerData
// 0x01C8 (0x01F0 - 0x0028)
class UPrimalPlayerData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1C8];                                     // 0x0028(0x01C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalPlayerData");
		return ptr;
	}


	struct FString LinkedPlayerIDString();
	struct FString GetUniqueIdString();
	class AShooterCharacter* FindCharacterForPlayer(class UWorld* inWorld);
};


// Class ShooterGame.ShooterPlayerController
// 0x05E0 (0x0DA8 - 0x07C8)
class AShooterPlayerController : public ABasePlayerController
{
public:
	unsigned char                                      UnknownData00[0x5E0];                                     // 0x07C8(0x05E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterPlayerController");
		return ptr;
	}


	void TestPhysxPerf();
	void TestNotification();
	void TestAlarmNotification(const struct FString& Title, const struct FString& Message);
	void TeleportSpectatorToPlayerCharacter(class AShooterCharacter* ToPlayerCharacter);
	void StopSpectating();
	void ShowTribeManager();
	void ShowMyAdminManager();
	void SetCheatPlayer(bool bEnable);
	void SetAdminIcon(bool bAdminIcon);
	void ServerUploadDino(class APrimalDinoCharacter* DownloadedDino);
	void ServerUploadCharaterDataToArk(class UPrimalInventoryComponent* InventoryComp);
	void ServerUnbanPlayer(const struct FString& PlayerSteamName, const struct FString& PlayerSteamID);
	void ServerTransferToRemoteInventory(class UPrimalInventoryComponent* InventoryComp, const struct FItemNetID& ItemId, bool bAlsoTryToEqup, int requestedQuantity);
	void ServerTransferFromRemoteInventory(class UPrimalInventoryComponent* InventoryComp, const struct FItemNetID& ItemId, int requestedQuantity, int ToSlotIndex, bool bEquipItem);
	void ServerTransferAllToRemoteInventory(class UPrimalInventoryComponent* InventoryComp, const struct FString& CurrentCustomFolderFilter, const struct FString& CurrentNameFilter);
	void ServerTransferAllFromRemoteInventory(class UPrimalInventoryComponent* InventoryComp, const struct FString& CurrentCustomFolderFilter, const struct FString& CurrentNameFilter);
	void ServerSuicide();
	void ServerStopSpectating();
	void ServerStayAlive();
	void ServerSpectateToPlayerByID(uint64_t PlayerId);
	void ServerSpectateLastDeathLocation();
	void ServerShowMessageOfTheDay();
	void ServerSetVRPlayer(bool bSetVRPlayer);
	void ServerSetSupressAdminIcon(bool bSuppress);
	void ServerSetSubscribedApp(int AppID);
	void ServerSetSpectatorFirstPersonViewTarget(class AActor* InTarget);
	void ServerSetMessageOfTheDay(const struct FString& Message);
	void ServerSetDamageLogOpen(bool bIsOpen);
	void ServerSetAutoJoinTribe(const struct FSOTFPartyInfo& PartyInfo);
	void ServerSendDirectMessage(const struct FString& PlayerSteamID, const struct FString& Message);
	void ServerSendChatMessage(const struct FString& ChatMessage, int SendMode);
	void ServerSendArkDataPayloadEnd(const struct FGuid& ID, TEnumAsByte<EPrimalARKTributeDataType> ArkDataType);
	void ServerSendArkDataPayloadBegin(const struct FGuid& ID, TEnumAsByte<EPrimalARKTributeDataType> ArkDataType, const struct FString& DataClass, const struct FString& TagName, const struct FString& Name, TArray<struct FString> DataStats, uint32_t ID1, uint32_t ID2);
	void ServerSendArkDataPayload(const struct FGuid& ID, TEnumAsByte<EPrimalARKTributeDataType> ArkDataType, TArray<unsigned char> DataBytes);
	void ServerSaveWorld();
	void ServerRequestTribeLog();
	void ServerRequestSetPin(class UObject* forTarget, int PinValue, bool bIsSetting);
	void ServerRequestRespawnAtPoint(int spawnPointID, int spawnRegionIndex);
	void ServerRequestRemoveWeaponClipAmmo(class UPrimalInventoryComponent* InventoryComp, const struct FItemNetID& ItemId);
	void ServerRequestRemoveItemSkin(class UPrimalInventoryComponent* InventoryComp, const struct FItemNetID& ItemId);
	void ServerRequestRemoteDropAllItems(class UPrimalInventoryComponent* InventoryComp, const struct FString& CurrentCustomFolderFilter, const struct FString& CurrentNameFilter);
	void ServerRequestPlaceStructure(int StructureIndex, const struct FVector& BuildLocation, const struct FRotator& BuildRotation, const struct FRotator& PlayerViewRotation, class APawn* AttachToPawn, class APrimalDinoCharacter* DinoCharacter, const struct FName& BoneName, const struct FItemNetID& PlaceUsingItemID, bool bSnapped, bool bIsCheat, bool bIsFlipped);
	void ServerRequestLevelUp(class UPrimalCharacterStatusComponent* forStatusComp, TEnumAsByte<EPrimalCharacterStatusValue> ValueType);
	void ServerRequestInventoryUseItemWithItem(class UPrimalInventoryComponent* InventoryComp, const struct FItemNetID& ItemID1, const struct FItemNetID& ItemID2, int AdditionalData);
	void ServerRequestInventoryUseItemWithActor(class AActor* anActor, class UPrimalInventoryComponent* InventoryComp, const struct FItemNetID& ItemID1, int AdditionalData);
	void ServerRequestInventoryUseItem(class UPrimalInventoryComponent* InventoryComp, const struct FItemNetID& ItemId, bool bEntireStack);
	void ServerRequestInventorySwapItems(class UPrimalInventoryComponent* InventoryComp, const struct FItemNetID& ItemID1, const struct FItemNetID& ItemID2);
	void ServerRequestFastTravelToPoint(int fromSpawnPointID, int spawnPointID);
	void ServerRequestDropAllItems(const struct FString& CurrentCustomFolderFilter, const struct FString& CurrentNameFilter);
	void ServerRequestCreateNewPlayerWithArkData(TArray<unsigned char> PlayerArkDataBytes);
	void ServerRequestActorItems(class UPrimalInventoryComponent* forInventory, bool bInventoryItems, bool bIsFirstSpawn);
	void ServerRepeatMultiUse(class UObject* ForObject, int UseIndex);
	void ServerRepairItem(class UPrimalInventoryComponent* InventoryComp, const struct FItemNetID& ItemId);
	void ServerRemoveSteamItemSucceeded();
	void ServerRemoveSteamItem(uint32_t ItemdDefId);
	void ServerRemovePawnItem(const struct FItemNetID& ItemId, bool bSecondryAction);
	void ServerRemovePassenger();
	void ServerRemoveAllSteamInventory();
	void ServerReleaseSeatingStructure();
	void ServerRefreshSteamInventory();
	void ServerRefreshCosmeticsSteamInventory();
	void ServerReadMessageOFTheDay();
	void ServerPaint(class UStructurePaintingComponent* Structure, TArray<struct FPaintItem> Paints, bool bLastBatch, bool bFromLoadFile, bool ReplicateToClients);
	void ServerNotifyEditText(const struct FString& TextToUse, bool checkedBox, class UClass* ForObjectClass, uint32_t ExtraID1, uint32_t ExtraID2, class UObject* ForObject);
	void ServerMultiUse(class UObject* ForObject, int UseIndex);
	void ServerLoadWorld();
	void ServerLoadArkInventoryItems(TArray<struct FItemNetInfo> ArkInventoryItems);
	void ServerListPlayers();
	void ServerKickPlayer(const struct FString& PlayerSteamName, const struct FString& PlayerSteamID);
	void ServerInventoryClearCraftQueue(class UPrimalInventoryComponent* InventoryComp);
	void ServerGiveItem(int ArchIndex);
	void ServerGetMessageOfTheDay();
	void ServerGetCosmeticsItems(bool bSuccess);
	void ServerEquipToRemoteInventory(class UPrimalInventoryComponent* InventoryComp, const struct FItemNetID& ItemId);
	void ServerEquipPawnItem(const struct FItemNetID& ItemId);
	void ServerDropFromRemoteInventory(class UPrimalInventoryComponent* InventoryComp, const struct FItemNetID& ItemId);
	void ServerDisallowPlayerToJoinNoCheck(const struct FString& PlayerId);
	void ServerDeleteItemFromCustomFolder(class UPrimalInventoryComponent* forInventory, const struct FString& CFolderName, int InventoryCompType, const struct FItemNetID& ItemId);
	void ServerDeleteCustomFolder(class UPrimalInventoryComponent* forInventory, const struct FString& CFolderName, int InventoryCompType);
	void ServerCycleToClosestEnemies(bool bIsFirstPersonSpectating);
	void ServerCycleSpectator(bool bNext);
	void ServerCraftItem(class UPrimalInventoryComponent* InventoryComp, const struct FItemNetID& ItemId);
	void ServerCheckUnfreeze();
	void ServerBanPlayer(const struct FString& PlayerSteamName, const struct FString& PlayerSteamID);
	void ServerAutoCreateTribe(const struct FSOTFPartyInfo& PartyInfo);
	void ServerAllowPlayerToJoinNoCheck(const struct FString& PlayerId);
	void ServerAddItemToCustomFolder(class UPrimalInventoryComponent* forInventory, const struct FString& CFolderName, int InventoryCompType, const struct FItemNetID& ItemId);
	void ServerAddItemToArkInventory(class UPrimalInventoryComponent* InventoryComp, const struct FItemNetID& ItemId);
	void ServerAddItemFromArkInventory(class UPrimalInventoryComponent* InventoryComp, const struct FItemNetID& ItemId);
	void ServerActorViewRemoteInventory(class UPrimalInventoryComponent* InventoryComp);
	void ServerActorCloseRemoteInventory(class UPrimalInventoryComponent* InventoryComp);
	void ServerAcceptTribeInvite();
	void SendAlarmNotification(const struct FString& SteamID, const struct FString& Title, const struct FString& Message);
	bool SameLinkedId(int64_t Value);
	void RPCStayAlive();
	void ResetDodgePunishment();
	void RequestSpectator(const struct FString& InSpectatorPass);
	void RemoveItemSucceeded();
	void PrintColors();
	void OnToggleInGameMenu();
	void OnServerRefreshSteamInventoryForRemoveFinished(bool bSuccess, uint64_t SteamID);
	void OnServerRefreshSteamInventoryFinished(bool bSuccess, uint64_t SteamID);
	void OnServerRefreshCosmeticsSteamInventoryFinished(bool bSuccess, uint64_t SteamID);
	void OnRefreshSteamInventoryToCheckConsumeFinished(bool bSuccess, uint64_t SteamID);
	void OnRefreshSteamInventoryFinished(bool bSuccess, uint64_t SteamID);
	void OnEnableSpectator();
	void OnDisableSpectator();
	void OnConsumeItemFinished(bool bSuccess, uint64_t SteamID);
	void OnAddItemFinished(bool bSuccess, TArray<uint64_t> SteamItemUserIDs, uint64_t SteamID, uint32_t SteamDefID, uint32_t AppID);
	void NotifyTribeWarStatus(const struct FString& EnemyTribeString, int StatusType);
	struct FString LinkedPlayerIDString();
	bool IsSpectator();
	bool IsHudVisible();
	void InitCharacterPainting(class APrimalCharacter* Char);
	void HideRiders(bool bDoHide);
	bool GiveSlotItemNum(int masterIndexNum, int slotNum, int quantityOverride);
	bool GiveSlotItem(const struct FString& blueprintPath, int slotNum, int quantityOverride);
	void GiveColors(int Quantity);
	int GetTribeID();
	class AActor* GetSpectatorOrbitTarget();
	class AActor* GetSpectatorFirstPersonTarget();
	struct FString GetPlayerCharacterName();
	class AShooterCharacter* GetPlayerCharacter();
	int GetLinkedPlayerID();
	void ForfeitMatch(bool AFK);
	void Forfeit();
	void FlushLevelStreaming();
	void EnableSpectator();
	void DoServerCheckUnfreeze();
	void DoCrash();
	void DebugStructures();
	void ClientUsedActorItem(class UPrimalInventoryComponent* forInventory, const struct FItemNetID& ItemId);
	void ClientUploadDino(class APrimalDinoCharacter* DownloadedDino);
	void ClientUpdateItemQuantity(class UPrimalInventoryComponent* forInventory, const struct FItemNetID& ItemId, int ItemQuantity);
	void ClientUpdateItemDurability(class UPrimalInventoryComponent* forInventory, const struct FItemNetID& ItemId, float ItemDurability);
	void ClientUpdateInventoryCraftQueue(class UPrimalInventoryComponent* forInventory, TArray<struct FItemCraftQueueEntry> CraftQueueEntries);
	void ClientUpdateActorTransform(class AActor* forActor, const struct FVector& TheLocation, const struct FRotator& TheRotation, const struct FVector& TheVelocity);
	void ClientUnlockAchievement(const struct FString& AchievementID);
	void ClientTeleportSpectator(const struct FVector& Location, uint64_t PlayerId, bool bCanSpectateDeadPlayers, bool bSpectatingToLoc, const struct FVector& camDir, bool bForceDisableFirstPersonSpectator);
	void ClientSwapActorItems(class UPrimalInventoryComponent* forInventory, const struct FItemNetID& ItemID1, const struct FItemNetID& ItemID2);
	void ClientStopAFKCountDown();
	void ClientStartReceivingTribeLog();
	void ClientStartReceivingActorItems(class UPrimalInventoryComponent* forInventory, bool bEquippedItems);
	void ClientStartAFKCountDown(float CountDownTime);
	void ClientShowSpawnUI(float Delay);
	void ClientShowPaintingUI(class UObject* ObjectToPaint);
	void ClientShowCosmeticsRewardPopup(int SteamItemID);
	void ClientShowCharacterCreationUI();
	void ClientServerSOTFNotificationCustom(const struct FString& MessageText, const struct FLinearColor& MessageColor, float DisplayScale, float DisplayTime, class UTexture2D* MessageIcon, class USoundBase* SoundToPlay, bool bCanUseChatNotification);
	void ClientServerSOTFNotification(TEnumAsByte<ESTOFNotificationType> NotificationType, const struct FString& MessageText, const struct FLinearColor& MessageColor, float DisplayScale, float DisplayTime, class UTexture2D* MessageIcon, class USoundBase* SoundToPlay, bool bLastPlayer, const struct FString& TribeName, int TribeID, TArray<struct FString> PlayerNames, const struct FString& DeathReason, TArray<struct FPrimalPlayerCharacterConfigStructReplicated> DeadPlayersData, bool bCanUseChatNotification, bool bForceScreenMessage);
	void ClientServerNotificationSingle(const struct FString& MessageText, const struct FLinearColor& MessageColor, float DisplayScale, float DisplayTime, class UTexture2D* MessageIcon, class USoundBase* SoundToPlay, int MessageTypeID, bool bCanUseChatNotification);
	void ClientServerNotification(const struct FString& MessageText, const struct FLinearColor& MessageColor, float DisplayScale, float DisplayTime, class UTexture2D* MessageIcon, class USoundBase* SoundToPlay, bool bCanUseChatNotification);
	void ClientServerChatMessage(const struct FString& MessageText, const struct FLinearColor& MessageColor, bool bIsBold);
	void ClientServerChatDirectMessage(const struct FString& MessageText, const struct FLinearColor& MessageColor, bool bIsBold);
	void ClientSendFolderData(class UPrimalInventoryComponent* forInventory, TArray<struct FServerCustomFolder> ServerCustomFolder);
	void ClientSendArkDataPayloadEnd(const struct FGuid& ID, TEnumAsByte<EPrimalARKTributeDataType> ArkDataType);
	void ClientSendArkDataPayloadBegin(const struct FGuid& ID, TEnumAsByte<EPrimalARKTributeDataType> ArkDataType, const struct FString& DataClass, const struct FString& TagName, const struct FString& Name, TArray<struct FString> DataStats, uint32_t ID1, uint32_t ID2);
	void ClientSendArkDataPayload(const struct FGuid& ID, TEnumAsByte<EPrimalARKTributeDataType> ArkDataType, TArray<unsigned char> DataBytes);
	void ClientResetLastPartyData();
	void ClientRemoveItemFromSteamInventory(TArray<uint64_t> ItemSteamUserID, int Quantity);
	void ClientRemoveItemFromArk(class UPrimalInventoryComponent* forInventory, const struct FItemNetID& RemovedItemID);
	void ClientRemoveActorItem(class UPrimalInventoryComponent* forInventory, const struct FItemNetID& ItemId);
	void ClientRefreshSteamInventoryFinished(bool bSuccess);
	void ClientReceiveTribeLog(const struct FString& LogString);
	void ClientPlayLocalSound(class USoundBase* aSound);
	void ClientPlayHitMarkerStructureAlly();
	void ClientPlayHitMarkerStructure();
	void ClientPlayHitMarkerDinoAlly();
	void ClientPlayHitMarkerDino();
	void ClientPlayHitMarkerCharacterAlly();
	void ClientPlayHitMarkerCharacter();
	void ClientOpenMainMenu();
	void ClientNotifyTribeXP(float HowMuch);
	void ClientNotifyTorpidityIncrease();
	void ClientNotifyTamedDino(class UClass* DinoClass);
	void ClientNotifySummonedDino(class UClass* DinoClass);
	void ClientNotifyRemotePlayerDeath(const struct FString& PlayerName, const struct FString& AttackerName);
	void ClientNotifyPlayerKill(class AShooterCharacter* PlayerPawn, class APawn* VictimPawn);
	void ClientNotifyPlayerDeathReason(const struct FString& ReasonString);
	void ClientNotifyPlayerDeath(class APawn* InstigatingPawn);
	void ClientNotifyPaintFinished(bool bSuccess);
	void ClientNotifyMessageOfTheDay(const struct FString& Message, float timeToDisplay);
	void ClientNotifyListenServerOutOfRange();
	void ClientNotifyLevelUp(class APrimalCharacter* ForChar, int NewLevel);
	void ClientNotifyHitHarvest();
	void ClientNotifyEditText(class UClass* ForObjectClass, uint32_t ExtraID1, uint32_t ExtraID2, class UObject* ForObject);
	void ClientNotifyDinoKill(class APrimalDinoCharacter* InstigatingPawn, class APawn* VictimPawn);
	void ClientNotifyDinoDeath(const struct FString& DinoName, const struct FString& AttackerName, bool bIsVehicle);
	void ClientNotifyDefeatedDino(class UClass* DinoClass);
	void ClientNotifyCantHitHarvest();
	void ClientNotifyCantHarvest();
	void ClientNotifyAdmin();
	void ClientLoadArkItems(class UPrimalInventoryComponent* forInventory, TArray<struct FItemNetInfo> itemInfos);
	void ClientInsertActorItem(class UPrimalInventoryComponent* forInventory, const struct FItemNetInfo& itemInfo, const struct FItemNetID& InsertAfterItemID);
	void ClientHandleCosmeticsItems(bool bSuccess, TArray<struct FItemNetInfo> itemsInfo, bool GiveCosmetics);
	void ClientGetMessageOfTheDay(const struct FString& Message);
	void ClientFinishedReceivingActorItems(class UPrimalInventoryComponent* forInventory, bool bEquippedItems);
	void ClientFinishedLoadArkItems(class UPrimalInventoryComponent* forInventory);
	void ClientFailedRemoveSaddle();
	void ClientEndReceivingTribeLog();
	void ClientDoMultiUse(class UObject* ForObject, int UseIndex);
	void ClientCycleToClosestEnemies(const struct FVector& NewLoc, const struct FVector& camDir);
	void ClientCollectedAchievementItem(class UClass* ItemClass);
	void ClientChatMessage(const struct FChatMessage& Chat);
	void ClientAddItemToArk(class UPrimalInventoryComponent* forInventory, const struct FItemNetInfo& itemInfo, bool bFromLoad);
	void ClientAddFolderToInventoryComponent(class UPrimalInventoryComponent* forInventory, const struct FString& NewCustomFolderName, int InventoryCompType);
	void ClientAddFloatingText(const struct FVector_NetQuantize& AtLocation, const struct FString& FloatingTextString, const struct FColor& FloatingTextColor, float ScaleX, float ScaleY, float TextLifeSpan, const struct FVector& TextVelocity, float MinScale, float FadeInTime, float FadeOutTime);
	void ClientAddFloatingDamageText(const struct FVector_NetQuantize& AtLocation, int DamageAmount, int FromTeamID);
	void ClientAddEntryToCombatLogBox(const struct FString& DamageString, class UTexture2D* DamageIcon, TEnumAsByte<ESoTFDamageType> DamageType, uint64_t DamagedPlayerID);
	void ClientAddActorItem(class UPrimalInventoryComponent* forInventory, const struct FItemNetInfo& itemInfo, bool bEquipItem);
	void CheckRequestSpectator(const struct FString& InSpectatorPass);
	void CheckForPlayerInventory();
	void CheckforOrbiting();
	void CheckCheatsPassword(const struct FString& pass);
	void Cheat(const struct FString& Msg);
	void AutoCycle(float Duration);
	bool AllowTribeGroupPermission(TEnumAsByte<ETribeGroupPermission> TribeGroupPermission, class UObject* OnObject);
	void AdminCheat(const struct FString& Msg);
};


// Class ShooterGame.BiomeZoneVolume
// 0x0070 (0x04D0 - 0x0460)
class ABiomeZoneVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0460(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.BiomeZoneVolume");
		return ptr;
	}


	void OnEndOverlap(class AActor* Actor);
	void OnBeginOverlap(class AActor* Actor);
	bool IsPointUnderwater(class UWorld* ForWorld, const struct FVector& AtPoint, bool bFastPath, float MinimumWaterHeight);
	class ABiomeZoneVolume* GetBiomeZoneVolume(class UWorld* World, const struct FVector& Location);
};


// Class ShooterGame.BTService_FindTarget
// 0x0008 (0x0098 - 0x0090)
class UBTService_FindTarget : public UBTService_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.BTService_FindTarget");
		return ptr;
	}

};


// Class ShooterGame.BTService_UpdateAggro
// 0x0000 (0x0068 - 0x0068)
class UBTService_UpdateAggro : public UBTService
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.BTService_UpdateAggro");
		return ptr;
	}

};


// Class ShooterGame.BTTask_AttackTarget
// 0x0000 (0x0058 - 0x0058)
class UBTTask_AttackTarget : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.BTTask_AttackTarget");
		return ptr;
	}

};


// Class ShooterGame.BTTask_GetRandomWanderDestination
// 0x0020 (0x00A0 - 0x0080)
class UBTTask_GetRandomWanderDestination : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0080(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.BTTask_GetRandomWanderDestination");
		return ptr;
	}

};


// Class ShooterGame.CustomActorList
// 0x0010 (0x0438 - 0x0428)
class ACustomActorList : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0428(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.CustomActorList");
		return ptr;
	}


	void DestroyActors();
};


// Class ShooterGame.DraggableObjectInterface
// 0x0000 (0x0028 - 0x0028)
class UDraggableObjectInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.DraggableObjectInterface");
		return ptr;
	}

};


// Class ShooterGame.CustomCanvasWidget
// 0x0050 (0x0448 - 0x03F8)
class UCustomCanvasWidget : public UButton
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x03F8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.CustomCanvasWidget");
		return ptr;
	}


	void OnDraggedClickedEventObject__DelegateSignature(class UWidget* draggeddWidget);
};


// Class ShooterGame.DataListEntryButton
// 0x00D0 (0x0518 - 0x0448)
class UDataListEntryButton : public UCustomCanvasWidget
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0448(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.DataListEntryButton");
		return ptr;
	}


	void ClickedButton(class UWidget* clickedWidget);
};


// Class ShooterGame.AdminPlayerInfoEntryButton
// 0x0050 (0x0568 - 0x0518)
class UAdminPlayerInfoEntryButton : public UDataListEntryButton
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0518(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.AdminPlayerInfoEntryButton");
		return ptr;
	}

};


// Class ShooterGame.AllPaintingsEntryButton
// 0x0030 (0x0548 - 0x0518)
class UAllPaintingsEntryButton : public UDataListEntryButton
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0518(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.AllPaintingsEntryButton");
		return ptr;
	}

};


// Class ShooterGame.AllPlayersEntryButton
// 0x0048 (0x0560 - 0x0518)
class UAllPlayersEntryButton : public UDataListEntryButton
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0518(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.AllPlayersEntryButton");
		return ptr;
	}

};


// Class ShooterGame.CheatFunctionInfoEntryButton
// 0x0038 (0x0550 - 0x0518)
class UCheatFunctionInfoEntryButton : public UDataListEntryButton
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0518(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.CheatFunctionInfoEntryButton");
		return ptr;
	}

};


// Class ShooterGame.DataListEntryButton_PrimalFolder
// 0x0048 (0x0560 - 0x0518)
class UDataListEntryButton_PrimalFolder : public UDataListEntryButton
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0518(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.DataListEntryButton_PrimalFolder");
		return ptr;
	}

};


// Class ShooterGame.DataListEntryButton_PrimalItem
// 0x0090 (0x05A8 - 0x0518)
class UDataListEntryButton_PrimalItem : public UDataListEntryButton
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0518(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.DataListEntryButton_PrimalItem");
		return ptr;
	}

};


// Class ShooterGame.HostSessionEntryButton
// 0x0058 (0x0570 - 0x0518)
class UHostSessionEntryButton : public UDataListEntryButton
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0518(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.HostSessionEntryButton");
		return ptr;
	}

};


// Class ShooterGame.LobbyMemberEntryButton
// 0x0050 (0x0568 - 0x0518)
class ULobbyMemberEntryButton : public UDataListEntryButton
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0518(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.LobbyMemberEntryButton");
		return ptr;
	}

};


// Class ShooterGame.OnlineLobbyEntryButton
// 0x01C0 (0x06D8 - 0x0518)
class UOnlineLobbyEntryButton : public UDataListEntryButton
{
public:
	unsigned char                                      UnknownData00[0x1C0];                                     // 0x0518(0x01C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.OnlineLobbyEntryButton");
		return ptr;
	}

};


// Class ShooterGame.OnlineSessionEntryButton
// 0x01C0 (0x06D8 - 0x0518)
class UOnlineSessionEntryButton : public UDataListEntryButton
{
public:
	unsigned char                                      UnknownData00[0x1C0];                                     // 0x0518(0x01C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.OnlineSessionEntryButton");
		return ptr;
	}

};


// Class ShooterGame.ServerInfoInfoEntryButton
// 0x0048 (0x0560 - 0x0518)
class UServerInfoInfoEntryButton : public UDataListEntryButton
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0518(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ServerInfoInfoEntryButton");
		return ptr;
	}

};


// Class ShooterGame.TopRankedDataListButton
// 0x0040 (0x0558 - 0x0518)
class UTopRankedDataListButton : public UDataListEntryButton
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0518(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.TopRankedDataListButton");
		return ptr;
	}

};


// Class ShooterGame.DraggedDecoratorWidget
// 0x0018 (0x0460 - 0x0448)
class UDraggedDecoratorWidget : public UCustomCanvasWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0448(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.DraggedDecoratorWidget");
		return ptr;
	}

};


// Class ShooterGame.HUDOVerlayWidget
// 0x0048 (0x0490 - 0x0448)
class UHUDOVerlayWidget : public UCustomCanvasWidget
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0448(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.HUDOVerlayWidget");
		return ptr;
	}

};


// Class ShooterGame.ProgressBarWidget
// 0x00F8 (0x0540 - 0x0448)
class UProgressBarWidget : public UCustomCanvasWidget
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0448(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ProgressBarWidget");
		return ptr;
	}

};


// Class ShooterGame.SpawnMapWidget
// 0x0058 (0x04A0 - 0x0448)
class USpawnMapWidget : public UCustomCanvasWidget
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0448(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.SpawnMapWidget");
		return ptr;
	}

};


// Class ShooterGame.StoreItemWidget
// 0x00C0 (0x0508 - 0x0448)
class UStoreItemWidget : public UCustomCanvasWidget
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0448(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.StoreItemWidget");
		return ptr;
	}

};


// Class ShooterGame.UI_PreviewWidget
// 0x0128 (0x0570 - 0x0448)
class UUI_PreviewWidget : public UCustomCanvasWidget
{
public:
	unsigned char                                      UnknownData00[0x128];                                     // 0x0448(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_PreviewWidget");
		return ptr;
	}

};


// Class ShooterGame.DamageVolumeBase
// 0x0030 (0x0490 - 0x0460)
class ADamageVolumeBase : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0460(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.DamageVolumeBase");
		return ptr;
	}


	void OnEndOverlap(class AActor* Actor);
	void OnBeginOverlap(class AActor* Actor);
};


// Class ShooterGame.DamageVolumeSwamp
// 0x0008 (0x0498 - 0x0490)
class ADamageVolumeSwamp : public ADamageVolumeBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0490(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.DamageVolumeSwamp");
		return ptr;
	}

};


// Class ShooterGame.DataListEntryWidget
// 0x00B0 (0x0290 - 0x01E0)
class UDataListEntryWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x01E0(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.DataListEntryWidget");
		return ptr;
	}


	void OnDraggedClickedEventObject(class UWidget* draggeddWidget);
	void InitializeMeDefaults();
	class UDataListEntryButton* GetDataListButton();
};


// Class ShooterGame.DataListPanel
// 0x0130 (0x0708 - 0x05D8)
class UDataListPanel : public UScrollBox
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x05D8(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.DataListPanel");
		return ptr;
	}

};


// Class ShooterGame.DayCycleAmbientSound
// 0x0030 (0x0458 - 0x0428)
class ADayCycleAmbientSound : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0428(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.DayCycleAmbientSound");
		return ptr;
	}

};


// Class ShooterGame.HUDInterface
// 0x0000 (0x0028 - 0x0028)
class UHUDInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.HUDInterface");
		return ptr;
	}

};


// Class ShooterGame.DayCycleManager
// 0x00A0 (0x04C8 - 0x0428)
class ADayCycleManager : public AInfo
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0428(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.DayCycleManager");
		return ptr;
	}


	bool IsDaytime();
};


// Class ShooterGame.DestroyedMeshActor
// 0x0018 (0x0460 - 0x0448)
class ADestroyedMeshActor : public ADestructibleActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0448(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.DestroyedMeshActor");
		return ptr;
	}


	void SetNoCollisionProfile();
};


// Class ShooterGame.DroppedItem
// 0x01A0 (0x05C8 - 0x0428)
class ADroppedItem : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x0428(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.DroppedItem");
		return ptr;
	}


	void ForceSleep();
};


// Class ShooterGame.DroppedItemEgg
// 0x0038 (0x0600 - 0x05C8)
class ADroppedItemEgg : public ADroppedItem
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x05C8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.DroppedItemEgg");
		return ptr;
	}


	void NetSpawnDinoEmitter();
};


// Class ShooterGame.DroppedItemLowQuality
// 0x0000 (0x05C8 - 0x05C8)
class ADroppedItemLowQuality : public ADroppedItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.DroppedItemLowQuality");
		return ptr;
	}

};


// Class ShooterGame.DroppedItemTorch
// 0x0018 (0x05E0 - 0x05C8)
class ADroppedItemTorch : public ADroppedItemLowQuality
{
public:
	unsigned char                                      UnknownData00[0xCAE];                                     // 0x05C8(0x0CAE) MISSED OFFSET
	bool                                               FireIsOn;                                                 // 0x1276(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.DroppedItemTorch");
		return ptr;
	}


	void OnRep_FireIsOn();
};


// Class ShooterGame.FadingDestructibleActor
// 0x0050 (0x0498 - 0x0448)
class AFadingDestructibleActor : public ADestructibleActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0448(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.FadingDestructibleActor");
		return ptr;
	}


	void SetupFade();
};


// Class ShooterGame.HUDStatusBarsWidget
// 0x0120 (0x0300 - 0x01E0)
class UHUDStatusBarsWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x01E0(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.HUDStatusBarsWidget");
		return ptr;
	}

};


// Class ShooterGame.KeyInputWidget
// 0x0028 (0x04A8 - 0x0480)
class UKeyInputWidget : public UEditableText
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0480(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.KeyInputWidget");
		return ptr;
	}

};


// Class ShooterGame.MatineeCapture
// 0x0030 (0x0458 - 0x0428)
class AMatineeCapture : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0428(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.MatineeCapture");
		return ptr;
	}

};


// Class ShooterGame.NPCSpawnEntriesContainer
// 0x0028 (0x0050 - 0x0028)
class UNPCSpawnEntriesContainer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.NPCSpawnEntriesContainer");
		return ptr;
	}

};


// Class ShooterGame.NPCZoneManager
// 0x00F8 (0x0520 - 0x0428)
class ANPCZoneManager : public AInfo
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0428(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.NPCZoneManager");
		return ptr;
	}


	TArray<class APrimalDinoCharacter*> StaticSpawnNPCs(class UObject* WorldContext, class ANPCZoneManager* AtZoneManager, class UClass* TheNPCSpawnEntries, const struct FVector& AtSpawnPoint, const struct FRotator& AtRotation, int UseSpawnVolumeIndex);
};


// Class ShooterGame.NPCZoneSpawnVolume
// 0x0000 (0x0460 - 0x0460)
class ANPCZoneSpawnVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.NPCZoneSpawnVolume");
		return ptr;
	}

};


// Class ShooterGame.NPCZoneVolume
// 0x0040 (0x04A0 - 0x0460)
class ANPCZoneVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0460(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.NPCZoneVolume");
		return ptr;
	}


	void OnEndOverlap(class AActor* Actor);
	void OnBeginOverlap(class AActor* Actor);
};


// Class ShooterGame.ObjectSerializer
// 0x0000 (0x0028 - 0x0028)
class UObjectSerializer : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ObjectSerializer");
		return ptr;
	}

};


// Class ShooterGame.PaintingTexture
// 0x0038 (0x0060 - 0x0028)
class UPaintingTexture : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PaintingTexture");
		return ptr;
	}

};


// Class ShooterGame.PaintingCache
// 0x00C0 (0x00E8 - 0x0028)
class UPaintingCache : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0028(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PaintingCache");
		return ptr;
	}

};


// Class ShooterGame.PaintingStreamingComponent
// 0x0030 (0x0138 - 0x0108)
class UPaintingStreamingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0108(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PaintingStreamingComponent");
		return ptr;
	}


	void ServerSendNextChunk(class UStructurePaintingComponent* PaintingComponent);
	void ServerRequestPaintingStream(class UStructurePaintingComponent* PaintingComponent);
	void ServerCancelPaintingStream(class UStructurePaintingComponent* PaintingComponent);
	void ClientRecieveChunk(class UStructurePaintingComponent* PaintingComponent, TArray<unsigned char> Bytes);
	void ClientEndStreamingJob(class UStructurePaintingComponent* PaintingComponent);
	void ClientCancelSteamingJob(class UStructurePaintingComponent* PaintingComponent);
	void ClientBeginStreamingJob(class UStructurePaintingComponent* PaintingComponent, int Revision);
};


// Class ShooterGame.PreviewImage
// 0x00C0 (0x00E8 - 0x0028)
class UPreviewImage : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0028(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PreviewImage");
		return ptr;
	}

};


// Class ShooterGame.PrimalAIState
// 0x0038 (0x0060 - 0x0028)
class UPrimalAIState : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalAIState");
		return ptr;
	}


	void TickAnimationStateEvent(float DeltaTime, const struct FName& CustomEventName, TEnumAsByte<ENetRole> Role);
	void TickAnimationState(float DeltaTime, const struct FName& CustomEventName, TEnumAsByte<ENetRole> Role);
	void StartAnimationStateEvent(const struct FName& CustomEventName, TEnumAsByte<ENetRole> Role);
	void StartAnimationState(const struct FName& CustomEventName, TEnumAsByte<ENetRole> Role);
	bool ShouldSkipRangeCheckEvent();
	bool ShouldSkipIntervalCheckEvent();
	void SetLastAttackTime();
	void SetInAnimationStateActive(bool Value);
	void OnTickEvent(float DeltaSeconds);
	void OnTick(float DeltaSeconds);
	void OnEndEvent();
	void OnEnd();
	void OnChildStateEndedEvent(class UPrimalAIState* PrimalAIState);
	bool OnCanUseStateEvent();
	void OnBeginEvent(class UPrimalAIState* InParentState);
	void OnBegin(class UPrimalAIState* InParentState);
	void EndAnimationStateEvent(const struct FName& CustomEventName, TEnumAsByte<ENetRole> Role);
	void EndAnimationState(const struct FName& CustomEventName, TEnumAsByte<ENetRole> Role);
	bool CanUseState();
};


// Class ShooterGame.PrimalAIStateDinoMeleeState
// 0x0018 (0x0078 - 0x0060)
class UPrimalAIStateDinoMeleeState : public UPrimalAIState
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0060(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalAIStateDinoMeleeState");
		return ptr;
	}

};


// Class ShooterGame.PrimalAIStateDinoFlyerGrab
// 0x0008 (0x0080 - 0x0078)
class UPrimalAIStateDinoFlyerGrab : public UPrimalAIStateDinoMeleeState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalAIStateDinoFlyerGrab");
		return ptr;
	}

};


// Class ShooterGame.PrimalAIStateDinoRangedState
// 0x0028 (0x0088 - 0x0060)
class UPrimalAIStateDinoRangedState : public UPrimalAIState
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0060(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalAIStateDinoRangedState");
		return ptr;
	}

};


// Class ShooterGame.PrimalAIStateDinoSpiderMinions
// 0x0078 (0x00D8 - 0x0060)
class UPrimalAIStateDinoSpiderMinions : public UPrimalAIState
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0060(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalAIStateDinoSpiderMinions");
		return ptr;
	}

};


// Class ShooterGame.PrimalAIStateDinoSpiderRangedAcidState
// 0x0018 (0x0078 - 0x0060)
class UPrimalAIStateDinoSpiderRangedAcidState : public UPrimalAIState
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0060(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalAIStateDinoSpiderRangedAcidState");
		return ptr;
	}

};


// Class ShooterGame.PrimalAIStateDinoSpiderRangedWebState
// 0x0020 (0x0080 - 0x0060)
class UPrimalAIStateDinoSpiderRangedWebState : public UPrimalAIState
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0060(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalAIStateDinoSpiderRangedWebState");
		return ptr;
	}

};


// Class ShooterGame.PrimalBuffPersistentData
// 0x0008 (0x0030 - 0x0028)
class UPrimalBuffPersistentData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalBuffPersistentData");
		return ptr;
	}

};


// Class ShooterGame.PrimalCableComponent
// 0x0050 (0x0640 - 0x05F0)
class UPrimalCableComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x05F0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalCableComponent");
		return ptr;
	}

};


// Class ShooterGame.TargetableInterface
// 0x0000 (0x0028 - 0x0028)
class UTargetableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.TargetableInterface");
		return ptr;
	}


	class UObject* ToUObject();
};


// Class ShooterGame.PrimalCharacter
// 0x08C0 (0x0ED0 - 0x0610)
class APrimalCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0xD4A];                                     // 0x0610(0x0D4A) MISSED OFFSET
	unsigned char                                      UnknownData01 : 4;                                        // 0x135A(0x0001)
	unsigned char                                      bIsDead : 1;                                              // 0x135A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditConst, SaveGame)
	unsigned char                                      UnknownData02 : 3;                                        // 0x135A(0x0001)
	unsigned char                                      bIsSleeping : 1;                                          // 0x135B(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, Transient, SaveGame)
	TWeakObjectPtr<class APrimalDinoCharacter>         MountedDino;                                              // 0x135C(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	class UStructurePaintingComponent*                 PaintingComponent;                                        // 0x135D(0x0008) (ExportObject, Net, ZeroConstructor, InstancedReference, SaveGame, IsPlainOldData)
	TArray<struct FVector_NetQuantize>                 ReplicatedRagdollPositions;                               // 0x135E(0x0010) (Net, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalCharacter");
		return ptr;
	}


	void UpdateTickSetting();
	float TakeDamage(float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
	void StopAnimEx(class UAnimMontage* AnimMontage, bool bReplicate, bool bReplicateToOwner, float BlendOutTime);
	void StartForceSkelUpdate(float ForTime, bool bForceUpdateMesh, bool bServerOnly);
	void SleepBodies();
	void SetStatusStateDefinition(TEnumAsByte<EPrimalCharacterStatusState> StatusStateType, bool bUsed, int StatusValueThresholdIndex);
	void SetDeathByRing();
	void ServerTryPoop();
	void ServerSetRunning(bool bNewRunning);
	void ServerRequestDrag();
	void ServerGiveDefaultWeapon();
	void ServerDinoOrder(class APrimalDinoCharacter* aDino, TEnumAsByte<EDinoTamedOrder> OrderType);
	void ServerCallStayOne(class APrimalDinoCharacter* ForDinoChar);
	void ServerCallStay();
	void ServerCallPassive();
	void ServerCallNeutral();
	void ServerCallFollowOne(class APrimalDinoCharacter* ForDinoChar);
	void ServerCallFollowDistanceCycleOne(class APrimalDinoCharacter* ForDinoChar);
	void ServerCallFollow();
	void ServerCallAttackTarget(class AActor* TheTarget);
	void ServerCallAggressive();
	void PrimalCharacterDied__DelegateSignature(class APrimalCharacter* DiedCharacter);
	void PlayHitEffectRadial(float DamageTaken, const struct FRadialDamageEvent& DamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser);
	void PlayHitEffectPoint(float DamageTaken, const struct FPointDamageEvent& DamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser);
	void PlayHitEffectGeneric(float DamageTaken, const struct FDamageEvent& DamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser);
	void PlayDyingRadial(float KillingDamage, const struct FRadialDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
	void PlayDyingPoint(float KillingDamage, const struct FPointDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
	void PlayDyingGeneric(float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
	float PlayAnimEx(class UAnimMontage* AnimMontage, float InPlayRate, const struct FName& StartSectionName, bool bReplicate, bool bReplicateToOwner, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer);
	void OnRep_RagdollPositions();
	void OnRep_PaintingComponent();
	void OnRep_MountedDino();
	void OnRep_IsSleeping();
	void OnRep_IsDead();
	void OnEndDrag();
	void OnBeginDrag(class APrimalCharacter* Dragged, int BoneIndex, bool bWithGrapHook);
	void NetUpdateTribeName(const struct FString& NewTribeName);
	void NetStopAllAnimMontage();
	void NetPlaySoundOnCharacter(class USoundBase* SoundToPlay, bool bPlayOnOwner);
	void NetOnJumped();
	void NetDidLand();
	void NetAddCharacterMovementImpulse(const struct FVector& Impulse, bool bVelChange, float ImpulseExponent);
	void LocalUnpossessed();
	bool IsValidForCombatMusic();
	bool IsRunning();
	bool IsMoving();
	bool IsMontagePlaying(class UAnimMontage* AnimMontage, float TimeFromEndToConsiderFinished);
	bool IsMeshGameplayRelevant();
	bool IsInvincible();
	bool IsFirstPerson();
	bool IsAlive();
	void HurtMe(int HowMuch);
	bool HasBuff(class UClass* BuffClass);
	bool GiveKillExperience();
	float GetRunningSpeedModifier(bool bIsForDefaultSpeed);
	TEnumAsByte<ENetRole> GetRole();
	class UAnimMontage* GetOverridenMontage(class UAnimMontage* AnimMontage);
	class UAnimSequence* GetOverridenAnimSequence(class UAnimSequence* AnimSeq);
	float GetMaxHealth();
	float GetHealthPercentage();
	TEnumAsByte<EPhysicalSurface> GetFootPhysicalSurfaceType(bool bForce);
	struct FString GetDescriptiveName();
	float GetDefaultMovementSpeed();
	class UPrimalCharacterStatusComponent* GetCharacterStatusComponent();
	void GetBuffs(TArray<class APrimalBuff*>* TheBuffs);
	class APrimalDinoCharacter* GetBasedOnDino();
	struct FRotator GetAimOffsets(float DeltaTime, float MaxYawAimClamp, struct FRotator* RootRotOffset, float* TheRootYawSpeed, struct FVector* RootLocOffset);
	void ForceUpdateAimedCharacters(class UWorld* World, const struct FVector& StartLoc, const struct FVector& EndLoc, class AActor* IgnoreActor);
	void ForceTickPoseDelta();
	void FadeOutLoadingMusic();
	void ExecSetSleeping(bool bEnable);
	void EndForceSkelUpdate();
	void DeathHarvestingFadeOut();
	void DeactivateBuffs(class UClass* ForBuffClass, class UPrimalItem* ForInstigatorItem);
	void ClientStopAnimation(class UAnimMontage* AnimMontage, bool bStopOnOwner, float BlendOutTime);
	void ClientRagdollUpdate(TArray<struct FVector_NetQuantize> BoneLocations, const struct FRotator_NetQuantize& TargetRootRotation);
	void ClientPlayAnimation(class UAnimMontage* AnimMontage, float PlayRate, const struct FName& StartSectionName, bool bPlayOnOwner, bool bForceTickPoseAndServerUpdateMesh);
	void ClientNotifyLevelUp();
	void ClientFailedPoop();
	void ClientEndRagdollUpdate();
	void ClientDidPoop();
	void BPNotifyBumpedPawn(class APrimalCharacter* BumpedPawn);
	void BPNotifyBumpedByPawn(class APrimalCharacter* ByPawn);
	bool BPIsConscious();
	bool BPIsBasedOnDynamicActor();
	float BPGetHUDOverrideBuffProgressBarPercent();
	float BPGetExtraMeleeDamageModifier();
	float BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo);
	void BlueprintAnimNotifyCustomEvent(const struct FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject);
};


// Class ShooterGame.PrimalDinoCharacter
// 0x0BD0 (0x1AA0 - 0x0ED0)
class APrimalDinoCharacter : public APrimalCharacter
{
public:
	unsigned char                                      UnknownData00[0x4AE];                                     // 0x0ED0(0x04AE) MISSED OFFSET
	unsigned char                                      UnknownData01 : 1;                                        // 0x137E(0x0001)
	unsigned char                                      bBonesHidden : 1;                                         // 0x137E(0x0001) (Net, Transient, SaveGame)
	unsigned char                                      UnknownData02 : 6;                                        // 0x137E(0x0001)
	unsigned char                                      UnknownData03 : 2;                                        // 0x137F(0x0001)
	unsigned char                                      bIsCharging : 1;                                          // 0x137F(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, Transient)
	unsigned char                                      UnknownData04 : 5;                                        // 0x137F(0x0001)
	unsigned char                                      UnknownData05 : 5;                                        // 0x1380(0x0001)
	unsigned char                                      bIsFlying : 1;                                            // 0x1380(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, Transient, SaveGame)
	TWeakObjectPtr<class APrimalCharacter>             CarriedCharacter;                                         // 0x1381(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	TArray<TWeakObjectPtr<class AShooterCharacter>>    PassengerPerSeat;                                         // 0x1382(0x0010) (Net, ZeroConstructor, Transient)
	TWeakObjectPtr<class AShooterCharacter>            Rider;                                                    // 0x1383(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	struct FDinoSaddleStruct                           SaddleStruct;                                             // 0x1384(0x0020) (Net)
	unsigned char                                      UnknownData06[0x6FC];                                     // 0x13A4(0x06FC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalDinoCharacter");
		return ptr;
	}


	void UpdateTribeGroupRanks(unsigned char NewTribeGroupPetOrderingRank, unsigned char NewTribeGroupPetRidingRank);
	void UpdateImprintingQuality(float NewImprintingQuality);
	void UpdateImprintingDetails(const struct FString& NewImprinterName, uint64_t NewImprinterPlayerDataID);
	void UpdateBabyCuddling(double NewBabyNextCuddleTime, unsigned char NewBabyCuddleType, class UClass* NewBabyCuddleFood);
	void UpdateAttackTargets();
	void UnclaimDino(bool bDestroyAI);
	bool TamedProcessOrder(class APrimalCharacter* FromCharacter, TEnumAsByte<EDinoTamedOrder> OrderType, bool bForce);
	void TameDino(class AShooterPlayerController* ForPC);
	void StopActiveState(bool bShouldResetAttackIndex);
	class APrimalDinoCharacter* SpawnDino(class UWorld* World, class UClass* DinoClass, const struct FVector& SpawnLoc, const struct FRotator& SpawnRot, float LevelMultiplier, int ExtraLevelOffset, bool AddLevelOffsetBeforeMultiplier, bool bOverrideBaseNPCLevel, int BaseLevelOverrideValue, bool bNPCDontWander, float NPCAIRangeMultiplier, int NPCAbsoluteBaseLevel);
	bool ShouldForceFlee();
	bool ShouldAttackOfPlayedAnimationStopMovement();
	void SetState(class UPrimalAIState* State);
	void SetStasisComponentRadius(float StasisOverrideRadius);
	void SetPreventSaving(bool fPreventSaving);
	void SetMovementAccelerationVector(const struct FVector& fVector);
	void SetFlight(bool bFly, bool bCancelForceLand);
	void SetCurrentAttackIndex(unsigned char Index);
	void ServerUpdateAttackTargets(class AActor* AttackTarget, const struct FVector& AttackLocation);
	void ServerToggleCharging();
	void ServerToClientsPlayAttackAnimation(int8_t AttackinfoIndex, int8_t animationIndex, float InPlayRate, const struct FName& StartSectionName, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer, class AActor* MyTarget);
	void ServerTamedTick();
	void ServerSleepingTick();
	void ServerRequestWaterSurfaceJump();
	void ServerRequestToggleFlight();
	void ServerRequestBraking(bool bWantsToBrake);
	void ServerRequestAttack(int AttackIndex);
	void ServerInterruptLanding();
	void ServerFinishedLanding();
	void ServerClearRider();
	void PlayWeightedAttackAnimation();
	void PlayHardEndChargingShake();
	bool PlayedAnimationHasAttack();
	void OverrideRandomWanderLocation(struct FVector* inVec);
	bool OverrideFinalWanderLocation(struct FVector* outVec);
	void OnRep_Saddle();
	void OnRep_Rider();
	void OnRep_PassengerPerSeat();
	void OnRep_CarriedCharacter();
	void OnRep_bIsFlying();
	void OnRep_bIsCharging();
	void OnRep_bBonesHidden();
	void NetUpdateDinoOwnerData(const struct FString& NewOwningPlayerName, int NewOwningPlayerID);
	void NetUpdateDinoNameStrings(const struct FString& NewTamerString, const struct FString& NewTamedName);
	void KeepFlightTimer();
	bool IsCurrentlyPlayingAttackAnimation();
	bool IsCurrentAttackStopsMovement();
	bool IsAttacking();
	class AActor* GetTamedFollowTarget();
	class UPrimalAIState* GetStateOfPlayedAnimationAttack();
	struct FVector GetLandingLocation();
	bool GetForceTickPose();
	struct FVector GetDinoVelocity();
	TArray<class AActor*> GetDinoPlatformCollisionIgnoreActors();
	struct FRotator GetAimOffsetsTransform(float DeltaTime, float MaxYawAimClamp, struct FTransform* RootRotOffsetTransform, float* TheRootYawSpeed, struct FVector* RootLocOffset);
	float GetAIFollowStoppingDistanceOffset();
	float GetAIFollowStoppingDistanceMultiplier();
	class UPrimalAIState* GetActiveState();
	void ForceUpdateColorSets(int ColorRegion, int ColorSet);
	void ForceClearRider();
	void FireProjectile(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir, bool bScaleProjDamageByDinoDamage);
	void FedWakingTameDino();
	bool DoAttack(int AttackIndex);
	void ClientStartLanding(const struct FVector& landingLoc);
	void ClientShouldNotifyLanded();
	void ClientInterruptLanding();
	void ClearCharacterAIMovement();
	bool CanFly();
	bool CanAttack(int AttackIndex);
	void BPUnstasis();
	void BPSetupTamed();
	bool BPIsTamed();
	bool BPAllowEquippingItemType(TEnumAsByte<EPrimalEquipmentType> EquipmentType);
	void BlueprintTamedTick();
	bool BlueprintOverrideWantsToRun(bool bInputWantsToRun);
	void BlueprintDrawFloatingHUD(class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale);
	bool BlueprintCanAttack(int AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget);
	void ApplyRidingAttackExtraVelocity();
	bool AllowWakingTame(class APlayerController* ForPC);
	void AddedImprintingQuality(float amount);
};


// Class ShooterGame.PrimalRaft
// 0x0020 (0x1AC0 - 0x1AA0)
class APrimalRaft : public APrimalDinoCharacter
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x1AA0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalRaft");
		return ptr;
	}

};


// Class ShooterGame.PrimalWheeledVehicleCharacter
// 0x00C0 (0x1B60 - 0x1AA0)
class APrimalWheeledVehicleCharacter : public APrimalDinoCharacter
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x1AA0(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalWheeledVehicleCharacter");
		return ptr;
	}


	void ServerHonk(bool bEnable);
	void NetHonk(bool bEnable);
	class UWheeledVehicleMovementComponent* GetVehicleMovementComponent();
};


// Class ShooterGame.ShooterCharacter
// 0x06B0 (0x1580 - 0x0ED0)
class AShooterCharacter : public APrimalCharacter
{
public:
	unsigned char                                      UnknownData00[0x4E8];                                     // 0x0ED0(0x04E8) MISSED OFFSET
	class AShooterWeapon*                              CurrentWeapon;                                            // 0x13B8(0x0008) (Net, ZeroConstructor, Transient, SaveGame, IsPlainOldData)
	float                                              RawBoneModifiers[0x16];                                   // 0x13B9(0x0004) (Net, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x16F];                                     // 0x1411(0x016F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterCharacter");
		return ptr;
	}


	bool UseAlternateStandingAnim();
	bool UseAltAimOffsetAnim();
	bool UseAdditiveStandingAnim();
	void SyncGrapHookDistance(float Distance);
	void SetCarriedPitchYaw(float NewCarriedPitch, float NewCarriedYaw);
	void ServerToClientsPlayFireBallistaAnimation();
	void ServerSwitchMap();
	void ServerStopFireBallista();
	void ServerSetViewingInventory(bool bIsViewing);
	void ServerSetTargeting(bool bNewTargeting);
	void ServerSetBallistaNewRotation(float Pitch, float Yaw);
	void ServerSeatingStructureAction(unsigned char ActionNumber);
	void ServerReleaseGrapHookCable(bool bReleasing);
	void ServerPlayFireBallistaAnimation();
	void ServerNotifyBallistaShot(const struct FHitResult& Impact, const struct FVector_NetQuantizeNormal& ShootDir);
	void ServerNetEndClimbingLadder(bool bIsClimbOver, const struct FVector& ClimbOverLoc);
	void ServerLaunchMountedDino();
	void ServerFireBallistaProjectile(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir);
	void ServerDoProne();
	void ServerDoCrouch();
	void ServerDetachGrapHookCable(bool bDoUpwardsJump, float UpwardsJumpYaw);
	void ServerCheckDrinkingWater();
	void RenamePlayer(const struct FString& NewName);
	void PlayEmoteAnimation(unsigned char EmoteIndex);
	void OnRep_RawBoneModifiers();
	void OnRep_CurrentWeapon(class AShooterWeapon* LastWeapon);
	struct FString LinkedPlayerUniqueIDString();
	struct FString LinkedPlayerIDString();
	bool IsUsingShield();
	bool IsTargeting();
	bool IsIndoorsAtLoc(class UWorld* TheWorld, const struct FVector& actorLoc);
	bool IsFiring();
	bool IsCarriedAsPassenger();
	bool IsBlockingWithShield();
	void GiveDefaultWeaponTimer();
	class AShooterWeapon* GetWeapon();
	float GetTargetingSpeedModifier();
	class UAnimSequence* GetSeatingAnimation();
	float GetRidingDinoAnimSpeedRatio();
	class UPrimalPlayerData* GetPlayerData();
	class UAnimSequence* GetDinoRidingMoveAnimation();
	class UAnimSequence* GetDinoRidingAnimation();
	bool GetBlockingShieldOffsets(struct FVector* OutBlockingShieldFPVTranslation, struct FRotator* OutBlockingShieldFPVRotation);
	class UAnimSequence* GetAlternateStandingAnim(float* OutBlendInTime, float* OutBlendOutTime);
	class UAnimSequence* GetAdditiveStandingAnim(float* OutBlendInTime, float* OutBlendOutTime);
	float GetActualTargetingFOV(float DefaultTargetingFOV);
	void GameStateHandleEvent(const struct FName& NameParam, const struct FVector& VecParam);
	void DetachGrapHookCable();
	void DetachFromLadder();
	void ClientUpdateTranspondersInfo(TArray<struct FTransponderInfo> TranspondersInfo, bool bNewData);
	void ClientPlayHarvestAnim();
	void ClientNotifyTribeRequest(const struct FString& RequestTribeName, class AShooterCharacter* PlayerCharacter);
	void ClientNetEndClimbingLadder();
	void ClientInviteToAlliance(int RequestingTeam, uint32_t AllianceID, const struct FString& AllianceName, const struct FString& InviteeName);
	void ClientClearTribeRequest();
	void ClearSpawnAnim();
	void ClearRidingDino(bool bFromDino);
	void CallGameStateHandleEvent(const struct FName& NameParam, const struct FVector& VecParam);
	void BlueprintDrawFloatingHUD(class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale);
	void AuthPostSpawnInit();
	void AttachToLadder(class USceneComponent* Parent);
	bool AnimUseAimOffset();
};


// Class ShooterGame.ShooterPlayerState
// 0x04A8 (0x0958 - 0x04B0)
class AShooterPlayerState : public APlayerState
{
public:
	unsigned char                                      UnknownData00[0x4A8];                                     // 0x04B0(0x04A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterPlayerState");
		return ptr;
	}


	void ServerTribeRequestRemoveRankGroup(int RankGroupIndex);
	void ServerTribeRequestNewAlliance(const struct FString& AllianceName);
	void ServerTribeRequestApplyRankGroupSettings(int RankGroupIndex, const struct FTribeRankGroup& newGroupSettings);
	void ServerTribeRequestAddRankGroup();
	void ServerSetDefaultItemSlotClass(int slotNum, class UClass* ItemClass, bool bIsEngram);
	void ServerRequestTransferOwnershipInMyTribe(int PlayerIndexInTribe);
	void ServerRequestSetTribeMemberGroupRank(int PlayerIndexInTribe, int RankGroupIndex);
	void ServerRequestSetTribeGovernment(const struct FTribeGovernment& TribeGovernment);
	void ServerRequestRenameTribe(const struct FString& ServerRequestRenameTribe);
	void ServerRequestRemovePlayerIndexFromMyTribe(int PlayerIndexInTribe);
	void ServerRequestRemoveAllianceMember(uint32_t AllianceID, uint32_t MemberID);
	void ServerRequestPromotePlayerInMyTribe(int PlayerIndexInTribe);
	void ServerRequestPromoteAllianceMember(uint32_t AllianceID, uint32_t MemberID);
	void ServerRequestMySpawnPoints(int IgnoreBedID);
	void ServerRequestLeaveTribe();
	void ServerRequestLeaveAlliance(uint32_t AllianceID);
	void ServerRequestDemotePlayerInMyTribe(int PlayerIndexInTribe);
	void ServerRequestCreateNewTribe(const struct FString& TribeName, const struct FTribeGovernment& TribeGovernment, const struct FUserCosmeticInfo& UserCosmeticInfo);
	void ServerRequestCreateNewPlayer(const struct FPrimalPlayerCharacterConfigStructReplicated& PlayerCharacterConfig, const struct FUserCosmeticInfo& UserCosmeticInfo);
	void ServerRequestApplyEngramPoints(class UClass* forItemEntry);
	void ServerRejectTribeWar(int EnemyTeamID);
	void ServerGetServerOptions();
	void ServerGetPlayerWhiteListedData();
	void ServerGetPlayerConnectedData();
	void ServerGetPlayerBannedData();
	void ServerGetAllPlayerNamesAndLocations();
	void ServerGetAlivePlayerConnectedData();
	void ServerDeclareTribeWar(int EnemyTeamID, int StartDayNum, int EndDayNumber, float WarStartTime, float WarEndTime);
	void ServerAcceptTribeWar(int EnemyTeamID);
	void SendTribeInviteData(const struct FTribeData& TribeInviteData);
	void NotifyTribememberLeft(const struct FString& ThePlayerName);
	void NotifyTribememberJoined(const struct FString& ThePlayerName);
	void NotifyPlayerLeftTribe(const struct FString& ThePlayerName, const struct FString& TribeName);
	void NotifyPlayerLeft(const struct FString& ThePlayerName);
	void NotifyPlayerJoinedTribe(const struct FString& ThePlayerName, const struct FString& TribeName);
	void NotifyPlayerJoined(const struct FString& ThePlayerName);
	bool IsInTribe();
	struct FString GetUniqueIdString();
	int GetTribeID();
	void DoRespec();
	void ClientReceiveSpawnPoints(TArray<struct FSpawnPointInfo> SpawnPointsInfos);
	void ClientNotifyLevelUpAvailable();
	void ClientGetServerOptions(const struct FServerOptions& Info);
	void ClientGetPlayerWhiteListedData(TArray<struct FAdminPlayerDataInfo> list);
	void ClientGetPlayerConnectedData(TArray<struct FAdminPlayerDataInfo> list);
	void ClientGetPlayerBannedData(TArray<struct FAdminPlayerDataInfo> list);
	void ClientGetAllPlayerNamesAndLocations(TArray<struct FAliveNameAndLocation> list);
	void ClientGetAlivePlayerConnectedData(TArray<struct FAlivePlayerDataInfo> list);
	void ClearTribe(bool bDontRemoveFromTribe, bool bForce);
	void BroadcastDeath(class AShooterPlayerState* KillerPlayerState, class UDamageType* KillerDamageType, class AShooterPlayerState* KilledPlayerState);
	bool AllowTribeGroupPermission(TEnumAsByte<ETribeGroupPermission> TribeGroupPermission, class UObject* OnObject);
	bool AddToTribe(const struct FTribeData& MyNewTribe, bool bMergeTribe, bool bForce, bool bIsFromInvite);
};


// Class ShooterGame.PrimalUI
// 0x0178 (0x0358 - 0x01E0)
class UPrimalUI : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x178];                                     // 0x01E0(0x0178) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalUI");
		return ptr;
	}


	void OnHTTPGetResponse__DelegateSignature(bool bSuccess, const struct FString& StringResult);
	void OnConfirmationDialogClosed(bool bAccept);
	void HTTPGetString(const struct FString& InURL);
	void CloseWithAnimation();
	void ClickedButton(class UWidget* clickedWidget);
};


// Class ShooterGame.UI_Spawn
// 0x02E0 (0x0638 - 0x0358)
class UUI_Spawn : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x2E0];                                     // 0x0358(0x02E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_Spawn");
		return ptr;
	}


	void OnSaveToFileEditableChanged(const struct FText& Text);
	void OnLoadFromFileComboBoxSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void OnArkPlayerDataChosen(TArray<unsigned char> ChoosenPlayerData);
};


// Class ShooterGame.PrimalCharacterSetting
// 0x0020 (0x0048 - 0x0028)
class UPrimalCharacterSetting : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalCharacterSetting");
		return ptr;
	}

};


// Class ShooterGame.PrimalCharacterStatusComponent
// 0x0F88 (0x1090 - 0x0108)
class UPrimalCharacterStatusComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x12DA];                                    // 0x0108(0x12DA) MISSED OFFSET
	float                                              ReplicatedCurrentStatusValues[0xC];                       // 0x13E2(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ReplicatedBaseLevelMaxStatusValues[0xC];                  // 0x13E3(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ReplicatedGlobalCurrentStatusValues[0xC];                 // 0x13E4(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ReplicatedGlobalMaxStatusValues[0xC];                     // 0x13E5(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ReplicatedExperiencePoints;                               // 0x13E6(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalCharacterStatusComponent");
		return ptr;
	}


	void TickStatus(float DeltaTime, bool bForceStatusUpdate);
	void SetMaxStatusValue(TEnumAsByte<EPrimalCharacterStatusValue> statType, float newValue);
	void ServerSyncReplicatedValues();
	void RescaleMaxStat(TEnumAsByte<EPrimalCharacterStatusValue> LevelUpValueType, float TargetValue, bool bIsPercentOfTrueValue);
	void OnRep_ReplicatedExperiencePoints();
	void OnRep_GlobalMaxStatusValues();
	void OnRep_GlobalCurrentStatusValues();
	void OnRep_GlobalBaseLevelMaxStatusValues();
	void OnRep_CurrentStatusValues();
	void NetSyncMaxStatusValues(TArray<float> NetMaxStatusValues, TArray<float> NetBaseMaxStatusValues);
	float ModifyCurrentStatusValue(TEnumAsByte<EPrimalCharacterStatusValue> ValueType, float amount, bool bPercentOfMax, bool bPercentOfCurrent, bool bManualModification, bool bSetValue, class UClass* DamageTypeClass, bool bDamageDontKill);
	bool IsInStatusState(TEnumAsByte<EPrimalCharacterStatusState> StateType);
	bool IsInDeathStatusState(TEnumAsByte<EPrimalCharacterStatusState> StateType);
	int GetCharacterLevel();
	void ClientSyncMaxStatusValues(TArray<float> NetMaxStatusValues, TArray<float> NetBaseMaxStatusValues);
	void BPSetRecoveryRateStatusValue(TEnumAsByte<EPrimalCharacterStatusValue> ValueType, float newValue);
	float BPGetPercentStatusValue(TEnumAsByte<EPrimalCharacterStatusValue> ValueType);
	float BPGetMaxStatusValue(TEnumAsByte<EPrimalCharacterStatusValue> ValueType);
	float BPGetCurrentStatusValue(TEnumAsByte<EPrimalCharacterStatusValue> ValueType);
	float BPAdjustStatusValueModification(TEnumAsByte<EPrimalCharacterStatusValue> ValueType, float amount, class UClass* DamageTypeClass);
	void AddExperience(float HowMuch, bool bShareWithTribe, TEnumAsByte<EXPType> XPType);
};


// Class ShooterGame.PrimalDinoStatusComponent
// 0x0000 (0x1090 - 0x1090)
class UPrimalDinoStatusComponent : public UPrimalCharacterStatusComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalDinoStatusComponent");
		return ptr;
	}

};


// Class ShooterGame.PrimalPlayerStatusComponent
// 0x0000 (0x1090 - 0x1090)
class UPrimalPlayerStatusComponent : public UPrimalCharacterStatusComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalPlayerStatusComponent");
		return ptr;
	}

};


// Class ShooterGame.PrimalColorSet
// 0x0240 (0x0268 - 0x0028)
class UPrimalColorSet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x240];                                     // 0x0028(0x0240) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalColorSet");
		return ptr;
	}

};


// Class ShooterGame.PrimalDinoAIController
// 0x02A8 (0x0808 - 0x0560)
class APrimalDinoAIController : public AAIController
{
public:
	unsigned char                                      UnknownData00[0x2A8];                                     // 0x0560(0x02A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalDinoAIController");
		return ptr;
	}


	void UpdateAggro();
	bool ShouldForceRunWhenAttacking();
	void SetAttackRotationRate();
	void SetAttackGroundSpeed();
	void ResetRotationUseAcceleration();
	void ResetRotationRate();
	void ResetGroundSpeed();
	void ResetAccelerationFollowsRotation();
	void RecoverMovement();
	void PlayStartledAnim();
	void OnLosingTargetEvent();
	bool IsWithinAttackRangeAndCalculateBestAttack(class AActor* Other, bool* bAttackChanged);
	bool IsWithinAttackRange(class AActor* Other);
	class AActor* GetTarget();
	struct FVector GetRandomWanderDestination(const struct FVector& LocOverride, float RandomOffsetMultiplier, bool bUseRandomNegativeXDir, bool bOrientRandOffsetByRotation, const struct FRotator& OrientRandOffsetByRotation);
	float GetMinAttackRange();
	struct FVector GetLandingLocation();
	unsigned char GetCurrentAttackIndex();
	class APawn* GetControllerPawn();
	struct FRotator GetAttackRotationRate();
	float GetAttackRotationRangeDegrees();
	float GetAttackRotationGroundSpeedMultiplier();
	float GetAttackRange();
	float GetAttackInterval();
	int GetAggroEntriesCount();
	class AActor* GetAggroEntriesAttackerAtIndex(int Index);
	class AActor* FindTarget(bool bDontSet);
	class AActor* FindNewTarget(bool bDontSet);
	void ClearAggroEntries();
	void ChangedTarget();
	bool CanLand();
	bool CalculateAndSetWonderingAIStateEvent(bool StateChanged);
	bool CalculateAndSetWonderingAIState(bool* StateChanged);
	float BPGetTargetingDesire(class AActor* forTarget, float ForTargetingDesireValue);
	void AvoidOutOfWater();
	void AddToAggro(class AActor* Attacker, float DamagePercent, bool bNotifyNeighbors, bool SetValue, bool bIsFromDamage);
};


// Class ShooterGame.PrimalDinoEntry
// 0x0068 (0x0090 - 0x0028)
class UPrimalDinoEntry : public UObject
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalDinoEntry");
		return ptr;
	}

};


// Class ShooterGame.PrimalDinoSettings
// 0x0060 (0x0088 - 0x0028)
class UPrimalDinoSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalDinoSettings");
		return ptr;
	}

};


// Class ShooterGame.PrimalEmitterSpawnable
// 0x0058 (0x04D0 - 0x0478)
class APrimalEmitterSpawnable : public AEmitter
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0478(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalEmitterSpawnable");
		return ptr;
	}

};


// Class ShooterGame.PrimalBuff
// 0x01F0 (0x06C0 - 0x04D0)
class APrimalBuff : public APrimalEmitterSpawnable
{
public:
	unsigned char                                      UnknownData00[0x1F0];                                     // 0x04D0(0x01F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalBuff");
		return ptr;
	}


	void UpdateBuffPersistentData();
	class APrimalBuff* StaticAddBuff(class UClass* BuffClass, class APrimalCharacter* ForCharacter, class UPrimalItem* AssociatedItem);
	void SetupForInstigator();
	bool PreventActorTargeting(class AActor* ByActor);
	void NotifyDamage(float DamageAmount, class UClass* DamageClass, class AController* EventInstigator, class AActor* TheDamageCauser);
	void NotifyBumpedPawn(class APrimalCharacter* BumpedPawn);
	void NotifyBumpedByPawn(class APrimalCharacter* BumpedBy);
	void NetResetBuffStart();
	void NetDeactivate();
	float GetHUDProgressBarPercent();
	void DrawBuffFloatingHUD(int BuffIndex, class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale);
	float BuffAdjustDamage(float Damage, const struct FHitResult& HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UClass* TheDamgeType);
	void BPSetupForInstigator(class AActor* ForInstigator);
	bool BPPreventAddingOtherBuff(class UClass* anotherBuffClass);
	void BPPreSetupForInstigator(class AActor* ForInstigator);
	void BPDeactivated(class AActor* ForInstigator);
	void BPDeactivate();
	bool BPCustomAllowAddBuff(class APrimalCharacter* ForCharacter);
};


// Class ShooterGame.PrimalEngramEntry
// 0x0068 (0x0090 - 0x0028)
class UPrimalEngramEntry : public UObject
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalEngramEntry");
		return ptr;
	}

};


// Class ShooterGame.PrimalHarvestingComponent
// 0x0140 (0x0248 - 0x0108)
class UPrimalHarvestingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0108(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalHarvestingComponent");
		return ptr;
	}

};


// Class ShooterGame.PrimalInventoryComponent_Static
// 0x0000 (0x0460 - 0x0460)
class UPrimalInventoryComponent_Static : public UPrimalInventoryComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalInventoryComponent_Static");
		return ptr;
	}

};


// Class ShooterGame.PrimalItem_Dye
// 0x0018 (0x07C8 - 0x07B0)
class UPrimalItem_Dye : public UPrimalItem
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x07B0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalItem_Dye");
		return ptr;
	}

};


// Class ShooterGame.PrimalItem_Radio
// 0x0010 (0x07C0 - 0x07B0)
class UPrimalItem_Radio : public UPrimalItem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x07B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalItem_Radio");
		return ptr;
	}

};


// Class ShooterGame.PrimalRichTextBlock
// 0x01A8 (0x02D8 - 0x0130)
class UPrimalRichTextBlock : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x1A8];                                     // 0x0130(0x01A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalRichTextBlock");
		return ptr;
	}


	void SetText(const struct FText& InText, bool bDoParse);
	void SetString(const struct FString& InString);
	struct FText GetText();
};


// Class ShooterGame.PrimalStructurePlacer
// 0x0080 (0x04A8 - 0x0428)
class APrimalStructurePlacer : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0428(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalStructurePlacer");
		return ptr;
	}

};


// Class ShooterGame.PrimalStructureSettings
// 0x0028 (0x0050 - 0x0028)
class UPrimalStructureSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalStructureSettings");
		return ptr;
	}

};


// Class ShooterGame.PrimalSupplyCrateItemSet
// 0x0040 (0x0068 - 0x0028)
class UPrimalSupplyCrateItemSet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalSupplyCrateItemSet");
		return ptr;
	}

};


// Class ShooterGame.PrimalTargetableActor
// 0x00F8 (0x0520 - 0x0428)
class APrimalTargetableActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1018];                                    // 0x0428(0x1018) MISSED OFFSET
	float                                              ReplicatedHealth;                                         // 0x1440(0x0004) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalTargetableActor");
		return ptr;
	}


	void PlayHitEffectRadial(float DamageTaken, const struct FRadialDamageEvent& DamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser);
	void PlayHitEffectPoint(float DamageTaken, const struct FPointDamageEvent& DamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser);
	void PlayHitEffectGeneric(float DamageTaken, const struct FDamageEvent& DamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser);
	void PlayDyingRadial(float KillingDamage, const struct FRadialDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
	void PlayDyingPoint(float KillingDamage, const struct FPointDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
	void PlayDyingGeneric(float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
	void OnRep_ReplicatedHealth();
	void NetUpdatedHealth(int NewHealth);
	bool IsInvincible();
	float GetMaxHealth();
	struct FString GetDescriptiveName();
	void FlushNetUpdate();
	float BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo);
};


// Class ShooterGame.PrimalStructure
// 0x0400 (0x0920 - 0x0520)
class APrimalStructure : public APrimalTargetableActor
{
public:
	unsigned char                                      UnknownData00[0xF24];                                     // 0x0520(0x0F24) MISSED OFFSET
	int16_t                                            StructureColors[0x6];                                     // 0x1444(0x0002) (Net, ZeroConstructor, Transient, SaveGame, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalStructure");
		return ptr;
	}


	void UpdateTribeGroupStructureRank(unsigned char NewRank);
	void SetupDynamicMeshMaterials(class UMeshComponent* MeshComp);
	void SetContainerActive(bool bNewActive);
	void OnRep_StructureColors();
	void NetUpdateTeamAndOwnerName(int NewTeam, const struct FString& NewOwnerName);
	void NetUpdateOriginalOwnerNameAndID(int NewOriginalOwnerID, const struct FString& NewOriginalOwnerName);
	void NetSpawnCoreStructureDeathActor();
	void NetDoSpawnEffects();
	bool IsValidSnapPointTo(class APrimalStructure* childStructure, int MySnapPointToIndex);
	bool IsValidSnapPointFrom(class APrimalStructure* ParentStructure, int MySnapPointFromIndex);
	bool IsValidForSnappingFrom(class APrimalStructure* OtherStructure);
	bool IsPointObstructedByWorldGeometry(class UWorld* ForWorld, const struct FVector& ThePoint, bool bIgnoreTerrain, bool bOnlyCheckTerrain, bool bCheckStructurePreventionVolumes, float OBSTRUCTION_CHECK_DIST, float XYMultiplier, float ZMultiplier);
	class APrimalStructure* GetClosestStructureToPoint(class UWorld* ForWorld, const struct FVector& AtPoint, float OverlapRadius);
	void ClientUpdateLinkedStructures(TArray<uint32_t> NewLinkedStructures);
	void ClearCustomColors();
	bool BPOverrideSnappedToTransform(class APrimalStructure* childStructure, int ChildSnapFromIndex, const struct FVector& UnsnappedPlacementPos, const struct FRotator& UnsnappedPlacementRot, const struct FVector& SnappedPlacementPos, const struct FRotator& SnappedPlacementRot, int SnapToIndex, struct FVector* OutLocation, struct FRotator* OutRotation, int* bForceInvalidateSnap);
	bool BPOverrideDemolish(class AShooterPlayerController* ForPC);
	bool BPOverrideAllowStructureAccess(class AShooterPlayerController* ForPC, bool bIsAccessAllowed);
	int BPIsAllowedToBuild(const struct FPlacementData& OutPlacementData, int CurrentAllowedReason);
};


// Class ShooterGame.PrimalStructureBearTrap
// 0x0048 (0x0968 - 0x0920)
class APrimalStructureBearTrap : public APrimalStructure
{
public:
	unsigned char                                      UnknownData00[0xB2D];                                     // 0x0920(0x0B2D) MISSED OFFSET
	int8_t                                             CurrentTrapState;                                         // 0x144D(0x0001) (Net, ZeroConstructor, SaveGame, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalStructureBearTrap");
		return ptr;
	}


	void TriggerTouched(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnRep_CurrentTrapState();
	void NetGotoTrapState(int8_t TrapState);
	bool IsTrapPrepared(float AnimSetupTime);
	void HideAnimatedSK();
	void DecreaseDamageTimer();
};


// Class ShooterGame.PrimalStructureBed
// 0x0060 (0x0980 - 0x0920)
class APrimalStructureBed : public APrimalStructure
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0920(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalStructureBed");
		return ptr;
	}

};


// Class ShooterGame.PrimalStructureDoor
// 0x0070 (0x0990 - 0x0920)
class APrimalStructureDoor : public APrimalStructure
{
public:
	unsigned char                                      UnknownData00[0xB32];                                     // 0x0920(0x0B32) MISSED OFFSET
	int8_t                                             DoorOpenState;                                            // 0x1452(0x0001) (Net, ZeroConstructor, SaveGame, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalStructureDoor");
		return ptr;
	}


	void OnRep_DoorOpenState(int8_t PrevDoorOpenState);
	void NetGotoDoorState(int8_t DoorState);
	void DelayedGotoDoorStateTimer();
};


// Class ShooterGame.PrimalStructureElevatorPlatform
// 0x00A0 (0x09C0 - 0x0920)
class APrimalStructureElevatorPlatform : public APrimalStructure
{
public:
	unsigned char                                      UnknownData00[0xB34];                                     // 0x0920(0x0B34) MISSED OFFSET
	unsigned char                                      bIsActivated : 1;                                         // 0x1454(0x0001) (Net, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalStructureElevatorPlatform");
		return ptr;
	}


	void ServerActivate(class APlayerController* ForPC, bool bForceDirection, TEnumAsByte<EPrimalStructureElevatorState> Dir);
	void OnRep_bIsActivated();
	void Activate(class APlayerController* ForPC, bool bForceDirection, TEnumAsByte<EPrimalStructureElevatorState> Dir);
};


// Class ShooterGame.PrimalStructureExplosive
// 0x00A8 (0x09C8 - 0x0920)
class APrimalStructureExplosive : public APrimalStructure
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0920(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalStructureExplosive");
		return ptr;
	}


	void ApplyPlacementPreview();
};


// Class ShooterGame.PrimalStructureExplosiveTransGPS
// 0x0020 (0x09E8 - 0x09C8)
class APrimalStructureExplosiveTransGPS : public APrimalStructureExplosive
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x09C8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalStructureExplosiveTransGPS");
		return ptr;
	}


	void NetSetLocation(const struct FVector& NewLocation);
};


// Class ShooterGame.PrimalStructureTripwire
// 0x0060 (0x0A28 - 0x09C8)
class APrimalStructureTripwire : public APrimalStructureExplosive
{
public:
	unsigned char                                      UnknownData00[0xA92];                                     // 0x09C8(0x0A92) MISSED OFFSET
	class APrimalStructureTripwire*                    ConnectedTo;                                              // 0x145A(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01 : 2;                                        // 0x145B(0x0001)
	unsigned char                                      bUnwiredTrap : 1;                                         // 0x145B(0x0001) (Net, SaveGame)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalStructureTripwire");
		return ptr;
	}


	void WireCheck();
	void TriggerTouched(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnRep_UnwiredTrap();
	void OnRep_ConnectedTo();
	void NetUpdateBoxName(const struct FString& NewName);
	void DisconnectMe();
};


// Class ShooterGame.PrimalStructureItemContainer
// 0x0268 (0x0B88 - 0x0920)
class APrimalStructureItemContainer : public APrimalStructure
{
public:
	unsigned char                                      UnknownData00[0xB40];                                     // 0x0920(0x0B40) MISSED OFFSET
	int                                                LinkedPowerJunctionStructureID;                           // 0x1460(0x0004) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalStructureItemContainer");
		return ptr;
	}


	void UpdateContainerActiveHealthDecrease();
	void RefreshPowerJunctionLink();
	void NetUpdateLocation(const struct FVector& NewLocation);
	void NetUpdateBoxName(const struct FString& NewName);
	void NetSetContainerActive(bool bSetActive, class UClass* NetReplicatedFuelItemClass, int16_t NetReplicatedFuelItemColorIndex);
	void MovePowerJunctionLink();
	void EnableActive();
	void BPNotifyInventoryItemChange(bool bIsItemAdd, class UPrimalItem* theItem, bool bEquipItem);
	void BPContainerDeactivated();
	void BPContainerActivated();
};


// Class ShooterGame.PrimalStructureElevatorTrack
// 0x0010 (0x0B98 - 0x0B88)
class APrimalStructureElevatorTrack : public APrimalStructureItemContainer
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0B88(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalStructureElevatorTrack");
		return ptr;
	}


	void ClientHasPlatform();
};


// Class ShooterGame.PrimalStructureItemContainer_CropPlot
// 0x00D8 (0x0C60 - 0x0B88)
class APrimalStructureItemContainer_CropPlot : public APrimalStructureItemContainer
{
public:
	unsigned char                                      UnknownData00[0x8DC];                                     // 0x0B88(0x08DC) MISSED OFFSET
	TEnumAsByte<ESeedCropPhase>                        CurrentCropPhase;                                         // 0x1464(0x0001) (Net, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01 : 5;                                        // 0x1465(0x0001)
	unsigned char                                      bHasFruitItems : 1;                                       // 0x1465(0x0001) (Net, SaveGame)
	class UClass*                                      PlantedCrop;                                              // 0x1466(0x0008) (Net, ZeroConstructor, SaveGame, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalStructureItemContainer_CropPlot");
		return ptr;
	}


	void OnRep_PlantedCrop(class UClass* PrevPlantedCrop);
	void OnRep_HasFruitItems(bool bPreviousHasFruitItems);
	void OnRep_CurrentCropPhase(TEnumAsByte<ESeedCropPhase> PrevCropPhase);
};


// Class ShooterGame.PrimalStructureItemContainer_CropPlot_VisualItems
// 0x0030 (0x0C90 - 0x0C60)
class APrimalStructureItemContainer_CropPlot_VisualItems : public APrimalStructureItemContainer_CropPlot
{
public:
	unsigned char                                      UnknownData00[0x808];                                     // 0x0C60(0x0808) MISSED OFFSET
	unsigned char                                      bHasItems : 1;                                            // 0x1468(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, Transient, SaveGame)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalStructureItemContainer_CropPlot_VisualItems");
		return ptr;
	}


	void OnRep_HasItems();
	void BPUpdateItemVisuals();
};


// Class ShooterGame.PrimalStructureItemContainer_SupplyCrate
// 0x0078 (0x0C00 - 0x0B88)
class APrimalStructureItemContainer_SupplyCrate : public APrimalStructureItemContainer
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0B88(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalStructureItemContainer_SupplyCrate");
		return ptr;
	}


	void StartLosingHealth();
	void LoseHealth();
};


// Class ShooterGame.PrimalStructureItemContainer_VisualItems
// 0x0030 (0x0BB8 - 0x0B88)
class APrimalStructureItemContainer_VisualItems : public APrimalStructureItemContainer
{
public:
	unsigned char                                      UnknownData00[0x8E0];                                     // 0x0B88(0x08E0) MISSED OFFSET
	unsigned char                                      bHasItems : 1;                                            // 0x1468(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, Transient, SaveGame)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalStructureItemContainer_VisualItems");
		return ptr;
	}


	void OnRep_HasItems();
	void BPUpdateItemVisuals();
};


// Class ShooterGame.PrimalStructureKeypad
// 0x0008 (0x0B90 - 0x0B88)
class APrimalStructureKeypad : public APrimalStructureItemContainer
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0B88(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalStructureKeypad");
		return ptr;
	}

};


// Class ShooterGame.PrimalStructureSeating
// 0x00C8 (0x0C50 - 0x0B88)
class APrimalStructureSeating : public APrimalStructureItemContainer
{
public:
	unsigned char                                      UnknownData00[0x8E7];                                     // 0x0B88(0x08E7) MISSED OFFSET
	TArray<TWeakObjectPtr<class AShooterCharacter>>    CharacterPerSeat;                                         // 0x146F(0x0010) (Net, ZeroConstructor, Transient)
	TWeakObjectPtr<class AShooterCharacter>            SeatedCharacter;                                          // 0x1470(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalStructureSeating");
		return ptr;
	}


	void OnRep_SeatedCharacter();
	void OnRep_CharacterPerSeat();
};


// Class ShooterGame.PrimalStructureSeatingMusic
// 0x0058 (0x0CA8 - 0x0C50)
class APrimalStructureSeatingMusic : public APrimalStructureSeating
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0C50(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalStructureSeatingMusic");
		return ptr;
	}

};


// Class ShooterGame.PrimalStructureTurretBallista
// 0x01A0 (0x0DF0 - 0x0C50)
class APrimalStructureTurretBallista : public APrimalStructureSeating
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x0C50(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalStructureTurretBallista");
		return ptr;
	}


	void ClientsPlayFireAnim();
	void ClientsFireProjectile(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir);
};


// Class ShooterGame.PrimalStructureTurret
// 0x00F0 (0x0C78 - 0x0B88)
class APrimalStructureTurret : public APrimalStructureItemContainer
{
public:
	unsigned char                                      UnknownData00[0x8EE];                                     // 0x0B88(0x08EE) MISSED OFFSET
	unsigned char                                      UnknownData01 : 5;                                        // 0x1476(0x0001)
	unsigned char                                      bIsTargeting : 1;                                         // 0x1476(0x0001) (Net, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalStructureTurret");
		return ptr;
	}


	void UpdatedTargeting();
	void StartWarning();
	void ClientsFireProjectile(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir);
};


// Class ShooterGame.PrimalStructureTurretPlant
// 0x0060 (0x0CD8 - 0x0C78)
class APrimalStructureTurretPlant : public APrimalStructureTurret
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0C78(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalStructureTurretPlant");
		return ptr;
	}


	void RecoverHealthTimer();
};


// Class ShooterGame.PrimalStructureLadder
// 0x0060 (0x0980 - 0x0920)
class APrimalStructureLadder : public APrimalStructure
{
public:
	unsigned char                                      UnknownData00[0xB5A];                                     // 0x0920(0x0B5A) MISSED OFFSET
	unsigned char                                      UnknownData01 : 1;                                        // 0x147A(0x0001)
	unsigned char                                      bIsRetracted : 1;                                         // 0x147A(0x0001) (Net, Transient, SaveGame)
	unsigned char                                      bHasLowerLaddersRetracted : 1;                            // 0x147A(0x0001) (Net, Transient, SaveGame)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalStructureLadder");
		return ptr;
	}


	void UpdateRetraction();
};


// Class ShooterGame.PrimalStructureSeaMine
// 0x0090 (0x09B0 - 0x0920)
class APrimalStructureSeaMine : public APrimalStructure
{
public:
	unsigned char                                      UnknownData00[0xB5F];                                     // 0x0920(0x0B5F) MISSED OFFSET
	class APrimalCharacter*                            SeaMineTarget;                                            // 0x147F(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalStructureSeaMine");
		return ptr;
	}


	void RefreshSeaMineTarget();
	void OnTriggerEndOverlap(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnTriggerBeginOverlap(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnRep_SeaMineTarget();
	void OnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnExplodingTriggerBeginOverlap(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Explode();
};


// Class ShooterGame.PrimalStructureSign
// 0x0030 (0x0950 - 0x0920)
class APrimalStructureSign : public APrimalStructure
{
public:
	unsigned char                                      UnknownData00[0xB64];                                     // 0x0920(0x0B64) MISSED OFFSET
	struct FString                                     SignText;                                                 // 0x1484(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, SaveGame)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalStructureSign");
		return ptr;
	}


	void OnRep_SignText(const struct FString& PreviousSignText);
};


// Class ShooterGame.PrimalStructureTribeFlag
// 0x0008 (0x0928 - 0x0920)
class APrimalStructureTribeFlag : public APrimalStructure
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0920(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalStructureTribeFlag");
		return ptr;
	}

};


// Class ShooterGame.PrimalStructureWaterPipe
// 0x0020 (0x0940 - 0x0920)
class APrimalStructureWaterPipe : public APrimalStructure
{
public:
	unsigned char                                      UnknownData00[0xB67];                                     // 0x0920(0x0B67) MISSED OFFSET
	unsigned char                                      UnknownData01 : 1;                                        // 0x1487(0x0001)
	unsigned char                                      bHasWater : 1;                                            // 0x1487(0x0001) (Net, SaveGame)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalStructureWaterPipe");
		return ptr;
	}


	void OnRep_HasWater(bool bPreviousHasWater);
};


// Class ShooterGame.PrimalTribeData
// 0x00F8 (0x0120 - 0x0028)
class UPrimalTribeData : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0028(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalTribeData");
		return ptr;
	}

};


// Class ShooterGame.PlayerHUDUI
// 0x0080 (0x03D8 - 0x0358)
class UPlayerHUDUI : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0358(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PlayerHUDUI");
		return ptr;
	}

};


// Class ShooterGame.UI_AdminMangment
// 0x0480 (0x07D8 - 0x0358)
class UUI_AdminMangment : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x480];                                     // 0x0358(0x0480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_AdminMangment");
		return ptr;
	}


	void OnTextCommittedWhiteListed(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnTextCommittedMessageOfTheDay(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnTextCommittedManualBan(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnTextCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnTextChangedMessageOfTheDay(const struct FText& Text);
	void OnTextChangedManulaBan(const struct FText& Text);
	void OnTextChangedManualWhiteLised(const struct FText& Text);
	void OnTextChanged(const struct FText& Text);
};


// Class ShooterGame.UI_AfterActionReport
// 0x0040 (0x0398 - 0x0358)
class UUI_AfterActionReport : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0358(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_AfterActionReport");
		return ptr;
	}

};


// Class ShooterGame.UI_AfterActionReportsList
// 0x0050 (0x03A8 - 0x0358)
class UUI_AfterActionReportsList : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0358(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_AfterActionReportsList");
		return ptr;
	}

};


// Class ShooterGame.UI_AllPlayersList
// 0x00B0 (0x0408 - 0x0358)
class UUI_AllPlayersList : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0358(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_AllPlayersList");
		return ptr;
	}


	void OnTribeNameFilterChanged(const struct FText& Text);
	void OnPlayerNameFilterChanged(const struct FText& Text);
};


// Class ShooterGame.UI_ChangeTransponderFreqencyEntry
// 0x0030 (0x0388 - 0x0358)
class UUI_ChangeTransponderFreqencyEntry : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0358(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_ChangeTransponderFreqencyEntry");
		return ptr;
	}


	void HandleFilterStringTextChanged(const struct FText& NewText);
};


// Class ShooterGame.UI_ChatBox
// 0x00A0 (0x03F8 - 0x0358)
class UUI_ChatBox : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0358(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_ChatBox");
		return ptr;
	}


	void HandleChatTextCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
};


// Class ShooterGame.UI_ChatBoxLobby
// 0x0060 (0x0458 - 0x03F8)
class UUI_ChatBoxLobby : public UUI_ChatBox
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x03F8(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_ChatBoxLobby");
		return ptr;
	}

};


// Class ShooterGame.UI_ChatMessage
// 0x0058 (0x03B0 - 0x0358)
class UUI_ChatMessage : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0358(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_ChatMessage");
		return ptr;
	}

};


// Class ShooterGame.UI_CombatLogBox
// 0x0098 (0x03F0 - 0x0358)
class UUI_CombatLogBox : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0358(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_CombatLogBox");
		return ptr;
	}

};


// Class ShooterGame.UI_Cooking
// 0x0148 (0x04A0 - 0x0358)
class UUI_Cooking : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x148];                                     // 0x0358(0x0148) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_Cooking");
		return ptr;
	}


	void RefreshItemLists();
	void OnRedSliderValueChanged(float SliderValue);
	void OnItemNameChanged(const struct FText& Text);
	void OnItemDescriptionChanged(const struct FText& Text);
	void OnGreenSliderValueChanged(float SliderValue);
	void OnBlueSliderValueChanged(float SliderValue);
};


// Class ShooterGame.UI_Cosmetics
// 0x01E8 (0x0540 - 0x0358)
class UUI_Cosmetics : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x1E8];                                     // 0x0358(0x01E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_Cosmetics");
		return ptr;
	}


	void StartPreview();
	void OnPrimalDinoCharacterComboBoxSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
};


// Class ShooterGame.UI_CosmeticsRewardSteamInventoryStatusPopup
// 0x0038 (0x0390 - 0x0358)
class UUI_CosmeticsRewardSteamInventoryStatusPopup : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0358(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_CosmeticsRewardSteamInventoryStatusPopup");
		return ptr;
	}

};


// Class ShooterGame.UI_DyeItem
// 0x0218 (0x0570 - 0x0358)
class UUI_DyeItem : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x218];                                     // 0x0358(0x0218) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_DyeItem");
		return ptr;
	}

};


// Class ShooterGame.UI_GenericConfirmationDialog
// 0x0050 (0x03A8 - 0x0358)
class UUI_GenericConfirmationDialog : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0358(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_GenericConfirmationDialog");
		return ptr;
	}


	void OnConfirmationDialogClosedEvent__DelegateSignature(bool bAccept);
};


// Class ShooterGame.UI_HostSession
// 0x03E0 (0x0738 - 0x0358)
class UUI_HostSession : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x3E0];                                     // 0x0358(0x03E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_HostSession");
		return ptr;
	}


	void OnTextCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnTextChanged(const struct FText& Text);
	void OnSliderValueChanged(float SliderValue);
	void OnNumericValueCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
};


// Class ShooterGame.UI_HudOverlay
// 0x0020 (0x0378 - 0x0358)
class UUI_HudOverlay : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0358(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_HudOverlay");
		return ptr;
	}

};


// Class ShooterGame.UI_Inventory
// 0x0C30 (0x0F88 - 0x0358)
class UUI_Inventory : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0xC30];                                     // 0x0358(0x0C30) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_Inventory");
		return ptr;
	}


	void ShowAllCosmetics();
	void RefreshPreviewWidget();
	void OnShowAllStatusChanged(bool bIsChecked);
	void OnShowAllRemoteItemsStatusChanged(bool bIsChecked);
	void OnShowAllLocalItemsStatusChanged(bool bIsChecked);
	void OnRemoteItemNameFilterChanged(const struct FText& Text);
	void OnItemNameFilterChanged(const struct FText& Text);
	void OnEngramFilterChanged(const struct FText& Text);
	void NewFolderRemoteClickedButton(class UWidget* clickedWidget);
	void NewFolderClickedButton(class UWidget* clickedWidget);
	void DoHideEngrams();
};


// Class ShooterGame.UI_ListCharacterData
// 0x01A0 (0x04F8 - 0x0358)
class UUI_ListCharacterData : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x0358(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_ListCharacterData");
		return ptr;
	}


	void OnArkCharacterPlayerDataChosen__DelegateSignature(TArray<unsigned char> ChoosenPlayerDataBytes);
};


// Class ShooterGame.UI_ListLobbies
// 0x0298 (0x05F0 - 0x0358)
class UUI_ListLobbies : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x298];                                     // 0x0358(0x0298) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_ListLobbies");
		return ptr;
	}


	void RefreshSlotButtons();
	void OnRegionComboBoxSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void OnRankRangeComboBoxSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
};


// Class ShooterGame.UI_ListRewards
// 0x0048 (0x03A0 - 0x0358)
class UUI_ListRewards : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0358(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_ListRewards");
		return ptr;
	}

};


// Class ShooterGame.UI_ListSessions
// 0x0348 (0x06A0 - 0x0358)
class UUI_ListSessions : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x348];                                     // 0x0358(0x0348) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_ListSessions");
		return ptr;
	}


	void RefreshSlotButtons();
	void OnTextCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnTextChanged(const struct FText& Text);
	void OnServersFilterComboBoxSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void OnCheckBoxChecked(bool InNewState);
};


// Class ShooterGame.UI_ListTamedDinos
// 0x01A0 (0x04F8 - 0x0358)
class UUI_ListTamedDinos : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x0358(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_ListTamedDinos");
		return ptr;
	}

};


// Class ShooterGame.UI_Lobby
// 0x0350 (0x06A8 - 0x0358)
class UUI_Lobby : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x350];                                     // 0x0358(0x0350) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_Lobby");
		return ptr;
	}


	void OnRegionComboBoxSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void OnMinELOComboBoxSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void OnHideChatCheckBoxStateChanged(bool bIsChecked);
};


// Class ShooterGame.UI_LobbyEntry
// 0x02C8 (0x0620 - 0x0358)
class UUI_LobbyEntry : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x2C8];                                     // 0x0358(0x02C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_LobbyEntry");
		return ptr;
	}


	void RemoteVersionRecieved(int RemoteMajorVersion, bool bSuccess);
	void OnRegionComboBoxSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void OnRankRangeComboBoxSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void OnModeChanged(class UWidget* Button);
};


// Class ShooterGame.ReservationClientAgent
// 0x01E8 (0x0210 - 0x0028)
class UReservationClientAgent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1E8];                                     // 0x0028(0x01E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ReservationClientAgent");
		return ptr;
	}

};


// Class ShooterGame.UI_MainMenu
// 0x02B8 (0x0610 - 0x0358)
class UUI_MainMenu : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x2B8];                                     // 0x0358(0x02B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_MainMenu");
		return ptr;
	}


	void OnModeChanged(class UWidget* Button);
};


// Class ShooterGame.UI_MapMarkersEntry
// 0x0130 (0x0488 - 0x0358)
class UUI_MapMarkersEntry : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x0358(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_MapMarkersEntry");
		return ptr;
	}


	void OnTextCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnTextChanged(const struct FText& Text);
};


// Class ShooterGame.UI_MultiUse
// 0x0048 (0x03A0 - 0x0358)
class UUI_MultiUse : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0358(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_MultiUse");
		return ptr;
	}


	void ClickedEntry(class UWidget* clickedWidget);
};


// Class ShooterGame.UI_Notification
// 0x0040 (0x0398 - 0x0358)
class UUI_Notification : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0358(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_Notification");
		return ptr;
	}

};


// Class ShooterGame.UI_OptionsMenu
// 0x0338 (0x0690 - 0x0358)
class UUI_OptionsMenu : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x338];                                     // 0x0358(0x0338) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_OptionsMenu");
		return ptr;
	}


	void OptionsGraphTick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnWidthChanged(const struct FText& Text);
	void OnSliderValueChanged(float SliderValue);
	void OnResolutionsComboBoxSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void OnHeightChanged(const struct FText& Text);
	void OnGraphicsQualityComboBoxChanged(const struct FString& SelectedItem);
	void OnGraphicsPresetValueChanged();
};


// Class ShooterGame.UI_PaintingsList
// 0x0138 (0x0490 - 0x0358)
class UUI_PaintingsList : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x0358(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_PaintingsList");
		return ptr;
	}

};


// Class ShooterGame.UI_PartySystem
// 0x0140 (0x0498 - 0x0358)
class UUI_PartySystem : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0358(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_PartySystem");
		return ptr;
	}


	void OnRankRangeComboBoxSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void OnPartyComboBoxSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void OnAutoCreateTribeStateChanged(bool bIsChecked);
};


// Class ShooterGame.UI_PauseMenu
// 0x00B0 (0x0408 - 0x0358)
class UUI_PauseMenu : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0358(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_PauseMenu");
		return ptr;
	}

};


// Class ShooterGame.UI_PinEntry
// 0x0070 (0x03C8 - 0x0358)
class UUI_PinEntry : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0358(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_PinEntry");
		return ptr;
	}

};


// Class ShooterGame.UI_PrimalTest
// 0x0020 (0x0378 - 0x0358)
class UUI_PrimalTest : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0358(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_PrimalTest");
		return ptr;
	}

};


// Class ShooterGame.UI_RewardEntryButton
// 0x0040 (0x0398 - 0x0358)
class UUI_RewardEntryButton : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0358(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_RewardEntryButton");
		return ptr;
	}

};


// Class ShooterGame.UI_RewardGroup
// 0x0058 (0x03B0 - 0x0358)
class UUI_RewardGroup : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0358(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_RewardGroup");
		return ptr;
	}


	void OnVisibilityChange__DelegateSignature();
};


// Class ShooterGame.UI_SavePainting
// 0x0060 (0x03B8 - 0x0358)
class UUI_SavePainting : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0358(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_SavePainting");
		return ptr;
	}


	void HandleFilterStringTextChanged(const struct FText& NewText);
};


// Class ShooterGame.UI_ServerBroadcastMessage
// 0x0058 (0x03B0 - 0x0358)
class UUI_ServerBroadcastMessage : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0358(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_ServerBroadcastMessage");
		return ptr;
	}

};


// Class ShooterGame.UI_SessionSortArrow
// 0x0038 (0x0390 - 0x0358)
class UUI_SessionSortArrow : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0358(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_SessionSortArrow");
		return ptr;
	}

};


// Class ShooterGame.UI_SpawnPoint
// 0x0058 (0x03B0 - 0x0358)
class UUI_SpawnPoint : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0358(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_SpawnPoint");
		return ptr;
	}

};


// Class ShooterGame.UI_SteamInventoryStatusPopup
// 0x0090 (0x03E8 - 0x0358)
class UUI_SteamInventoryStatusPopup : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0358(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_SteamInventoryStatusPopup");
		return ptr;
	}

};


// Class ShooterGame.UI_SurvivorProfile
// 0x0040 (0x0398 - 0x0358)
class UUI_SurvivorProfile : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0358(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_SurvivorProfile");
		return ptr;
	}


	void HideDossier();
};


// Class ShooterGame.UI_TextEntry
// 0x0098 (0x03F0 - 0x0358)
class UUI_TextEntry : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0358(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_TextEntry");
		return ptr;
	}


	void OnTextCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnTextChanged(const struct FText& Text);
};


// Class ShooterGame.UI_TribeManager
// 0x0260 (0x05B8 - 0x0358)
class UUI_TribeManager : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x260];                                     // 0x0358(0x0260) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_TribeManager");
		return ptr;
	}

};


// Class ShooterGame.UI_TribeWarEntry
// 0x0050 (0x03A8 - 0x0358)
class UUI_TribeWarEntry : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0358(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_TribeWarEntry");
		return ptr;
	}


	void OnTextCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnTextChanged(const struct FText& Text);
};


// Class ShooterGame.UI_Tutorial
// 0x0030 (0x0388 - 0x0358)
class UUI_Tutorial : public UPrimalUI
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0358(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.UI_Tutorial");
		return ptr;
	}

};


// Class ShooterGame.PrimalWheeledVehicleDustType
// 0x0090 (0x00B8 - 0x0028)
class UPrimalWheeledVehicleDustType : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0028(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalWheeledVehicleDustType");
		return ptr;
	}

};


// Class ShooterGame.PrimalWorldSettings
// 0x0110 (0x08F0 - 0x07E0)
class APrimalWorldSettings : public AWorldSettings
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x07E0(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalWorldSettings");
		return ptr;
	}


	bool IsAllowedInLevelBounds(const struct FVector& AtLocat);
};


// Class ShooterGame.RadialSelectorHUD
// 0x0070 (0x0098 - 0x0028)
class URadialSelectorHUD : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.RadialSelectorHUD");
		return ptr;
	}

};


// Class ShooterGame.RadialSelectorHUD_Inventory
// 0x0010 (0x00A8 - 0x0098)
class URadialSelectorHUD_Inventory : public URadialSelectorHUD
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0098(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.RadialSelectorHUD_Inventory");
		return ptr;
	}

};


// Class ShooterGame.RadialSelectorHUD_MultiUse
// 0x0020 (0x00B8 - 0x0098)
class URadialSelectorHUD_MultiUse : public URadialSelectorHUD
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0098(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.RadialSelectorHUD_MultiUse");
		return ptr;
	}

};


// Class ShooterGame.RadialSelectorHUD_PlayerAction
// 0x0058 (0x00F0 - 0x0098)
class URadialSelectorHUD_PlayerAction : public URadialSelectorHUD
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0098(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.RadialSelectorHUD_PlayerAction");
		return ptr;
	}

};


// Class ShooterGame.RCONServer
// 0x0040 (0x0068 - 0x0028)
class URCONServer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.RCONServer");
		return ptr;
	}

};


// Class ShooterGame.ReservationServerAgent
// 0x00E8 (0x0110 - 0x0028)
class UReservationServerAgent : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0028(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ReservationServerAgent");
		return ptr;
	}

};


// Class ShooterGame.SaveGameActor
// 0x0000 (0x0428 - 0x0428)
class ASaveGameActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.SaveGameActor");
		return ptr;
	}

};


// Class ShooterGame.SaveGameActorTickable
// 0x0000 (0x0428 - 0x0428)
class ASaveGameActorTickable : public ASaveGameActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.SaveGameActorTickable");
		return ptr;
	}

};


// Class ShooterGame.ShooterCharacterMovement
// 0x0010 (0x0530 - 0x0520)
class UShooterCharacterMovement : public UCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0520(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterCharacterMovement");
		return ptr;
	}

};


// Class ShooterGame.ShooterCheatManager
// 0x0010 (0x0090 - 0x0080)
class UShooterCheatManager : public UCheatManager
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterCheatManager");
		return ptr;
	}


	void UnbanPlayer(const struct FString& PlayerSteamName);
	void ToggleLocation();
	void ToggleHud();
	void ToggleGun();
	void TestSteamRefreshItems();
	void TeleportToPlayer(int64_t PlayerId);
	void TeleportPlayerNameToMe(const struct FString& PlayerName);
	void TeleportPlayerIDToMe(int64_t PlayerId);
	void SummonTamed(const struct FString& ClassName);
	void Suicide();
	void SPI(float X, float Y, float Z, float Yaw, float Pitch);
	void SpawnDino(const struct FString& blueprintPath, float spawnDistance, float spawnYOffset, float ZOffset, int DinoLevel);
	void SpawnActorTamed(const struct FString& blueprintPath, float spawnDistance, float spawnYOffset, float ZOffset);
	void SpawnActorSpreadTamed(const struct FString& blueprintPath, float spawnDistance, float spawnYOffset, float ZOffset, int NumberActors, float SpreadAmount);
	void SpawnActorSpread(const struct FString& blueprintPath, float spawnDistance, float spawnYOffset, float ZOffset, int NumberActors, float SpreadAmount);
	void SpawnActor(const struct FString& blueprintPath, float spawnDistance, float spawnYOffset, float ZOffset);
	void ShowTutorial(int TutorialIndex, bool bForceDisplay);
	void ShowMessageOfTheDay();
	void ShowInGameMenu();
	void SetTimeOfDay(const struct FString& timeString);
	void SetTargetPlayerColorVal(int ColorValIndex, float ColorVal);
	void SetTargetPlayerBodyVal(int BodyValIndex, float BodyVal);
	void SetTargetDinoColor(int ColorRegion, int ColorID);
	void SetPlayerPos(float X, float Y, float Z);
	void SetMessageOfTheDay(const struct FString& Message);
	void SetMatchCanStart();
	void SetImprintQuality(float ImprintQuality);
	void SetGraphicsQuality(int Val);
	void SetGodMode(bool bEnable);
	void SetGlobalPause(bool bIsPaused);
	void SetBabyAge(float AgeValue);
	void ServerChatToPlayer(const struct FString& PlayerName, const struct FString& MessageText);
	void ServerChatTo(const struct FString& SteamID, const struct FString& MessageText);
	void ServerChat(const struct FString& MessageText);
	void ScriptCommand(const struct FString& commandString);
	void SaveWorld();
	void ReportSpawnManagers();
	void ReportLeastSpawnManagers();
	void RenameTribe(const struct FString& TribeName, const struct FString& NewName);
	void RenamePlayer(const struct FString& PlayerName, const struct FString& NewName);
	void RemoveTribeAdmin();
	void RemoveAllSteamInventory();
	void OpenMap(const struct FString& MapName);
	void OnToggleInGameMenu();
	void MakeTribeFounder();
	void MakeTribeAdmin();
	void ListPlayers();
	void KillPlayer(int64_t PlayerId);
	void Kill();
	void KickPlayer(const struct FString& PlayerSteamName);
	void InfiniteStats();
	void HideTutorial(int TutorialIndex);
	void GiveToMe();
	void GiveReward(int ItemId);
	void GiveResources();
	void GiveItemToPlayer(int PlayerId, const struct FString& blueprintPath, int quantityOverride, float qualityOverride, bool bForceBlueprint);
	void GiveItemNumToPlayer(int PlayerId, int masterIndexNum, int quantityOverride, float qualityOverride, bool bForceBlueprint);
	void GiveItemNum(int masterIndexNum, int quantityOverride, float qualityOverride, bool bForceBlueprint);
	void GiveItem(const struct FString& blueprintPath, int quantityOverride, float qualityOverride, bool bForceBlueprint);
	void GiveExpToPlayer(int64_t PlayerId, float HowMuch, bool fromTribeShare, bool bPreventSharingWithTribe);
	void GiveEngrams();
	void GiveAllStructure();
	void GetGameLog();
	void GetChat();
	void GameCommand(const struct FString& TheCommand);
	void ForceTribes(const struct FString& PlayerName1, const struct FString& PlayerName2, const struct FString& NewTribeName);
	void ForceTame();
	void ForcePlayerToJoinTribe(int64_t PlayerId, const struct FString& TribeName);
	void ForcePlayerToJoinTargetTribe(int64_t PlayerId);
	void EnemyInVisible(bool Invisible);
	void EnableSpectator();
	void EnableCheats(const struct FString& pass);
	void DoTame();
	void DoRestartLevel();
	void DoExit();
	void DisallowPlayerToJoinNoCheck(const struct FString& SteamID);
	void DisableSpectator();
	void DestroyWildDinos();
	void DestroyTribeStructures();
	void DestroyTribePlayers();
	void DestroyTribeDinos();
	void DestroyStructures();
	void DestroyMyTarget();
	void DestroyAllEnemies();
	void DestroyActors(const struct FString& ClassName);
	void ClearTutorials();
	void ClearPlayerInventory(int PlayerId, bool bClearInventory, bool bClearSlotItems, bool bClearEquippedItems);
	void Broadcast(const struct FString& MessageText);
	void BanPlayer(const struct FString& PlayerSteamName);
	void AllowPlayerToJoinNoCheck(const struct FString& SteamID);
	void AddExperience(float HowMuch, bool fromTribeShare, bool bPreventSharingWithTribe);
};


// Class ShooterGame.ShooterDamageType
// 0x0098 (0x00E8 - 0x0050)
class UShooterDamageType : public UDamageType
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0050(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterDamageType");
		return ptr;
	}


	float BPAdjustDamage(class AActor* Victim, float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
};


// Class ShooterGame.ShooterEngine
// 0x0010 (0x0970 - 0x0960)
class UShooterEngine : public UGameEngine
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0960(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterEngine");
		return ptr;
	}

};


// Class ShooterGame.ShooterGame_Menu
// 0x0010 (0x0510 - 0x0500)
class AShooterGame_Menu : public AGameMode
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0500(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGame_Menu");
		return ptr;
	}


	void PlayMusic();
};


// Class ShooterGame.ShooterGameInstance
// 0x01E0 (0x0238 - 0x0058)
class UShooterGameInstance : public UGameInstance
{
public:
	unsigned char                                      UnknownData00[0x1E0];                                     // 0x0058(0x01E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameInstance");
		return ptr;
	}


	void OnRemoteMajorVerionRecived__DelegateSignature(int Version, bool bSuccess);
	void LoadTheGameMedia();
	void DisplayGlobalMainMenuNotification();
};


// Class ShooterGame.ShooterGameMode
// 0x1980 (0x1E80 - 0x0500)
class AShooterGameMode : public AGameMode
{
public:
	unsigned char                                      UnknownData00[0x1980];                                    // 0x0500(0x1980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameMode");
		return ptr;
	}


	void UpdatePlayerStats(int ID);
	bool TriggerLevelCustomEvents(class UWorld* inWorld, const struct FString& EventName);
	void ShooterCharacterSpawned__DelegateSignature(class AShooterCharacter* TheShooterCharacter);
	void ShooterCharacterDied__DelegateSignature(class AShooterCharacter* TheShooterCharacter);
	void SetTimeOfDay(const struct FString& timeString);
	void SendServerNotification(const struct FString& MessageText, const struct FLinearColor& MessageColor, float DisplayScale, float DisplayTime, class UTexture2D* MessageIcon, class USoundBase* SoundToPlay, int ReceiverTeamId, int ReceiverPlayerID, bool bDoBillboard);
	void SendServerDirectMessage(const struct FString& PlayerSteamIDconst, const struct FString& MessageText, const struct FLinearColor& MessageColor, bool bIsBold, int ReceiverTeamId, int ReceiverPlayerID, const struct FString& PlayerName);
	void SendServerChatMessage(const struct FString& MessageText, const struct FLinearColor& MessageColor, bool bIsBold, int ReceiverTeamId, int ReceiverPlayerID);
	void RestartServer();
	void RemovePlayerData(class AShooterPlayerState* PlayerState);
	void RemoveInactivePlayersAndTribes();
	void PrintToServerGameLog(const struct FString& InString);
	void PrintToGameplayLog(const struct FString& InString);
	void PostAlarmNotificationTribe(int TribeID, const struct FString& Title, const struct FString& Message);
	void PostAlarmNotificationPlayerID(int PlayerId, const struct FString& Title, const struct FString& Message);
	void PostAlarmNotification(const struct FString& SteamID, const struct FString& Title, const struct FString& Message);
	void OnMatchStart();
	void OnLogout(class AController* Exiting);
	void MatchEnded();
	void KickPlayerController(class APlayerController* thePC, const struct FString& KickMessage);
	void KickAllPlayersAndReload();
	bool IsPlayerControllerAllowedToJoinNoCheck(class AShooterPlayerController* ForPlayer);
	bool IsPlayerControllerAllowedToExclusiveJoin(class AShooterPlayerController* ForPlayer);
	bool IsPlayerAllowedToCheat(class AShooterPlayerController* ForPlayer);
	void InitOptionString(const struct FString& Commandline, const struct FString& Section, const struct FString& Option);
	void InitOptionInteger(const struct FString& Commandline, const struct FString& Section, const struct FString& Option, int CurrentValue);
	void InitOptionFloat(const struct FString& Commandline, const struct FString& Section, const struct FString& Option, float CurrentValue);
	void InitOptionBool(const struct FString& Commandline, const struct FString& Section, const struct FString& Option, bool bDefaultValue);
	void IncrementNumDeaths(const struct FString& PlayerDataID);
	bool HandleNewPlayer(class AShooterPlayerController* NewPlayer, class UPrimalPlayerData* PlayerData, class AShooterCharacter* PlayerCharacter, bool bIsFromLogin);
	struct FTribeData GetTribeDataBlueprint(int TribeID);
	struct FString GetStringOption(const struct FString& Section, const struct FString& OptionName);
	struct FString GetSessionTimeString();
	struct FPlayerStats GetPlayerStats(const struct FString& PlayerDataID);
	class UPrimalPlayerData* GetPlayerData(const struct FString& PlayerDataID);
	TArray<class APrimalDinoCharacter*> GetOverlappingDinoCharactersOfTeamAndClass(const struct FVector& AtLocation, float OverlapRange, class UClass* DinoClass, int DinoTeam, bool bExactClassMatch, bool bIgnoreClass);
	int GetNumDeaths(const struct FString& PlayerDataID);
	int GetNumberOfLivePlayersOnTribe(const struct FString& TribeName);
	bool GetLaunchOptionString(const struct FString& LaunchOptionKey, struct FString* ReturnVal);
	bool GetLaunchOptionFloat(const struct FString& LaunchOptionKey, float* ReturnVal);
	int GetIntOptionIni(const struct FString& Section, const struct FString& OptionName);
	float GetFloatOptionIni(const struct FString& Section, const struct FString& OptionName);
	bool GetBoolOptionIni(const struct FString& Section, const struct FString& OptionName);
	void ForceRepopulateFoliageAtPoint(const struct FVector& AtPoint, float MaxRangeFromPoint, int MaxNumFoliages, class UClass* RepopulatedEmitter, const struct FVector& StructureDownTraceVector, const struct FVector& StructureUpTraceVector);
	int ForceCreateTribe(const struct FString& TribeName, int TeamOverride);
	int ForceAddPlayerToTribe(class AShooterPlayerState* ForPlayerState, const struct FString& TribeName);
	int CountOverlappingDinoCharactersOfTeamAndClass(const struct FVector& AtLocation, float OverlapRange, class UClass* DinoClass, int DinoTeam, bool bExactClassMatch, bool bIgnoreClass);
	bool CheckJoinInProgress(bool bIsFromLogin, class APlayerController* NewPlayer);
	bool AreTribesAllied(int TribeID1, int TribeID2);
	void AddToTribeLog(int TribeID, const struct FString& NewLog);
};


// Class ShooterGame.CustomGameMode
// 0x0030 (0x1EB0 - 0x1E80)
class ACustomGameMode : public AShooterGameMode
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x1E80(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.CustomGameMode");
		return ptr;
	}


	void SaveIntToConfig(int IntValue, const struct FString& KeyValue);
	void SaveFloatToConfig(float IntValue, const struct FString& KeyValue);
	void SaveBoolToConfig(bool IntValue, const struct FString& KeyValue);
	bool OnUpdateTribeData(const struct FTribeData& NewTribeData);
	bool OnRemoveTribe(int TribeID);
	bool OnPlayerCanRestart(class APlayerController* Player);
	bool OnIsUsedSpawnPointStillSupported(class APlayerStart* SpawnPoint, class AController* Player);
	bool OnIsSpawnpointAllowed(class APlayerStart* SpawnPoint, class AController* Player);
	bool OnInitOptionEvent(const struct FString& Options);
	bool OnInitGameState();
	bool OnInitGame(const struct FString& MapName, const struct FString& Options, struct FString* ErrorMessage);
	bool OnHandleLeavingMap();
	struct FString OnDoGameCommand(const struct FString& TheCommand);
	bool OnAllowRenameTribe(class AShooterPlayerState* ForPlayerState, const struct FString& TribeName);
	bool OnAllowNotifyRemotePlayerDeath(class AShooterCharacter* ForChar);
	bool OnAllowModifyStatusValue(class UPrimalCharacterStatusComponent* forComp, TEnumAsByte<EPrimalCharacterStatusValue> ValueType, float amount);
	bool OnAllowClearTribe(class AShooterPlayerState* ForPlayerState);
	bool OnAllowAddXP(class UPrimalCharacterStatusComponent* forComp);
	bool OnAllowAddToTribe(class AShooterPlayerState* ForPlayerState, const struct FTribeData& MyNewTribe);
	float OnAdjustDamage(class AActor* Victim, float DefaultDamage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
	void OnAddItemSOTFFinished(bool bSuccess, TArray<uint64_t> SteamItemUserIDs, uint64_t SteamID, uint32_t SteamDefID, uint32_t AppID);
	struct FTribeData MakeTribeData(struct FString* TribeName, int* OwnerPlayerDataID, int* TribeID, TArray<struct FString>* MembersPlayerName, TArray<int>* MembersPlayerDataID, TArray<int>* TribeAdmins, bool* bSetGovernment, struct FTribeGovernment* TribeGovernment, TArray<struct FPrimalPlayerCharacterConfigStructReplicated>* MembersConfigs);
	void KickPlayer(class APlayerController* NewPlayer);
	bool IsInAllowedToCheatList(class APlayerController* NewPlayer);
	void InitOptionFloatToINI(const struct FString& Options, float FloatValue, const struct FString& KeyValue);
	float GetValueFromINI(const struct FString& KeyValue);
	int GetIntValueFromINI(const struct FString& KeyValue);
	float GetIniFloatValue(const struct FString& Section, const struct FString& KeyValue);
	float GetFloatValueFromINI(const struct FString& KeyValue);
	bool GetBoolValueFromINI(const struct FString& KeyValue);
	void CleanUpSotfNotificationManager();
	bool CheckForCommand(const struct FString& CommandName);
	void BreakTribeData(const struct FTribeData& Data, struct FString* TribeName, int* OwnerPlayerDataID, int* TribeID, TArray<struct FString>* MembersPlayerName, TArray<int>* MembersPlayerDataID, TArray<int>* TribeAdmins, bool* bSetGovernment, struct FTribeGovernment* TribeGovernment, TArray<struct FPrimalPlayerCharacterConfigStructReplicated>* MembersConfigs);
};


// Class ShooterGame.ShooterGameSession
// 0x02D0 (0x0710 - 0x0440)
class AShooterGameSession : public AGameSession
{
public:
	unsigned char                                      UnknownData00[0x2D0];                                     // 0x0440(0x02D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameSession");
		return ptr;
	}


	void RemoteVersionRecieved(int RemoteMajorVersion, bool bSuccess);
};


// Class ShooterGame.ShooterGameState
// 0x02F0 (0x0770 - 0x0480)
class AShooterGameState : public AGameState
{
public:
	unsigned char                                      UnknownData00[0x11BC];                                    // 0x0480(0x11BC) MISSED OFFSET
	float                                              LocalizedChatRadius;                                      // 0x163C(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LocalizedChatRadiusUnconsiousScale;                       // 0x163C(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameState");
		return ptr;
	}


	void OnRep_ReplicateLocalizedChatRadius();
	void NetUpdateOfflinePvPLiveTeams(TArray<int> NewPreventOfflinePvPLiveTeams);
	void NetUpdateOfflinePvPExpiringTeams(TArray<int> NewPreventOfflinePvPExpiringTeams, TArray<double> NewPreventOfflinePvPExpiringTimes);
	void NetAddFloatingText(const struct FVector& AtLocation, const struct FString& FloatingTextString, const struct FColor& FloatingTextColor, float ScaleX, float ScaleY, float TextLifeSpan, const struct FVector& TextVelocity, float MinScale, float FadeInTime, float FadeOutTime, int OnlySendToTeamID);
	void NetAddFloatingDamageText(const struct FVector& AtLocation, int DamageAmount, int FromTeamID, int OnlySendToTeamID);
	bool IsTeamIDInvincible(int TargetingTeamID);
	double GetOfflineDamagePreventionTime(int TargetingTeamID);
	struct FString GetDayTimeString();
	struct FString GetCleanServerSessionName();
	void DisplayWelcomeUI();
	class APrimalBuff* BaseSpawnBuffAndAttachToCharacter(class UClass* Buff, class APrimalCharacter* PrimalCharacter, float ExperiencePoints);
	struct FVector2D BaseProjectWorldToScreenPosition(const struct FVector& WorldLocation, class APlayerController* thePC);
	bool BaseIsTribeID(int TeamId);
	class ACustomActorList* BaseGetCustomActors(const struct FName& SearchCustomTag);
	TArray<class AShooterPlayerController*> BaseGetAllShooterControllers();
	TArray<class AShooterCharacter*> BaseGetAllShooterCharactersOfTeam(int KillerTeam);
	TArray<class AShooterCharacter*> BaseGetAllShooterCharacters();
	TArray<class APrimalDinoCharacter*> BaseGetAllDinoCharactersOfTeam(int KillerTeam);
	void BaseDrawTileOnCanvas(class AShooterHUD* HUD, class UTexture* Tex, float X, float Y, float XL, float YL, float U, float V, float UL, float VL, const struct FColor& DrawColor);
	void AddFloatingText(const struct FVector& AtLocation, const struct FString& FloatingTextString, const struct FColor& FloatingTextColor, float ScaleX, float ScaleY, float TextLifeSpan, const struct FVector& TextVelocity, float MinScale, float FadeInTime, float FadeOutTime);
};


// Class ShooterGame.BattleGameState
// 0x0000 (0x0770 - 0x0770)
class ABattleGameState : public AShooterGameState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.BattleGameState");
		return ptr;
	}

};


// Class ShooterGame.CustomGameState
// 0x0098 (0x0808 - 0x0770)
class ACustomGameState : public AShooterGameState
{
public:
	unsigned char                                      UnknownData00[0xEF1];                                     // 0x0770(0x0EF1) MISSED OFFSET
	struct FString                                     CurrentWorldEventName;                                    // 0x1661(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, SaveGame)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.CustomGameState");
		return ptr;
	}


	class APrimalBuff* SpawnBuffAndAttachToCharacter(class UClass* Buff, class APrimalCharacter* PrimalCharacter, float ExperiencePoints);
	void ShowAfterActionReport(int WinningTribeID, const struct FString& ReportURL);
	void SetCurrentWorldEvent(const struct FString& EventName);
	void SetAfterActionReportItems(TArray<struct FActionReportItem> Items);
	void SetActionReportItem(const struct FString& PlayerName, const struct FString& PlayerUniqueID, int TribeID, const struct FString& TribeName, const struct FString& TimeOfDeath, const struct FString& LevelOfDeath, const struct FString& DeathMessage, class UTexture2D* DeathIcon, const struct FString& Rank, struct FActionReportItem* Data);
	void SaveAfterActionReport(int WinningTribeID);
	struct FVector2D ProjectWorldToScreenPosition(const struct FVector& WorldLocation, class APlayerController* thePC);
	bool OnStartPreMatctCountDown();
	bool OnSetMaxNumberOfPlayersInTribe(int Number);
	void OnSetHudEvent();
	bool OnSetFlushTribeData(bool boolFlushTribeData);
	void OnSavedAfterActionReport(int WinningTribeID, const struct FString& ReportURL);
	void OnRep_CurrentWorldEventName();
	class USoundBase* OnOverrideDynamicMusic(class APrimalCharacter* ForCharacter);
	void OnNotifyPlayerDied(class AShooterCharacter* theShooterChar, class AShooterPlayerController* prevController, class APawn* InstigatingPawn, class AActor* DamageCauser, class UDamageType* DamageType);
	bool OnHasGameModeMatchStarted();
	bool OnHasGameModeMatchFinished();
	void OnHandleActorEvent(class AActor* forActor, const struct FName& NameParam, const struct FVector& VecParam);
	float OnGetRemainingMatchTime(class ACustomGameState* CustomGameState);
	float OnGetCurrentGameTimestampInSeconds();
	bool OnForceOccludedFloatingHUD(class AActor* anActor, class AShooterPlayerController* ForPC);
	void OnExtraShooterCharacterTick(class AShooterCharacter* ForChar, float DeltaTime);
	bool OnDrawingHUDNotifications(class AShooterHUD* HUD);
	bool OnDrawHUD(class AShooterHUD* HUD);
	void OnDrawExtraPlayerFloatingHUD(class AShooterHUD* HUD, class AShooterCharacter* theShooterChar, const struct FVector& AtLoc);
	bool OnCheckGameStateIfCanRespawn(class APlayerController* ForPC);
	bool OnAllowTribeManager(class AShooterPlayerController* ForPC);
	bool OnAllowTribeManagement();
	bool OnAllowStartSupplyCrateSpawns();
	bool OnAllowShowPlayerHudUI(class APrimalCharacter* forPawn);
	bool OnAllowRemoveItems(class UPrimalInventoryComponent* ForInv, class AShooterPlayerController* PC, class UPrimalItem* anItemToTransfer);
	bool OnAllowPopUps();
	bool OnAllowOrbitCamera(class APrimalCharacter* ForCharacter);
	bool OnAllowFastTravel(class APrimalStructureBed* ForBed, class AShooterPlayerController* ForPC);
	bool OnAllowDaytimeTransitionSounds();
	bool OnAllowCreateSurvivor();
	struct FPlayerDeathNotification MakePlayerDeathNotification(const struct FString& PlayerDeathStringEnemy, const struct FString& PlayerDeathStringAlly, const struct FString& PlayerDeathStringYou, const struct FString& DeathReason, TArray<struct FString> DeadPlayerNames, bool bIsTribeDeath, const struct FString& DeathTribeName, int TargetingTeamID, int KillingTeamID, const struct FString& LinkedPlayerID, TArray<struct FPrimalPlayerCharacterConfigStructReplicated> PlayersData);
	struct FBattleTribeData MakeBattleTribeData(const struct FString& TribeName, int TribeID);
	struct FBattlePlayerData MakeBattlePlayerData(const struct FString& PlayerName, bool bConnected, bool bAlive, int TribeID, const struct FString& PlayerId, int NumOfWins, int NumOfLosses, int Rank);
	void KickPlayer(class APlayerController* Controller, const struct FString& Reason, bool bCanRejoin);
	bool IsTribeID(int TeamId);
	bool IsAuthorityRole();
	void HideUIScene(class UClass* SceneClass, bool SkipAnimation);
	class UTexture2D* GetTribeTexture(int TribeID);
	double GetTimeSeconds();
	TArray<struct FBattlePlayerData> GetPlayerDatasForTribe(int TribeID, TArray<struct FBattlePlayerData> AllPlayerDatas);
	struct FString GetPawnName(class APawn* Pawn);
	struct FString GetPawnKillerName(class APawn* Pawn);
	class UTexture2D* GetEvoEventIcon(const struct FString& EvoEvent);
	void GetDeathNotificationText(class AShooterCharacter* theShooterChar, class APawn* InstigatingPawn, class AActor* DamageCauser, class UDamageType* DamageType, struct FString* Killer, struct FString* KillerAndTribe, struct FString* theNotificationStringYou, struct FString* theNotificationStringAlly, struct FString* theNotificationStringEnemy, class UTexture2D** DeathIcon);
	class ACustomActorList* GetCustomActors(const struct FName& SearchCustomTag);
	TArray<class AShooterPlayerController*> GetAllShooterControllers();
	TArray<class AShooterCharacter*> GetAllShooterCharactersOfTeam(int KillerTeam);
	TArray<class AShooterCharacter*> GetAllShooterCharacters();
	TArray<class AShooterCharacter*> GetAllLiveShooterCharactersOfTeam(int KillerTeam);
	TArray<class APrimalDinoCharacter*> GetAllDinoCharactersOfTeam(int KillerTeam);
	TArray<struct FActionReportItem> GetAfterActionReportItems();
	void DrawTileOnCanvas(class AShooterHUD* HUD, class UTexture* Tex, float X, float Y, float XL, float YL, float U, float V, float UL, float VL, const struct FColor& DrawColor);
	struct FPlayerDeathNotification CreateDeathNotification(class AShooterCharacter* theShooterChar, class AShooterPlayerController* prevController, class APawn* InstigatingPawn, int MaxNumberOfRespawns, class AActor* DamageCauser, class UDamageType* DamageType);
	struct FDamageEvent CreateDamageEvent();
	void ClearWorldEvent(const struct FString& EventName);
	bool CheckTimeSince(float Time, float Duration);
	void BroadcastActorCustomEvent(class AActor* Actor, const struct FName& EventCustomName, const struct FString& EventCustomString, class AActor* InstigatorActor);
	void BreakTribeData(const struct FTribeData& InData, struct FString* TribeName, int* OwnerPlayerDataID, int* TribeID, TArray<struct FString>* MembersPlayerName, TArray<int>* MembersPlayerDataID, TArray<int>* TribeAdmins, bool* bSetGovernment, TArray<struct FPrimalPlayerCharacterConfigStructReplicated>* MembersConfigs);
	void BreakPlayerDeathNotification(const struct FPlayerDeathNotification& Data, struct FString* PlayerDeathStringEnemy, struct FString* PlayerDeathStringAlly, struct FString* PlayerDeathStringYou, struct FString* DeathReason, TArray<struct FString>* DeadPlayerNames, bool* bIsTribeDeath, struct FString* DeathTribeName, int* TargetingTeamID, int* KillingTeamID, struct FString* LinkedPlayerID, TArray<struct FPrimalPlayerCharacterConfigStructReplicated>* PlayersData, class UTexture2D** DeathIcon);
	void BreakBattleTribeData(const struct FBattleTribeData& InData, struct FString* TribeName, int* TribeID);
	void BreakBattlePlayerData(const struct FBattlePlayerData& Data, struct FString* PlayerName, bool* bConnected, bool* bAlive, int* TribeID, struct FString* PlayerId, int* NumOfWins, int* NumOfLosses, int* Rank);
	void BreakActionReportItem(const struct FActionReportItem& Data, struct FString* PlayerName, struct FString* TribeName, struct FString* TimeOfDeath, struct FString* LevelOfDeath, struct FString* DeathMessage, class UTexture2D** DeathIcon, struct FString* Rank);
	void AddActionReportItem(const struct FActionReportItem& Item);
};


// Class ShooterGame.ShooterGameUserSettings
// 0x0078 (0x0198 - 0x0120)
class UShooterGameUserSettings : public UGameUserSettings
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0120(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameUserSettings");
		return ptr;
	}


	class UShooterGameUserSettings* GetUserSettings();
};


// Class ShooterGame.ShooterGameViewportClient
// 0x0088 (0x01B0 - 0x0128)
class UShooterGameViewportClient : public UGameViewportClient
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0128(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterGameViewportClient");
		return ptr;
	}


	class UShooterGameViewportClient* GetViewportClient(class UWorld* ForWorld);
	class UPrimalUI* GetUISceneFromClass(class UClass* PrimalUIClass);
};


// Class ShooterGame.ShooterImpactEffect
// 0x0308 (0x0730 - 0x0428)
class AShooterImpactEffect : public AActor
{
public:
	unsigned char                                      UnknownData00[0x308];                                     // 0x0428(0x0308) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterImpactEffect");
		return ptr;
	}

};


// Class ShooterGame.ShooterLaserBeamComponent
// 0x0010 (0x07B0 - 0x07A0)
class UShooterLaserBeamComponent : public UParticleSystemComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x07A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterLaserBeamComponent");
		return ptr;
	}

};


// Class ShooterGame.ShooterPersistentUser
// 0x0040 (0x0068 - 0x0028)
class UShooterPersistentUser : public USaveGame
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterPersistentUser");
		return ptr;
	}

};


// Class ShooterGame.ShooterLocalPlayer
// 0x0000 (0x0240 - 0x0240)
class UShooterLocalPlayer : public ULocalPlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterLocalPlayer");
		return ptr;
	}

};


// Class ShooterGame.ShooterOnlineSessionClient
// 0x0000 (0x0108 - 0x0108)
class UShooterOnlineSessionClient : public UOnlineSessionClient
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterOnlineSessionClient");
		return ptr;
	}

};


// Class ShooterGame.ShooterPlayerCameraManager
// 0x0738 (0x1E28 - 0x16F0)
class AShooterPlayerCameraManager : public APlayerCameraManager
{
public:
	unsigned char                                      UnknownData00[0x738];                                     // 0x16F0(0x0738) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterPlayerCameraManager");
		return ptr;
	}

};


// Class ShooterGame.ShooterPlayerController_Menu
// 0x0068 (0x0808 - 0x07A0)
class AShooterPlayerController_Menu : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x07A0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterPlayerController_Menu");
		return ptr;
	}

};


// Class ShooterGame.ShooterWeapon
// 0x0720 (0x0B48 - 0x0428)
class AShooterWeapon : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1278];                                    // 0x0428(0x1278) MISSED OFFSET
	struct FItemNetInfo                                AssociatedItemNetInfo;                                    // 0x16A0(0x0128) (Net, Transient)
	unsigned char                                      bIsAccessoryActive : 1;                                   // 0x16A3(0x0001) (BlueprintVisible, BlueprintReadOnly, Net)
	int                                                CurrentAmmoInClip;                                        // 0x16A4(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, SaveGame, IsPlainOldData)
	class AShooterCharacter*                           MyPawn;                                                   // 0x16A5(0x0008) (Net, ZeroConstructor, Transient, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01 : 5;                                        // 0x16A6(0x0001)
	unsigned char                                      bNetLoopedSimulatingWeaponFire : 1;                       // 0x16A6(0x0001) (Net, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterWeapon");
		return ptr;
	}


	void StartUnequip();
	void ServerToggleAccessory();
	void ServerStopSecondaryAction();
	void ServerStopFire();
	void ServerStopAltFire();
	void ServerStartSecondaryAction();
	void ServerStartReload();
	void ServerStartFire();
	void ServerStartAltFire();
	void ServerSetColorizeRegion(int theRegion, bool bValToUse);
	void PlayWeaponBreakAnimation();
	void PlayWeaponBlockedAnimation();
	void PlayUseHarvestAnimation();
	void OnRep_NetLoopedWeaponFire();
	void OnRep_MyPawn();
	void OnRep_CurrentAmmoInClip();
	void OnRep_AccessoryToggle();
	bool IsFiring();
	class AShooterCharacter* GetPawnOwner();
	void DoHandleFiring();
	void ClientStopSimulatingWeaponFire();
	void ClientStartReload();
	void ClientStartMuzzleFX();
	void ClientSimulateWeaponFire();
	void ClientSetClipAmmo(int newClipAmmo, bool bOnlyUpdateItem);
	void ClientPlayShieldHitAnim();
	void ClearClientReload();
	void CheckItemAssocation();
	bool BPWeaponCanFire();
	void BPAnimNotifyCustomState_End(const struct FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotifyState* AnimNotifyObject);
	void BPAnimNotifyCustomState_Begin(const struct FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, class UAnimNotifyState* AnimNotifyObject);
	void BPAnimNotifyCustomEvent(const struct FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject);
};


// Class ShooterGame.ShooterWeapon_Projectile
// 0x0058 (0x0BA0 - 0x0B48)
class AShooterWeapon_Projectile : public AShooterWeapon
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0B48(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterWeapon_Projectile");
		return ptr;
	}


	void ServerFireProjectileEx(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir, float Speed, int RandomSeed);
	void ServerFireProjectile(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir);
	void ClientsFireProjectileEx(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir, float Speed, int RandomSeed);
	void ClientsFireProjectile(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir);
	void CheckRefireTimer();
};


// Class ShooterGame.ShooterProjectile
// 0x01A8 (0x05D0 - 0x0428)
class AShooterProjectile : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1A8];                                     // 0x0428(0x01A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterProjectile");
		return ptr;
	}


	void ProjectileBounced(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void OnTouch(class AActor* Actor);
	void OnProjectileStop(const struct FHitResult& HitResult);
	void OnImpact(const struct FHitResult& HitResult, bool bFromReplication);
	void OnExplode(const struct FHitResult& Result);
	void ClientOnImpact(const struct FVector& ProjectileLocation, const struct FRotator& ProjectileRotation, const struct FHitResult& HitResult);
	void ClientNetImpactFX(const struct FHitResult& HitResult);
	void ClientNetExplode(const struct FHitResult& HitResult);
	void BPInitVelocity(const struct FVector& ShootDirection);
};


// Class ShooterGame.PrimalProjectileArrow
// 0x0018 (0x05E8 - 0x05D0)
class APrimalProjectileArrow : public AShooterProjectile
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x05D0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalProjectileArrow");
		return ptr;
	}


	void PickUpCheck();
};


// Class ShooterGame.PrimalProjectileDilo
// 0x0000 (0x05D0 - 0x05D0)
class APrimalProjectileDilo : public AShooterProjectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalProjectileDilo");
		return ptr;
	}

};


// Class ShooterGame.PrimalProjectileFlare
// 0x0028 (0x05F8 - 0x05D0)
class APrimalProjectileFlare : public AShooterProjectile
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x05D0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalProjectileFlare");
		return ptr;
	}

};


// Class ShooterGame.PrimalProjectileGrapplingHook
// 0x0028 (0x05F8 - 0x05D0)
class APrimalProjectileGrapplingHook : public AShooterProjectile
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x05D0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalProjectileGrapplingHook");
		return ptr;
	}

};


// Class ShooterGame.PrimalProjectileSpiderAcid
// 0x0000 (0x05D0 - 0x05D0)
class APrimalProjectileSpiderAcid : public AShooterProjectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalProjectileSpiderAcid");
		return ptr;
	}

};


// Class ShooterGame.ShooterSpectatorPawn
// 0x0058 (0x0518 - 0x04C0)
class AShooterSpectatorPawn : public ASpectatorPawn
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x04C0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterSpectatorPawn");
		return ptr;
	}

};


// Class ShooterGame.ShooterWeapon_Instant
// 0x0080 (0x0BC8 - 0x0B48)
class AShooterWeapon_Instant : public AShooterWeapon
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0B48(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterWeapon_Instant");
		return ptr;
	}


	void SimulateInstantHit(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir, bool bForceOnLocal, int ShotIndex);
	void ServerNotifyShot(TArray<struct FHitResult> Impacts, TArray<struct FVector_NetQuantizeNormal> ShootDirs);
	void CheckRefireTimer();
};


// Class ShooterGame.ShooterWeapon_Melee
// 0x0008 (0x0B50 - 0x0B48)
class AShooterWeapon_Melee : public AShooterWeapon
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0B48(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterWeapon_Melee");
		return ptr;
	}

};


// Class ShooterGame.PrimalWeaponGPS
// 0x0278 (0x0DC8 - 0x0B50)
class APrimalWeaponGPS : public AShooterWeapon_Melee
{
public:
	unsigned char                                      UnknownData00[0xB76];                                     // 0x0B50(0x0B76) MISSED OFFSET
	unsigned char                                      UnknownData01 : 2;                                        // 0x16C6(0x0001)
	unsigned char                                      bUseCompassInsteadOfGPS : 1;                              // 0x16C6(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalWeaponGPS");
		return ptr;
	}


	void ServerShowNone();
	void ServerShowMapOnly();
	void ServerShowGPSOnly();
	void ServerShowBoth();
	void ServerSetUseCompassInsteadOfGPS(bool bUseCompass);
	void RefreshUseCompass();
};


// Class ShooterGame.ShooterWeapon_Placer
// 0x0090 (0x0BD8 - 0x0B48)
class AShooterWeapon_Placer : public AShooterWeapon
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0B48(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterWeapon_Placer");
		return ptr;
	}


	void ServerDetonateExplosives();
};


// Class ShooterGame.ShooterWeapon_PlacerTransGPS
// 0x0040 (0x0C18 - 0x0BD8)
class AShooterWeapon_PlacerTransGPS : public AShooterWeapon_Placer
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0BD8(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ShooterWeapon_PlacerTransGPS");
		return ptr;
	}


	void ServerSetFrequency(float Freq);
	void ServerAttachToSelf();
	void ClientShowTransponders(bool bValue);
};


// Class ShooterGame.PrimalWeaponBow
// 0x0080 (0x0C20 - 0x0BA0)
class APrimalWeaponBow : public AShooterWeapon_Projectile
{
public:
	unsigned char                                      UnknownData00[0xB2A];                                     // 0x0BA0(0x0B2A) MISSED OFFSET
	unsigned char                                      UnknownData01 : 2;                                        // 0x16CA(0x0001)
	unsigned char                                      bIsPullingString : 1;                                     // 0x16CA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalWeaponBow");
		return ptr;
	}


	void UpdateTPVBowAnimation();
	void ServerSetPullString(bool bIsPulling);
};


// Class ShooterGame.PrimalWeaponGrapplingHook
// 0x0030 (0x0BD0 - 0x0BA0)
class APrimalWeaponGrapplingHook : public AShooterWeapon_Projectile
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0BA0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalWeaponGrapplingHook");
		return ptr;
	}

};


// Class ShooterGame.PrimalWeaponGrenade
// 0x0068 (0x0C08 - 0x0BA0)
class APrimalWeaponGrenade : public AShooterWeapon_Projectile
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0BA0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalWeaponGrenade");
		return ptr;
	}


	float BPGetProjectileSpeed();
};


// Class ShooterGame.SilentDamageType
// 0x0000 (0x0050 - 0x0050)
class USilentDamageType : public UDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.SilentDamageType");
		return ptr;
	}

};


// Class ShooterGame.SOTFNotification
// 0x0250 (0x0678 - 0x0428)
class ASOTFNotification : public AActor
{
public:
	unsigned char                                      UnknownData00[0x250];                                     // 0x0428(0x0250) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.SOTFNotification");
		return ptr;
	}

};


// Class ShooterGame.SOTFNotificationDisplay
// 0x0058 (0x0480 - 0x0428)
class ASOTFNotificationDisplay : public AActor
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0428(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.SOTFNotificationDisplay");
		return ptr;
	}

};


// Class ShooterGame.SoundNodeLocalPlayer
// 0x0000 (0x0038 - 0x0038)
class USoundNodeLocalPlayer : public USoundNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.SoundNodeLocalPlayer");
		return ptr;
	}

};


// Class ShooterGame.SoundNodeVehicleEngine
// 0x0020 (0x0058 - 0x0038)
class USoundNodeVehicleEngine : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.SoundNodeVehicleEngine");
		return ptr;
	}

};


// Class ShooterGame.StructurePaintingComponent
// 0x0088 (0x0190 - 0x0108)
class UStructurePaintingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0108(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.StructurePaintingComponent");
		return ptr;
	}


	void ClientPaint(class AShooterPlayerController* Painter, TArray<struct FPaintItem> Paints);
	void ClientClearPaintingTexture(class AShooterPlayerController* Painter);
};


// Class ShooterGame.StructurePreventionZoneVolume
// 0x0018 (0x0478 - 0x0460)
class AStructurePreventionZoneVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0460(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.StructurePreventionZoneVolume");
		return ptr;
	}

};


// Class ShooterGame.SupplyCrateSpawningVolume
// 0x0068 (0x04C8 - 0x0460)
class ASupplyCrateSpawningVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0460(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.SupplyCrateSpawningVolume");
		return ptr;
	}


	void SpawnCratesFromAllVolumes(class UWorld* TheWorld);
	void SpawnCratesFromAllPoints();
	void SetSpawnEnabled(bool bEnable);
	void CheckForSupplyCrateStart();
	void CheckCrateSpawn();
};


// Class ShooterGame.TargetArea
// 0x0010 (0x0438 - 0x0428)
class ATargetArea : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0428(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.TargetArea");
		return ptr;
	}

};


// Class ShooterGame.TestItemWidget
// 0x0010 (0x01F0 - 0x01E0)
class UTestItemWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.TestItemWidget");
		return ptr;
	}

};


// Class ShooterGame.ToolTipWidget
// 0x0060 (0x0240 - 0x01E0)
class UToolTipWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x01E0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.ToolTipWidget");
		return ptr;
	}

};


// Class ShooterGame.PrimalDinoToolTipWidget
// 0x0140 (0x0380 - 0x0240)
class UPrimalDinoToolTipWidget : public UToolTipWidget
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0240(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalDinoToolTipWidget");
		return ptr;
	}

};


// Class ShooterGame.PrimalItemToolTipWidget
// 0x0220 (0x0460 - 0x0240)
class UPrimalItemToolTipWidget : public UToolTipWidget
{
public:
	unsigned char                                      UnknownData00[0x220];                                     // 0x0240(0x0220) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalItemToolTipWidget");
		return ptr;
	}

};


// Class ShooterGame.PrimalStructureToolTipWidget
// 0x0040 (0x0280 - 0x0240)
class UPrimalStructureToolTipWidget : public UToolTipWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0240(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalStructureToolTipWidget");
		return ptr;
	}

};


// Class ShooterGame.TargetingInfoToolTipWidget
// 0x0050 (0x0290 - 0x0240)
class UTargetingInfoToolTipWidget : public UToolTipWidget
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0240(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.TargetingInfoToolTipWidget");
		return ptr;
	}

};


// Class ShooterGame.VictoryCoreHighest
// 0x0000 (0x0028 - 0x0028)
class UVictoryCoreHighest : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.VictoryCoreHighest");
		return ptr;
	}

};


// Class ShooterGame.VictoryCore
// 0x0000 (0x0028 - 0x0028)
class UVictoryCore : public UVictoryCoreHighest
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.VictoryCore");
		return ptr;
	}


	bool SupportsShaderModel5();
	void SteamOverlayOpenURL(const struct FString& ToURL);
	float StaticGetTimeSince(class UWorld* TheWorld, double Time);
	bool StaticCheckForCommand(const struct FString& CommandName);
	class AActor* SpawnActorDeferred(class UClass* Class, class UWorld* inWorld, const struct FVector& Location, const struct FRotator& Rotation, class AActor* Owner, class APawn* Instigator, bool bNoCollisionFail);
	TArray<class AActor*> SortActorsByTag(int tagIndex, TArray<class AActor*> actors);
	void SetSessionPrefix(const struct FString& InPrefix);
	TArray<class AActor*> ServerOctreeOverlapActorsBitMask(class UWorld* TheWorld, const struct FVector& AtLoc, float Radius, int OctreeTypeBitMask);
	TArray<class AActor*> ServerOctreeOverlapActors(class UWorld* TheWorld, const struct FVector& AtLoc, float Radius, TEnumAsByte<EServerOctreeGroup> OctreeType);
	void ReupdateCaptures(class UWorld* ForWorld);
	TArray<TWeakObjectPtr<class APrimalDinoCharacter>> RemoveInvalidObjectsInContainer(TArray<TWeakObjectPtr<class APrimalDinoCharacter>> fContainer);
	bool PureCheckForCommand(const struct FString& CommandName);
	bool IsLoadingSaveGame();
	bool IsGameWorld(class UWorld* TheWorld);
	int GetWeightedRandomIndexFromArray(TArray<float> pArray, float ForceRand);
	float GetTimeSince(class APawn* Pawn, float Time);
	float GetTimeSeconds(class APawn* Pawn);
	struct FColor GetTeamColor(int TargetingTeam);
	int GetSecondsIntoDay();
	bool GetGroundLocation(class UWorld* ForWorld, const struct FVector& StartLoc, const struct FVector& OffsetUp, const struct FVector& OffsetDown, struct FVector* theGroundLoc);
	class UObject* GetDefaultObject(class UObject* FromObjectInstance);
	class AActor* GetClosestActorArray(const struct FVector& ToPoint, TArray<class AActor*>* ActorArray);
	class UObject* GetClassDefaultObject(class UClass* FromClass);
	struct FString FormatAsTime(int InTime, bool UseLeadingZero, bool bForceLeadingZeroHour, bool bShowSeconds);
	double FloatToDouble(float Value);
	void FinishSpawning(class AActor* Actor);
	bool FindWorldActors(class UWorld* fWorld, class UClass* fType, const struct FName& fTag, TArray<class AActor*>* fContainer);
	class UPrimalAIState* FindActorAIState(class UClass* fStateType, TArray<struct FDinoAttackInfo> fContainerOfStates);
	void CallGlobalLevelEvent(class UWorld* ForWorld, const struct FName& EventName);
	struct FVector2D BPProjectWorldToScreenPosition(const struct FVector& WorldLocation, class APlayerController* thePC);
	int BPGetWeightedRandomIndex(float ForceRand, TArray<float>* pArray);
	float BPFLerpFastPure(float InMin, float InMax, float InPercent);
	float BPFLerpFast(float InMin, float InMax, float InPercent);
	float BPFLerp(float InMin, float InMax, float InPercent, bool bClampToMin, bool bClampToMax);
	bool BPFastTrace(class UWorld* TheWorld, const struct FVector& TraceEnd, const struct FVector& TraceStart, class AActor* ActorToIgnore);
};


// Class ShooterGame.PrimalCableActor
// 0x0008 (0x0430 - 0x0428)
class APrimalCableActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0428(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ShooterGame.PrimalCableActor");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
