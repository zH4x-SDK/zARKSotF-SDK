#pragma once

#include "../SDK.h"

// Name: ARKSotF, Version: 178.8.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function ShooterGame.BasePlayerController.SimulateInputKey
struct ABasePlayerController_SimulateInputKey_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	bool                                               bPressed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.BasePlayerController.ServerCheat
struct ABasePlayerController_ServerCheat_Params
{
	struct FString                                     Msg;                                                      // (Parm, ZeroConstructor)
};

// Function ShooterGame.BasePlayerController.Say
struct ABasePlayerController_Say_Params
{
	struct FString                                     Msg;                                                      // (Parm, ZeroConstructor)
};

// Function ShooterGame.BasePlayerController.ClientStartOnlineGame
struct ABasePlayerController_ClientStartOnlineGame_Params
{
};

// Function ShooterGame.BasePlayerController.ClientSetSpectatorCamera
struct ABasePlayerController_ClientSetSpectatorCamera_Params
{
	struct FVector                                     CameraLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CameraRotation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.BasePlayerController.ClientSendRoundEndEvent
struct ABasePlayerController_ClientSendRoundEndEvent_Params
{
	bool                                               bIsWinner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ExpendedTimeInSeconds;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.BasePlayerController.ClientGameStarted
struct ABasePlayerController_ClientGameStarted_Params
{
};

// Function ShooterGame.BasePlayerController.ClientEndOnlineGame
struct ABasePlayerController_ClientEndOnlineGame_Params
{
};

// Function ShooterGame.PrimalGlobals.OnConfirmationDialogClosed
struct UPrimalGlobals_OnConfirmationDialogClosed_Params
{
	bool                                               bAccept;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalGlobals.GetDayCycleManager
struct UPrimalGlobals_GetDayCycleManager_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class ADayCycleManager*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalGlobals.FinishedLoadingGameMedia
struct UPrimalGlobals_FinishedLoadingGameMedia_Params
{
};

// Function ShooterGame.PrimalItem.StaticGetColorForItemColorID
struct UPrimalItem_StaticGetColorForItemColorID_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalItem.IsCooldownReadyForUse
struct UPrimalItem_IsCooldownReadyForUse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalItem.IsActiveEquipped
struct UPrimalItem_IsActiveEquipped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalItem.IncrementItemQuantity
struct UPrimalItem_IncrementItemQuantity_Params
{
	int                                                amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRepicateToClient;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDontUpdateWeight;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFromUseConsumption;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsArkTributeItem;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFromCraftingConsumption;                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalItem.EquippedBlueprintTick
struct UPrimalItem_EquippedBlueprintTick_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalItem.BPUsedOntoItem
struct UPrimalItem_BPUsedOntoItem_Params
{
	class UPrimalItem*                                 DestinationItem;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AdditionalData;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalItem.BPSupportUseOntoItem
struct UPrimalItem_BPSupportUseOntoItem_Params
{
	class UPrimalItem*                                 DestinationItem;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalItem.BPGetFuelParticleSystemOverride
struct UPrimalItem_BPGetFuelParticleSystemOverride_Params
{
	class APrimalStructure*                            ForStructure;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalItem.BPGetFuelAudioOverride
struct UPrimalItem_BPGetFuelAudioOverride_Params
{
	class APrimalStructure*                            ForStructure;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalItem.BPCanUse
struct UPrimalItem_BPCanUse_Params
{
	bool                                               bIgnoreCooldown;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalItem.BPCanAddToInventory
struct UPrimalItem_BPCanAddToInventory_Params
{
	class UPrimalInventoryComponent*                   toInventory;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalItem.BPAllowCrafting
struct UPrimalItem_BPAllowCrafting_Params
{
	class AShooterPlayerController*                    ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.PrimalItem.BlueprintUsed
struct UPrimalItem_BlueprintUsed_Params
{
};

// Function ShooterGame.PrimalItem.BlueprintUnequipped
struct UPrimalItem_BlueprintUnequipped_Params
{
};

// Function ShooterGame.PrimalItem.BlueprintEquipped
struct UPrimalItem_BlueprintEquipped_Params
{
	bool                                               bIsFromSaveGame;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalItem.AddNewItem
struct UPrimalItem_AddNewItem_Params
{
	class UClass*                                      ItemArchetype;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryComponent*                   GiveToInventory;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bEquipItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDontStack;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ItemQuality;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceNoBlueprint;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                quantityOverride;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceBlueprint;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalItem.AddItemDurability
struct UPrimalItem_AddItemDurability_Params
{
	float                                              durabilityToAdd;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterHUD.GetPlayerOwner
struct AShooterHUD_GetPlayerOwner_Params
{
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.UpdateTribeGroupInventoryRank
struct UPrimalInventoryComponent_UpdateTribeGroupInventoryRank_Params
{
	unsigned char                                      NewRank;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.StaticDropNewItem
struct UPrimalInventoryComponent_StaticDropNewItem_Params
{
	class AActor*                                      forActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AnItemClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ItemQuality;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceNoBlueprint;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                quantityOverride;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceBlueprint;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TheDroppedTemplateOverride;                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    DroppedRotationOffset;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bOverrideSpawnTransform;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationOverride;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    RotationOverride;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bPreventDropImpulse;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bThrow;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSecondaryAction;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetItemDropLocation;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.SetNextItemSpoilingID
struct UPrimalInventoryComponent_SetNextItemSpoilingID_Params
{
	struct FItemNetID                                  NextItemID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.SetNextItemConsumptionID
struct UPrimalInventoryComponent_SetNextItemConsumptionID_Params
{
	struct FItemNetID                                  NextItemID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.SetCraftingEnabled
struct UPrimalInventoryComponent_SetCraftingEnabled_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.ServerSplitItemStack
struct UPrimalInventoryComponent_ServerSplitItemStack_Params
{
	struct FItemNetID                                  ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AmountToSplit;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.ServerRemoveItemFromSlot
struct UPrimalInventoryComponent_ServerRemoveItemFromSlot_Params
{
	struct FItemNetID                                  ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.ServerMergeItemStack
struct UPrimalInventoryComponent_ServerMergeItemStack_Params
{
	struct FItemNetID                                  ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.ServerMakeRecipeItem
struct UPrimalInventoryComponent_ServerMakeRecipeItem_Params
{
	class APrimalStructureItemContainer*               Container;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemNetID                                  NoteToConsume;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      RecipeItemTemplate;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     CustomName;                                               // (Parm, ZeroConstructor)
	struct FString                                     CustomDescription;                                        // (Parm, ZeroConstructor)
	TArray<struct FColor>                              CustomColors;                                             // (ConstParm, Parm, ZeroConstructor)
	TArray<struct FCraftingResourceRequirement>        CustomRequirements;                                       // (ConstParm, Parm, ZeroConstructor)
};

// Function ShooterGame.PrimalInventoryComponent.ServerForceMergeItemStack
struct UPrimalInventoryComponent_ServerForceMergeItemStack_Params
{
	struct FItemNetID                                  Item1ID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemNetID                                  Item2ID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.ServerCraftItem
struct UPrimalInventoryComponent_ServerCraftItem_Params
{
	struct FItemNetID                                  ItemId;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController*                    ByPC;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.ServerAddItemToSlot
struct UPrimalInventoryComponent_ServerAddItemToSlot_Params
{
	struct FItemNetID                                  ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.RemoveItem
struct UPrimalInventoryComponent_RemoveItem_Params
{
	struct FItemNetID                                  ItemId;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bDoDrop;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSecondryAction;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceRemoval;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.RemoteInventoryAllowViewing
struct UPrimalInventoryComponent_RemoteInventoryAllowViewing_Params
{
	class AShooterPlayerController*                    PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.RemoteInventoryAllowRepairingItems
struct UPrimalInventoryComponent_RemoteInventoryAllowRepairingItems_Params
{
	class AShooterPlayerController*                    PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreEnabled;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.RemoteInventoryAllowCraftingItems
struct UPrimalInventoryComponent_RemoteInventoryAllowCraftingItems_Params
{
	class AShooterPlayerController*                    PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreEnabled;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.IsRepairingAllowed
struct UPrimalInventoryComponent_IsRepairingAllowed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.IsLocal
struct UPrimalInventoryComponent_IsLocal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.IsCraftingAllowed
struct UPrimalInventoryComponent_IsCraftingAllowed_Params
{
	class UPrimalItem*                                 anItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.GetTotalEquippedItemStat
struct UPrimalInventoryComponent_GetTotalEquippedItemStat_Params
{
	TEnumAsByte<EPrimalItemStat>                       statType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.GetMaxInventoryItems
struct UPrimalInventoryComponent_GetMaxInventoryItems_Params
{
	bool                                               bIgnoreHiddenDefaultInventory;                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.GetItemTemplateQuantity
struct UPrimalInventoryComponent_GetItemTemplateQuantity_Params
{
	class UClass*                                      ItemTemplate;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem*                                 IgnoreItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreBlueprints;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckValidForCrafting;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRequireExactClassMatch;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.GetEquippedItemOfType
struct UPrimalInventoryComponent_GetEquippedItemOfType_Params
{
	TEnumAsByte<EPrimalEquipmentType>                  aType;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.GetEquippedArmorRating
struct UPrimalInventoryComponent_GetEquippedArmorRating_Params
{
	TEnumAsByte<EPrimalEquipmentType>                  EquipmentType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.GenerateCrateItems
struct UPrimalInventoryComponent_GenerateCrateItems_Params
{
	float                                              MinQualityMultiplier;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxQualityMultiplier;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.ConsumeArmorDurability
struct UPrimalInventoryComponent_ConsumeArmorDurability_Params
{
	float                                              ConsumptionAmount;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllArmorTypes;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPrimalEquipmentType>                  SpecificArmorType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.ClientItemMessageNotification
struct UPrimalInventoryComponent_ClientItemMessageNotification_Params
{
	struct FItemNetID                                  ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPrimalItemMessage>                    ItemMessageType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.BPRemoteInventoryAllowRemoveItems
struct UPrimalInventoryComponent_BPRemoteInventoryAllowRemoveItems_Params
{
	class AShooterPlayerController*                    PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem*                                 anItemToTransfer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.BPOverrideItemMinimumUseInterval
struct UPrimalInventoryComponent_BPOverrideItemMinimumUseInterval_Params
{
	class UPrimalItem*                                 theItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.BPNotifyItemRemoved
struct UPrimalInventoryComponent_BPNotifyItemRemoved_Params
{
	class UPrimalItem*                                 anItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.BPNotifyItemQuantityUpdated
struct UPrimalInventoryComponent_BPNotifyItemQuantityUpdated_Params
{
	class UPrimalItem*                                 anItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.BPNotifyItemAdded
struct UPrimalInventoryComponent_BPNotifyItemAdded_Params
{
	class UPrimalItem*                                 anItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEquipItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.BPInventoryRefresh
struct UPrimalInventoryComponent_BPInventoryRefresh_Params
{
};

// Function ShooterGame.PrimalInventoryComponent.BPIncrementItemTemplateQuantity
struct UPrimalInventoryComponent_BPIncrementItemTemplateQuantity_Params
{
	class UClass*                                      ItemTemplate;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReplicateToClient;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsBlueprint;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRequireExactClassMatch;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCraftingResourceConsumption;                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFromUseConsumption;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsArkTributeItem;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.BPGetItemOfTemplate
struct UPrimalInventoryComponent_BPGetItemOfTemplate_Params
{
	class UClass*                                      ItemTemplate;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyInventoryItems;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyEquippedItems;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreItemsWithFullQuantity;                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFavorSlotItems;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsBlueprint;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRequiresExactClassMatch;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreSlotItems;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyArkItems;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPreferEngram;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsForCraftingConsumption;                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.BPDropInventoryDeposit
struct UPrimalInventoryComponent_BPDropInventoryDeposit_Params
{
	double                                             DestroyAtTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.BPCraftingFinishedNotification
struct UPrimalInventoryComponent_BPCraftingFinishedNotification_Params
{
	class UPrimalItem*                                 itemToBeCrafted;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.BPAllowUseInInventory
struct UPrimalInventoryComponent_BPAllowUseInInventory_Params
{
	class UPrimalItem*                                 theItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRemoteInventory;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController*                    ByPC;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalInventoryComponent.BPAccessedInventory
struct UPrimalInventoryComponent_BPAccessedInventory_Params
{
	class AShooterPlayerController*                    ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalPlayerData.LinkedPlayerIDString
struct UPrimalPlayerData_LinkedPlayerIDString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.PrimalPlayerData.GetUniqueIdString
struct UPrimalPlayerData_GetUniqueIdString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.PrimalPlayerData.FindCharacterForPlayer
struct UPrimalPlayerData_FindCharacterForPlayer_Params
{
	class UWorld*                                      inWorld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.TestPhysxPerf
struct AShooterPlayerController_TestPhysxPerf_Params
{
};

// Function ShooterGame.ShooterPlayerController.TestNotification
struct AShooterPlayerController_TestNotification_Params
{
};

// Function ShooterGame.ShooterPlayerController.TestAlarmNotification
struct AShooterPlayerController_TestAlarmNotification_Params
{
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerController.TeleportSpectatorToPlayerCharacter
struct AShooterPlayerController_TeleportSpectatorToPlayerCharacter_Params
{
	class AShooterCharacter*                           ToPlayerCharacter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.StopSpectating
struct AShooterPlayerController_StopSpectating_Params
{
};

// Function ShooterGame.ShooterPlayerController.ShowTribeManager
struct AShooterPlayerController_ShowTribeManager_Params
{
};

// Function ShooterGame.ShooterPlayerController.ShowMyAdminManager
struct AShooterPlayerController_ShowMyAdminManager_Params
{
};

// Function ShooterGame.ShooterPlayerController.SetCheatPlayer
struct AShooterPlayerController_SetCheatPlayer_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.SetAdminIcon
struct AShooterPlayerController_SetAdminIcon_Params
{
	bool                                               bAdminIcon;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerUploadDino
struct AShooterPlayerController_ServerUploadDino_Params
{
	class APrimalDinoCharacter*                        DownloadedDino;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerUploadCharaterDataToArk
struct AShooterPlayerController_ServerUploadCharaterDataToArk_Params
{
	class UPrimalInventoryComponent*                   InventoryComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerUnbanPlayer
struct AShooterPlayerController_ServerUnbanPlayer_Params
{
	struct FString                                     PlayerSteamName;                                          // (Parm, ZeroConstructor)
	struct FString                                     PlayerSteamID;                                            // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerController.ServerTransferToRemoteInventory
struct AShooterPlayerController_ServerTransferToRemoteInventory_Params
{
	class UPrimalInventoryComponent*                   InventoryComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FItemNetID                                  ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAlsoTryToEqup;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                requestedQuantity;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerTransferFromRemoteInventory
struct AShooterPlayerController_ServerTransferFromRemoteInventory_Params
{
	class UPrimalInventoryComponent*                   InventoryComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FItemNetID                                  ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                requestedQuantity;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ToSlotIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEquipItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerTransferAllToRemoteInventory
struct AShooterPlayerController_ServerTransferAllToRemoteInventory_Params
{
	class UPrimalInventoryComponent*                   InventoryComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     CurrentCustomFolderFilter;                                // (Parm, ZeroConstructor)
	struct FString                                     CurrentNameFilter;                                        // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerController.ServerTransferAllFromRemoteInventory
struct AShooterPlayerController_ServerTransferAllFromRemoteInventory_Params
{
	class UPrimalInventoryComponent*                   InventoryComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     CurrentCustomFolderFilter;                                // (Parm, ZeroConstructor)
	struct FString                                     CurrentNameFilter;                                        // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerController.ServerSuicide
struct AShooterPlayerController_ServerSuicide_Params
{
};

// Function ShooterGame.ShooterPlayerController.ServerStopSpectating
struct AShooterPlayerController_ServerStopSpectating_Params
{
};

// Function ShooterGame.ShooterPlayerController.ServerStayAlive
struct AShooterPlayerController_ServerStayAlive_Params
{
};

// Function ShooterGame.ShooterPlayerController.ServerSpectateToPlayerByID
struct AShooterPlayerController_ServerSpectateToPlayerByID_Params
{
	uint64_t                                           PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerSpectateLastDeathLocation
struct AShooterPlayerController_ServerSpectateLastDeathLocation_Params
{
};

// Function ShooterGame.ShooterPlayerController.ServerShowMessageOfTheDay
struct AShooterPlayerController_ServerShowMessageOfTheDay_Params
{
};

// Function ShooterGame.ShooterPlayerController.ServerSetVRPlayer
struct AShooterPlayerController_ServerSetVRPlayer_Params
{
	bool                                               bSetVRPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerSetSupressAdminIcon
struct AShooterPlayerController_ServerSetSupressAdminIcon_Params
{
	bool                                               bSuppress;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerSetSubscribedApp
struct AShooterPlayerController_ServerSetSubscribedApp_Params
{
	int                                                AppID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerSetSpectatorFirstPersonViewTarget
struct AShooterPlayerController_ServerSetSpectatorFirstPersonViewTarget_Params
{
	class AActor*                                      InTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerSetMessageOfTheDay
struct AShooterPlayerController_ServerSetMessageOfTheDay_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerController.ServerSetDamageLogOpen
struct AShooterPlayerController_ServerSetDamageLogOpen_Params
{
	bool                                               bIsOpen;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerSetAutoJoinTribe
struct AShooterPlayerController_ServerSetAutoJoinTribe_Params
{
	struct FSOTFPartyInfo                              PartyInfo;                                                // (Parm)
};

// Function ShooterGame.ShooterPlayerController.ServerSendDirectMessage
struct AShooterPlayerController_ServerSendDirectMessage_Params
{
	struct FString                                     PlayerSteamID;                                            // (Parm, ZeroConstructor)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerController.ServerSendChatMessage
struct AShooterPlayerController_ServerSendChatMessage_Params
{
	struct FString                                     ChatMessage;                                              // (Parm, ZeroConstructor)
	int                                                SendMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerSendArkDataPayloadEnd
struct AShooterPlayerController_ServerSendArkDataPayloadEnd_Params
{
	struct FGuid                                       ID;                                                       // (Parm, ZeroConstructor)
	TEnumAsByte<EPrimalARKTributeDataType>             ArkDataType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerSendArkDataPayloadBegin
struct AShooterPlayerController_ServerSendArkDataPayloadBegin_Params
{
	struct FGuid                                       ID;                                                       // (Parm, ZeroConstructor)
	TEnumAsByte<EPrimalARKTributeDataType>             ArkDataType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DataClass;                                                // (Parm, ZeroConstructor)
	struct FString                                     TagName;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	TArray<struct FString>                             DataStats;                                                // (ConstParm, Parm, ZeroConstructor)
	uint32_t                                           ID1;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ID2;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerSendArkDataPayload
struct AShooterPlayerController_ServerSendArkDataPayload_Params
{
	struct FGuid                                       ID;                                                       // (Parm, ZeroConstructor)
	TEnumAsByte<EPrimalARKTributeDataType>             ArkDataType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              DataBytes;                                                // (ConstParm, Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerController.ServerSaveWorld
struct AShooterPlayerController_ServerSaveWorld_Params
{
};

// Function ShooterGame.ShooterPlayerController.ServerRequestTribeLog
struct AShooterPlayerController_ServerRequestTribeLog_Params
{
};

// Function ShooterGame.ShooterPlayerController.ServerRequestSetPin
struct AShooterPlayerController_ServerRequestSetPin_Params
{
	class UObject*                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PinValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSetting;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerRequestRespawnAtPoint
struct AShooterPlayerController_ServerRequestRespawnAtPoint_Params
{
	int                                                spawnPointID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                spawnRegionIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerRequestRemoveWeaponClipAmmo
struct AShooterPlayerController_ServerRequestRemoveWeaponClipAmmo_Params
{
	class UPrimalInventoryComponent*                   InventoryComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FItemNetID                                  ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerRequestRemoveItemSkin
struct AShooterPlayerController_ServerRequestRemoveItemSkin_Params
{
	class UPrimalInventoryComponent*                   InventoryComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FItemNetID                                  ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerRequestRemoteDropAllItems
struct AShooterPlayerController_ServerRequestRemoteDropAllItems_Params
{
	class UPrimalInventoryComponent*                   InventoryComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     CurrentCustomFolderFilter;                                // (Parm, ZeroConstructor)
	struct FString                                     CurrentNameFilter;                                        // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerController.ServerRequestPlaceStructure
struct AShooterPlayerController_ServerRequestPlaceStructure_Params
{
	int                                                StructureIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BuildLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    BuildRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    PlayerViewRotation;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       AttachToPawn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalDinoCharacter*                        DinoCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemNetID                                  PlaceUsingItemID;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSnapped;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCheat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFlipped;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerRequestLevelUp
struct AShooterPlayerController_ServerRequestLevelUp_Params
{
	class UPrimalCharacterStatusComponent*             forStatusComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EPrimalCharacterStatusValue>           ValueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerRequestInventoryUseItemWithItem
struct AShooterPlayerController_ServerRequestInventoryUseItemWithItem_Params
{
	class UPrimalInventoryComponent*                   InventoryComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FItemNetID                                  ItemID1;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemNetID                                  ItemID2;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AdditionalData;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerRequestInventoryUseItemWithActor
struct AShooterPlayerController_ServerRequestInventoryUseItemWithActor_Params
{
	class AActor*                                      anActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryComponent*                   InventoryComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FItemNetID                                  ItemID1;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AdditionalData;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerRequestInventoryUseItem
struct AShooterPlayerController_ServerRequestInventoryUseItem_Params
{
	class UPrimalInventoryComponent*                   InventoryComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FItemNetID                                  ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEntireStack;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerRequestInventorySwapItems
struct AShooterPlayerController_ServerRequestInventorySwapItems_Params
{
	class UPrimalInventoryComponent*                   InventoryComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FItemNetID                                  ItemID1;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemNetID                                  ItemID2;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerRequestFastTravelToPoint
struct AShooterPlayerController_ServerRequestFastTravelToPoint_Params
{
	int                                                fromSpawnPointID;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                spawnPointID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerRequestDropAllItems
struct AShooterPlayerController_ServerRequestDropAllItems_Params
{
	struct FString                                     CurrentCustomFolderFilter;                                // (Parm, ZeroConstructor)
	struct FString                                     CurrentNameFilter;                                        // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerController.ServerRequestCreateNewPlayerWithArkData
struct AShooterPlayerController_ServerRequestCreateNewPlayerWithArkData_Params
{
	TArray<unsigned char>                              PlayerArkDataBytes;                                       // (ConstParm, Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerController.ServerRequestActorItems
struct AShooterPlayerController_ServerRequestActorItems_Params
{
	class UPrimalInventoryComponent*                   forInventory;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bInventoryItems;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFirstSpawn;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerRepeatMultiUse
struct AShooterPlayerController_ServerRepeatMultiUse_Params
{
	class UObject*                                     ForObject;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerRepairItem
struct AShooterPlayerController_ServerRepairItem_Params
{
	class UPrimalInventoryComponent*                   InventoryComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FItemNetID                                  ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerRemoveSteamItemSucceeded
struct AShooterPlayerController_ServerRemoveSteamItemSucceeded_Params
{
};

// Function ShooterGame.ShooterPlayerController.ServerRemoveSteamItem
struct AShooterPlayerController_ServerRemoveSteamItem_Params
{
	uint32_t                                           ItemdDefId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerRemovePawnItem
struct AShooterPlayerController_ServerRemovePawnItem_Params
{
	struct FItemNetID                                  ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSecondryAction;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerRemovePassenger
struct AShooterPlayerController_ServerRemovePassenger_Params
{
};

// Function ShooterGame.ShooterPlayerController.ServerRemoveAllSteamInventory
struct AShooterPlayerController_ServerRemoveAllSteamInventory_Params
{
};

// Function ShooterGame.ShooterPlayerController.ServerReleaseSeatingStructure
struct AShooterPlayerController_ServerReleaseSeatingStructure_Params
{
};

// Function ShooterGame.ShooterPlayerController.ServerRefreshSteamInventory
struct AShooterPlayerController_ServerRefreshSteamInventory_Params
{
};

// Function ShooterGame.ShooterPlayerController.ServerRefreshCosmeticsSteamInventory
struct AShooterPlayerController_ServerRefreshCosmeticsSteamInventory_Params
{
};

// Function ShooterGame.ShooterPlayerController.ServerReadMessageOFTheDay
struct AShooterPlayerController_ServerReadMessageOFTheDay_Params
{
};

// Function ShooterGame.ShooterPlayerController.ServerPaint
struct AShooterPlayerController_ServerPaint_Params
{
	class UStructurePaintingComponent*                 Structure;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FPaintItem>                          Paints;                                                   // (ConstParm, Parm, ZeroConstructor)
	bool                                               bLastBatch;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromLoadFile;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReplicateToClients;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerNotifyEditText
struct AShooterPlayerController_ServerNotifyEditText_Params
{
	struct FString                                     TextToUse;                                                // (Parm, ZeroConstructor)
	bool                                               checkedBox;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ForObjectClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ExtraID1;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ExtraID2;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ForObject;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerMultiUse
struct AShooterPlayerController_ServerMultiUse_Params
{
	class UObject*                                     ForObject;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerLoadWorld
struct AShooterPlayerController_ServerLoadWorld_Params
{
};

// Function ShooterGame.ShooterPlayerController.ServerLoadArkInventoryItems
struct AShooterPlayerController_ServerLoadArkInventoryItems_Params
{
	TArray<struct FItemNetInfo>                        ArkInventoryItems;                                        // (ConstParm, Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerController.ServerListPlayers
struct AShooterPlayerController_ServerListPlayers_Params
{
};

// Function ShooterGame.ShooterPlayerController.ServerKickPlayer
struct AShooterPlayerController_ServerKickPlayer_Params
{
	struct FString                                     PlayerSteamName;                                          // (Parm, ZeroConstructor)
	struct FString                                     PlayerSteamID;                                            // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerController.ServerInventoryClearCraftQueue
struct AShooterPlayerController_ServerInventoryClearCraftQueue_Params
{
	class UPrimalInventoryComponent*                   InventoryComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerGiveItem
struct AShooterPlayerController_ServerGiveItem_Params
{
	int                                                ArchIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerGetMessageOfTheDay
struct AShooterPlayerController_ServerGetMessageOfTheDay_Params
{
};

// Function ShooterGame.ShooterPlayerController.ServerGetCosmeticsItems
struct AShooterPlayerController_ServerGetCosmeticsItems_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerEquipToRemoteInventory
struct AShooterPlayerController_ServerEquipToRemoteInventory_Params
{
	class UPrimalInventoryComponent*                   InventoryComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FItemNetID                                  ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerEquipPawnItem
struct AShooterPlayerController_ServerEquipPawnItem_Params
{
	struct FItemNetID                                  ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerDropFromRemoteInventory
struct AShooterPlayerController_ServerDropFromRemoteInventory_Params
{
	class UPrimalInventoryComponent*                   InventoryComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FItemNetID                                  ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerDisallowPlayerToJoinNoCheck
struct AShooterPlayerController_ServerDisallowPlayerToJoinNoCheck_Params
{
	struct FString                                     PlayerId;                                                 // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerController.ServerDeleteItemFromCustomFolder
struct AShooterPlayerController_ServerDeleteItemFromCustomFolder_Params
{
	class UPrimalInventoryComponent*                   forInventory;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     CFolderName;                                              // (Parm, ZeroConstructor)
	int                                                InventoryCompType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemNetID                                  ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerDeleteCustomFolder
struct AShooterPlayerController_ServerDeleteCustomFolder_Params
{
	class UPrimalInventoryComponent*                   forInventory;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     CFolderName;                                              // (Parm, ZeroConstructor)
	int                                                InventoryCompType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerCycleToClosestEnemies
struct AShooterPlayerController_ServerCycleToClosestEnemies_Params
{
	bool                                               bIsFirstPersonSpectating;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerCycleSpectator
struct AShooterPlayerController_ServerCycleSpectator_Params
{
	bool                                               bNext;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerCraftItem
struct AShooterPlayerController_ServerCraftItem_Params
{
	class UPrimalInventoryComponent*                   InventoryComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FItemNetID                                  ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerCheckUnfreeze
struct AShooterPlayerController_ServerCheckUnfreeze_Params
{
};

// Function ShooterGame.ShooterPlayerController.ServerBanPlayer
struct AShooterPlayerController_ServerBanPlayer_Params
{
	struct FString                                     PlayerSteamName;                                          // (Parm, ZeroConstructor)
	struct FString                                     PlayerSteamID;                                            // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerController.ServerAutoCreateTribe
struct AShooterPlayerController_ServerAutoCreateTribe_Params
{
	struct FSOTFPartyInfo                              PartyInfo;                                                // (Parm)
};

// Function ShooterGame.ShooterPlayerController.ServerAllowPlayerToJoinNoCheck
struct AShooterPlayerController_ServerAllowPlayerToJoinNoCheck_Params
{
	struct FString                                     PlayerId;                                                 // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerController.ServerAddItemToCustomFolder
struct AShooterPlayerController_ServerAddItemToCustomFolder_Params
{
	class UPrimalInventoryComponent*                   forInventory;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     CFolderName;                                              // (Parm, ZeroConstructor)
	int                                                InventoryCompType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemNetID                                  ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerAddItemToArkInventory
struct AShooterPlayerController_ServerAddItemToArkInventory_Params
{
	class UPrimalInventoryComponent*                   InventoryComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FItemNetID                                  ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerAddItemFromArkInventory
struct AShooterPlayerController_ServerAddItemFromArkInventory_Params
{
	class UPrimalInventoryComponent*                   InventoryComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FItemNetID                                  ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerActorViewRemoteInventory
struct AShooterPlayerController_ServerActorViewRemoteInventory_Params
{
	class UPrimalInventoryComponent*                   InventoryComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerActorCloseRemoteInventory
struct AShooterPlayerController_ServerActorCloseRemoteInventory_Params
{
	class UPrimalInventoryComponent*                   InventoryComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerAcceptTribeInvite
struct AShooterPlayerController_ServerAcceptTribeInvite_Params
{
};

// Function ShooterGame.ShooterPlayerController.SendAlarmNotification
struct AShooterPlayerController_SendAlarmNotification_Params
{
	struct FString                                     SteamID;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerController.SameLinkedId
struct AShooterPlayerController_SameLinkedId_Params
{
	int64_t                                            Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.RPCStayAlive
struct AShooterPlayerController_RPCStayAlive_Params
{
};

// Function ShooterGame.ShooterPlayerController.ResetDodgePunishment
struct AShooterPlayerController_ResetDodgePunishment_Params
{
};

// Function ShooterGame.ShooterPlayerController.RequestSpectator
struct AShooterPlayerController_RequestSpectator_Params
{
	struct FString                                     InSpectatorPass;                                          // (ConstParm, Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerController.RemoveItemSucceeded
struct AShooterPlayerController_RemoveItemSucceeded_Params
{
};

// Function ShooterGame.ShooterPlayerController.PrintColors
struct AShooterPlayerController_PrintColors_Params
{
};

// Function ShooterGame.ShooterPlayerController.OnToggleInGameMenu
struct AShooterPlayerController_OnToggleInGameMenu_Params
{
};

// Function ShooterGame.ShooterPlayerController.OnServerRefreshSteamInventoryForRemoveFinished
struct AShooterPlayerController_OnServerRefreshSteamInventoryForRemoveFinished_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           SteamID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.OnServerRefreshSteamInventoryFinished
struct AShooterPlayerController_OnServerRefreshSteamInventoryFinished_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           SteamID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.OnServerRefreshCosmeticsSteamInventoryFinished
struct AShooterPlayerController_OnServerRefreshCosmeticsSteamInventoryFinished_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           SteamID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.OnRefreshSteamInventoryToCheckConsumeFinished
struct AShooterPlayerController_OnRefreshSteamInventoryToCheckConsumeFinished_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           SteamID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.OnRefreshSteamInventoryFinished
struct AShooterPlayerController_OnRefreshSteamInventoryFinished_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           SteamID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.OnEnableSpectator
struct AShooterPlayerController_OnEnableSpectator_Params
{
};

// Function ShooterGame.ShooterPlayerController.OnDisableSpectator
struct AShooterPlayerController_OnDisableSpectator_Params
{
};

// Function ShooterGame.ShooterPlayerController.OnConsumeItemFinished
struct AShooterPlayerController_OnConsumeItemFinished_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           SteamID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.OnAddItemFinished
struct AShooterPlayerController_OnAddItemFinished_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<uint64_t>                                   SteamItemUserIDs;                                         // (Parm, ZeroConstructor)
	uint64_t                                           SteamID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           SteamDefID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           AppID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.NotifyTribeWarStatus
struct AShooterPlayerController_NotifyTribeWarStatus_Params
{
	struct FString                                     EnemyTribeString;                                         // (Parm, ZeroConstructor)
	int                                                StatusType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.LinkedPlayerIDString
struct AShooterPlayerController_LinkedPlayerIDString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.ShooterPlayerController.IsSpectator
struct AShooterPlayerController_IsSpectator_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.IsHudVisible
struct AShooterPlayerController_IsHudVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.InitCharacterPainting
struct AShooterPlayerController_InitCharacterPainting_Params
{
	class APrimalCharacter*                            Char;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.HideRiders
struct AShooterPlayerController_HideRiders_Params
{
	bool                                               bDoHide;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.GiveSlotItemNum
struct AShooterPlayerController_GiveSlotItemNum_Params
{
	int                                                masterIndexNum;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                slotNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                quantityOverride;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.GiveSlotItem
struct AShooterPlayerController_GiveSlotItem_Params
{
	struct FString                                     blueprintPath;                                            // (Parm, ZeroConstructor)
	int                                                slotNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                quantityOverride;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.GiveColors
struct AShooterPlayerController_GiveColors_Params
{
	int                                                Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.GetTribeID
struct AShooterPlayerController_GetTribeID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.GetSpectatorOrbitTarget
struct AShooterPlayerController_GetSpectatorOrbitTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.GetSpectatorFirstPersonTarget
struct AShooterPlayerController_GetSpectatorFirstPersonTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.GetPlayerCharacterName
struct AShooterPlayerController_GetPlayerCharacterName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.ShooterPlayerController.GetPlayerCharacter
struct AShooterPlayerController_GetPlayerCharacter_Params
{
	class AShooterCharacter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.GetLinkedPlayerID
struct AShooterPlayerController_GetLinkedPlayerID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ForfeitMatch
struct AShooterPlayerController_ForfeitMatch_Params
{
	bool                                               AFK;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.Forfeit
struct AShooterPlayerController_Forfeit_Params
{
};

// Function ShooterGame.ShooterPlayerController.FlushLevelStreaming
struct AShooterPlayerController_FlushLevelStreaming_Params
{
};

// Function ShooterGame.ShooterPlayerController.EnableSpectator
struct AShooterPlayerController_EnableSpectator_Params
{
};

// Function ShooterGame.ShooterPlayerController.DoServerCheckUnfreeze
struct AShooterPlayerController_DoServerCheckUnfreeze_Params
{
};

// Function ShooterGame.ShooterPlayerController.DoCrash
struct AShooterPlayerController_DoCrash_Params
{
};

// Function ShooterGame.ShooterPlayerController.DebugStructures
struct AShooterPlayerController_DebugStructures_Params
{
};

// Function ShooterGame.ShooterPlayerController.ClientUsedActorItem
struct AShooterPlayerController_ClientUsedActorItem_Params
{
	class UPrimalInventoryComponent*                   forInventory;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FItemNetID                                  ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientUploadDino
struct AShooterPlayerController_ClientUploadDino_Params
{
	class APrimalDinoCharacter*                        DownloadedDino;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientUpdateItemQuantity
struct AShooterPlayerController_ClientUpdateItemQuantity_Params
{
	class UPrimalInventoryComponent*                   forInventory;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FItemNetID                                  ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemQuantity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientUpdateItemDurability
struct AShooterPlayerController_ClientUpdateItemDurability_Params
{
	class UPrimalInventoryComponent*                   forInventory;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FItemNetID                                  ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ItemDurability;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientUpdateInventoryCraftQueue
struct AShooterPlayerController_ClientUpdateInventoryCraftQueue_Params
{
	class UPrimalInventoryComponent*                   forInventory;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FItemCraftQueueEntry>                CraftQueueEntries;                                        // (ConstParm, Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerController.ClientUpdateActorTransform
struct AShooterPlayerController_ClientUpdateActorTransform_Params
{
	class AActor*                                      forActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TheLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    TheRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TheVelocity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientUnlockAchievement
struct AShooterPlayerController_ClientUnlockAchievement_Params
{
	struct FString                                     AchievementID;                                            // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerController.ClientTeleportSpectator
struct AShooterPlayerController_ClientTeleportSpectator_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCanSpectateDeadPlayers;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSpectatingToLoc;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     camDir;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceDisableFirstPersonSpectator;                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientSwapActorItems
struct AShooterPlayerController_ClientSwapActorItems_Params
{
	class UPrimalInventoryComponent*                   forInventory;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FItemNetID                                  ItemID1;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemNetID                                  ItemID2;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientStopAFKCountDown
struct AShooterPlayerController_ClientStopAFKCountDown_Params
{
};

// Function ShooterGame.ShooterPlayerController.ClientStartReceivingTribeLog
struct AShooterPlayerController_ClientStartReceivingTribeLog_Params
{
};

// Function ShooterGame.ShooterPlayerController.ClientStartReceivingActorItems
struct AShooterPlayerController_ClientStartReceivingActorItems_Params
{
	class UPrimalInventoryComponent*                   forInventory;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bEquippedItems;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientStartAFKCountDown
struct AShooterPlayerController_ClientStartAFKCountDown_Params
{
	float                                              CountDownTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientShowSpawnUI
struct AShooterPlayerController_ClientShowSpawnUI_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientShowPaintingUI
struct AShooterPlayerController_ClientShowPaintingUI_Params
{
	class UObject*                                     ObjectToPaint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientShowCosmeticsRewardPopup
struct AShooterPlayerController_ClientShowCosmeticsRewardPopup_Params
{
	int                                                SteamItemID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientShowCharacterCreationUI
struct AShooterPlayerController_ClientShowCharacterCreationUI_Params
{
};

// Function ShooterGame.ShooterPlayerController.ClientServerSOTFNotificationCustom
struct AShooterPlayerController_ClientServerSOTFNotificationCustom_Params
{
	struct FString                                     MessageText;                                              // (Parm, ZeroConstructor)
	struct FLinearColor                                MessageColor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DisplayScale;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DisplayTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  MessageIcon;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  SoundToPlay;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCanUseChatNotification;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientServerSOTFNotification
struct AShooterPlayerController_ClientServerSOTFNotification_Params
{
	TEnumAsByte<ESTOFNotificationType>                 NotificationType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MessageText;                                              // (Parm, ZeroConstructor)
	struct FLinearColor                                MessageColor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DisplayScale;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DisplayTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  MessageIcon;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  SoundToPlay;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLastPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     TribeName;                                                // (Parm, ZeroConstructor)
	int                                                TribeID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             PlayerNames;                                              // (ConstParm, Parm, ZeroConstructor)
	struct FString                                     DeathReason;                                              // (Parm, ZeroConstructor)
	TArray<struct FPrimalPlayerCharacterConfigStructReplicated> DeadPlayersData;                                          // (ConstParm, Parm, ZeroConstructor)
	bool                                               bCanUseChatNotification;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceScreenMessage;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientServerNotificationSingle
struct AShooterPlayerController_ClientServerNotificationSingle_Params
{
	struct FString                                     MessageText;                                              // (Parm, ZeroConstructor)
	struct FLinearColor                                MessageColor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DisplayScale;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DisplayTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  MessageIcon;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  SoundToPlay;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MessageTypeID;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCanUseChatNotification;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientServerNotification
struct AShooterPlayerController_ClientServerNotification_Params
{
	struct FString                                     MessageText;                                              // (Parm, ZeroConstructor)
	struct FLinearColor                                MessageColor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DisplayScale;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DisplayTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  MessageIcon;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  SoundToPlay;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCanUseChatNotification;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientServerChatMessage
struct AShooterPlayerController_ClientServerChatMessage_Params
{
	struct FString                                     MessageText;                                              // (Parm, ZeroConstructor)
	struct FLinearColor                                MessageColor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsBold;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientServerChatDirectMessage
struct AShooterPlayerController_ClientServerChatDirectMessage_Params
{
	struct FString                                     MessageText;                                              // (Parm, ZeroConstructor)
	struct FLinearColor                                MessageColor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsBold;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientSendFolderData
struct AShooterPlayerController_ClientSendFolderData_Params
{
	class UPrimalInventoryComponent*                   forInventory;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FServerCustomFolder>                 ServerCustomFolder;                                       // (ConstParm, Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerController.ClientSendArkDataPayloadEnd
struct AShooterPlayerController_ClientSendArkDataPayloadEnd_Params
{
	struct FGuid                                       ID;                                                       // (Parm, ZeroConstructor)
	TEnumAsByte<EPrimalARKTributeDataType>             ArkDataType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientSendArkDataPayloadBegin
struct AShooterPlayerController_ClientSendArkDataPayloadBegin_Params
{
	struct FGuid                                       ID;                                                       // (Parm, ZeroConstructor)
	TEnumAsByte<EPrimalARKTributeDataType>             ArkDataType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DataClass;                                                // (Parm, ZeroConstructor)
	struct FString                                     TagName;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	TArray<struct FString>                             DataStats;                                                // (ConstParm, Parm, ZeroConstructor)
	uint32_t                                           ID1;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ID2;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientSendArkDataPayload
struct AShooterPlayerController_ClientSendArkDataPayload_Params
{
	struct FGuid                                       ID;                                                       // (Parm, ZeroConstructor)
	TEnumAsByte<EPrimalARKTributeDataType>             ArkDataType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              DataBytes;                                                // (ConstParm, Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerController.ClientResetLastPartyData
struct AShooterPlayerController_ClientResetLastPartyData_Params
{
};

// Function ShooterGame.ShooterPlayerController.ClientRemoveItemFromSteamInventory
struct AShooterPlayerController_ClientRemoveItemFromSteamInventory_Params
{
	TArray<uint64_t>                                   ItemSteamUserID;                                          // (ConstParm, Parm, ZeroConstructor)
	int                                                Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientRemoveItemFromArk
struct AShooterPlayerController_ClientRemoveItemFromArk_Params
{
	class UPrimalInventoryComponent*                   forInventory;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FItemNetID                                  RemovedItemID;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientRemoveActorItem
struct AShooterPlayerController_ClientRemoveActorItem_Params
{
	class UPrimalInventoryComponent*                   forInventory;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FItemNetID                                  ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientRefreshSteamInventoryFinished
struct AShooterPlayerController_ClientRefreshSteamInventoryFinished_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientReceiveTribeLog
struct AShooterPlayerController_ClientReceiveTribeLog_Params
{
	struct FString                                     LogString;                                                // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerController.ClientPlayLocalSound
struct AShooterPlayerController_ClientPlayLocalSound_Params
{
	class USoundBase*                                  aSound;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientPlayHitMarkerStructureAlly
struct AShooterPlayerController_ClientPlayHitMarkerStructureAlly_Params
{
};

// Function ShooterGame.ShooterPlayerController.ClientPlayHitMarkerStructure
struct AShooterPlayerController_ClientPlayHitMarkerStructure_Params
{
};

// Function ShooterGame.ShooterPlayerController.ClientPlayHitMarkerDinoAlly
struct AShooterPlayerController_ClientPlayHitMarkerDinoAlly_Params
{
};

// Function ShooterGame.ShooterPlayerController.ClientPlayHitMarkerDino
struct AShooterPlayerController_ClientPlayHitMarkerDino_Params
{
};

// Function ShooterGame.ShooterPlayerController.ClientPlayHitMarkerCharacterAlly
struct AShooterPlayerController_ClientPlayHitMarkerCharacterAlly_Params
{
};

// Function ShooterGame.ShooterPlayerController.ClientPlayHitMarkerCharacter
struct AShooterPlayerController_ClientPlayHitMarkerCharacter_Params
{
};

// Function ShooterGame.ShooterPlayerController.ClientOpenMainMenu
struct AShooterPlayerController_ClientOpenMainMenu_Params
{
};

// Function ShooterGame.ShooterPlayerController.ClientNotifyTribeXP
struct AShooterPlayerController_ClientNotifyTribeXP_Params
{
	float                                              HowMuch;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientNotifyTorpidityIncrease
struct AShooterPlayerController_ClientNotifyTorpidityIncrease_Params
{
};

// Function ShooterGame.ShooterPlayerController.ClientNotifyTamedDino
struct AShooterPlayerController_ClientNotifyTamedDino_Params
{
	class UClass*                                      DinoClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientNotifySummonedDino
struct AShooterPlayerController_ClientNotifySummonedDino_Params
{
	class UClass*                                      DinoClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientNotifyRemotePlayerDeath
struct AShooterPlayerController_ClientNotifyRemotePlayerDeath_Params
{
	struct FString                                     PlayerName;                                               // (Parm, ZeroConstructor)
	struct FString                                     AttackerName;                                             // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerController.ClientNotifyPlayerKill
struct AShooterPlayerController_ClientNotifyPlayerKill_Params
{
	class AShooterCharacter*                           PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       VictimPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientNotifyPlayerDeathReason
struct AShooterPlayerController_ClientNotifyPlayerDeathReason_Params
{
	struct FString                                     ReasonString;                                             // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerController.ClientNotifyPlayerDeath
struct AShooterPlayerController_ClientNotifyPlayerDeath_Params
{
	class APawn*                                       InstigatingPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientNotifyPaintFinished
struct AShooterPlayerController_ClientNotifyPaintFinished_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientNotifyMessageOfTheDay
struct AShooterPlayerController_ClientNotifyMessageOfTheDay_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
	float                                              timeToDisplay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientNotifyListenServerOutOfRange
struct AShooterPlayerController_ClientNotifyListenServerOutOfRange_Params
{
};

// Function ShooterGame.ShooterPlayerController.ClientNotifyLevelUp
struct AShooterPlayerController_ClientNotifyLevelUp_Params
{
	class APrimalCharacter*                            ForChar;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientNotifyHitHarvest
struct AShooterPlayerController_ClientNotifyHitHarvest_Params
{
};

// Function ShooterGame.ShooterPlayerController.ClientNotifyEditText
struct AShooterPlayerController_ClientNotifyEditText_Params
{
	class UClass*                                      ForObjectClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ExtraID1;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ExtraID2;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ForObject;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientNotifyDinoKill
struct AShooterPlayerController_ClientNotifyDinoKill_Params
{
	class APrimalDinoCharacter*                        InstigatingPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       VictimPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientNotifyDinoDeath
struct AShooterPlayerController_ClientNotifyDinoDeath_Params
{
	struct FString                                     DinoName;                                                 // (Parm, ZeroConstructor)
	struct FString                                     AttackerName;                                             // (Parm, ZeroConstructor)
	bool                                               bIsVehicle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientNotifyDefeatedDino
struct AShooterPlayerController_ClientNotifyDefeatedDino_Params
{
	class UClass*                                      DinoClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientNotifyCantHitHarvest
struct AShooterPlayerController_ClientNotifyCantHitHarvest_Params
{
};

// Function ShooterGame.ShooterPlayerController.ClientNotifyCantHarvest
struct AShooterPlayerController_ClientNotifyCantHarvest_Params
{
};

// Function ShooterGame.ShooterPlayerController.ClientNotifyAdmin
struct AShooterPlayerController_ClientNotifyAdmin_Params
{
};

// Function ShooterGame.ShooterPlayerController.ClientLoadArkItems
struct AShooterPlayerController_ClientLoadArkItems_Params
{
	class UPrimalInventoryComponent*                   forInventory;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FItemNetInfo>                        itemInfos;                                                // (ConstParm, Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerController.ClientInsertActorItem
struct AShooterPlayerController_ClientInsertActorItem_Params
{
	class UPrimalInventoryComponent*                   forInventory;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FItemNetInfo                                itemInfo;                                                 // (Parm)
	struct FItemNetID                                  InsertAfterItemID;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientHandleCosmeticsItems
struct AShooterPlayerController_ClientHandleCosmeticsItems_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FItemNetInfo>                        itemsInfo;                                                // (ConstParm, Parm, ZeroConstructor)
	bool                                               GiveCosmetics;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientGetMessageOfTheDay
struct AShooterPlayerController_ClientGetMessageOfTheDay_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerController.ClientFinishedReceivingActorItems
struct AShooterPlayerController_ClientFinishedReceivingActorItems_Params
{
	class UPrimalInventoryComponent*                   forInventory;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bEquippedItems;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientFinishedLoadArkItems
struct AShooterPlayerController_ClientFinishedLoadArkItems_Params
{
	class UPrimalInventoryComponent*                   forInventory;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientFailedRemoveSaddle
struct AShooterPlayerController_ClientFailedRemoveSaddle_Params
{
};

// Function ShooterGame.ShooterPlayerController.ClientEndReceivingTribeLog
struct AShooterPlayerController_ClientEndReceivingTribeLog_Params
{
};

// Function ShooterGame.ShooterPlayerController.ClientDoMultiUse
struct AShooterPlayerController_ClientDoMultiUse_Params
{
	class UObject*                                     ForObject;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientCycleToClosestEnemies
struct AShooterPlayerController_ClientCycleToClosestEnemies_Params
{
	struct FVector                                     NewLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     camDir;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientCollectedAchievementItem
struct AShooterPlayerController_ClientCollectedAchievementItem_Params
{
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientChatMessage
struct AShooterPlayerController_ClientChatMessage_Params
{
	struct FChatMessage                                Chat;                                                     // (Parm)
};

// Function ShooterGame.ShooterPlayerController.ClientAddItemToArk
struct AShooterPlayerController_ClientAddItemToArk_Params
{
	class UPrimalInventoryComponent*                   forInventory;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FItemNetInfo                                itemInfo;                                                 // (Parm)
	bool                                               bFromLoad;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientAddFolderToInventoryComponent
struct AShooterPlayerController_ClientAddFolderToInventoryComponent_Params
{
	class UPrimalInventoryComponent*                   forInventory;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     NewCustomFolderName;                                      // (Parm, ZeroConstructor)
	int                                                InventoryCompType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientAddFloatingText
struct AShooterPlayerController_ClientAddFloatingText_Params
{
	struct FVector_NetQuantize                         AtLocation;                                               // (Parm)
	struct FString                                     FloatingTextString;                                       // (Parm, ZeroConstructor)
	struct FColor                                      FloatingTextColor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScaleX;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScaleY;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TextLifeSpan;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TextVelocity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinScale;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeInTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientAddFloatingDamageText
struct AShooterPlayerController_ClientAddFloatingDamageText_Params
{
	struct FVector_NetQuantize                         AtLocation;                                               // (Parm)
	int                                                DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FromTeamID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientAddEntryToCombatLogBox
struct AShooterPlayerController_ClientAddEntryToCombatLogBox_Params
{
	struct FString                                     DamageString;                                             // (Parm, ZeroConstructor)
	class UTexture2D*                                  DamageIcon;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESoTFDamageType>                       DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           DamagedPlayerID;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientAddActorItem
struct AShooterPlayerController_ClientAddActorItem_Params
{
	class UPrimalInventoryComponent*                   forInventory;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FItemNetInfo                                itemInfo;                                                 // (Parm)
	bool                                               bEquipItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.CheckRequestSpectator
struct AShooterPlayerController_CheckRequestSpectator_Params
{
	struct FString                                     InSpectatorPass;                                          // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerController.CheckForPlayerInventory
struct AShooterPlayerController_CheckForPlayerInventory_Params
{
};

// Function ShooterGame.ShooterPlayerController.CheckforOrbiting
struct AShooterPlayerController_CheckforOrbiting_Params
{
};

// Function ShooterGame.ShooterPlayerController.CheckCheatsPassword
struct AShooterPlayerController_CheckCheatsPassword_Params
{
	struct FString                                     pass;                                                     // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerController.Cheat
struct AShooterPlayerController_Cheat_Params
{
	struct FString                                     Msg;                                                      // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerController.AutoCycle
struct AShooterPlayerController_AutoCycle_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.AllowTribeGroupPermission
struct AShooterPlayerController_AllowTribeGroupPermission_Params
{
	TEnumAsByte<ETribeGroupPermission>                 TribeGroupPermission;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OnObject;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.AdminCheat
struct AShooterPlayerController_AdminCheat_Params
{
	struct FString                                     Msg;                                                      // (Parm, ZeroConstructor)
};

// Function ShooterGame.BiomeZoneVolume.OnEndOverlap
struct ABiomeZoneVolume_OnEndOverlap_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.BiomeZoneVolume.OnBeginOverlap
struct ABiomeZoneVolume_OnBeginOverlap_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.BiomeZoneVolume.IsPointUnderwater
struct ABiomeZoneVolume_IsPointUnderwater_Params
{
	class UWorld*                                      ForWorld;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AtPoint;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFastPath;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinimumWaterHeight;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.BiomeZoneVolume.GetBiomeZoneVolume
struct ABiomeZoneVolume_GetBiomeZoneVolume_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class ABiomeZoneVolume*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomActorList.DestroyActors
struct ACustomActorList_DestroyActors_Params
{
};

// Function ShooterGame.CustomCanvasWidget.OnDraggedClickedEventObject__DelegateSignature
struct UCustomCanvasWidget_OnDraggedClickedEventObject__DelegateSignature_Params
{
	class UWidget*                                     draggeddWidget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.DataListEntryButton.ClickedButton
struct UDataListEntryButton_ClickedButton_Params
{
	class UWidget*                                     clickedWidget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.DamageVolumeBase.OnEndOverlap
struct ADamageVolumeBase_OnEndOverlap_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.DamageVolumeBase.OnBeginOverlap
struct ADamageVolumeBase_OnBeginOverlap_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.DataListEntryWidget.OnDraggedClickedEventObject
struct UDataListEntryWidget_OnDraggedClickedEventObject_Params
{
	class UWidget*                                     draggeddWidget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.DataListEntryWidget.InitializeMeDefaults
struct UDataListEntryWidget_InitializeMeDefaults_Params
{
};

// Function ShooterGame.DataListEntryWidget.GetDataListButton
struct UDataListEntryWidget_GetDataListButton_Params
{
	class UDataListEntryButton*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.DayCycleManager.IsDaytime
struct ADayCycleManager_IsDaytime_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.DestroyedMeshActor.SetNoCollisionProfile
struct ADestroyedMeshActor_SetNoCollisionProfile_Params
{
};

// Function ShooterGame.DroppedItem.ForceSleep
struct ADroppedItem_ForceSleep_Params
{
};

// Function ShooterGame.DroppedItemEgg.NetSpawnDinoEmitter
struct ADroppedItemEgg_NetSpawnDinoEmitter_Params
{
};

// Function ShooterGame.DroppedItemTorch.OnRep_FireIsOn
struct ADroppedItemTorch_OnRep_FireIsOn_Params
{
};

// Function ShooterGame.FadingDestructibleActor.SetupFade
struct AFadingDestructibleActor_SetupFade_Params
{
};

// Function ShooterGame.NPCZoneManager.StaticSpawnNPCs
struct ANPCZoneManager_StaticSpawnNPCs_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class ANPCZoneManager*                             AtZoneManager;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TheNPCSpawnEntries;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AtSpawnPoint;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    AtRotation;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                UseSpawnVolumeIndex;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class APrimalDinoCharacter*>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.NPCZoneVolume.OnEndOverlap
struct ANPCZoneVolume_OnEndOverlap_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.NPCZoneVolume.OnBeginOverlap
struct ANPCZoneVolume_OnBeginOverlap_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PaintingStreamingComponent.ServerSendNextChunk
struct UPaintingStreamingComponent_ServerSendNextChunk_Params
{
	class UStructurePaintingComponent*                 PaintingComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.PaintingStreamingComponent.ServerRequestPaintingStream
struct UPaintingStreamingComponent_ServerRequestPaintingStream_Params
{
	class UStructurePaintingComponent*                 PaintingComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.PaintingStreamingComponent.ServerCancelPaintingStream
struct UPaintingStreamingComponent_ServerCancelPaintingStream_Params
{
	class UStructurePaintingComponent*                 PaintingComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.PaintingStreamingComponent.ClientRecieveChunk
struct UPaintingStreamingComponent_ClientRecieveChunk_Params
{
	class UStructurePaintingComponent*                 PaintingComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<unsigned char>                              Bytes;                                                    // (ConstParm, Parm, ZeroConstructor)
};

// Function ShooterGame.PaintingStreamingComponent.ClientEndStreamingJob
struct UPaintingStreamingComponent_ClientEndStreamingJob_Params
{
	class UStructurePaintingComponent*                 PaintingComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.PaintingStreamingComponent.ClientCancelSteamingJob
struct UPaintingStreamingComponent_ClientCancelSteamingJob_Params
{
	class UStructurePaintingComponent*                 PaintingComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.PaintingStreamingComponent.ClientBeginStreamingJob
struct UPaintingStreamingComponent_ClientBeginStreamingJob_Params
{
	class UStructurePaintingComponent*                 PaintingComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Revision;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalAIState.TickAnimationStateEvent
struct UPrimalAIState_TickAnimationStateEvent_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENetRole>                              Role;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalAIState.TickAnimationState
struct UPrimalAIState_TickAnimationState_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENetRole>                              Role;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalAIState.StartAnimationStateEvent
struct UPrimalAIState_StartAnimationStateEvent_Params
{
	struct FName                                       CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENetRole>                              Role;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalAIState.StartAnimationState
struct UPrimalAIState_StartAnimationState_Params
{
	struct FName                                       CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENetRole>                              Role;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalAIState.ShouldSkipRangeCheckEvent
struct UPrimalAIState_ShouldSkipRangeCheckEvent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalAIState.ShouldSkipIntervalCheckEvent
struct UPrimalAIState_ShouldSkipIntervalCheckEvent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalAIState.SetLastAttackTime
struct UPrimalAIState_SetLastAttackTime_Params
{
};

// Function ShooterGame.PrimalAIState.SetInAnimationStateActive
struct UPrimalAIState_SetInAnimationStateActive_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalAIState.OnTickEvent
struct UPrimalAIState_OnTickEvent_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalAIState.OnTick
struct UPrimalAIState_OnTick_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalAIState.OnEndEvent
struct UPrimalAIState_OnEndEvent_Params
{
};

// Function ShooterGame.PrimalAIState.OnEnd
struct UPrimalAIState_OnEnd_Params
{
};

// Function ShooterGame.PrimalAIState.OnChildStateEndedEvent
struct UPrimalAIState_OnChildStateEndedEvent_Params
{
	class UPrimalAIState*                              PrimalAIState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalAIState.OnCanUseStateEvent
struct UPrimalAIState_OnCanUseStateEvent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalAIState.OnBeginEvent
struct UPrimalAIState_OnBeginEvent_Params
{
	class UPrimalAIState*                              InParentState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalAIState.OnBegin
struct UPrimalAIState_OnBegin_Params
{
	class UPrimalAIState*                              InParentState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalAIState.EndAnimationStateEvent
struct UPrimalAIState_EndAnimationStateEvent_Params
{
	struct FName                                       CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENetRole>                              Role;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalAIState.EndAnimationState
struct UPrimalAIState_EndAnimationState_Params
{
	struct FName                                       CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENetRole>                              Role;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalAIState.CanUseState
struct UPrimalAIState_CanUseState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.TargetableInterface.ToUObject
struct UTargetableInterface_ToUObject_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.UpdateTickSetting
struct APrimalCharacter_UpdateTickSetting_Params
{
};

// Function ShooterGame.PrimalCharacter.TakeDamage
struct APrimalCharacter_TakeDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.StopAnimEx
struct APrimalCharacter_StopAnimEx_Params
{
	class UAnimMontage*                                AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReplicate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReplicateToOwner;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.StartForceSkelUpdate
struct APrimalCharacter_StartForceSkelUpdate_Params
{
	float                                              ForTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceUpdateMesh;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bServerOnly;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.SleepBodies
struct APrimalCharacter_SleepBodies_Params
{
};

// Function ShooterGame.PrimalCharacter.SetStatusStateDefinition
struct APrimalCharacter_SetStatusStateDefinition_Params
{
	TEnumAsByte<EPrimalCharacterStatusState>           StatusStateType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUsed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StatusValueThresholdIndex;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.SetDeathByRing
struct APrimalCharacter_SetDeathByRing_Params
{
};

// Function ShooterGame.PrimalCharacter.ServerTryPoop
struct APrimalCharacter_ServerTryPoop_Params
{
};

// Function ShooterGame.PrimalCharacter.ServerSetRunning
struct APrimalCharacter_ServerSetRunning_Params
{
	bool                                               bNewRunning;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.ServerRequestDrag
struct APrimalCharacter_ServerRequestDrag_Params
{
};

// Function ShooterGame.PrimalCharacter.ServerGiveDefaultWeapon
struct APrimalCharacter_ServerGiveDefaultWeapon_Params
{
};

// Function ShooterGame.PrimalCharacter.ServerDinoOrder
struct APrimalCharacter_ServerDinoOrder_Params
{
	class APrimalDinoCharacter*                        aDino;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDinoTamedOrder>                       OrderType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.ServerCallStayOne
struct APrimalCharacter_ServerCallStayOne_Params
{
	class APrimalDinoCharacter*                        ForDinoChar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.ServerCallStay
struct APrimalCharacter_ServerCallStay_Params
{
};

// Function ShooterGame.PrimalCharacter.ServerCallPassive
struct APrimalCharacter_ServerCallPassive_Params
{
};

// Function ShooterGame.PrimalCharacter.ServerCallNeutral
struct APrimalCharacter_ServerCallNeutral_Params
{
};

// Function ShooterGame.PrimalCharacter.ServerCallFollowOne
struct APrimalCharacter_ServerCallFollowOne_Params
{
	class APrimalDinoCharacter*                        ForDinoChar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.ServerCallFollowDistanceCycleOne
struct APrimalCharacter_ServerCallFollowDistanceCycleOne_Params
{
	class APrimalDinoCharacter*                        ForDinoChar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.ServerCallFollow
struct APrimalCharacter_ServerCallFollow_Params
{
};

// Function ShooterGame.PrimalCharacter.ServerCallAttackTarget
struct APrimalCharacter_ServerCallAttackTarget_Params
{
	class AActor*                                      TheTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.ServerCallAggressive
struct APrimalCharacter_ServerCallAggressive_Params
{
};

// Function ShooterGame.PrimalCharacter.PrimalCharacterDied__DelegateSignature
struct APrimalCharacter_PrimalCharacterDied__DelegateSignature_Params
{
	class APrimalCharacter*                            DiedCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.PlayHitEffectRadial
struct APrimalCharacter_PlayHitEffectRadial_Params
{
	float                                              DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRadialDamageEvent                          DamageEvent;                                              // (Parm)
	class APawn*                                       PawnInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.PlayHitEffectPoint
struct APrimalCharacter_PlayHitEffectPoint_Params
{
	float                                              DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPointDamageEvent                           DamageEvent;                                              // (Parm)
	class APawn*                                       PawnInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.PlayHitEffectGeneric
struct APrimalCharacter_PlayHitEffectGeneric_Params
{
	float                                              DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm)
	class APawn*                                       PawnInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.PlayDyingRadial
struct APrimalCharacter_PlayDyingRadial_Params
{
	float                                              KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRadialDamageEvent                          DamageEvent;                                              // (Parm)
	class APawn*                                       InstigatingPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.PlayDyingPoint
struct APrimalCharacter_PlayDyingPoint_Params
{
	float                                              KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPointDamageEvent                           DamageEvent;                                              // (Parm)
	class APawn*                                       InstigatingPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.PlayDyingGeneric
struct APrimalCharacter_PlayDyingGeneric_Params
{
	float                                              KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm)
	class APawn*                                       InstigatingPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.PlayAnimEx
struct APrimalCharacter_PlayAnimEx_Params
{
	class UAnimMontage*                                AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartSectionName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReplicate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReplicateToOwner;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceTickPoseAndServerUpdateMesh;                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceTickPoseOnServer;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.OnRep_RagdollPositions
struct APrimalCharacter_OnRep_RagdollPositions_Params
{
};

// Function ShooterGame.PrimalCharacter.OnRep_PaintingComponent
struct APrimalCharacter_OnRep_PaintingComponent_Params
{
};

// Function ShooterGame.PrimalCharacter.OnRep_MountedDino
struct APrimalCharacter_OnRep_MountedDino_Params
{
};

// Function ShooterGame.PrimalCharacter.OnRep_IsSleeping
struct APrimalCharacter_OnRep_IsSleeping_Params
{
};

// Function ShooterGame.PrimalCharacter.OnRep_IsDead
struct APrimalCharacter_OnRep_IsDead_Params
{
};

// Function ShooterGame.PrimalCharacter.OnEndDrag
struct APrimalCharacter_OnEndDrag_Params
{
};

// Function ShooterGame.PrimalCharacter.OnBeginDrag
struct APrimalCharacter_OnBeginDrag_Params
{
	class APrimalCharacter*                            Dragged;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BoneIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWithGrapHook;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.NetUpdateTribeName
struct APrimalCharacter_NetUpdateTribeName_Params
{
	struct FString                                     NewTribeName;                                             // (Parm, ZeroConstructor)
};

// Function ShooterGame.PrimalCharacter.NetStopAllAnimMontage
struct APrimalCharacter_NetStopAllAnimMontage_Params
{
};

// Function ShooterGame.PrimalCharacter.NetPlaySoundOnCharacter
struct APrimalCharacter_NetPlaySoundOnCharacter_Params
{
	class USoundBase*                                  SoundToPlay;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayOnOwner;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.NetOnJumped
struct APrimalCharacter_NetOnJumped_Params
{
};

// Function ShooterGame.PrimalCharacter.NetDidLand
struct APrimalCharacter_NetDidLand_Params
{
};

// Function ShooterGame.PrimalCharacter.NetAddCharacterMovementImpulse
struct APrimalCharacter_NetAddCharacterMovementImpulse_Params
{
	struct FVector                                     Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bVelChange;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ImpulseExponent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.LocalUnpossessed
struct APrimalCharacter_LocalUnpossessed_Params
{
};

// Function ShooterGame.PrimalCharacter.IsValidForCombatMusic
struct APrimalCharacter_IsValidForCombatMusic_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.IsRunning
struct APrimalCharacter_IsRunning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.IsMoving
struct APrimalCharacter_IsMoving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.IsMontagePlaying
struct APrimalCharacter_IsMontagePlaying_Params
{
	class UAnimMontage*                                AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeFromEndToConsiderFinished;                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.IsMeshGameplayRelevant
struct APrimalCharacter_IsMeshGameplayRelevant_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.IsInvincible
struct APrimalCharacter_IsInvincible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.IsFirstPerson
struct APrimalCharacter_IsFirstPerson_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.IsAlive
struct APrimalCharacter_IsAlive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.HurtMe
struct APrimalCharacter_HurtMe_Params
{
	int                                                HowMuch;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.HasBuff
struct APrimalCharacter_HasBuff_Params
{
	class UClass*                                      BuffClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.GiveKillExperience
struct APrimalCharacter_GiveKillExperience_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.GetRunningSpeedModifier
struct APrimalCharacter_GetRunningSpeedModifier_Params
{
	bool                                               bIsForDefaultSpeed;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.GetRole
struct APrimalCharacter_GetRole_Params
{
	TEnumAsByte<ENetRole>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.GetOverridenMontage
struct APrimalCharacter_GetOverridenMontage_Params
{
	class UAnimMontage*                                AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.GetOverridenAnimSequence
struct APrimalCharacter_GetOverridenAnimSequence_Params
{
	class UAnimSequence*                               AnimSeq;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.GetMaxHealth
struct APrimalCharacter_GetMaxHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.GetHealthPercentage
struct APrimalCharacter_GetHealthPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.GetFootPhysicalSurfaceType
struct APrimalCharacter_GetFootPhysicalSurfaceType_Params
{
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.GetDescriptiveName
struct APrimalCharacter_GetDescriptiveName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.PrimalCharacter.GetDefaultMovementSpeed
struct APrimalCharacter_GetDefaultMovementSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.GetCharacterStatusComponent
struct APrimalCharacter_GetCharacterStatusComponent_Params
{
	class UPrimalCharacterStatusComponent*             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.GetBuffs
struct APrimalCharacter_GetBuffs_Params
{
	TArray<class APrimalBuff*>                         TheBuffs;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function ShooterGame.PrimalCharacter.GetBasedOnDino
struct APrimalCharacter_GetBasedOnDino_Params
{
	class APrimalDinoCharacter*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.GetAimOffsets
struct APrimalCharacter_GetAimOffsets_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RootRotOffset;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TheRootYawSpeed;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MaxYawAimClamp;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RootLocOffset;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.ForceUpdateAimedCharacters
struct APrimalCharacter_ForceUpdateAimedCharacters_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartLoc;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     EndLoc;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      IgnoreActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.ForceTickPoseDelta
struct APrimalCharacter_ForceTickPoseDelta_Params
{
};

// Function ShooterGame.PrimalCharacter.FadeOutLoadingMusic
struct APrimalCharacter_FadeOutLoadingMusic_Params
{
};

// Function ShooterGame.PrimalCharacter.ExecSetSleeping
struct APrimalCharacter_ExecSetSleeping_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.EndForceSkelUpdate
struct APrimalCharacter_EndForceSkelUpdate_Params
{
};

// Function ShooterGame.PrimalCharacter.DeathHarvestingFadeOut
struct APrimalCharacter_DeathHarvestingFadeOut_Params
{
};

// Function ShooterGame.PrimalCharacter.DeactivateBuffs
struct APrimalCharacter_DeactivateBuffs_Params
{
	class UClass*                                      ForBuffClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem*                                 ForInstigatorItem;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.ClientStopAnimation
struct APrimalCharacter_ClientStopAnimation_Params
{
	class UAnimMontage*                                AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopOnOwner;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.ClientRagdollUpdate
struct APrimalCharacter_ClientRagdollUpdate_Params
{
	TArray<struct FVector_NetQuantize>                 BoneLocations;                                            // (ConstParm, Parm, ZeroConstructor)
	struct FRotator_NetQuantize                        TargetRootRotation;                                       // (Parm)
};

// Function ShooterGame.PrimalCharacter.ClientPlayAnimation
struct APrimalCharacter_ClientPlayAnimation_Params
{
	class UAnimMontage*                                AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartSectionName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayOnOwner;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceTickPoseAndServerUpdateMesh;                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.ClientNotifyLevelUp
struct APrimalCharacter_ClientNotifyLevelUp_Params
{
};

// Function ShooterGame.PrimalCharacter.ClientFailedPoop
struct APrimalCharacter_ClientFailedPoop_Params
{
};

// Function ShooterGame.PrimalCharacter.ClientEndRagdollUpdate
struct APrimalCharacter_ClientEndRagdollUpdate_Params
{
};

// Function ShooterGame.PrimalCharacter.ClientDidPoop
struct APrimalCharacter_ClientDidPoop_Params
{
};

// Function ShooterGame.PrimalCharacter.BPNotifyBumpedPawn
struct APrimalCharacter_BPNotifyBumpedPawn_Params
{
	class APrimalCharacter*                            BumpedPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.BPNotifyBumpedByPawn
struct APrimalCharacter_BPNotifyBumpedByPawn_Params
{
	class APrimalCharacter*                            ByPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.BPIsConscious
struct APrimalCharacter_BPIsConscious_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.BPIsBasedOnDynamicActor
struct APrimalCharacter_BPIsBasedOnDynamicActor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.BPGetHUDOverrideBuffProgressBarPercent
struct APrimalCharacter_BPGetHUDOverrideBuffProgressBarPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.BPGetExtraMeleeDamageModifier
struct APrimalCharacter_BPGetExtraMeleeDamageModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.BPAdjustDamage
struct APrimalCharacter_BPAdjustDamage_Params
{
	float                                              IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                TheDamageEvent;                                           // (Parm)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacter.BlueprintAnimNotifyCustomEvent
struct APrimalCharacter_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName                                       CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      MeshComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimSequenceBase*                           Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify*                                 AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.UpdateTribeGroupRanks
struct APrimalDinoCharacter_UpdateTribeGroupRanks_Params
{
	unsigned char                                      NewTribeGroupPetOrderingRank;                             // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewTribeGroupPetRidingRank;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.UpdateImprintingQuality
struct APrimalDinoCharacter_UpdateImprintingQuality_Params
{
	float                                              NewImprintingQuality;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.UpdateImprintingDetails
struct APrimalDinoCharacter_UpdateImprintingDetails_Params
{
	struct FString                                     NewImprinterName;                                         // (Parm, ZeroConstructor)
	uint64_t                                           NewImprinterPlayerDataID;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.UpdateBabyCuddling
struct APrimalDinoCharacter_UpdateBabyCuddling_Params
{
	double                                             NewBabyNextCuddleTime;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewBabyCuddleType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      NewBabyCuddleFood;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.UpdateAttackTargets
struct APrimalDinoCharacter_UpdateAttackTargets_Params
{
};

// Function ShooterGame.PrimalDinoCharacter.UnclaimDino
struct APrimalDinoCharacter_UnclaimDino_Params
{
	bool                                               bDestroyAI;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.TamedProcessOrder
struct APrimalDinoCharacter_TamedProcessOrder_Params
{
	class APrimalCharacter*                            FromCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDinoTamedOrder>                       OrderType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.TameDino
struct APrimalDinoCharacter_TameDino_Params
{
	class AShooterPlayerController*                    ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.StopActiveState
struct APrimalDinoCharacter_StopActiveState_Params
{
	bool                                               bShouldResetAttackIndex;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.SpawnDino
struct APrimalDinoCharacter_SpawnDino_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DinoClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnLoc;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    SpawnRot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LevelMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ExtraLevelOffset;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AddLevelOffsetBeforeMultiplier;                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideBaseNPCLevel;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BaseLevelOverrideValue;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNPCDontWander;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NPCAIRangeMultiplier;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NPCAbsoluteBaseLevel;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalDinoCharacter*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.ShouldForceFlee
struct APrimalDinoCharacter_ShouldForceFlee_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.ShouldAttackOfPlayedAnimationStopMovement
struct APrimalDinoCharacter_ShouldAttackOfPlayedAnimationStopMovement_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.SetState
struct APrimalDinoCharacter_SetState_Params
{
	class UPrimalAIState*                              State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.SetStasisComponentRadius
struct APrimalDinoCharacter_SetStasisComponentRadius_Params
{
	float                                              StasisOverrideRadius;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.SetPreventSaving
struct APrimalDinoCharacter_SetPreventSaving_Params
{
	bool                                               fPreventSaving;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.SetMovementAccelerationVector
struct APrimalDinoCharacter_SetMovementAccelerationVector_Params
{
	struct FVector                                     fVector;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.SetFlight
struct APrimalDinoCharacter_SetFlight_Params
{
	bool                                               bFly;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCancelForceLand;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.SetCurrentAttackIndex
struct APrimalDinoCharacter_SetCurrentAttackIndex_Params
{
	unsigned char                                      Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.ServerUpdateAttackTargets
struct APrimalDinoCharacter_ServerUpdateAttackTargets_Params
{
	class AActor*                                      AttackTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AttackLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.ServerToggleCharging
struct APrimalDinoCharacter_ServerToggleCharging_Params
{
};

// Function ShooterGame.PrimalDinoCharacter.ServerToClientsPlayAttackAnimation
struct APrimalDinoCharacter_ServerToClientsPlayAttackAnimation_Params
{
	int8_t                                             AttackinfoIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int8_t                                             animationIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartSectionName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceTickPoseAndServerUpdateMesh;                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceTickPoseOnServer;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      MyTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.ServerTamedTick
struct APrimalDinoCharacter_ServerTamedTick_Params
{
};

// Function ShooterGame.PrimalDinoCharacter.ServerSleepingTick
struct APrimalDinoCharacter_ServerSleepingTick_Params
{
};

// Function ShooterGame.PrimalDinoCharacter.ServerRequestWaterSurfaceJump
struct APrimalDinoCharacter_ServerRequestWaterSurfaceJump_Params
{
};

// Function ShooterGame.PrimalDinoCharacter.ServerRequestToggleFlight
struct APrimalDinoCharacter_ServerRequestToggleFlight_Params
{
};

// Function ShooterGame.PrimalDinoCharacter.ServerRequestBraking
struct APrimalDinoCharacter_ServerRequestBraking_Params
{
	bool                                               bWantsToBrake;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.ServerRequestAttack
struct APrimalDinoCharacter_ServerRequestAttack_Params
{
	int                                                AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.ServerInterruptLanding
struct APrimalDinoCharacter_ServerInterruptLanding_Params
{
};

// Function ShooterGame.PrimalDinoCharacter.ServerFinishedLanding
struct APrimalDinoCharacter_ServerFinishedLanding_Params
{
};

// Function ShooterGame.PrimalDinoCharacter.ServerClearRider
struct APrimalDinoCharacter_ServerClearRider_Params
{
};

// Function ShooterGame.PrimalDinoCharacter.PlayWeightedAttackAnimation
struct APrimalDinoCharacter_PlayWeightedAttackAnimation_Params
{
};

// Function ShooterGame.PrimalDinoCharacter.PlayHardEndChargingShake
struct APrimalDinoCharacter_PlayHardEndChargingShake_Params
{
};

// Function ShooterGame.PrimalDinoCharacter.PlayedAnimationHasAttack
struct APrimalDinoCharacter_PlayedAnimationHasAttack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.OverrideRandomWanderLocation
struct APrimalDinoCharacter_OverrideRandomWanderLocation_Params
{
	struct FVector                                     inVec;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.OverrideFinalWanderLocation
struct APrimalDinoCharacter_OverrideFinalWanderLocation_Params
{
	struct FVector                                     outVec;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.OnRep_Saddle
struct APrimalDinoCharacter_OnRep_Saddle_Params
{
};

// Function ShooterGame.PrimalDinoCharacter.OnRep_Rider
struct APrimalDinoCharacter_OnRep_Rider_Params
{
};

// Function ShooterGame.PrimalDinoCharacter.OnRep_PassengerPerSeat
struct APrimalDinoCharacter_OnRep_PassengerPerSeat_Params
{
};

// Function ShooterGame.PrimalDinoCharacter.OnRep_CarriedCharacter
struct APrimalDinoCharacter_OnRep_CarriedCharacter_Params
{
};

// Function ShooterGame.PrimalDinoCharacter.OnRep_bIsFlying
struct APrimalDinoCharacter_OnRep_bIsFlying_Params
{
};

// Function ShooterGame.PrimalDinoCharacter.OnRep_bIsCharging
struct APrimalDinoCharacter_OnRep_bIsCharging_Params
{
};

// Function ShooterGame.PrimalDinoCharacter.OnRep_bBonesHidden
struct APrimalDinoCharacter_OnRep_bBonesHidden_Params
{
};

// Function ShooterGame.PrimalDinoCharacter.NetUpdateDinoOwnerData
struct APrimalDinoCharacter_NetUpdateDinoOwnerData_Params
{
	struct FString                                     NewOwningPlayerName;                                      // (Parm, ZeroConstructor)
	int                                                NewOwningPlayerID;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.NetUpdateDinoNameStrings
struct APrimalDinoCharacter_NetUpdateDinoNameStrings_Params
{
	struct FString                                     NewTamerString;                                           // (Parm, ZeroConstructor)
	struct FString                                     NewTamedName;                                             // (Parm, ZeroConstructor)
};

// Function ShooterGame.PrimalDinoCharacter.KeepFlightTimer
struct APrimalDinoCharacter_KeepFlightTimer_Params
{
};

// Function ShooterGame.PrimalDinoCharacter.IsCurrentlyPlayingAttackAnimation
struct APrimalDinoCharacter_IsCurrentlyPlayingAttackAnimation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.IsCurrentAttackStopsMovement
struct APrimalDinoCharacter_IsCurrentAttackStopsMovement_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.IsAttacking
struct APrimalDinoCharacter_IsAttacking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.GetTamedFollowTarget
struct APrimalDinoCharacter_GetTamedFollowTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.GetStateOfPlayedAnimationAttack
struct APrimalDinoCharacter_GetStateOfPlayedAnimationAttack_Params
{
	class UPrimalAIState*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.GetLandingLocation
struct APrimalDinoCharacter_GetLandingLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.GetForceTickPose
struct APrimalDinoCharacter_GetForceTickPose_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.GetDinoVelocity
struct APrimalDinoCharacter_GetDinoVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.GetDinoPlatformCollisionIgnoreActors
struct APrimalDinoCharacter_GetDinoPlatformCollisionIgnoreActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.PrimalDinoCharacter.GetAimOffsetsTransform
struct APrimalDinoCharacter_GetAimOffsetsTransform_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  RootRotOffsetTransform;                                   // (Parm, OutParm, IsPlainOldData)
	float                                              TheRootYawSpeed;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MaxYawAimClamp;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RootLocOffset;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.GetAIFollowStoppingDistanceOffset
struct APrimalDinoCharacter_GetAIFollowStoppingDistanceOffset_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.GetAIFollowStoppingDistanceMultiplier
struct APrimalDinoCharacter_GetAIFollowStoppingDistanceMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.GetActiveState
struct APrimalDinoCharacter_GetActiveState_Params
{
	class UPrimalAIState*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.ForceUpdateColorSets
struct APrimalDinoCharacter_ForceUpdateColorSets_Params
{
	int                                                ColorRegion;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ColorSet;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.ForceClearRider
struct APrimalDinoCharacter_ForceClearRider_Params
{
};

// Function ShooterGame.PrimalDinoCharacter.FireProjectile
struct APrimalDinoCharacter_FireProjectile_Params
{
	struct FVector                                     Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   ShootDir;                                                 // (Parm)
	bool                                               bScaleProjDamageByDinoDamage;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.FedWakingTameDino
struct APrimalDinoCharacter_FedWakingTameDino_Params
{
};

// Function ShooterGame.PrimalDinoCharacter.DoAttack
struct APrimalDinoCharacter_DoAttack_Params
{
	int                                                AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.ClientStartLanding
struct APrimalDinoCharacter_ClientStartLanding_Params
{
	struct FVector                                     landingLoc;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.ClientShouldNotifyLanded
struct APrimalDinoCharacter_ClientShouldNotifyLanded_Params
{
};

// Function ShooterGame.PrimalDinoCharacter.ClientInterruptLanding
struct APrimalDinoCharacter_ClientInterruptLanding_Params
{
};

// Function ShooterGame.PrimalDinoCharacter.ClearCharacterAIMovement
struct APrimalDinoCharacter_ClearCharacterAIMovement_Params
{
};

// Function ShooterGame.PrimalDinoCharacter.CanFly
struct APrimalDinoCharacter_CanFly_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.CanAttack
struct APrimalDinoCharacter_CanAttack_Params
{
	int                                                AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.BPUnstasis
struct APrimalDinoCharacter_BPUnstasis_Params
{
};

// Function ShooterGame.PrimalDinoCharacter.BPSetupTamed
struct APrimalDinoCharacter_BPSetupTamed_Params
{
};

// Function ShooterGame.PrimalDinoCharacter.BPIsTamed
struct APrimalDinoCharacter_BPIsTamed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.BPAllowEquippingItemType
struct APrimalDinoCharacter_BPAllowEquippingItemType_Params
{
	TEnumAsByte<EPrimalEquipmentType>                  EquipmentType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.BlueprintTamedTick
struct APrimalDinoCharacter_BlueprintTamedTick_Params
{
};

// Function ShooterGame.PrimalDinoCharacter.BlueprintOverrideWantsToRun
struct APrimalDinoCharacter_BlueprintOverrideWantsToRun_Params
{
	bool                                               bInputWantsToRun;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.BlueprintDrawFloatingHUD
struct APrimalDinoCharacter_BlueprintDrawFloatingHUD_Params
{
	class AShooterHUD*                                 HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.BlueprintCanAttack
struct APrimalDinoCharacter_BlueprintCanAttack_Params
{
	int                                                AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.ApplyRidingAttackExtraVelocity
struct APrimalDinoCharacter_ApplyRidingAttackExtraVelocity_Params
{
};

// Function ShooterGame.PrimalDinoCharacter.AllowWakingTame
struct APrimalDinoCharacter_AllowWakingTame_Params
{
	class APlayerController*                           ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoCharacter.AddedImprintingQuality
struct APrimalDinoCharacter_AddedImprintingQuality_Params
{
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalWheeledVehicleCharacter.ServerHonk
struct APrimalWheeledVehicleCharacter_ServerHonk_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalWheeledVehicleCharacter.NetHonk
struct APrimalWheeledVehicleCharacter_NetHonk_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalWheeledVehicleCharacter.GetVehicleMovementComponent
struct APrimalWheeledVehicleCharacter_GetVehicleMovementComponent_Params
{
	class UWheeledVehicleMovementComponent*            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.UseAlternateStandingAnim
struct AShooterCharacter_UseAlternateStandingAnim_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.UseAltAimOffsetAnim
struct AShooterCharacter_UseAltAimOffsetAnim_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.UseAdditiveStandingAnim
struct AShooterCharacter_UseAdditiveStandingAnim_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.SyncGrapHookDistance
struct AShooterCharacter_SyncGrapHookDistance_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.SetCarriedPitchYaw
struct AShooterCharacter_SetCarriedPitchYaw_Params
{
	float                                              NewCarriedPitch;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewCarriedYaw;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerToClientsPlayFireBallistaAnimation
struct AShooterCharacter_ServerToClientsPlayFireBallistaAnimation_Params
{
};

// Function ShooterGame.ShooterCharacter.ServerSwitchMap
struct AShooterCharacter_ServerSwitchMap_Params
{
};

// Function ShooterGame.ShooterCharacter.ServerStopFireBallista
struct AShooterCharacter_ServerStopFireBallista_Params
{
};

// Function ShooterGame.ShooterCharacter.ServerSetViewingInventory
struct AShooterCharacter_ServerSetViewingInventory_Params
{
	bool                                               bIsViewing;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerSetTargeting
struct AShooterCharacter_ServerSetTargeting_Params
{
	bool                                               bNewTargeting;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerSetBallistaNewRotation
struct AShooterCharacter_ServerSetBallistaNewRotation_Params
{
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerSeatingStructureAction
struct AShooterCharacter_ServerSeatingStructureAction_Params
{
	unsigned char                                      ActionNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerReleaseGrapHookCable
struct AShooterCharacter_ServerReleaseGrapHookCable_Params
{
	bool                                               bReleasing;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerPlayFireBallistaAnimation
struct AShooterCharacter_ServerPlayFireBallistaAnimation_Params
{
};

// Function ShooterGame.ShooterCharacter.ServerNotifyBallistaShot
struct AShooterCharacter_ServerNotifyBallistaShot_Params
{
	struct FHitResult                                  Impact;                                                   // (Parm)
	struct FVector_NetQuantizeNormal                   ShootDir;                                                 // (Parm)
};

// Function ShooterGame.ShooterCharacter.ServerNetEndClimbingLadder
struct AShooterCharacter_ServerNetEndClimbingLadder_Params
{
	bool                                               bIsClimbOver;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ClimbOverLoc;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerLaunchMountedDino
struct AShooterCharacter_ServerLaunchMountedDino_Params
{
};

// Function ShooterGame.ShooterCharacter.ServerFireBallistaProjectile
struct AShooterCharacter_ServerFireBallistaProjectile_Params
{
	struct FVector                                     Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   ShootDir;                                                 // (Parm)
};

// Function ShooterGame.ShooterCharacter.ServerDoProne
struct AShooterCharacter_ServerDoProne_Params
{
};

// Function ShooterGame.ShooterCharacter.ServerDoCrouch
struct AShooterCharacter_ServerDoCrouch_Params
{
};

// Function ShooterGame.ShooterCharacter.ServerDetachGrapHookCable
struct AShooterCharacter_ServerDetachGrapHookCable_Params
{
	bool                                               bDoUpwardsJump;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              UpwardsJumpYaw;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerCheckDrinkingWater
struct AShooterCharacter_ServerCheckDrinkingWater_Params
{
};

// Function ShooterGame.ShooterCharacter.RenamePlayer
struct AShooterCharacter_RenamePlayer_Params
{
	struct FString                                     NewName;                                                  // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterCharacter.PlayEmoteAnimation
struct AShooterCharacter_PlayEmoteAnimation_Params
{
	unsigned char                                      EmoteIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.OnRep_RawBoneModifiers
struct AShooterCharacter_OnRep_RawBoneModifiers_Params
{
};

// Function ShooterGame.ShooterCharacter.OnRep_CurrentWeapon
struct AShooterCharacter_OnRep_CurrentWeapon_Params
{
	class AShooterWeapon*                              LastWeapon;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.LinkedPlayerUniqueIDString
struct AShooterCharacter_LinkedPlayerUniqueIDString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.ShooterCharacter.LinkedPlayerIDString
struct AShooterCharacter_LinkedPlayerIDString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.ShooterCharacter.IsUsingShield
struct AShooterCharacter_IsUsingShield_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsTargeting
struct AShooterCharacter_IsTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsIndoorsAtLoc
struct AShooterCharacter_IsIndoorsAtLoc_Params
{
	class UWorld*                                      TheWorld;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     actorLoc;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsFiring
struct AShooterCharacter_IsFiring_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsCarriedAsPassenger
struct AShooterCharacter_IsCarriedAsPassenger_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsBlockingWithShield
struct AShooterCharacter_IsBlockingWithShield_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GiveDefaultWeaponTimer
struct AShooterCharacter_GiveDefaultWeaponTimer_Params
{
};

// Function ShooterGame.ShooterCharacter.GetWeapon
struct AShooterCharacter_GetWeapon_Params
{
	class AShooterWeapon*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetTargetingSpeedModifier
struct AShooterCharacter_GetTargetingSpeedModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetSeatingAnimation
struct AShooterCharacter_GetSeatingAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetRidingDinoAnimSpeedRatio
struct AShooterCharacter_GetRidingDinoAnimSpeedRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetPlayerData
struct AShooterCharacter_GetPlayerData_Params
{
	class UPrimalPlayerData*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetDinoRidingMoveAnimation
struct AShooterCharacter_GetDinoRidingMoveAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetDinoRidingAnimation
struct AShooterCharacter_GetDinoRidingAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetBlockingShieldOffsets
struct AShooterCharacter_GetBlockingShieldOffsets_Params
{
	struct FVector                                     OutBlockingShieldFPVTranslation;                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OutBlockingShieldFPVRotation;                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetAlternateStandingAnim
struct AShooterCharacter_GetAlternateStandingAnim_Params
{
	float                                              OutBlendInTime;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutBlendOutTime;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetAdditiveStandingAnim
struct AShooterCharacter_GetAdditiveStandingAnim_Params
{
	float                                              OutBlendInTime;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutBlendOutTime;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetActualTargetingFOV
struct AShooterCharacter_GetActualTargetingFOV_Params
{
	float                                              DefaultTargetingFOV;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GameStateHandleEvent
struct AShooterCharacter_GameStateHandleEvent_Params
{
	struct FName                                       NameParam;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VecParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.DetachGrapHookCable
struct AShooterCharacter_DetachGrapHookCable_Params
{
};

// Function ShooterGame.ShooterCharacter.DetachFromLadder
struct AShooterCharacter_DetachFromLadder_Params
{
};

// Function ShooterGame.ShooterCharacter.ClientUpdateTranspondersInfo
struct AShooterCharacter_ClientUpdateTranspondersInfo_Params
{
	TArray<struct FTransponderInfo>                    TranspondersInfo;                                         // (ConstParm, Parm, ZeroConstructor)
	bool                                               bNewData;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ClientPlayHarvestAnim
struct AShooterCharacter_ClientPlayHarvestAnim_Params
{
};

// Function ShooterGame.ShooterCharacter.ClientNotifyTribeRequest
struct AShooterCharacter_ClientNotifyTribeRequest_Params
{
	struct FString                                     RequestTribeName;                                         // (Parm, ZeroConstructor)
	class AShooterCharacter*                           PlayerCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ClientNetEndClimbingLadder
struct AShooterCharacter_ClientNetEndClimbingLadder_Params
{
};

// Function ShooterGame.ShooterCharacter.ClientInviteToAlliance
struct AShooterCharacter_ClientInviteToAlliance_Params
{
	int                                                RequestingTeam;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           AllianceID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AllianceName;                                             // (Parm, ZeroConstructor)
	struct FString                                     InviteeName;                                              // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterCharacter.ClientClearTribeRequest
struct AShooterCharacter_ClientClearTribeRequest_Params
{
};

// Function ShooterGame.ShooterCharacter.ClearSpawnAnim
struct AShooterCharacter_ClearSpawnAnim_Params
{
};

// Function ShooterGame.ShooterCharacter.ClearRidingDino
struct AShooterCharacter_ClearRidingDino_Params
{
	bool                                               bFromDino;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.CallGameStateHandleEvent
struct AShooterCharacter_CallGameStateHandleEvent_Params
{
	struct FName                                       NameParam;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VecParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.BlueprintDrawFloatingHUD
struct AShooterCharacter_BlueprintDrawFloatingHUD_Params
{
	class AShooterHUD*                                 HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.AuthPostSpawnInit
struct AShooterCharacter_AuthPostSpawnInit_Params
{
};

// Function ShooterGame.ShooterCharacter.AttachToLadder
struct AShooterCharacter_AttachToLadder_Params
{
	class USceneComponent*                             Parent;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.AnimUseAimOffset
struct AShooterCharacter_AnimUseAimOffset_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.ServerTribeRequestRemoveRankGroup
struct AShooterPlayerState_ServerTribeRequestRemoveRankGroup_Params
{
	int                                                RankGroupIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.ServerTribeRequestNewAlliance
struct AShooterPlayerState_ServerTribeRequestNewAlliance_Params
{
	struct FString                                     AllianceName;                                             // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerState.ServerTribeRequestApplyRankGroupSettings
struct AShooterPlayerState_ServerTribeRequestApplyRankGroupSettings_Params
{
	int                                                RankGroupIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTribeRankGroup                             newGroupSettings;                                         // (Parm)
};

// Function ShooterGame.ShooterPlayerState.ServerTribeRequestAddRankGroup
struct AShooterPlayerState_ServerTribeRequestAddRankGroup_Params
{
};

// Function ShooterGame.ShooterPlayerState.ServerSetDefaultItemSlotClass
struct AShooterPlayerState_ServerSetDefaultItemSlotClass_Params
{
	int                                                slotNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEngram;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.ServerRequestTransferOwnershipInMyTribe
struct AShooterPlayerState_ServerRequestTransferOwnershipInMyTribe_Params
{
	int                                                PlayerIndexInTribe;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.ServerRequestSetTribeMemberGroupRank
struct AShooterPlayerState_ServerRequestSetTribeMemberGroupRank_Params
{
	int                                                PlayerIndexInTribe;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RankGroupIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.ServerRequestSetTribeGovernment
struct AShooterPlayerState_ServerRequestSetTribeGovernment_Params
{
	struct FTribeGovernment                            TribeGovernment;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.ServerRequestRenameTribe
struct AShooterPlayerState_ServerRequestRenameTribe_Params
{
	struct FString                                     ServerRequestRenameTribe;                                 // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerState.ServerRequestRemovePlayerIndexFromMyTribe
struct AShooterPlayerState_ServerRequestRemovePlayerIndexFromMyTribe_Params
{
	int                                                PlayerIndexInTribe;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.ServerRequestRemoveAllianceMember
struct AShooterPlayerState_ServerRequestRemoveAllianceMember_Params
{
	uint32_t                                           AllianceID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MemberID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.ServerRequestPromotePlayerInMyTribe
struct AShooterPlayerState_ServerRequestPromotePlayerInMyTribe_Params
{
	int                                                PlayerIndexInTribe;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.ServerRequestPromoteAllianceMember
struct AShooterPlayerState_ServerRequestPromoteAllianceMember_Params
{
	uint32_t                                           AllianceID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MemberID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.ServerRequestMySpawnPoints
struct AShooterPlayerState_ServerRequestMySpawnPoints_Params
{
	int                                                IgnoreBedID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.ServerRequestLeaveTribe
struct AShooterPlayerState_ServerRequestLeaveTribe_Params
{
};

// Function ShooterGame.ShooterPlayerState.ServerRequestLeaveAlliance
struct AShooterPlayerState_ServerRequestLeaveAlliance_Params
{
	uint32_t                                           AllianceID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.ServerRequestDemotePlayerInMyTribe
struct AShooterPlayerState_ServerRequestDemotePlayerInMyTribe_Params
{
	int                                                PlayerIndexInTribe;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.ServerRequestCreateNewTribe
struct AShooterPlayerState_ServerRequestCreateNewTribe_Params
{
	struct FString                                     TribeName;                                                // (Parm, ZeroConstructor)
	struct FTribeGovernment                            TribeGovernment;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUserCosmeticInfo                           UserCosmeticInfo;                                         // (Parm)
};

// Function ShooterGame.ShooterPlayerState.ServerRequestCreateNewPlayer
struct AShooterPlayerState_ServerRequestCreateNewPlayer_Params
{
	struct FPrimalPlayerCharacterConfigStructReplicated PlayerCharacterConfig;                                    // (Parm)
	struct FUserCosmeticInfo                           UserCosmeticInfo;                                         // (Parm)
};

// Function ShooterGame.ShooterPlayerState.ServerRequestApplyEngramPoints
struct AShooterPlayerState_ServerRequestApplyEngramPoints_Params
{
	class UClass*                                      forItemEntry;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.ServerRejectTribeWar
struct AShooterPlayerState_ServerRejectTribeWar_Params
{
	int                                                EnemyTeamID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.ServerGetServerOptions
struct AShooterPlayerState_ServerGetServerOptions_Params
{
};

// Function ShooterGame.ShooterPlayerState.ServerGetPlayerWhiteListedData
struct AShooterPlayerState_ServerGetPlayerWhiteListedData_Params
{
};

// Function ShooterGame.ShooterPlayerState.ServerGetPlayerConnectedData
struct AShooterPlayerState_ServerGetPlayerConnectedData_Params
{
};

// Function ShooterGame.ShooterPlayerState.ServerGetPlayerBannedData
struct AShooterPlayerState_ServerGetPlayerBannedData_Params
{
};

// Function ShooterGame.ShooterPlayerState.ServerGetAllPlayerNamesAndLocations
struct AShooterPlayerState_ServerGetAllPlayerNamesAndLocations_Params
{
};

// Function ShooterGame.ShooterPlayerState.ServerGetAlivePlayerConnectedData
struct AShooterPlayerState_ServerGetAlivePlayerConnectedData_Params
{
};

// Function ShooterGame.ShooterPlayerState.ServerDeclareTribeWar
struct AShooterPlayerState_ServerDeclareTribeWar_Params
{
	int                                                EnemyTeamID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StartDayNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EndDayNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WarStartTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WarEndTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.ServerAcceptTribeWar
struct AShooterPlayerState_ServerAcceptTribeWar_Params
{
	int                                                EnemyTeamID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.SendTribeInviteData
struct AShooterPlayerState_SendTribeInviteData_Params
{
	struct FTribeData                                  TribeInviteData;                                          // (Parm)
};

// Function ShooterGame.ShooterPlayerState.NotifyTribememberLeft
struct AShooterPlayerState_NotifyTribememberLeft_Params
{
	struct FString                                     ThePlayerName;                                            // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerState.NotifyTribememberJoined
struct AShooterPlayerState_NotifyTribememberJoined_Params
{
	struct FString                                     ThePlayerName;                                            // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerState.NotifyPlayerLeftTribe
struct AShooterPlayerState_NotifyPlayerLeftTribe_Params
{
	struct FString                                     ThePlayerName;                                            // (Parm, ZeroConstructor)
	struct FString                                     TribeName;                                                // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerState.NotifyPlayerLeft
struct AShooterPlayerState_NotifyPlayerLeft_Params
{
	struct FString                                     ThePlayerName;                                            // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerState.NotifyPlayerJoinedTribe
struct AShooterPlayerState_NotifyPlayerJoinedTribe_Params
{
	struct FString                                     ThePlayerName;                                            // (Parm, ZeroConstructor)
	struct FString                                     TribeName;                                                // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerState.NotifyPlayerJoined
struct AShooterPlayerState_NotifyPlayerJoined_Params
{
	struct FString                                     ThePlayerName;                                            // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerState.IsInTribe
struct AShooterPlayerState_IsInTribe_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.GetUniqueIdString
struct AShooterPlayerState_GetUniqueIdString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.ShooterPlayerState.GetTribeID
struct AShooterPlayerState_GetTribeID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.DoRespec
struct AShooterPlayerState_DoRespec_Params
{
};

// Function ShooterGame.ShooterPlayerState.ClientReceiveSpawnPoints
struct AShooterPlayerState_ClientReceiveSpawnPoints_Params
{
	TArray<struct FSpawnPointInfo>                     SpawnPointsInfos;                                         // (ConstParm, Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerState.ClientNotifyLevelUpAvailable
struct AShooterPlayerState_ClientNotifyLevelUpAvailable_Params
{
};

// Function ShooterGame.ShooterPlayerState.ClientGetServerOptions
struct AShooterPlayerState_ClientGetServerOptions_Params
{
	struct FServerOptions                              Info;                                                     // (Parm)
};

// Function ShooterGame.ShooterPlayerState.ClientGetPlayerWhiteListedData
struct AShooterPlayerState_ClientGetPlayerWhiteListedData_Params
{
	TArray<struct FAdminPlayerDataInfo>                list;                                                     // (ConstParm, Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerState.ClientGetPlayerConnectedData
struct AShooterPlayerState_ClientGetPlayerConnectedData_Params
{
	TArray<struct FAdminPlayerDataInfo>                list;                                                     // (ConstParm, Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerState.ClientGetPlayerBannedData
struct AShooterPlayerState_ClientGetPlayerBannedData_Params
{
	TArray<struct FAdminPlayerDataInfo>                list;                                                     // (ConstParm, Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerState.ClientGetAllPlayerNamesAndLocations
struct AShooterPlayerState_ClientGetAllPlayerNamesAndLocations_Params
{
	TArray<struct FAliveNameAndLocation>               list;                                                     // (ConstParm, Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerState.ClientGetAlivePlayerConnectedData
struct AShooterPlayerState_ClientGetAlivePlayerConnectedData_Params
{
	TArray<struct FAlivePlayerDataInfo>                list;                                                     // (ConstParm, Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerState.ClearTribe
struct AShooterPlayerState_ClearTribe_Params
{
	bool                                               bDontRemoveFromTribe;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.BroadcastDeath
struct AShooterPlayerState_BroadcastDeath_Params
{
	class AShooterPlayerState*                         KillerPlayerState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 KillerDamageType;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerState*                         KilledPlayerState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.AllowTribeGroupPermission
struct AShooterPlayerState_AllowTribeGroupPermission_Params
{
	TEnumAsByte<ETribeGroupPermission>                 TribeGroupPermission;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OnObject;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.AddToTribe
struct AShooterPlayerState_AddToTribe_Params
{
	struct FTribeData                                  MyNewTribe;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bMergeTribe;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFromInvite;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalUI.OnHTTPGetResponse__DelegateSignature
struct UPrimalUI_OnHTTPGetResponse__DelegateSignature_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     StringResult;                                             // (Parm, ZeroConstructor)
};

// Function ShooterGame.PrimalUI.OnConfirmationDialogClosed
struct UPrimalUI_OnConfirmationDialogClosed_Params
{
	bool                                               bAccept;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalUI.HTTPGetString
struct UPrimalUI_HTTPGetString_Params
{
	struct FString                                     InURL;                                                    // (Parm, ZeroConstructor)
};

// Function ShooterGame.PrimalUI.CloseWithAnimation
struct UPrimalUI_CloseWithAnimation_Params
{
};

// Function ShooterGame.PrimalUI.ClickedButton
struct UPrimalUI_ClickedButton_Params
{
	class UWidget*                                     clickedWidget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_Spawn.OnSaveToFileEditableChanged
struct UUI_Spawn_OnSaveToFileEditableChanged_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.UI_Spawn.OnLoadFromFileComboBoxSelectionChanged
struct UUI_Spawn_OnLoadFromFileComboBoxSelectionChanged_Params
{
	struct FString                                     SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_Spawn.OnArkPlayerDataChosen
struct UUI_Spawn_OnArkPlayerDataChosen_Params
{
	TArray<unsigned char>                              ChoosenPlayerData;                                        // (Parm, ZeroConstructor)
};

// Function ShooterGame.PrimalCharacterStatusComponent.TickStatus
struct UPrimalCharacterStatusComponent_TickStatus_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceStatusUpdate;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacterStatusComponent.SetMaxStatusValue
struct UPrimalCharacterStatusComponent_SetMaxStatusValue_Params
{
	TEnumAsByte<EPrimalCharacterStatusValue>           statType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              newValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacterStatusComponent.ServerSyncReplicatedValues
struct UPrimalCharacterStatusComponent_ServerSyncReplicatedValues_Params
{
};

// Function ShooterGame.PrimalCharacterStatusComponent.RescaleMaxStat
struct UPrimalCharacterStatusComponent_RescaleMaxStat_Params
{
	TEnumAsByte<EPrimalCharacterStatusValue>           LevelUpValueType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TargetValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPercentOfTrueValue;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacterStatusComponent.OnRep_ReplicatedExperiencePoints
struct UPrimalCharacterStatusComponent_OnRep_ReplicatedExperiencePoints_Params
{
};

// Function ShooterGame.PrimalCharacterStatusComponent.OnRep_GlobalMaxStatusValues
struct UPrimalCharacterStatusComponent_OnRep_GlobalMaxStatusValues_Params
{
};

// Function ShooterGame.PrimalCharacterStatusComponent.OnRep_GlobalCurrentStatusValues
struct UPrimalCharacterStatusComponent_OnRep_GlobalCurrentStatusValues_Params
{
};

// Function ShooterGame.PrimalCharacterStatusComponent.OnRep_GlobalBaseLevelMaxStatusValues
struct UPrimalCharacterStatusComponent_OnRep_GlobalBaseLevelMaxStatusValues_Params
{
};

// Function ShooterGame.PrimalCharacterStatusComponent.OnRep_CurrentStatusValues
struct UPrimalCharacterStatusComponent_OnRep_CurrentStatusValues_Params
{
};

// Function ShooterGame.PrimalCharacterStatusComponent.NetSyncMaxStatusValues
struct UPrimalCharacterStatusComponent_NetSyncMaxStatusValues_Params
{
	TArray<float>                                      NetMaxStatusValues;                                       // (ConstParm, Parm, ZeroConstructor)
	TArray<float>                                      NetBaseMaxStatusValues;                                   // (ConstParm, Parm, ZeroConstructor)
};

// Function ShooterGame.PrimalCharacterStatusComponent.ModifyCurrentStatusValue
struct UPrimalCharacterStatusComponent_ModifyCurrentStatusValue_Params
{
	TEnumAsByte<EPrimalCharacterStatusValue>           ValueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPercentOfMax;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPercentOfCurrent;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bManualModification;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDamageDontKill;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacterStatusComponent.IsInStatusState
struct UPrimalCharacterStatusComponent_IsInStatusState_Params
{
	TEnumAsByte<EPrimalCharacterStatusState>           StateType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacterStatusComponent.IsInDeathStatusState
struct UPrimalCharacterStatusComponent_IsInDeathStatusState_Params
{
	TEnumAsByte<EPrimalCharacterStatusState>           StateType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacterStatusComponent.GetCharacterLevel
struct UPrimalCharacterStatusComponent_GetCharacterLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacterStatusComponent.ClientSyncMaxStatusValues
struct UPrimalCharacterStatusComponent_ClientSyncMaxStatusValues_Params
{
	TArray<float>                                      NetMaxStatusValues;                                       // (ConstParm, Parm, ZeroConstructor)
	TArray<float>                                      NetBaseMaxStatusValues;                                   // (ConstParm, Parm, ZeroConstructor)
};

// Function ShooterGame.PrimalCharacterStatusComponent.BPSetRecoveryRateStatusValue
struct UPrimalCharacterStatusComponent_BPSetRecoveryRateStatusValue_Params
{
	TEnumAsByte<EPrimalCharacterStatusValue>           ValueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              newValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacterStatusComponent.BPGetPercentStatusValue
struct UPrimalCharacterStatusComponent_BPGetPercentStatusValue_Params
{
	TEnumAsByte<EPrimalCharacterStatusValue>           ValueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacterStatusComponent.BPGetMaxStatusValue
struct UPrimalCharacterStatusComponent_BPGetMaxStatusValue_Params
{
	TEnumAsByte<EPrimalCharacterStatusValue>           ValueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacterStatusComponent.BPGetCurrentStatusValue
struct UPrimalCharacterStatusComponent_BPGetCurrentStatusValue_Params
{
	TEnumAsByte<EPrimalCharacterStatusValue>           ValueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacterStatusComponent.BPAdjustStatusValueModification
struct UPrimalCharacterStatusComponent_BPAdjustStatusValueModification_Params
{
	TEnumAsByte<EPrimalCharacterStatusValue>           ValueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalCharacterStatusComponent.AddExperience
struct UPrimalCharacterStatusComponent_AddExperience_Params
{
	float                                              HowMuch;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShareWithTribe;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EXPType>                               XPType;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoAIController.UpdateAggro
struct APrimalDinoAIController_UpdateAggro_Params
{
};

// Function ShooterGame.PrimalDinoAIController.ShouldForceRunWhenAttacking
struct APrimalDinoAIController_ShouldForceRunWhenAttacking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoAIController.SetAttackRotationRate
struct APrimalDinoAIController_SetAttackRotationRate_Params
{
};

// Function ShooterGame.PrimalDinoAIController.SetAttackGroundSpeed
struct APrimalDinoAIController_SetAttackGroundSpeed_Params
{
};

// Function ShooterGame.PrimalDinoAIController.ResetRotationUseAcceleration
struct APrimalDinoAIController_ResetRotationUseAcceleration_Params
{
};

// Function ShooterGame.PrimalDinoAIController.ResetRotationRate
struct APrimalDinoAIController_ResetRotationRate_Params
{
};

// Function ShooterGame.PrimalDinoAIController.ResetGroundSpeed
struct APrimalDinoAIController_ResetGroundSpeed_Params
{
};

// Function ShooterGame.PrimalDinoAIController.ResetAccelerationFollowsRotation
struct APrimalDinoAIController_ResetAccelerationFollowsRotation_Params
{
};

// Function ShooterGame.PrimalDinoAIController.RecoverMovement
struct APrimalDinoAIController_RecoverMovement_Params
{
};

// Function ShooterGame.PrimalDinoAIController.PlayStartledAnim
struct APrimalDinoAIController_PlayStartledAnim_Params
{
};

// Function ShooterGame.PrimalDinoAIController.OnLosingTargetEvent
struct APrimalDinoAIController_OnLosingTargetEvent_Params
{
};

// Function ShooterGame.PrimalDinoAIController.IsWithinAttackRangeAndCalculateBestAttack
struct APrimalDinoAIController_IsWithinAttackRangeAndCalculateBestAttack_Params
{
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAttackChanged;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoAIController.IsWithinAttackRange
struct APrimalDinoAIController_IsWithinAttackRange_Params
{
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoAIController.GetTarget
struct APrimalDinoAIController_GetTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoAIController.GetRandomWanderDestination
struct APrimalDinoAIController_GetRandomWanderDestination_Params
{
	struct FVector                                     LocOverride;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RandomOffsetMultiplier;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRandomNegativeXDir;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOrientRandOffsetByRotation;                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OrientRandOffsetByRotation;                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoAIController.GetMinAttackRange
struct APrimalDinoAIController_GetMinAttackRange_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoAIController.GetLandingLocation
struct APrimalDinoAIController_GetLandingLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoAIController.GetCurrentAttackIndex
struct APrimalDinoAIController_GetCurrentAttackIndex_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoAIController.GetControllerPawn
struct APrimalDinoAIController_GetControllerPawn_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoAIController.GetAttackRotationRate
struct APrimalDinoAIController_GetAttackRotationRate_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoAIController.GetAttackRotationRangeDegrees
struct APrimalDinoAIController_GetAttackRotationRangeDegrees_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoAIController.GetAttackRotationGroundSpeedMultiplier
struct APrimalDinoAIController_GetAttackRotationGroundSpeedMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoAIController.GetAttackRange
struct APrimalDinoAIController_GetAttackRange_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoAIController.GetAttackInterval
struct APrimalDinoAIController_GetAttackInterval_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoAIController.GetAggroEntriesCount
struct APrimalDinoAIController_GetAggroEntriesCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoAIController.GetAggroEntriesAttackerAtIndex
struct APrimalDinoAIController_GetAggroEntriesAttackerAtIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoAIController.FindTarget
struct APrimalDinoAIController_FindTarget_Params
{
	bool                                               bDontSet;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoAIController.FindNewTarget
struct APrimalDinoAIController_FindNewTarget_Params
{
	bool                                               bDontSet;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoAIController.ClearAggroEntries
struct APrimalDinoAIController_ClearAggroEntries_Params
{
};

// Function ShooterGame.PrimalDinoAIController.ChangedTarget
struct APrimalDinoAIController_ChangedTarget_Params
{
};

// Function ShooterGame.PrimalDinoAIController.CanLand
struct APrimalDinoAIController_CanLand_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoAIController.CalculateAndSetWonderingAIStateEvent
struct APrimalDinoAIController_CalculateAndSetWonderingAIStateEvent_Params
{
	bool                                               StateChanged;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoAIController.CalculateAndSetWonderingAIState
struct APrimalDinoAIController_CalculateAndSetWonderingAIState_Params
{
	bool                                               StateChanged;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoAIController.BPGetTargetingDesire
struct APrimalDinoAIController_BPGetTargetingDesire_Params
{
	class AActor*                                      forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalDinoAIController.AvoidOutOfWater
struct APrimalDinoAIController_AvoidOutOfWater_Params
{
};

// Function ShooterGame.PrimalDinoAIController.AddToAggro
struct APrimalDinoAIController_AddToAggro_Params
{
	class AActor*                                      Attacker;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamagePercent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNotifyNeighbors;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SetValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFromDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalBuff.UpdateBuffPersistentData
struct APrimalBuff_UpdateBuffPersistentData_Params
{
};

// Function ShooterGame.PrimalBuff.StaticAddBuff
struct APrimalBuff_StaticAddBuff_Params
{
	class UClass*                                      BuffClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            ForCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem*                                 AssociatedItem;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalBuff*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalBuff.SetupForInstigator
struct APrimalBuff_SetupForInstigator_Params
{
};

// Function ShooterGame.PrimalBuff.PreventActorTargeting
struct APrimalBuff_PreventActorTargeting_Params
{
	class AActor*                                      ByActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalBuff.NotifyDamage
struct APrimalBuff_NotifyDamage_Params
{
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TheDamageCauser;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalBuff.NotifyBumpedPawn
struct APrimalBuff_NotifyBumpedPawn_Params
{
	class APrimalCharacter*                            BumpedPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalBuff.NotifyBumpedByPawn
struct APrimalBuff_NotifyBumpedByPawn_Params
{
	class APrimalCharacter*                            BumpedBy;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalBuff.NetResetBuffStart
struct APrimalBuff_NetResetBuffStart_Params
{
};

// Function ShooterGame.PrimalBuff.NetDeactivate
struct APrimalBuff_NetDeactivate_Params
{
};

// Function ShooterGame.PrimalBuff.GetHUDProgressBarPercent
struct APrimalBuff_GetHUDProgressBarPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalBuff.DrawBuffFloatingHUD
struct APrimalBuff_DrawBuffFloatingHUD_Params
{
	int                                                BuffIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterHUD*                                 HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalBuff.BuffAdjustDamage
struct APrimalBuff_BuffAdjustDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalBuff.BPSetupForInstigator
struct APrimalBuff_BPSetupForInstigator_Params
{
	class AActor*                                      ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalBuff.BPPreventAddingOtherBuff
struct APrimalBuff_BPPreventAddingOtherBuff_Params
{
	class UClass*                                      anotherBuffClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalBuff.BPPreSetupForInstigator
struct APrimalBuff_BPPreSetupForInstigator_Params
{
	class AActor*                                      ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalBuff.BPDeactivated
struct APrimalBuff_BPDeactivated_Params
{
	class AActor*                                      ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalBuff.BPDeactivate
struct APrimalBuff_BPDeactivate_Params
{
};

// Function ShooterGame.PrimalBuff.BPCustomAllowAddBuff
struct APrimalBuff_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter*                            ForCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalRichTextBlock.SetText
struct UPrimalRichTextBlock_SetText_Params
{
	struct FText                                       InText;                                                   // (Parm)
	bool                                               bDoParse;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalRichTextBlock.SetString
struct UPrimalRichTextBlock_SetString_Params
{
	struct FString                                     InString;                                                 // (Parm, ZeroConstructor)
};

// Function ShooterGame.PrimalRichTextBlock.GetText
struct UPrimalRichTextBlock_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ShooterGame.PrimalTargetableActor.PlayHitEffectRadial
struct APrimalTargetableActor_PlayHitEffectRadial_Params
{
	float                                              DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRadialDamageEvent                          DamageEvent;                                              // (Parm)
	class APawn*                                       PawnInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalTargetableActor.PlayHitEffectPoint
struct APrimalTargetableActor_PlayHitEffectPoint_Params
{
	float                                              DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPointDamageEvent                           DamageEvent;                                              // (Parm)
	class APawn*                                       PawnInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalTargetableActor.PlayHitEffectGeneric
struct APrimalTargetableActor_PlayHitEffectGeneric_Params
{
	float                                              DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm)
	class APawn*                                       PawnInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalTargetableActor.PlayDyingRadial
struct APrimalTargetableActor_PlayDyingRadial_Params
{
	float                                              KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRadialDamageEvent                          DamageEvent;                                              // (Parm)
	class APawn*                                       InstigatingPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalTargetableActor.PlayDyingPoint
struct APrimalTargetableActor_PlayDyingPoint_Params
{
	float                                              KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPointDamageEvent                           DamageEvent;                                              // (Parm)
	class APawn*                                       InstigatingPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalTargetableActor.PlayDyingGeneric
struct APrimalTargetableActor_PlayDyingGeneric_Params
{
	float                                              KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm)
	class APawn*                                       InstigatingPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalTargetableActor.OnRep_ReplicatedHealth
struct APrimalTargetableActor_OnRep_ReplicatedHealth_Params
{
};

// Function ShooterGame.PrimalTargetableActor.NetUpdatedHealth
struct APrimalTargetableActor_NetUpdatedHealth_Params
{
	int                                                NewHealth;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalTargetableActor.IsInvincible
struct APrimalTargetableActor_IsInvincible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalTargetableActor.GetMaxHealth
struct APrimalTargetableActor_GetMaxHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalTargetableActor.GetDescriptiveName
struct APrimalTargetableActor_GetDescriptiveName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.PrimalTargetableActor.FlushNetUpdate
struct APrimalTargetableActor_FlushNetUpdate_Params
{
};

// Function ShooterGame.PrimalTargetableActor.BPAdjustDamage
struct APrimalTargetableActor_BPAdjustDamage_Params
{
	float                                              IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                TheDamageEvent;                                           // (Parm)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalStructure.UpdateTribeGroupStructureRank
struct APrimalStructure_UpdateTribeGroupStructureRank_Params
{
	unsigned char                                      NewRank;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalStructure.SetupDynamicMeshMaterials
struct APrimalStructure_SetupDynamicMeshMaterials_Params
{
	class UMeshComponent*                              MeshComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.PrimalStructure.SetContainerActive
struct APrimalStructure_SetContainerActive_Params
{
	bool                                               bNewActive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalStructure.OnRep_StructureColors
struct APrimalStructure_OnRep_StructureColors_Params
{
};

// Function ShooterGame.PrimalStructure.NetUpdateTeamAndOwnerName
struct APrimalStructure_NetUpdateTeamAndOwnerName_Params
{
	int                                                NewTeam;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     NewOwnerName;                                             // (Parm, ZeroConstructor)
};

// Function ShooterGame.PrimalStructure.NetUpdateOriginalOwnerNameAndID
struct APrimalStructure_NetUpdateOriginalOwnerNameAndID_Params
{
	int                                                NewOriginalOwnerID;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     NewOriginalOwnerName;                                     // (Parm, ZeroConstructor)
};

// Function ShooterGame.PrimalStructure.NetSpawnCoreStructureDeathActor
struct APrimalStructure_NetSpawnCoreStructureDeathActor_Params
{
};

// Function ShooterGame.PrimalStructure.NetDoSpawnEffects
struct APrimalStructure_NetDoSpawnEffects_Params
{
};

// Function ShooterGame.PrimalStructure.IsValidSnapPointTo
struct APrimalStructure_IsValidSnapPointTo_Params
{
	class APrimalStructure*                            childStructure;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MySnapPointToIndex;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalStructure.IsValidSnapPointFrom
struct APrimalStructure_IsValidSnapPointFrom_Params
{
	class APrimalStructure*                            ParentStructure;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MySnapPointFromIndex;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalStructure.IsValidForSnappingFrom
struct APrimalStructure_IsValidForSnappingFrom_Params
{
	class APrimalStructure*                            OtherStructure;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalStructure.IsPointObstructedByWorldGeometry
struct APrimalStructure_IsPointObstructedByWorldGeometry_Params
{
	class UWorld*                                      ForWorld;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ThePoint;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreTerrain;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyCheckTerrain;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckStructurePreventionVolumes;                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OBSTRUCTION_CHECK_DIST;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              XYMultiplier;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ZMultiplier;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalStructure.GetClosestStructureToPoint
struct APrimalStructure_GetClosestStructureToPoint_Params
{
	class UWorld*                                      ForWorld;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AtPoint;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OverlapRadius;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalStructure*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalStructure.ClientUpdateLinkedStructures
struct APrimalStructure_ClientUpdateLinkedStructures_Params
{
	TArray<uint32_t>                                   NewLinkedStructures;                                      // (ConstParm, Parm, ZeroConstructor)
};

// Function ShooterGame.PrimalStructure.ClearCustomColors
struct APrimalStructure_ClearCustomColors_Params
{
};

// Function ShooterGame.PrimalStructure.BPOverrideSnappedToTransform
struct APrimalStructure_BPOverrideSnappedToTransform_Params
{
	class APrimalStructure*                            childStructure;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ChildSnapFromIndex;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     UnsnappedPlacementPos;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    UnsnappedPlacementRot;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SnappedPlacementPos;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    SnappedPlacementRot;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SnapToIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OutRotation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                bForceInvalidateSnap;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalStructure.BPOverrideDemolish
struct APrimalStructure_BPOverrideDemolish_Params
{
	class AShooterPlayerController*                    ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalStructure.BPOverrideAllowStructureAccess
struct APrimalStructure_BPOverrideAllowStructureAccess_Params
{
	class AShooterPlayerController*                    ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAccessAllowed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalStructure.BPIsAllowedToBuild
struct APrimalStructure_BPIsAllowedToBuild_Params
{
	struct FPlacementData                              OutPlacementData;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                CurrentAllowedReason;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalStructureBearTrap.TriggerTouched
struct APrimalStructureBearTrap_TriggerTouched_Params
{
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.PrimalStructureBearTrap.OnRep_CurrentTrapState
struct APrimalStructureBearTrap_OnRep_CurrentTrapState_Params
{
};

// Function ShooterGame.PrimalStructureBearTrap.NetGotoTrapState
struct APrimalStructureBearTrap_NetGotoTrapState_Params
{
	int8_t                                             TrapState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalStructureBearTrap.IsTrapPrepared
struct APrimalStructureBearTrap_IsTrapPrepared_Params
{
	float                                              AnimSetupTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.PrimalStructureBearTrap.HideAnimatedSK
struct APrimalStructureBearTrap_HideAnimatedSK_Params
{
};

// Function ShooterGame.PrimalStructureBearTrap.DecreaseDamageTimer
struct APrimalStructureBearTrap_DecreaseDamageTimer_Params
{
};

// Function ShooterGame.PrimalStructureDoor.OnRep_DoorOpenState
struct APrimalStructureDoor_OnRep_DoorOpenState_Params
{
	int8_t                                             PrevDoorOpenState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalStructureDoor.NetGotoDoorState
struct APrimalStructureDoor_NetGotoDoorState_Params
{
	int8_t                                             DoorState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalStructureDoor.DelayedGotoDoorStateTimer
struct APrimalStructureDoor_DelayedGotoDoorStateTimer_Params
{
};

// Function ShooterGame.PrimalStructureElevatorPlatform.ServerActivate
struct APrimalStructureElevatorPlatform_ServerActivate_Params
{
	class APlayerController*                           ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceDirection;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPrimalStructureElevatorState>         Dir;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalStructureElevatorPlatform.OnRep_bIsActivated
struct APrimalStructureElevatorPlatform_OnRep_bIsActivated_Params
{
};

// Function ShooterGame.PrimalStructureElevatorPlatform.Activate
struct APrimalStructureElevatorPlatform_Activate_Params
{
	class APlayerController*                           ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceDirection;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPrimalStructureElevatorState>         Dir;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalStructureExplosive.ApplyPlacementPreview
struct APrimalStructureExplosive_ApplyPlacementPreview_Params
{
};

// Function ShooterGame.PrimalStructureExplosiveTransGPS.NetSetLocation
struct APrimalStructureExplosiveTransGPS_NetSetLocation_Params
{
	struct FVector                                     NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalStructureTripwire.WireCheck
struct APrimalStructureTripwire_WireCheck_Params
{
};

// Function ShooterGame.PrimalStructureTripwire.TriggerTouched
struct APrimalStructureTripwire_TriggerTouched_Params
{
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.PrimalStructureTripwire.OnRep_UnwiredTrap
struct APrimalStructureTripwire_OnRep_UnwiredTrap_Params
{
};

// Function ShooterGame.PrimalStructureTripwire.OnRep_ConnectedTo
struct APrimalStructureTripwire_OnRep_ConnectedTo_Params
{
};

// Function ShooterGame.PrimalStructureTripwire.NetUpdateBoxName
struct APrimalStructureTripwire_NetUpdateBoxName_Params
{
	struct FString                                     NewName;                                                  // (Parm, ZeroConstructor)
};

// Function ShooterGame.PrimalStructureTripwire.DisconnectMe
struct APrimalStructureTripwire_DisconnectMe_Params
{
};

// Function ShooterGame.PrimalStructureItemContainer.UpdateContainerActiveHealthDecrease
struct APrimalStructureItemContainer_UpdateContainerActiveHealthDecrease_Params
{
};

// Function ShooterGame.PrimalStructureItemContainer.RefreshPowerJunctionLink
struct APrimalStructureItemContainer_RefreshPowerJunctionLink_Params
{
};

// Function ShooterGame.PrimalStructureItemContainer.NetUpdateLocation
struct APrimalStructureItemContainer_NetUpdateLocation_Params
{
	struct FVector                                     NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalStructureItemContainer.NetUpdateBoxName
struct APrimalStructureItemContainer_NetUpdateBoxName_Params
{
	struct FString                                     NewName;                                                  // (Parm, ZeroConstructor)
};

// Function ShooterGame.PrimalStructureItemContainer.NetSetContainerActive
struct APrimalStructureItemContainer_NetSetContainerActive_Params
{
	bool                                               bSetActive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      NetReplicatedFuelItemClass;                               // (Parm, ZeroConstructor, IsPlainOldData)
	int16_t                                            NetReplicatedFuelItemColorIndex;                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalStructureItemContainer.MovePowerJunctionLink
struct APrimalStructureItemContainer_MovePowerJunctionLink_Params
{
};

// Function ShooterGame.PrimalStructureItemContainer.EnableActive
struct APrimalStructureItemContainer_EnableActive_Params
{
};

// Function ShooterGame.PrimalStructureItemContainer.BPNotifyInventoryItemChange
struct APrimalStructureItemContainer_BPNotifyInventoryItemChange_Params
{
	bool                                               bIsItemAdd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem*                                 theItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEquipItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalStructureItemContainer.BPContainerDeactivated
struct APrimalStructureItemContainer_BPContainerDeactivated_Params
{
};

// Function ShooterGame.PrimalStructureItemContainer.BPContainerActivated
struct APrimalStructureItemContainer_BPContainerActivated_Params
{
};

// Function ShooterGame.PrimalStructureElevatorTrack.ClientHasPlatform
struct APrimalStructureElevatorTrack_ClientHasPlatform_Params
{
};

// Function ShooterGame.PrimalStructureItemContainer_CropPlot.OnRep_PlantedCrop
struct APrimalStructureItemContainer_CropPlot_OnRep_PlantedCrop_Params
{
	class UClass*                                      PrevPlantedCrop;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalStructureItemContainer_CropPlot.OnRep_HasFruitItems
struct APrimalStructureItemContainer_CropPlot_OnRep_HasFruitItems_Params
{
	bool                                               bPreviousHasFruitItems;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalStructureItemContainer_CropPlot.OnRep_CurrentCropPhase
struct APrimalStructureItemContainer_CropPlot_OnRep_CurrentCropPhase_Params
{
	TEnumAsByte<ESeedCropPhase>                        PrevCropPhase;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalStructureItemContainer_CropPlot_VisualItems.OnRep_HasItems
struct APrimalStructureItemContainer_CropPlot_VisualItems_OnRep_HasItems_Params
{
};

// Function ShooterGame.PrimalStructureItemContainer_CropPlot_VisualItems.BPUpdateItemVisuals
struct APrimalStructureItemContainer_CropPlot_VisualItems_BPUpdateItemVisuals_Params
{
};

// Function ShooterGame.PrimalStructureItemContainer_SupplyCrate.StartLosingHealth
struct APrimalStructureItemContainer_SupplyCrate_StartLosingHealth_Params
{
};

// Function ShooterGame.PrimalStructureItemContainer_SupplyCrate.LoseHealth
struct APrimalStructureItemContainer_SupplyCrate_LoseHealth_Params
{
};

// Function ShooterGame.PrimalStructureItemContainer_VisualItems.OnRep_HasItems
struct APrimalStructureItemContainer_VisualItems_OnRep_HasItems_Params
{
};

// Function ShooterGame.PrimalStructureItemContainer_VisualItems.BPUpdateItemVisuals
struct APrimalStructureItemContainer_VisualItems_BPUpdateItemVisuals_Params
{
};

// Function ShooterGame.PrimalStructureSeating.OnRep_SeatedCharacter
struct APrimalStructureSeating_OnRep_SeatedCharacter_Params
{
};

// Function ShooterGame.PrimalStructureSeating.OnRep_CharacterPerSeat
struct APrimalStructureSeating_OnRep_CharacterPerSeat_Params
{
};

// Function ShooterGame.PrimalStructureTurretBallista.ClientsPlayFireAnim
struct APrimalStructureTurretBallista_ClientsPlayFireAnim_Params
{
};

// Function ShooterGame.PrimalStructureTurretBallista.ClientsFireProjectile
struct APrimalStructureTurretBallista_ClientsFireProjectile_Params
{
	struct FVector                                     Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   ShootDir;                                                 // (Parm)
};

// Function ShooterGame.PrimalStructureTurret.UpdatedTargeting
struct APrimalStructureTurret_UpdatedTargeting_Params
{
};

// Function ShooterGame.PrimalStructureTurret.StartWarning
struct APrimalStructureTurret_StartWarning_Params
{
};

// Function ShooterGame.PrimalStructureTurret.ClientsFireProjectile
struct APrimalStructureTurret_ClientsFireProjectile_Params
{
	struct FVector                                     Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   ShootDir;                                                 // (Parm)
};

// Function ShooterGame.PrimalStructureTurretPlant.RecoverHealthTimer
struct APrimalStructureTurretPlant_RecoverHealthTimer_Params
{
};

// Function ShooterGame.PrimalStructureLadder.UpdateRetraction
struct APrimalStructureLadder_UpdateRetraction_Params
{
};

// Function ShooterGame.PrimalStructureSeaMine.RefreshSeaMineTarget
struct APrimalStructureSeaMine_RefreshSeaMineTarget_Params
{
};

// Function ShooterGame.PrimalStructureSeaMine.OnTriggerEndOverlap
struct APrimalStructureSeaMine_OnTriggerEndOverlap_Params
{
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalStructureSeaMine.OnTriggerBeginOverlap
struct APrimalStructureSeaMine_OnTriggerBeginOverlap_Params
{
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.PrimalStructureSeaMine.OnRep_SeaMineTarget
struct APrimalStructureSeaMine_OnRep_SeaMineTarget_Params
{
};

// Function ShooterGame.PrimalStructureSeaMine.OnHit
struct APrimalStructureSeaMine_OnHit_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.PrimalStructureSeaMine.OnExplodingTriggerBeginOverlap
struct APrimalStructureSeaMine_OnExplodingTriggerBeginOverlap_Params
{
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.PrimalStructureSeaMine.Explode
struct APrimalStructureSeaMine_Explode_Params
{
};

// Function ShooterGame.PrimalStructureSign.OnRep_SignText
struct APrimalStructureSign_OnRep_SignText_Params
{
	struct FString                                     PreviousSignText;                                         // (Parm, ZeroConstructor)
};

// Function ShooterGame.PrimalStructureWaterPipe.OnRep_HasWater
struct APrimalStructureWaterPipe_OnRep_HasWater_Params
{
	bool                                               bPreviousHasWater;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_AdminMangment.OnTextCommittedWhiteListed
struct UUI_AdminMangment_OnTextCommittedWhiteListed_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_AdminMangment.OnTextCommittedMessageOfTheDay
struct UUI_AdminMangment_OnTextCommittedMessageOfTheDay_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_AdminMangment.OnTextCommittedManualBan
struct UUI_AdminMangment_OnTextCommittedManualBan_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_AdminMangment.OnTextCommitted
struct UUI_AdminMangment_OnTextCommitted_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_AdminMangment.OnTextChangedMessageOfTheDay
struct UUI_AdminMangment_OnTextChangedMessageOfTheDay_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.UI_AdminMangment.OnTextChangedManulaBan
struct UUI_AdminMangment_OnTextChangedManulaBan_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.UI_AdminMangment.OnTextChangedManualWhiteLised
struct UUI_AdminMangment_OnTextChangedManualWhiteLised_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.UI_AdminMangment.OnTextChanged
struct UUI_AdminMangment_OnTextChanged_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.UI_AllPlayersList.OnTribeNameFilterChanged
struct UUI_AllPlayersList_OnTribeNameFilterChanged_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.UI_AllPlayersList.OnPlayerNameFilterChanged
struct UUI_AllPlayersList_OnPlayerNameFilterChanged_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.UI_ChangeTransponderFreqencyEntry.HandleFilterStringTextChanged
struct UUI_ChangeTransponderFreqencyEntry_HandleFilterStringTextChanged_Params
{
	struct FText                                       NewText;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.UI_ChatBox.HandleChatTextCommitted
struct UUI_ChatBox_HandleChatTextCommitted_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_Cooking.RefreshItemLists
struct UUI_Cooking_RefreshItemLists_Params
{
};

// Function ShooterGame.UI_Cooking.OnRedSliderValueChanged
struct UUI_Cooking_OnRedSliderValueChanged_Params
{
	float                                              SliderValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_Cooking.OnItemNameChanged
struct UUI_Cooking_OnItemNameChanged_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.UI_Cooking.OnItemDescriptionChanged
struct UUI_Cooking_OnItemDescriptionChanged_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.UI_Cooking.OnGreenSliderValueChanged
struct UUI_Cooking_OnGreenSliderValueChanged_Params
{
	float                                              SliderValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_Cooking.OnBlueSliderValueChanged
struct UUI_Cooking_OnBlueSliderValueChanged_Params
{
	float                                              SliderValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_Cosmetics.StartPreview
struct UUI_Cosmetics_StartPreview_Params
{
};

// Function ShooterGame.UI_Cosmetics.OnPrimalDinoCharacterComboBoxSelectionChanged
struct UUI_Cosmetics_OnPrimalDinoCharacterComboBoxSelectionChanged_Params
{
	struct FString                                     SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_GenericConfirmationDialog.OnConfirmationDialogClosedEvent__DelegateSignature
struct UUI_GenericConfirmationDialog_OnConfirmationDialogClosedEvent__DelegateSignature_Params
{
	bool                                               bAccept;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_HostSession.OnTextCommitted
struct UUI_HostSession_OnTextCommitted_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_HostSession.OnTextChanged
struct UUI_HostSession_OnTextChanged_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.UI_HostSession.OnSliderValueChanged
struct UUI_HostSession_OnSliderValueChanged_Params
{
	float                                              SliderValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_HostSession.OnNumericValueCommitted
struct UUI_HostSession_OnNumericValueCommitted_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_Inventory.ShowAllCosmetics
struct UUI_Inventory_ShowAllCosmetics_Params
{
};

// Function ShooterGame.UI_Inventory.RefreshPreviewWidget
struct UUI_Inventory_RefreshPreviewWidget_Params
{
};

// Function ShooterGame.UI_Inventory.OnShowAllStatusChanged
struct UUI_Inventory_OnShowAllStatusChanged_Params
{
	bool                                               bIsChecked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_Inventory.OnShowAllRemoteItemsStatusChanged
struct UUI_Inventory_OnShowAllRemoteItemsStatusChanged_Params
{
	bool                                               bIsChecked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_Inventory.OnShowAllLocalItemsStatusChanged
struct UUI_Inventory_OnShowAllLocalItemsStatusChanged_Params
{
	bool                                               bIsChecked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_Inventory.OnRemoteItemNameFilterChanged
struct UUI_Inventory_OnRemoteItemNameFilterChanged_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.UI_Inventory.OnItemNameFilterChanged
struct UUI_Inventory_OnItemNameFilterChanged_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.UI_Inventory.OnEngramFilterChanged
struct UUI_Inventory_OnEngramFilterChanged_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.UI_Inventory.NewFolderRemoteClickedButton
struct UUI_Inventory_NewFolderRemoteClickedButton_Params
{
	class UWidget*                                     clickedWidget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_Inventory.NewFolderClickedButton
struct UUI_Inventory_NewFolderClickedButton_Params
{
	class UWidget*                                     clickedWidget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_Inventory.DoHideEngrams
struct UUI_Inventory_DoHideEngrams_Params
{
};

// Function ShooterGame.UI_ListCharacterData.OnArkCharacterPlayerDataChosen__DelegateSignature
struct UUI_ListCharacterData_OnArkCharacterPlayerDataChosen__DelegateSignature_Params
{
	TArray<unsigned char>                              ChoosenPlayerDataBytes;                                   // (Parm, ZeroConstructor)
};

// Function ShooterGame.UI_ListLobbies.RefreshSlotButtons
struct UUI_ListLobbies_RefreshSlotButtons_Params
{
};

// Function ShooterGame.UI_ListLobbies.OnRegionComboBoxSelectionChanged
struct UUI_ListLobbies_OnRegionComboBoxSelectionChanged_Params
{
	struct FString                                     SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_ListLobbies.OnRankRangeComboBoxSelectionChanged
struct UUI_ListLobbies_OnRankRangeComboBoxSelectionChanged_Params
{
	struct FString                                     SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_ListSessions.RefreshSlotButtons
struct UUI_ListSessions_RefreshSlotButtons_Params
{
};

// Function ShooterGame.UI_ListSessions.OnTextCommitted
struct UUI_ListSessions_OnTextCommitted_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_ListSessions.OnTextChanged
struct UUI_ListSessions_OnTextChanged_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.UI_ListSessions.OnServersFilterComboBoxSelectionChanged
struct UUI_ListSessions_OnServersFilterComboBoxSelectionChanged_Params
{
	struct FString                                     SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_ListSessions.OnCheckBoxChecked
struct UUI_ListSessions_OnCheckBoxChecked_Params
{
	bool                                               InNewState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_Lobby.OnRegionComboBoxSelectionChanged
struct UUI_Lobby_OnRegionComboBoxSelectionChanged_Params
{
	struct FString                                     SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_Lobby.OnMinELOComboBoxSelectionChanged
struct UUI_Lobby_OnMinELOComboBoxSelectionChanged_Params
{
	struct FString                                     SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_Lobby.OnHideChatCheckBoxStateChanged
struct UUI_Lobby_OnHideChatCheckBoxStateChanged_Params
{
	bool                                               bIsChecked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_LobbyEntry.RemoteVersionRecieved
struct UUI_LobbyEntry_RemoteVersionRecieved_Params
{
	int                                                RemoteMajorVersion;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_LobbyEntry.OnRegionComboBoxSelectionChanged
struct UUI_LobbyEntry_OnRegionComboBoxSelectionChanged_Params
{
	struct FString                                     SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_LobbyEntry.OnRankRangeComboBoxSelectionChanged
struct UUI_LobbyEntry_OnRankRangeComboBoxSelectionChanged_Params
{
	struct FString                                     SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_LobbyEntry.OnModeChanged
struct UUI_LobbyEntry_OnModeChanged_Params
{
	class UWidget*                                     Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_MainMenu.OnModeChanged
struct UUI_MainMenu_OnModeChanged_Params
{
	class UWidget*                                     Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_MapMarkersEntry.OnTextCommitted
struct UUI_MapMarkersEntry_OnTextCommitted_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_MapMarkersEntry.OnTextChanged
struct UUI_MapMarkersEntry_OnTextChanged_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.UI_MultiUse.ClickedEntry
struct UUI_MultiUse_ClickedEntry_Params
{
	class UWidget*                                     clickedWidget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_OptionsMenu.OptionsGraphTick
struct UUI_OptionsMenu_OptionsGraphTick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_OptionsMenu.OnWidthChanged
struct UUI_OptionsMenu_OnWidthChanged_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.UI_OptionsMenu.OnSliderValueChanged
struct UUI_OptionsMenu_OnSliderValueChanged_Params
{
	float                                              SliderValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_OptionsMenu.OnResolutionsComboBoxSelectionChanged
struct UUI_OptionsMenu_OnResolutionsComboBoxSelectionChanged_Params
{
	struct FString                                     SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_OptionsMenu.OnHeightChanged
struct UUI_OptionsMenu_OnHeightChanged_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.UI_OptionsMenu.OnGraphicsQualityComboBoxChanged
struct UUI_OptionsMenu_OnGraphicsQualityComboBoxChanged_Params
{
	struct FString                                     SelectedItem;                                             // (Parm, ZeroConstructor)
};

// Function ShooterGame.UI_OptionsMenu.OnGraphicsPresetValueChanged
struct UUI_OptionsMenu_OnGraphicsPresetValueChanged_Params
{
};

// Function ShooterGame.UI_PartySystem.OnRankRangeComboBoxSelectionChanged
struct UUI_PartySystem_OnRankRangeComboBoxSelectionChanged_Params
{
	struct FString                                     SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_PartySystem.OnPartyComboBoxSelectionChanged
struct UUI_PartySystem_OnPartyComboBoxSelectionChanged_Params
{
	struct FString                                     SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_PartySystem.OnAutoCreateTribeStateChanged
struct UUI_PartySystem_OnAutoCreateTribeStateChanged_Params
{
	bool                                               bIsChecked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_RewardGroup.OnVisibilityChange__DelegateSignature
struct UUI_RewardGroup_OnVisibilityChange__DelegateSignature_Params
{
};

// Function ShooterGame.UI_SavePainting.HandleFilterStringTextChanged
struct UUI_SavePainting_HandleFilterStringTextChanged_Params
{
	struct FText                                       NewText;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.UI_SurvivorProfile.HideDossier
struct UUI_SurvivorProfile_HideDossier_Params
{
};

// Function ShooterGame.UI_TextEntry.OnTextCommitted
struct UUI_TextEntry_OnTextCommitted_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_TextEntry.OnTextChanged
struct UUI_TextEntry_OnTextChanged_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.UI_TribeWarEntry.OnTextCommitted
struct UUI_TribeWarEntry_OnTextCommitted_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.UI_TribeWarEntry.OnTextChanged
struct UUI_TribeWarEntry_OnTextChanged_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.PrimalWorldSettings.IsAllowedInLevelBounds
struct APrimalWorldSettings_IsAllowedInLevelBounds_Params
{
	struct FVector                                     AtLocat;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCheatManager.UnbanPlayer
struct UShooterCheatManager_UnbanPlayer_Params
{
	struct FString                                     PlayerSteamName;                                          // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterCheatManager.ToggleLocation
struct UShooterCheatManager_ToggleLocation_Params
{
};

// Function ShooterGame.ShooterCheatManager.ToggleHud
struct UShooterCheatManager_ToggleHud_Params
{
};

// Function ShooterGame.ShooterCheatManager.ToggleGun
struct UShooterCheatManager_ToggleGun_Params
{
};

// Function ShooterGame.ShooterCheatManager.TestSteamRefreshItems
struct UShooterCheatManager_TestSteamRefreshItems_Params
{
};

// Function ShooterGame.ShooterCheatManager.TeleportToPlayer
struct UShooterCheatManager_TeleportToPlayer_Params
{
	int64_t                                            PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCheatManager.TeleportPlayerNameToMe
struct UShooterCheatManager_TeleportPlayerNameToMe_Params
{
	struct FString                                     PlayerName;                                               // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterCheatManager.TeleportPlayerIDToMe
struct UShooterCheatManager_TeleportPlayerIDToMe_Params
{
	int64_t                                            PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCheatManager.SummonTamed
struct UShooterCheatManager_SummonTamed_Params
{
	struct FString                                     ClassName;                                                // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterCheatManager.Suicide
struct UShooterCheatManager_Suicide_Params
{
};

// Function ShooterGame.ShooterCheatManager.SPI
struct UShooterCheatManager_SPI_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCheatManager.SpawnDino
struct UShooterCheatManager_SpawnDino_Params
{
	struct FString                                     blueprintPath;                                            // (Parm, ZeroConstructor)
	float                                              spawnDistance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              spawnYOffset;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ZOffset;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DinoLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCheatManager.SpawnActorTamed
struct UShooterCheatManager_SpawnActorTamed_Params
{
	struct FString                                     blueprintPath;                                            // (Parm, ZeroConstructor)
	float                                              spawnDistance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              spawnYOffset;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ZOffset;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCheatManager.SpawnActorSpreadTamed
struct UShooterCheatManager_SpawnActorSpreadTamed_Params
{
	struct FString                                     blueprintPath;                                            // (Parm, ZeroConstructor)
	float                                              spawnDistance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              spawnYOffset;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ZOffset;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumberActors;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpreadAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCheatManager.SpawnActorSpread
struct UShooterCheatManager_SpawnActorSpread_Params
{
	struct FString                                     blueprintPath;                                            // (Parm, ZeroConstructor)
	float                                              spawnDistance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              spawnYOffset;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ZOffset;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumberActors;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpreadAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCheatManager.SpawnActor
struct UShooterCheatManager_SpawnActor_Params
{
	struct FString                                     blueprintPath;                                            // (Parm, ZeroConstructor)
	float                                              spawnDistance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              spawnYOffset;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ZOffset;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCheatManager.ShowTutorial
struct UShooterCheatManager_ShowTutorial_Params
{
	int                                                TutorialIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceDisplay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCheatManager.ShowMessageOfTheDay
struct UShooterCheatManager_ShowMessageOfTheDay_Params
{
};

// Function ShooterGame.ShooterCheatManager.ShowInGameMenu
struct UShooterCheatManager_ShowInGameMenu_Params
{
};

// Function ShooterGame.ShooterCheatManager.SetTimeOfDay
struct UShooterCheatManager_SetTimeOfDay_Params
{
	struct FString                                     timeString;                                               // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterCheatManager.SetTargetPlayerColorVal
struct UShooterCheatManager_SetTargetPlayerColorVal_Params
{
	int                                                ColorValIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ColorVal;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCheatManager.SetTargetPlayerBodyVal
struct UShooterCheatManager_SetTargetPlayerBodyVal_Params
{
	int                                                BodyValIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BodyVal;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCheatManager.SetTargetDinoColor
struct UShooterCheatManager_SetTargetDinoColor_Params
{
	int                                                ColorRegion;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ColorID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCheatManager.SetPlayerPos
struct UShooterCheatManager_SetPlayerPos_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCheatManager.SetMessageOfTheDay
struct UShooterCheatManager_SetMessageOfTheDay_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterCheatManager.SetMatchCanStart
struct UShooterCheatManager_SetMatchCanStart_Params
{
};

// Function ShooterGame.ShooterCheatManager.SetImprintQuality
struct UShooterCheatManager_SetImprintQuality_Params
{
	float                                              ImprintQuality;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCheatManager.SetGraphicsQuality
struct UShooterCheatManager_SetGraphicsQuality_Params
{
	int                                                Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCheatManager.SetGodMode
struct UShooterCheatManager_SetGodMode_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCheatManager.SetGlobalPause
struct UShooterCheatManager_SetGlobalPause_Params
{
	bool                                               bIsPaused;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCheatManager.SetBabyAge
struct UShooterCheatManager_SetBabyAge_Params
{
	float                                              AgeValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCheatManager.ServerChatToPlayer
struct UShooterCheatManager_ServerChatToPlayer_Params
{
	struct FString                                     PlayerName;                                               // (Parm, ZeroConstructor)
	struct FString                                     MessageText;                                              // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterCheatManager.ServerChatTo
struct UShooterCheatManager_ServerChatTo_Params
{
	struct FString                                     SteamID;                                                  // (Parm, ZeroConstructor)
	struct FString                                     MessageText;                                              // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterCheatManager.ServerChat
struct UShooterCheatManager_ServerChat_Params
{
	struct FString                                     MessageText;                                              // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterCheatManager.ScriptCommand
struct UShooterCheatManager_ScriptCommand_Params
{
	struct FString                                     commandString;                                            // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterCheatManager.SaveWorld
struct UShooterCheatManager_SaveWorld_Params
{
};

// Function ShooterGame.ShooterCheatManager.ReportSpawnManagers
struct UShooterCheatManager_ReportSpawnManagers_Params
{
};

// Function ShooterGame.ShooterCheatManager.ReportLeastSpawnManagers
struct UShooterCheatManager_ReportLeastSpawnManagers_Params
{
};

// Function ShooterGame.ShooterCheatManager.RenameTribe
struct UShooterCheatManager_RenameTribe_Params
{
	struct FString                                     TribeName;                                                // (Parm, ZeroConstructor)
	struct FString                                     NewName;                                                  // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterCheatManager.RenamePlayer
struct UShooterCheatManager_RenamePlayer_Params
{
	struct FString                                     PlayerName;                                               // (Parm, ZeroConstructor)
	struct FString                                     NewName;                                                  // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterCheatManager.RemoveTribeAdmin
struct UShooterCheatManager_RemoveTribeAdmin_Params
{
};

// Function ShooterGame.ShooterCheatManager.RemoveAllSteamInventory
struct UShooterCheatManager_RemoveAllSteamInventory_Params
{
};

// Function ShooterGame.ShooterCheatManager.OpenMap
struct UShooterCheatManager_OpenMap_Params
{
	struct FString                                     MapName;                                                  // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterCheatManager.OnToggleInGameMenu
struct UShooterCheatManager_OnToggleInGameMenu_Params
{
};

// Function ShooterGame.ShooterCheatManager.MakeTribeFounder
struct UShooterCheatManager_MakeTribeFounder_Params
{
};

// Function ShooterGame.ShooterCheatManager.MakeTribeAdmin
struct UShooterCheatManager_MakeTribeAdmin_Params
{
};

// Function ShooterGame.ShooterCheatManager.ListPlayers
struct UShooterCheatManager_ListPlayers_Params
{
};

// Function ShooterGame.ShooterCheatManager.KillPlayer
struct UShooterCheatManager_KillPlayer_Params
{
	int64_t                                            PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCheatManager.Kill
struct UShooterCheatManager_Kill_Params
{
};

// Function ShooterGame.ShooterCheatManager.KickPlayer
struct UShooterCheatManager_KickPlayer_Params
{
	struct FString                                     PlayerSteamName;                                          // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterCheatManager.InfiniteStats
struct UShooterCheatManager_InfiniteStats_Params
{
};

// Function ShooterGame.ShooterCheatManager.HideTutorial
struct UShooterCheatManager_HideTutorial_Params
{
	int                                                TutorialIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCheatManager.GiveToMe
struct UShooterCheatManager_GiveToMe_Params
{
};

// Function ShooterGame.ShooterCheatManager.GiveReward
struct UShooterCheatManager_GiveReward_Params
{
	int                                                ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCheatManager.GiveResources
struct UShooterCheatManager_GiveResources_Params
{
};

// Function ShooterGame.ShooterCheatManager.GiveItemToPlayer
struct UShooterCheatManager_GiveItemToPlayer_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     blueprintPath;                                            // (Parm, ZeroConstructor)
	int                                                quantityOverride;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              qualityOverride;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceBlueprint;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCheatManager.GiveItemNumToPlayer
struct UShooterCheatManager_GiveItemNumToPlayer_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                masterIndexNum;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                quantityOverride;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              qualityOverride;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceBlueprint;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCheatManager.GiveItemNum
struct UShooterCheatManager_GiveItemNum_Params
{
	int                                                masterIndexNum;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                quantityOverride;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              qualityOverride;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceBlueprint;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCheatManager.GiveItem
struct UShooterCheatManager_GiveItem_Params
{
	struct FString                                     blueprintPath;                                            // (Parm, ZeroConstructor)
	int                                                quantityOverride;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              qualityOverride;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceBlueprint;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCheatManager.GiveExpToPlayer
struct UShooterCheatManager_GiveExpToPlayer_Params
{
	int64_t                                            PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HowMuch;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               fromTribeShare;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPreventSharingWithTribe;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCheatManager.GiveEngrams
struct UShooterCheatManager_GiveEngrams_Params
{
};

// Function ShooterGame.ShooterCheatManager.GiveAllStructure
struct UShooterCheatManager_GiveAllStructure_Params
{
};

// Function ShooterGame.ShooterCheatManager.GetGameLog
struct UShooterCheatManager_GetGameLog_Params
{
};

// Function ShooterGame.ShooterCheatManager.GetChat
struct UShooterCheatManager_GetChat_Params
{
};

// Function ShooterGame.ShooterCheatManager.GameCommand
struct UShooterCheatManager_GameCommand_Params
{
	struct FString                                     TheCommand;                                               // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterCheatManager.ForceTribes
struct UShooterCheatManager_ForceTribes_Params
{
	struct FString                                     PlayerName1;                                              // (Parm, ZeroConstructor)
	struct FString                                     PlayerName2;                                              // (Parm, ZeroConstructor)
	struct FString                                     NewTribeName;                                             // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterCheatManager.ForceTame
struct UShooterCheatManager_ForceTame_Params
{
};

// Function ShooterGame.ShooterCheatManager.ForcePlayerToJoinTribe
struct UShooterCheatManager_ForcePlayerToJoinTribe_Params
{
	int64_t                                            PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     TribeName;                                                // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterCheatManager.ForcePlayerToJoinTargetTribe
struct UShooterCheatManager_ForcePlayerToJoinTargetTribe_Params
{
	int64_t                                            PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCheatManager.EnemyInVisible
struct UShooterCheatManager_EnemyInVisible_Params
{
	bool                                               Invisible;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCheatManager.EnableSpectator
struct UShooterCheatManager_EnableSpectator_Params
{
};

// Function ShooterGame.ShooterCheatManager.EnableCheats
struct UShooterCheatManager_EnableCheats_Params
{
	struct FString                                     pass;                                                     // (ConstParm, Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterCheatManager.DoTame
struct UShooterCheatManager_DoTame_Params
{
};

// Function ShooterGame.ShooterCheatManager.DoRestartLevel
struct UShooterCheatManager_DoRestartLevel_Params
{
};

// Function ShooterGame.ShooterCheatManager.DoExit
struct UShooterCheatManager_DoExit_Params
{
};

// Function ShooterGame.ShooterCheatManager.DisallowPlayerToJoinNoCheck
struct UShooterCheatManager_DisallowPlayerToJoinNoCheck_Params
{
	struct FString                                     SteamID;                                                  // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterCheatManager.DisableSpectator
struct UShooterCheatManager_DisableSpectator_Params
{
};

// Function ShooterGame.ShooterCheatManager.DestroyWildDinos
struct UShooterCheatManager_DestroyWildDinos_Params
{
};

// Function ShooterGame.ShooterCheatManager.DestroyTribeStructures
struct UShooterCheatManager_DestroyTribeStructures_Params
{
};

// Function ShooterGame.ShooterCheatManager.DestroyTribePlayers
struct UShooterCheatManager_DestroyTribePlayers_Params
{
};

// Function ShooterGame.ShooterCheatManager.DestroyTribeDinos
struct UShooterCheatManager_DestroyTribeDinos_Params
{
};

// Function ShooterGame.ShooterCheatManager.DestroyStructures
struct UShooterCheatManager_DestroyStructures_Params
{
};

// Function ShooterGame.ShooterCheatManager.DestroyMyTarget
struct UShooterCheatManager_DestroyMyTarget_Params
{
};

// Function ShooterGame.ShooterCheatManager.DestroyAllEnemies
struct UShooterCheatManager_DestroyAllEnemies_Params
{
};

// Function ShooterGame.ShooterCheatManager.DestroyActors
struct UShooterCheatManager_DestroyActors_Params
{
	struct FString                                     ClassName;                                                // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterCheatManager.ClearTutorials
struct UShooterCheatManager_ClearTutorials_Params
{
};

// Function ShooterGame.ShooterCheatManager.ClearPlayerInventory
struct UShooterCheatManager_ClearPlayerInventory_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClearInventory;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClearSlotItems;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClearEquippedItems;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCheatManager.Broadcast
struct UShooterCheatManager_Broadcast_Params
{
	struct FString                                     MessageText;                                              // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterCheatManager.BanPlayer
struct UShooterCheatManager_BanPlayer_Params
{
	struct FString                                     PlayerSteamName;                                          // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterCheatManager.AllowPlayerToJoinNoCheck
struct UShooterCheatManager_AllowPlayerToJoinNoCheck_Params
{
	struct FString                                     SteamID;                                                  // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterCheatManager.AddExperience
struct UShooterCheatManager_AddExperience_Params
{
	float                                              HowMuch;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               fromTribeShare;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPreventSharingWithTribe;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterDamageType.BPAdjustDamage
struct UShooterDamageType_BPAdjustDamage_Params
{
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                TheDamageEvent;                                           // (Parm)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGame_Menu.PlayMusic
struct AShooterGame_Menu_PlayMusic_Params
{
};

// Function ShooterGame.ShooterGameInstance.OnRemoteMajorVerionRecived__DelegateSignature
struct UShooterGameInstance_OnRemoteMajorVerionRecived__DelegateSignature_Params
{
	int                                                Version;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameInstance.LoadTheGameMedia
struct UShooterGameInstance_LoadTheGameMedia_Params
{
};

// Function ShooterGame.ShooterGameInstance.DisplayGlobalMainMenuNotification
struct UShooterGameInstance_DisplayGlobalMainMenuNotification_Params
{
};

// Function ShooterGame.ShooterGameMode.UpdatePlayerStats
struct AShooterGameMode_UpdatePlayerStats_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.TriggerLevelCustomEvents
struct AShooterGameMode_TriggerLevelCustomEvents_Params
{
	class UWorld*                                      inWorld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.ShooterCharacterSpawned__DelegateSignature
struct AShooterGameMode_ShooterCharacterSpawned__DelegateSignature_Params
{
	class AShooterCharacter*                           TheShooterCharacter;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.ShooterCharacterDied__DelegateSignature
struct AShooterGameMode_ShooterCharacterDied__DelegateSignature_Params
{
	class AShooterCharacter*                           TheShooterCharacter;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.SetTimeOfDay
struct AShooterGameMode_SetTimeOfDay_Params
{
	struct FString                                     timeString;                                               // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterGameMode.SendServerNotification
struct AShooterGameMode_SendServerNotification_Params
{
	struct FString                                     MessageText;                                              // (Parm, ZeroConstructor)
	struct FLinearColor                                MessageColor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DisplayScale;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DisplayTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  MessageIcon;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  SoundToPlay;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReceiverTeamId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReceiverPlayerID;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDoBillboard;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.SendServerDirectMessage
struct AShooterGameMode_SendServerDirectMessage_Params
{
	struct FString                                     PlayerSteamIDconst;                                       // (Parm, ZeroConstructor)
	struct FString                                     MessageText;                                              // (Parm, ZeroConstructor)
	struct FLinearColor                                MessageColor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsBold;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReceiverTeamId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReceiverPlayerID;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerName;                                               // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterGameMode.SendServerChatMessage
struct AShooterGameMode_SendServerChatMessage_Params
{
	struct FString                                     MessageText;                                              // (Parm, ZeroConstructor)
	struct FLinearColor                                MessageColor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsBold;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReceiverTeamId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReceiverPlayerID;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.RestartServer
struct AShooterGameMode_RestartServer_Params
{
};

// Function ShooterGame.ShooterGameMode.RemovePlayerData
struct AShooterGameMode_RemovePlayerData_Params
{
	class AShooterPlayerState*                         PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.RemoveInactivePlayersAndTribes
struct AShooterGameMode_RemoveInactivePlayersAndTribes_Params
{
};

// Function ShooterGame.ShooterGameMode.PrintToServerGameLog
struct AShooterGameMode_PrintToServerGameLog_Params
{
	struct FString                                     InString;                                                 // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterGameMode.PrintToGameplayLog
struct AShooterGameMode_PrintToGameplayLog_Params
{
	struct FString                                     InString;                                                 // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterGameMode.PostAlarmNotificationTribe
struct AShooterGameMode_PostAlarmNotificationTribe_Params
{
	int                                                TribeID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterGameMode.PostAlarmNotificationPlayerID
struct AShooterGameMode_PostAlarmNotificationPlayerID_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterGameMode.PostAlarmNotification
struct AShooterGameMode_PostAlarmNotification_Params
{
	struct FString                                     SteamID;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterGameMode.OnMatchStart
struct AShooterGameMode_OnMatchStart_Params
{
};

// Function ShooterGame.ShooterGameMode.OnLogout
struct AShooterGameMode_OnLogout_Params
{
	class AController*                                 Exiting;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.MatchEnded
struct AShooterGameMode_MatchEnded_Params
{
};

// Function ShooterGame.ShooterGameMode.KickPlayerController
struct AShooterGameMode_KickPlayerController_Params
{
	class APlayerController*                           thePC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     KickMessage;                                              // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterGameMode.KickAllPlayersAndReload
struct AShooterGameMode_KickAllPlayersAndReload_Params
{
};

// Function ShooterGame.ShooterGameMode.IsPlayerControllerAllowedToJoinNoCheck
struct AShooterGameMode_IsPlayerControllerAllowedToJoinNoCheck_Params
{
	class AShooterPlayerController*                    ForPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.IsPlayerControllerAllowedToExclusiveJoin
struct AShooterGameMode_IsPlayerControllerAllowedToExclusiveJoin_Params
{
	class AShooterPlayerController*                    ForPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.IsPlayerAllowedToCheat
struct AShooterGameMode_IsPlayerAllowedToCheat_Params
{
	class AShooterPlayerController*                    ForPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.InitOptionString
struct AShooterGameMode_InitOptionString_Params
{
	struct FString                                     Commandline;                                              // (Parm, ZeroConstructor)
	struct FString                                     Section;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Option;                                                   // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterGameMode.InitOptionInteger
struct AShooterGameMode_InitOptionInteger_Params
{
	struct FString                                     Commandline;                                              // (Parm, ZeroConstructor)
	struct FString                                     Section;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Option;                                                   // (Parm, ZeroConstructor)
	int                                                CurrentValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.InitOptionFloat
struct AShooterGameMode_InitOptionFloat_Params
{
	struct FString                                     Commandline;                                              // (Parm, ZeroConstructor)
	struct FString                                     Section;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Option;                                                   // (Parm, ZeroConstructor)
	float                                              CurrentValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.InitOptionBool
struct AShooterGameMode_InitOptionBool_Params
{
	struct FString                                     Commandline;                                              // (Parm, ZeroConstructor)
	struct FString                                     Section;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Option;                                                   // (Parm, ZeroConstructor)
	bool                                               bDefaultValue;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.IncrementNumDeaths
struct AShooterGameMode_IncrementNumDeaths_Params
{
	struct FString                                     PlayerDataID;                                             // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterGameMode.HandleNewPlayer
struct AShooterGameMode_HandleNewPlayer_Params
{
	class AShooterPlayerController*                    NewPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalPlayerData*                           PlayerData;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           PlayerCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFromLogin;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.GetTribeDataBlueprint
struct AShooterGameMode_GetTribeDataBlueprint_Params
{
	int                                                TribeID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTribeData                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ShooterGame.ShooterGameMode.GetStringOption
struct AShooterGameMode_GetStringOption_Params
{
	struct FString                                     Section;                                                  // (Parm, ZeroConstructor)
	struct FString                                     OptionName;                                               // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.ShooterGameMode.GetSessionTimeString
struct AShooterGameMode_GetSessionTimeString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.ShooterGameMode.GetPlayerStats
struct AShooterGameMode_GetPlayerStats_Params
{
	struct FString                                     PlayerDataID;                                             // (Parm, ZeroConstructor)
	struct FPlayerStats                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ShooterGame.ShooterGameMode.GetPlayerData
struct AShooterGameMode_GetPlayerData_Params
{
	struct FString                                     PlayerDataID;                                             // (Parm, ZeroConstructor)
	class UPrimalPlayerData*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.GetOverlappingDinoCharactersOfTeamAndClass
struct AShooterGameMode_GetOverlappingDinoCharactersOfTeamAndClass_Params
{
	struct FVector                                     AtLocation;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              OverlapRange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DinoClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DinoTeam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bExactClassMatch;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class APrimalDinoCharacter*>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.ShooterGameMode.GetNumDeaths
struct AShooterGameMode_GetNumDeaths_Params
{
	struct FString                                     PlayerDataID;                                             // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.GetNumberOfLivePlayersOnTribe
struct AShooterGameMode_GetNumberOfLivePlayersOnTribe_Params
{
	struct FString                                     TribeName;                                                // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.GetLaunchOptionString
struct AShooterGameMode_GetLaunchOptionString_Params
{
	struct FString                                     LaunchOptionKey;                                          // (Parm, ZeroConstructor)
	struct FString                                     ReturnVal;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.GetLaunchOptionFloat
struct AShooterGameMode_GetLaunchOptionFloat_Params
{
	struct FString                                     LaunchOptionKey;                                          // (Parm, ZeroConstructor)
	float                                              ReturnVal;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.GetIntOptionIni
struct AShooterGameMode_GetIntOptionIni_Params
{
	struct FString                                     Section;                                                  // (Parm, ZeroConstructor)
	struct FString                                     OptionName;                                               // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.GetFloatOptionIni
struct AShooterGameMode_GetFloatOptionIni_Params
{
	struct FString                                     Section;                                                  // (Parm, ZeroConstructor)
	struct FString                                     OptionName;                                               // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.GetBoolOptionIni
struct AShooterGameMode_GetBoolOptionIni_Params
{
	struct FString                                     Section;                                                  // (Parm, ZeroConstructor)
	struct FString                                     OptionName;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.ForceRepopulateFoliageAtPoint
struct AShooterGameMode_ForceRepopulateFoliageAtPoint_Params
{
	struct FVector                                     AtPoint;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxRangeFromPoint;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumFoliages;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      RepopulatedEmitter;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StructureDownTraceVector;                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     StructureUpTraceVector;                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.ForceCreateTribe
struct AShooterGameMode_ForceCreateTribe_Params
{
	struct FString                                     TribeName;                                                // (Parm, ZeroConstructor)
	int                                                TeamOverride;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.ForceAddPlayerToTribe
struct AShooterGameMode_ForceAddPlayerToTribe_Params
{
	class AShooterPlayerState*                         ForPlayerState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     TribeName;                                                // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.CountOverlappingDinoCharactersOfTeamAndClass
struct AShooterGameMode_CountOverlappingDinoCharactersOfTeamAndClass_Params
{
	struct FVector                                     AtLocation;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              OverlapRange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DinoClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DinoTeam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bExactClassMatch;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.CheckJoinInProgress
struct AShooterGameMode_CheckJoinInProgress_Params
{
	bool                                               bIsFromLogin;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           NewPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.AreTribesAllied
struct AShooterGameMode_AreTribesAllied_Params
{
	int                                                TribeID1;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TribeID2;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.AddToTribeLog
struct AShooterGameMode_AddToTribeLog_Params
{
	int                                                TribeID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     NewLog;                                                   // (Parm, ZeroConstructor)
};

// Function ShooterGame.CustomGameMode.SaveIntToConfig
struct ACustomGameMode_SaveIntToConfig_Params
{
	int                                                IntValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     KeyValue;                                                 // (Parm, ZeroConstructor)
};

// Function ShooterGame.CustomGameMode.SaveFloatToConfig
struct ACustomGameMode_SaveFloatToConfig_Params
{
	float                                              IntValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     KeyValue;                                                 // (Parm, ZeroConstructor)
};

// Function ShooterGame.CustomGameMode.SaveBoolToConfig
struct ACustomGameMode_SaveBoolToConfig_Params
{
	bool                                               IntValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     KeyValue;                                                 // (Parm, ZeroConstructor)
};

// Function ShooterGame.CustomGameMode.OnUpdateTribeData
struct ACustomGameMode_OnUpdateTribeData_Params
{
	struct FTribeData                                  NewTribeData;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameMode.OnRemoveTribe
struct ACustomGameMode_OnRemoveTribe_Params
{
	int                                                TribeID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameMode.OnPlayerCanRestart
struct ACustomGameMode_OnPlayerCanRestart_Params
{
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameMode.OnIsUsedSpawnPointStillSupported
struct ACustomGameMode_OnIsUsedSpawnPointStillSupported_Params
{
	class APlayerStart*                                SpawnPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameMode.OnIsSpawnpointAllowed
struct ACustomGameMode_OnIsSpawnpointAllowed_Params
{
	class APlayerStart*                                SpawnPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameMode.OnInitOptionEvent
struct ACustomGameMode_OnInitOptionEvent_Params
{
	struct FString                                     Options;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameMode.OnInitGameState
struct ACustomGameMode_OnInitGameState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameMode.OnInitGame
struct ACustomGameMode_OnInitGame_Params
{
	struct FString                                     MapName;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Options;                                                  // (Parm, ZeroConstructor)
	struct FString                                     ErrorMessage;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameMode.OnHandleLeavingMap
struct ACustomGameMode_OnHandleLeavingMap_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameMode.OnDoGameCommand
struct ACustomGameMode_OnDoGameCommand_Params
{
	struct FString                                     TheCommand;                                               // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.CustomGameMode.OnAllowRenameTribe
struct ACustomGameMode_OnAllowRenameTribe_Params
{
	class AShooterPlayerState*                         ForPlayerState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     TribeName;                                                // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameMode.OnAllowNotifyRemotePlayerDeath
struct ACustomGameMode_OnAllowNotifyRemotePlayerDeath_Params
{
	class AShooterCharacter*                           ForChar;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameMode.OnAllowModifyStatusValue
struct ACustomGameMode_OnAllowModifyStatusValue_Params
{
	class UPrimalCharacterStatusComponent*             forComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EPrimalCharacterStatusValue>           ValueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameMode.OnAllowClearTribe
struct ACustomGameMode_OnAllowClearTribe_Params
{
	class AShooterPlayerState*                         ForPlayerState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameMode.OnAllowAddXP
struct ACustomGameMode_OnAllowAddXP_Params
{
	class UPrimalCharacterStatusComponent*             forComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameMode.OnAllowAddToTribe
struct ACustomGameMode_OnAllowAddToTribe_Params
{
	class AShooterPlayerState*                         ForPlayerState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTribeData                                  MyNewTribe;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameMode.OnAdjustDamage
struct ACustomGameMode_OnAdjustDamage_Params
{
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DefaultDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameMode.OnAddItemSOTFFinished
struct ACustomGameMode_OnAddItemSOTFFinished_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<uint64_t>                                   SteamItemUserIDs;                                         // (Parm, ZeroConstructor)
	uint64_t                                           SteamID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           SteamDefID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           AppID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.CustomGameMode.MakeTribeData
struct ACustomGameMode_MakeTribeData_Params
{
	struct FString                                     TribeName;                                                // (Parm, OutParm, ZeroConstructor)
	int                                                OwnerPlayerDataID;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                TribeID;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             MembersPlayerName;                                        // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        MembersPlayerDataID;                                      // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        TribeAdmins;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               bSetGovernment;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTribeGovernment                            TribeGovernment;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FPrimalPlayerCharacterConfigStructReplicated> MembersConfigs;                                           // (Parm, OutParm, ZeroConstructor)
	struct FTribeData                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ShooterGame.CustomGameMode.KickPlayer
struct ACustomGameMode_KickPlayer_Params
{
	class APlayerController*                           NewPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.CustomGameMode.IsInAllowedToCheatList
struct ACustomGameMode_IsInAllowedToCheatList_Params
{
	class APlayerController*                           NewPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameMode.InitOptionFloatToINI
struct ACustomGameMode_InitOptionFloatToINI_Params
{
	struct FString                                     Options;                                                  // (Parm, ZeroConstructor)
	float                                              FloatValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     KeyValue;                                                 // (Parm, ZeroConstructor)
};

// Function ShooterGame.CustomGameMode.GetValueFromINI
struct ACustomGameMode_GetValueFromINI_Params
{
	struct FString                                     KeyValue;                                                 // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameMode.GetIntValueFromINI
struct ACustomGameMode_GetIntValueFromINI_Params
{
	struct FString                                     KeyValue;                                                 // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameMode.GetIniFloatValue
struct ACustomGameMode_GetIniFloatValue_Params
{
	struct FString                                     Section;                                                  // (Parm, ZeroConstructor)
	struct FString                                     KeyValue;                                                 // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameMode.GetFloatValueFromINI
struct ACustomGameMode_GetFloatValueFromINI_Params
{
	struct FString                                     KeyValue;                                                 // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameMode.GetBoolValueFromINI
struct ACustomGameMode_GetBoolValueFromINI_Params
{
	struct FString                                     KeyValue;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameMode.CleanUpSotfNotificationManager
struct ACustomGameMode_CleanUpSotfNotificationManager_Params
{
};

// Function ShooterGame.CustomGameMode.CheckForCommand
struct ACustomGameMode_CheckForCommand_Params
{
	struct FString                                     CommandName;                                              // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameMode.BreakTribeData
struct ACustomGameMode_BreakTribeData_Params
{
	struct FTribeData                                  Data;                                                     // (ConstParm, Parm)
	struct FString                                     TribeName;                                                // (Parm, OutParm, ZeroConstructor)
	int                                                OwnerPlayerDataID;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                TribeID;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             MembersPlayerName;                                        // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        MembersPlayerDataID;                                      // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        TribeAdmins;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               bSetGovernment;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTribeGovernment                            TribeGovernment;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FPrimalPlayerCharacterConfigStructReplicated> MembersConfigs;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function ShooterGame.ShooterGameSession.RemoteVersionRecieved
struct AShooterGameSession_RemoteVersionRecieved_Params
{
	int                                                RemoteMajorVersion;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState.OnRep_ReplicateLocalizedChatRadius
struct AShooterGameState_OnRep_ReplicateLocalizedChatRadius_Params
{
};

// Function ShooterGame.ShooterGameState.NetUpdateOfflinePvPLiveTeams
struct AShooterGameState_NetUpdateOfflinePvPLiveTeams_Params
{
	TArray<int>                                        NewPreventOfflinePvPLiveTeams;                            // (ConstParm, Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterGameState.NetUpdateOfflinePvPExpiringTeams
struct AShooterGameState_NetUpdateOfflinePvPExpiringTeams_Params
{
	TArray<int>                                        NewPreventOfflinePvPExpiringTeams;                        // (ConstParm, Parm, ZeroConstructor)
	TArray<double>                                     NewPreventOfflinePvPExpiringTimes;                        // (ConstParm, Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterGameState.NetAddFloatingText
struct AShooterGameState_NetAddFloatingText_Params
{
	struct FVector                                     AtLocation;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FloatingTextString;                                       // (Parm, ZeroConstructor)
	struct FColor                                      FloatingTextColor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScaleX;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScaleY;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TextLifeSpan;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TextVelocity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinScale;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeInTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OnlySendToTeamID;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState.NetAddFloatingDamageText
struct AShooterGameState_NetAddFloatingDamageText_Params
{
	struct FVector                                     AtLocation;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FromTeamID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OnlySendToTeamID;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState.IsTeamIDInvincible
struct AShooterGameState_IsTeamIDInvincible_Params
{
	int                                                TargetingTeamID;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState.GetOfflineDamagePreventionTime
struct AShooterGameState_GetOfflineDamagePreventionTime_Params
{
	int                                                TargetingTeamID;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState.GetDayTimeString
struct AShooterGameState_GetDayTimeString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.ShooterGameState.GetCleanServerSessionName
struct AShooterGameState_GetCleanServerSessionName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.ShooterGameState.DisplayWelcomeUI
struct AShooterGameState_DisplayWelcomeUI_Params
{
};

// Function ShooterGame.ShooterGameState.BaseSpawnBuffAndAttachToCharacter
struct AShooterGameState_BaseSpawnBuffAndAttachToCharacter_Params
{
	class UClass*                                      Buff;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            PrimalCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExperiencePoints;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalBuff*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState.BaseProjectWorldToScreenPosition
struct AShooterGameState_BaseProjectWorldToScreenPosition_Params
{
	struct FVector                                     WorldLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class APlayerController*                           thePC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState.BaseIsTribeID
struct AShooterGameState_BaseIsTribeID_Params
{
	int                                                TeamId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState.BaseGetCustomActors
struct AShooterGameState_BaseGetCustomActors_Params
{
	struct FName                                       SearchCustomTag;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class ACustomActorList*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState.BaseGetAllShooterControllers
struct AShooterGameState_BaseGetAllShooterControllers_Params
{
	TArray<class AShooterPlayerController*>            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.ShooterGameState.BaseGetAllShooterCharactersOfTeam
struct AShooterGameState_BaseGetAllShooterCharactersOfTeam_Params
{
	int                                                KillerTeam;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AShooterCharacter*>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.ShooterGameState.BaseGetAllShooterCharacters
struct AShooterGameState_BaseGetAllShooterCharacters_Params
{
	TArray<class AShooterCharacter*>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.ShooterGameState.BaseGetAllDinoCharactersOfTeam
struct AShooterGameState_BaseGetAllDinoCharactersOfTeam_Params
{
	int                                                KillerTeam;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class APrimalDinoCharacter*>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.ShooterGameState.BaseDrawTileOnCanvas
struct AShooterGameState_BaseDrawTileOnCanvas_Params
{
	class AShooterHUD*                                 HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    Tex;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              XL;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              YL;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              U;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              V;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              UL;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VL;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      DrawColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState.AddFloatingText
struct AShooterGameState_AddFloatingText_Params
{
	struct FVector                                     AtLocation;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FloatingTextString;                                       // (Parm, ZeroConstructor)
	struct FColor                                      FloatingTextColor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScaleX;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScaleY;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TextLifeSpan;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TextVelocity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinScale;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeInTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.SpawnBuffAndAttachToCharacter
struct ACustomGameState_SpawnBuffAndAttachToCharacter_Params
{
	class UClass*                                      Buff;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            PrimalCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExperiencePoints;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalBuff*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.ShowAfterActionReport
struct ACustomGameState_ShowAfterActionReport_Params
{
	int                                                WinningTribeID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReportURL;                                                // (Parm, ZeroConstructor)
};

// Function ShooterGame.CustomGameState.SetCurrentWorldEvent
struct ACustomGameState_SetCurrentWorldEvent_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
};

// Function ShooterGame.CustomGameState.SetAfterActionReportItems
struct ACustomGameState_SetAfterActionReportItems_Params
{
	TArray<struct FActionReportItem>                   Items;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ShooterGame.CustomGameState.SetActionReportItem
struct ACustomGameState_SetActionReportItem_Params
{
	struct FActionReportItem                           Data;                                                     // (Parm, OutParm)
	struct FString                                     PlayerName;                                               // (Parm, ZeroConstructor)
	struct FString                                     PlayerUniqueID;                                           // (Parm, ZeroConstructor)
	int                                                TribeID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     TribeName;                                                // (Parm, ZeroConstructor)
	struct FString                                     TimeOfDeath;                                              // (Parm, ZeroConstructor)
	struct FString                                     LevelOfDeath;                                             // (Parm, ZeroConstructor)
	struct FString                                     DeathMessage;                                             // (Parm, ZeroConstructor)
	class UTexture2D*                                  DeathIcon;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Rank;                                                     // (Parm, ZeroConstructor)
};

// Function ShooterGame.CustomGameState.SaveAfterActionReport
struct ACustomGameState_SaveAfterActionReport_Params
{
	int                                                WinningTribeID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.ProjectWorldToScreenPosition
struct ACustomGameState_ProjectWorldToScreenPosition_Params
{
	struct FVector                                     WorldLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class APlayerController*                           thePC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.OnStartPreMatctCountDown
struct ACustomGameState_OnStartPreMatctCountDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.OnSetMaxNumberOfPlayersInTribe
struct ACustomGameState_OnSetMaxNumberOfPlayersInTribe_Params
{
	int                                                Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.OnSetHudEvent
struct ACustomGameState_OnSetHudEvent_Params
{
};

// Function ShooterGame.CustomGameState.OnSetFlushTribeData
struct ACustomGameState_OnSetFlushTribeData_Params
{
	bool                                               boolFlushTribeData;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.OnSavedAfterActionReport
struct ACustomGameState_OnSavedAfterActionReport_Params
{
	int                                                WinningTribeID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReportURL;                                                // (Parm, ZeroConstructor)
};

// Function ShooterGame.CustomGameState.OnRep_CurrentWorldEventName
struct ACustomGameState_OnRep_CurrentWorldEventName_Params
{
};

// Function ShooterGame.CustomGameState.OnOverrideDynamicMusic
struct ACustomGameState_OnOverrideDynamicMusic_Params
{
	class APrimalCharacter*                            ForCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.OnNotifyPlayerDied
struct ACustomGameState_OnNotifyPlayerDied_Params
{
	class AShooterCharacter*                           theShooterChar;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController*                    prevController;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       InstigatingPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.OnHasGameModeMatchStarted
struct ACustomGameState_OnHasGameModeMatchStarted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.OnHasGameModeMatchFinished
struct ACustomGameState_OnHasGameModeMatchFinished_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.OnHandleActorEvent
struct ACustomGameState_OnHandleActorEvent_Params
{
	class AActor*                                      forActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NameParam;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VecParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.OnGetRemainingMatchTime
struct ACustomGameState_OnGetRemainingMatchTime_Params
{
	class ACustomGameState*                            CustomGameState;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.OnGetCurrentGameTimestampInSeconds
struct ACustomGameState_OnGetCurrentGameTimestampInSeconds_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.OnForceOccludedFloatingHUD
struct ACustomGameState_OnForceOccludedFloatingHUD_Params
{
	class AActor*                                      anActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController*                    ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.OnExtraShooterCharacterTick
struct ACustomGameState_OnExtraShooterCharacterTick_Params
{
	class AShooterCharacter*                           ForChar;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.OnDrawingHUDNotifications
struct ACustomGameState_OnDrawingHUDNotifications_Params
{
	class AShooterHUD*                                 HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.OnDrawHUD
struct ACustomGameState_OnDrawHUD_Params
{
	class AShooterHUD*                                 HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.OnDrawExtraPlayerFloatingHUD
struct ACustomGameState_OnDrawExtraPlayerFloatingHUD_Params
{
	class AShooterHUD*                                 HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           theShooterChar;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AtLoc;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.OnCheckGameStateIfCanRespawn
struct ACustomGameState_OnCheckGameStateIfCanRespawn_Params
{
	class APlayerController*                           ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.OnAllowTribeManager
struct ACustomGameState_OnAllowTribeManager_Params
{
	class AShooterPlayerController*                    ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.OnAllowTribeManagement
struct ACustomGameState_OnAllowTribeManagement_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.OnAllowStartSupplyCrateSpawns
struct ACustomGameState_OnAllowStartSupplyCrateSpawns_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.OnAllowShowPlayerHudUI
struct ACustomGameState_OnAllowShowPlayerHudUI_Params
{
	class APrimalCharacter*                            forPawn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.OnAllowRemoveItems
struct ACustomGameState_OnAllowRemoveItems_Params
{
	class UPrimalInventoryComponent*                   ForInv;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AShooterPlayerController*                    PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem*                                 anItemToTransfer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.OnAllowPopUps
struct ACustomGameState_OnAllowPopUps_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.OnAllowOrbitCamera
struct ACustomGameState_OnAllowOrbitCamera_Params
{
	class APrimalCharacter*                            ForCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.OnAllowFastTravel
struct ACustomGameState_OnAllowFastTravel_Params
{
	class APrimalStructureBed*                         ForBed;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController*                    ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.OnAllowDaytimeTransitionSounds
struct ACustomGameState_OnAllowDaytimeTransitionSounds_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.OnAllowCreateSurvivor
struct ACustomGameState_OnAllowCreateSurvivor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.MakePlayerDeathNotification
struct ACustomGameState_MakePlayerDeathNotification_Params
{
	struct FString                                     PlayerDeathStringEnemy;                                   // (Parm, ZeroConstructor)
	struct FString                                     PlayerDeathStringAlly;                                    // (Parm, ZeroConstructor)
	struct FString                                     PlayerDeathStringYou;                                     // (Parm, ZeroConstructor)
	struct FString                                     DeathReason;                                              // (Parm, ZeroConstructor)
	TArray<struct FString>                             DeadPlayerNames;                                          // (Parm, ZeroConstructor)
	bool                                               bIsTribeDeath;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DeathTribeName;                                           // (Parm, ZeroConstructor)
	int                                                TargetingTeamID;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                KillingTeamID;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     LinkedPlayerID;                                           // (Parm, ZeroConstructor)
	TArray<struct FPrimalPlayerCharacterConfigStructReplicated> PlayersData;                                              // (Parm, ZeroConstructor)
	struct FPlayerDeathNotification                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ShooterGame.CustomGameState.MakeBattleTribeData
struct ACustomGameState_MakeBattleTribeData_Params
{
	struct FString                                     TribeName;                                                // (Parm, ZeroConstructor)
	int                                                TribeID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBattleTribeData                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ShooterGame.CustomGameState.MakeBattlePlayerData
struct ACustomGameState_MakeBattlePlayerData_Params
{
	struct FString                                     PlayerName;                                               // (Parm, ZeroConstructor)
	bool                                               bConnected;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAlive;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TribeID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerId;                                                 // (Parm, ZeroConstructor)
	int                                                NumOfWins;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumOfLosses;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBattlePlayerData                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ShooterGame.CustomGameState.KickPlayer
struct ACustomGameState_KickPlayer_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Reason;                                                   // (Parm, ZeroConstructor)
	bool                                               bCanRejoin;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.IsTribeID
struct ACustomGameState_IsTribeID_Params
{
	int                                                TeamId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.IsAuthorityRole
struct ACustomGameState_IsAuthorityRole_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.HideUIScene
struct ACustomGameState_HideUIScene_Params
{
	class UClass*                                      SceneClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SkipAnimation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.GetTribeTexture
struct ACustomGameState_GetTribeTexture_Params
{
	int                                                TribeID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.GetTimeSeconds
struct ACustomGameState_GetTimeSeconds_Params
{
	double                                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.GetPlayerDatasForTribe
struct ACustomGameState_GetPlayerDatasForTribe_Params
{
	int                                                TribeID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FBattlePlayerData>                   AllPlayerDatas;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FBattlePlayerData>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.CustomGameState.GetPawnName
struct ACustomGameState_GetPawnName_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.CustomGameState.GetPawnKillerName
struct ACustomGameState_GetPawnKillerName_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.CustomGameState.GetEvoEventIcon
struct ACustomGameState_GetEvoEventIcon_Params
{
	struct FString                                     EvoEvent;                                                 // (Parm, ZeroConstructor)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.GetDeathNotificationText
struct ACustomGameState_GetDeathNotificationText_Params
{
	class AShooterCharacter*                           theShooterChar;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       InstigatingPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Killer;                                                   // (Parm, OutParm, ZeroConstructor)
	struct FString                                     KillerAndTribe;                                           // (Parm, OutParm, ZeroConstructor)
	struct FString                                     theNotificationStringYou;                                 // (Parm, OutParm, ZeroConstructor)
	struct FString                                     theNotificationStringAlly;                                // (Parm, OutParm, ZeroConstructor)
	struct FString                                     theNotificationStringEnemy;                               // (Parm, OutParm, ZeroConstructor)
	class UTexture2D*                                  DeathIcon;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.GetCustomActors
struct ACustomGameState_GetCustomActors_Params
{
	struct FName                                       SearchCustomTag;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class ACustomActorList*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.GetAllShooterControllers
struct ACustomGameState_GetAllShooterControllers_Params
{
	TArray<class AShooterPlayerController*>            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.CustomGameState.GetAllShooterCharactersOfTeam
struct ACustomGameState_GetAllShooterCharactersOfTeam_Params
{
	int                                                KillerTeam;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AShooterCharacter*>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.CustomGameState.GetAllShooterCharacters
struct ACustomGameState_GetAllShooterCharacters_Params
{
	TArray<class AShooterCharacter*>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.CustomGameState.GetAllLiveShooterCharactersOfTeam
struct ACustomGameState_GetAllLiveShooterCharactersOfTeam_Params
{
	int                                                KillerTeam;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AShooterCharacter*>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.CustomGameState.GetAllDinoCharactersOfTeam
struct ACustomGameState_GetAllDinoCharactersOfTeam_Params
{
	int                                                KillerTeam;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class APrimalDinoCharacter*>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.CustomGameState.GetAfterActionReportItems
struct ACustomGameState_GetAfterActionReportItems_Params
{
	TArray<struct FActionReportItem>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.CustomGameState.DrawTileOnCanvas
struct ACustomGameState_DrawTileOnCanvas_Params
{
	class AShooterHUD*                                 HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    Tex;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              XL;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              YL;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              U;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              V;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              UL;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VL;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      DrawColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.CreateDeathNotification
struct ACustomGameState_CreateDeathNotification_Params
{
	class AShooterCharacter*                           theShooterChar;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController*                    prevController;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       InstigatingPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumberOfRespawns;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FPlayerDeathNotification                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ShooterGame.CustomGameState.CreateDamageEvent
struct ACustomGameState_CreateDamageEvent_Params
{
	struct FDamageEvent                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ShooterGame.CustomGameState.ClearWorldEvent
struct ACustomGameState_ClearWorldEvent_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
};

// Function ShooterGame.CustomGameState.CheckTimeSince
struct ACustomGameState_CheckTimeSince_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.BroadcastActorCustomEvent
struct ACustomGameState_BroadcastActorCustomEvent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       EventCustomName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventCustomString;                                        // (Parm, ZeroConstructor)
	class AActor*                                      InstigatorActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.BreakTribeData
struct ACustomGameState_BreakTribeData_Params
{
	struct FTribeData                                  InData;                                                   // (ConstParm, Parm)
	struct FString                                     TribeName;                                                // (Parm, OutParm, ZeroConstructor)
	int                                                OwnerPlayerDataID;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                TribeID;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             MembersPlayerName;                                        // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        MembersPlayerDataID;                                      // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        TribeAdmins;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               bSetGovernment;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FPrimalPlayerCharacterConfigStructReplicated> MembersConfigs;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function ShooterGame.CustomGameState.BreakPlayerDeathNotification
struct ACustomGameState_BreakPlayerDeathNotification_Params
{
	struct FPlayerDeathNotification                    Data;                                                     // (ConstParm, Parm)
	struct FString                                     PlayerDeathStringEnemy;                                   // (Parm, OutParm, ZeroConstructor)
	struct FString                                     PlayerDeathStringAlly;                                    // (Parm, OutParm, ZeroConstructor)
	struct FString                                     PlayerDeathStringYou;                                     // (Parm, OutParm, ZeroConstructor)
	struct FString                                     DeathReason;                                              // (Parm, OutParm, ZeroConstructor)
	TArray<struct FString>                             DeadPlayerNames;                                          // (Parm, OutParm, ZeroConstructor)
	bool                                               bIsTribeDeath;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DeathTribeName;                                           // (Parm, OutParm, ZeroConstructor)
	int                                                TargetingTeamID;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                KillingTeamID;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     LinkedPlayerID;                                           // (Parm, OutParm, ZeroConstructor)
	TArray<struct FPrimalPlayerCharacterConfigStructReplicated> PlayersData;                                              // (Parm, OutParm, ZeroConstructor)
	class UTexture2D*                                  DeathIcon;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.BreakBattleTribeData
struct ACustomGameState_BreakBattleTribeData_Params
{
	struct FBattleTribeData                            InData;                                                   // (ConstParm, Parm)
	struct FString                                     TribeName;                                                // (Parm, OutParm, ZeroConstructor)
	int                                                TribeID;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.BreakBattlePlayerData
struct ACustomGameState_BreakBattlePlayerData_Params
{
	struct FBattlePlayerData                           Data;                                                     // (ConstParm, Parm)
	struct FString                                     PlayerName;                                               // (Parm, OutParm, ZeroConstructor)
	bool                                               bConnected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bAlive;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                TribeID;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerId;                                                 // (Parm, OutParm, ZeroConstructor)
	int                                                NumOfWins;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NumOfLosses;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.CustomGameState.BreakActionReportItem
struct ACustomGameState_BreakActionReportItem_Params
{
	struct FActionReportItem                           Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     PlayerName;                                               // (Parm, OutParm, ZeroConstructor)
	struct FString                                     TribeName;                                                // (Parm, OutParm, ZeroConstructor)
	struct FString                                     TimeOfDeath;                                              // (Parm, OutParm, ZeroConstructor)
	struct FString                                     LevelOfDeath;                                             // (Parm, OutParm, ZeroConstructor)
	struct FString                                     DeathMessage;                                             // (Parm, OutParm, ZeroConstructor)
	class UTexture2D*                                  DeathIcon;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Rank;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function ShooterGame.CustomGameState.AddActionReportItem
struct ACustomGameState_AddActionReportItem_Params
{
	struct FActionReportItem                           Item;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.ShooterGameUserSettings.GetUserSettings
struct UShooterGameUserSettings_GetUserSettings_Params
{
	class UShooterGameUserSettings*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameViewportClient.GetViewportClient
struct UShooterGameViewportClient_GetViewportClient_Params
{
	class UWorld*                                      ForWorld;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UShooterGameViewportClient*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameViewportClient.GetUISceneFromClass
struct UShooterGameViewportClient_GetUISceneFromClass_Params
{
	class UClass*                                      PrimalUIClass;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalUI*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.StartUnequip
struct AShooterWeapon_StartUnequip_Params
{
};

// Function ShooterGame.ShooterWeapon.ServerToggleAccessory
struct AShooterWeapon_ServerToggleAccessory_Params
{
};

// Function ShooterGame.ShooterWeapon.ServerStopSecondaryAction
struct AShooterWeapon_ServerStopSecondaryAction_Params
{
};

// Function ShooterGame.ShooterWeapon.ServerStopFire
struct AShooterWeapon_ServerStopFire_Params
{
};

// Function ShooterGame.ShooterWeapon.ServerStopAltFire
struct AShooterWeapon_ServerStopAltFire_Params
{
};

// Function ShooterGame.ShooterWeapon.ServerStartSecondaryAction
struct AShooterWeapon_ServerStartSecondaryAction_Params
{
};

// Function ShooterGame.ShooterWeapon.ServerStartReload
struct AShooterWeapon_ServerStartReload_Params
{
};

// Function ShooterGame.ShooterWeapon.ServerStartFire
struct AShooterWeapon_ServerStartFire_Params
{
};

// Function ShooterGame.ShooterWeapon.ServerStartAltFire
struct AShooterWeapon_ServerStartAltFire_Params
{
};

// Function ShooterGame.ShooterWeapon.ServerSetColorizeRegion
struct AShooterWeapon_ServerSetColorizeRegion_Params
{
	int                                                theRegion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValToUse;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.PlayWeaponBreakAnimation
struct AShooterWeapon_PlayWeaponBreakAnimation_Params
{
};

// Function ShooterGame.ShooterWeapon.PlayWeaponBlockedAnimation
struct AShooterWeapon_PlayWeaponBlockedAnimation_Params
{
};

// Function ShooterGame.ShooterWeapon.PlayUseHarvestAnimation
struct AShooterWeapon_PlayUseHarvestAnimation_Params
{
};

// Function ShooterGame.ShooterWeapon.OnRep_NetLoopedWeaponFire
struct AShooterWeapon_OnRep_NetLoopedWeaponFire_Params
{
};

// Function ShooterGame.ShooterWeapon.OnRep_MyPawn
struct AShooterWeapon_OnRep_MyPawn_Params
{
};

// Function ShooterGame.ShooterWeapon.OnRep_CurrentAmmoInClip
struct AShooterWeapon_OnRep_CurrentAmmoInClip_Params
{
};

// Function ShooterGame.ShooterWeapon.OnRep_AccessoryToggle
struct AShooterWeapon_OnRep_AccessoryToggle_Params
{
};

// Function ShooterGame.ShooterWeapon.IsFiring
struct AShooterWeapon_IsFiring_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.GetPawnOwner
struct AShooterWeapon_GetPawnOwner_Params
{
	class AShooterCharacter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.DoHandleFiring
struct AShooterWeapon_DoHandleFiring_Params
{
};

// Function ShooterGame.ShooterWeapon.ClientStopSimulatingWeaponFire
struct AShooterWeapon_ClientStopSimulatingWeaponFire_Params
{
};

// Function ShooterGame.ShooterWeapon.ClientStartReload
struct AShooterWeapon_ClientStartReload_Params
{
};

// Function ShooterGame.ShooterWeapon.ClientStartMuzzleFX
struct AShooterWeapon_ClientStartMuzzleFX_Params
{
};

// Function ShooterGame.ShooterWeapon.ClientSimulateWeaponFire
struct AShooterWeapon_ClientSimulateWeaponFire_Params
{
};

// Function ShooterGame.ShooterWeapon.ClientSetClipAmmo
struct AShooterWeapon_ClientSetClipAmmo_Params
{
	int                                                newClipAmmo;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyUpdateItem;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.ClientPlayShieldHitAnim
struct AShooterWeapon_ClientPlayShieldHitAnim_Params
{
};

// Function ShooterGame.ShooterWeapon.ClearClientReload
struct AShooterWeapon_ClearClientReload_Params
{
};

// Function ShooterGame.ShooterWeapon.CheckItemAssocation
struct AShooterWeapon_CheckItemAssocation_Params
{
};

// Function ShooterGame.ShooterWeapon.BPWeaponCanFire
struct AShooterWeapon_BPWeaponCanFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.BPAnimNotifyCustomState_End
struct AShooterWeapon_BPAnimNotifyCustomState_End_Params
{
	struct FName                                       CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      MeshComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimSequenceBase*                           Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyState*                            AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.BPAnimNotifyCustomState_Begin
struct AShooterWeapon_BPAnimNotifyCustomState_Begin_Params
{
	struct FName                                       CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      MeshComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimSequenceBase*                           Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TotalDuration;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyState*                            AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.BPAnimNotifyCustomEvent
struct AShooterWeapon_BPAnimNotifyCustomEvent_Params
{
	struct FName                                       CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      MeshComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimSequenceBase*                           Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify*                                 AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon_Projectile.ServerFireProjectileEx
struct AShooterWeapon_Projectile_ServerFireProjectileEx_Params
{
	struct FVector                                     Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   ShootDir;                                                 // (Parm)
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RandomSeed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon_Projectile.ServerFireProjectile
struct AShooterWeapon_Projectile_ServerFireProjectile_Params
{
	struct FVector                                     Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   ShootDir;                                                 // (Parm)
};

// Function ShooterGame.ShooterWeapon_Projectile.ClientsFireProjectileEx
struct AShooterWeapon_Projectile_ClientsFireProjectileEx_Params
{
	struct FVector                                     Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   ShootDir;                                                 // (Parm)
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RandomSeed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon_Projectile.ClientsFireProjectile
struct AShooterWeapon_Projectile_ClientsFireProjectile_Params
{
	struct FVector                                     Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   ShootDir;                                                 // (Parm)
};

// Function ShooterGame.ShooterWeapon_Projectile.CheckRefireTimer
struct AShooterWeapon_Projectile_CheckRefireTimer_Params
{
};

// Function ShooterGame.ShooterProjectile.ProjectileBounced
struct AShooterProjectile_ProjectileBounced_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ImpactVelocity;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ShooterGame.ShooterProjectile.OnTouch
struct AShooterProjectile_OnTouch_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterProjectile.OnProjectileStop
struct AShooterProjectile_OnProjectileStop_Params
{
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.ShooterProjectile.OnImpact
struct AShooterProjectile_OnImpact_Params
{
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bFromReplication;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterProjectile.OnExplode
struct AShooterProjectile_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.ShooterProjectile.ClientOnImpact
struct AShooterProjectile_ClientOnImpact_Params
{
	struct FVector                                     ProjectileLocation;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ProjectileRotation;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (Parm)
};

// Function ShooterGame.ShooterProjectile.ClientNetImpactFX
struct AShooterProjectile_ClientNetImpactFX_Params
{
	struct FHitResult                                  HitResult;                                                // (Parm)
};

// Function ShooterGame.ShooterProjectile.ClientNetExplode
struct AShooterProjectile_ClientNetExplode_Params
{
	struct FHitResult                                  HitResult;                                                // (Parm)
};

// Function ShooterGame.ShooterProjectile.BPInitVelocity
struct AShooterProjectile_BPInitVelocity_Params
{
	struct FVector                                     ShootDirection;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalProjectileArrow.PickUpCheck
struct APrimalProjectileArrow_PickUpCheck_Params
{
};

// Function ShooterGame.ShooterWeapon_Instant.SimulateInstantHit
struct AShooterWeapon_Instant_SimulateInstantHit_Params
{
	struct FVector                                     Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   ShootDir;                                                 // (Parm)
	bool                                               bForceOnLocal;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ShotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon_Instant.ServerNotifyShot
struct AShooterWeapon_Instant_ServerNotifyShot_Params
{
	TArray<struct FHitResult>                          Impacts;                                                  // (ConstParm, Parm, ZeroConstructor)
	TArray<struct FVector_NetQuantizeNormal>           ShootDirs;                                                // (ConstParm, Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterWeapon_Instant.CheckRefireTimer
struct AShooterWeapon_Instant_CheckRefireTimer_Params
{
};

// Function ShooterGame.PrimalWeaponGPS.ServerShowNone
struct APrimalWeaponGPS_ServerShowNone_Params
{
};

// Function ShooterGame.PrimalWeaponGPS.ServerShowMapOnly
struct APrimalWeaponGPS_ServerShowMapOnly_Params
{
};

// Function ShooterGame.PrimalWeaponGPS.ServerShowGPSOnly
struct APrimalWeaponGPS_ServerShowGPSOnly_Params
{
};

// Function ShooterGame.PrimalWeaponGPS.ServerShowBoth
struct APrimalWeaponGPS_ServerShowBoth_Params
{
};

// Function ShooterGame.PrimalWeaponGPS.ServerSetUseCompassInsteadOfGPS
struct APrimalWeaponGPS_ServerSetUseCompassInsteadOfGPS_Params
{
	bool                                               bUseCompass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalWeaponGPS.RefreshUseCompass
struct APrimalWeaponGPS_RefreshUseCompass_Params
{
};

// Function ShooterGame.ShooterWeapon_Placer.ServerDetonateExplosives
struct AShooterWeapon_Placer_ServerDetonateExplosives_Params
{
};

// Function ShooterGame.ShooterWeapon_PlacerTransGPS.ServerSetFrequency
struct AShooterWeapon_PlacerTransGPS_ServerSetFrequency_Params
{
	float                                              Freq;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon_PlacerTransGPS.ServerAttachToSelf
struct AShooterWeapon_PlacerTransGPS_ServerAttachToSelf_Params
{
};

// Function ShooterGame.ShooterWeapon_PlacerTransGPS.ClientShowTransponders
struct AShooterWeapon_PlacerTransGPS_ClientShowTransponders_Params
{
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalWeaponBow.UpdateTPVBowAnimation
struct APrimalWeaponBow_UpdateTPVBowAnimation_Params
{
};

// Function ShooterGame.PrimalWeaponBow.ServerSetPullString
struct APrimalWeaponBow_ServerSetPullString_Params
{
	bool                                               bIsPulling;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.PrimalWeaponGrenade.BPGetProjectileSpeed
struct APrimalWeaponGrenade_BPGetProjectileSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.StructurePaintingComponent.ClientPaint
struct UStructurePaintingComponent_ClientPaint_Params
{
	class AShooterPlayerController*                    Painter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FPaintItem>                          Paints;                                                   // (ConstParm, Parm, ZeroConstructor)
};

// Function ShooterGame.StructurePaintingComponent.ClientClearPaintingTexture
struct UStructurePaintingComponent_ClientClearPaintingTexture_Params
{
	class AShooterPlayerController*                    Painter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.SupplyCrateSpawningVolume.SpawnCratesFromAllVolumes
struct ASupplyCrateSpawningVolume_SpawnCratesFromAllVolumes_Params
{
	class UWorld*                                      TheWorld;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.SupplyCrateSpawningVolume.SpawnCratesFromAllPoints
struct ASupplyCrateSpawningVolume_SpawnCratesFromAllPoints_Params
{
};

// Function ShooterGame.SupplyCrateSpawningVolume.SetSpawnEnabled
struct ASupplyCrateSpawningVolume_SetSpawnEnabled_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.SupplyCrateSpawningVolume.CheckForSupplyCrateStart
struct ASupplyCrateSpawningVolume_CheckForSupplyCrateStart_Params
{
};

// Function ShooterGame.SupplyCrateSpawningVolume.CheckCrateSpawn
struct ASupplyCrateSpawningVolume_CheckCrateSpawn_Params
{
};

// Function ShooterGame.VictoryCore.SupportsShaderModel5
struct UVictoryCore_SupportsShaderModel5_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.VictoryCore.SteamOverlayOpenURL
struct UVictoryCore_SteamOverlayOpenURL_Params
{
	struct FString                                     ToURL;                                                    // (Parm, ZeroConstructor)
};

// Function ShooterGame.VictoryCore.StaticGetTimeSince
struct UVictoryCore_StaticGetTimeSince_Params
{
	class UWorld*                                      TheWorld;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.VictoryCore.StaticCheckForCommand
struct UVictoryCore_StaticCheckForCommand_Params
{
	struct FString                                     CommandName;                                              // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.VictoryCore.SpawnActorDeferred
struct UVictoryCore_SpawnActorDeferred_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWorld*                                      inWorld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNoCollisionFail;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.VictoryCore.SortActorsByTag
struct UVictoryCore_SortActorsByTag_Params
{
	int                                                tagIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              actors;                                                   // (Parm, ZeroConstructor)
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.VictoryCore.SetSessionPrefix
struct UVictoryCore_SetSessionPrefix_Params
{
	struct FString                                     InPrefix;                                                 // (Parm, ZeroConstructor)
};

// Function ShooterGame.VictoryCore.ServerOctreeOverlapActorsBitMask
struct UVictoryCore_ServerOctreeOverlapActorsBitMask_Params
{
	class UWorld*                                      TheWorld;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AtLoc;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OctreeTypeBitMask;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.VictoryCore.ServerOctreeOverlapActors
struct UVictoryCore_ServerOctreeOverlapActors_Params
{
	class UWorld*                                      TheWorld;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AtLoc;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EServerOctreeGroup>                    OctreeType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.VictoryCore.ReupdateCaptures
struct UVictoryCore_ReupdateCaptures_Params
{
	class UWorld*                                      ForWorld;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.VictoryCore.RemoveInvalidObjectsInContainer
struct UVictoryCore_RemoveInvalidObjectsInContainer_Params
{
	TArray<TWeakObjectPtr<class APrimalDinoCharacter>> fContainer;                                               // (Parm, ZeroConstructor)
	TArray<TWeakObjectPtr<class APrimalDinoCharacter>> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.VictoryCore.PureCheckForCommand
struct UVictoryCore_PureCheckForCommand_Params
{
	struct FString                                     CommandName;                                              // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.VictoryCore.IsLoadingSaveGame
struct UVictoryCore_IsLoadingSaveGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.VictoryCore.IsGameWorld
struct UVictoryCore_IsGameWorld_Params
{
	class UWorld*                                      TheWorld;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.VictoryCore.GetWeightedRandomIndexFromArray
struct UVictoryCore_GetWeightedRandomIndexFromArray_Params
{
	TArray<float>                                      pArray;                                                   // (Parm, ZeroConstructor)
	float                                              ForceRand;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.VictoryCore.GetTimeSince
struct UVictoryCore_GetTimeSince_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.VictoryCore.GetTimeSeconds
struct UVictoryCore_GetTimeSeconds_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.VictoryCore.GetTeamColor
struct UVictoryCore_GetTeamColor_Params
{
	int                                                TargetingTeam;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.VictoryCore.GetSecondsIntoDay
struct UVictoryCore_GetSecondsIntoDay_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.VictoryCore.GetGroundLocation
struct UVictoryCore_GetGroundLocation_Params
{
	class UWorld*                                      ForWorld;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     theGroundLoc;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartLoc;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     OffsetUp;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     OffsetDown;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.VictoryCore.GetDefaultObject
struct UVictoryCore_GetDefaultObject_Params
{
	class UObject*                                     FromObjectInstance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.VictoryCore.GetClosestActorArray
struct UVictoryCore_GetClosestActorArray_Params
{
	struct FVector                                     ToPoint;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorArray;                                               // (Parm, OutParm, ZeroConstructor)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.VictoryCore.GetClassDefaultObject
struct UVictoryCore_GetClassDefaultObject_Params
{
	class UClass*                                      FromClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.VictoryCore.FormatAsTime
struct UVictoryCore_FormatAsTime_Params
{
	int                                                InTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseLeadingZero;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceLeadingZeroHour;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShowSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.VictoryCore.FloatToDouble
struct UVictoryCore_FloatToDouble_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.VictoryCore.FinishSpawning
struct UVictoryCore_FinishSpawning_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.VictoryCore.FindWorldActors
struct UVictoryCore_FindWorldActors_Params
{
	class UWorld*                                      fWorld;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              fContainer;                                               // (Parm, OutParm, ZeroConstructor)
	class UClass*                                      fType;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       fTag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.VictoryCore.FindActorAIState
struct UVictoryCore_FindActorAIState_Params
{
	class UClass*                                      fStateType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FDinoAttackInfo>                     fContainerOfStates;                                       // (Parm, ZeroConstructor)
	class UPrimalAIState*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.VictoryCore.CallGlobalLevelEvent
struct UVictoryCore_CallGlobalLevelEvent_Params
{
	class UWorld*                                      ForWorld;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.VictoryCore.BPProjectWorldToScreenPosition
struct UVictoryCore_BPProjectWorldToScreenPosition_Params
{
	struct FVector                                     WorldLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class APlayerController*                           thePC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.VictoryCore.BPGetWeightedRandomIndex
struct UVictoryCore_BPGetWeightedRandomIndex_Params
{
	TArray<float>                                      pArray;                                                   // (Parm, OutParm, ZeroConstructor)
	float                                              ForceRand;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.VictoryCore.BPFLerpFastPure
struct UVictoryCore_BPFLerpFastPure_Params
{
	float                                              InMin;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InMax;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPercent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.VictoryCore.BPFLerpFast
struct UVictoryCore_BPFLerpFast_Params
{
	float                                              InMin;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InMax;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPercent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.VictoryCore.BPFLerp
struct UVictoryCore_BPFLerp_Params
{
	float                                              InMin;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InMax;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPercent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClampToMin;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClampToMax;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.VictoryCore.BPFastTrace
struct UVictoryCore_BPFastTrace_Params
{
	class UWorld*                                      TheWorld;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TraceEnd;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TraceStart;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorToIgnore;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
