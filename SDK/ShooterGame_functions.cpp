
#include "../SDK.h"

// Name: ARKSotF, Version: 178.8.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function ShooterGame.BasePlayerController.SimulateInputKey
// ()
// Parameters:
// struct FKey                    Key                            (Parm)
// bool                           bPressed                       (Parm, ZeroConstructor, IsPlainOldData)

void ABasePlayerController::SimulateInputKey(const struct FKey& Key, bool bPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.BasePlayerController.SimulateInputKey");

	ABasePlayerController_SimulateInputKey_Params params;
	params.Key = Key;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.BasePlayerController.ServerCheat
// ()
// Parameters:
// struct FString                 Msg                            (Parm, ZeroConstructor)

void ABasePlayerController::ServerCheat(const struct FString& Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.BasePlayerController.ServerCheat");

	ABasePlayerController_ServerCheat_Params params;
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.BasePlayerController.Say
// ()
// Parameters:
// struct FString                 Msg                            (Parm, ZeroConstructor)

void ABasePlayerController::Say(const struct FString& Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.BasePlayerController.Say");

	ABasePlayerController_Say_Params params;
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.BasePlayerController.ClientStartOnlineGame
// ()

void ABasePlayerController::ClientStartOnlineGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.BasePlayerController.ClientStartOnlineGame");

	ABasePlayerController_ClientStartOnlineGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.BasePlayerController.ClientSetSpectatorCamera
// ()
// Parameters:
// struct FVector                 CameraLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                CameraRotation                 (Parm, ZeroConstructor, IsPlainOldData)

void ABasePlayerController::ClientSetSpectatorCamera(const struct FVector& CameraLocation, const struct FRotator& CameraRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.BasePlayerController.ClientSetSpectatorCamera");

	ABasePlayerController_ClientSetSpectatorCamera_Params params;
	params.CameraLocation = CameraLocation;
	params.CameraRotation = CameraRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.BasePlayerController.ClientSendRoundEndEvent
// ()
// Parameters:
// bool                           bIsWinner                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ExpendedTimeInSeconds          (Parm, ZeroConstructor, IsPlainOldData)

void ABasePlayerController::ClientSendRoundEndEvent(bool bIsWinner, int ExpendedTimeInSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.BasePlayerController.ClientSendRoundEndEvent");

	ABasePlayerController_ClientSendRoundEndEvent_Params params;
	params.bIsWinner = bIsWinner;
	params.ExpendedTimeInSeconds = ExpendedTimeInSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.BasePlayerController.ClientGameStarted
// ()

void ABasePlayerController::ClientGameStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.BasePlayerController.ClientGameStarted");

	ABasePlayerController_ClientGameStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.BasePlayerController.ClientEndOnlineGame
// ()

void ABasePlayerController::ClientEndOnlineGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.BasePlayerController.ClientEndOnlineGame");

	ABasePlayerController_ClientEndOnlineGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalGlobals.OnConfirmationDialogClosed
// ()
// Parameters:
// bool                           bAccept                        (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalGlobals::OnConfirmationDialogClosed(bool bAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalGlobals.OnConfirmationDialogClosed");

	UPrimalGlobals_OnConfirmationDialogClosed_Params params;
	params.bAccept = bAccept;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalGlobals.GetDayCycleManager
// ()
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// class ADayCycleManager*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADayCycleManager* UPrimalGlobals::GetDayCycleManager(class UWorld* World)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalGlobals.GetDayCycleManager");

	UPrimalGlobals_GetDayCycleManager_Params params;
	params.World = World;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalGlobals.FinishedLoadingGameMedia
// ()

void UPrimalGlobals::FinishedLoadingGameMedia()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalGlobals.FinishedLoadingGameMedia");

	UPrimalGlobals_FinishedLoadingGameMedia_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalItem.StaticGetColorForItemColorID
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UPrimalItem::StaticGetColorForItemColorID(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalItem.StaticGetColorForItemColorID");

	UPrimalItem_StaticGetColorForItemColorID_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalItem.IsCooldownReadyForUse
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalItem::IsCooldownReadyForUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalItem.IsCooldownReadyForUse");

	UPrimalItem_IsCooldownReadyForUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalItem.IsActiveEquipped
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalItem::IsActiveEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalItem.IsActiveEquipped");

	UPrimalItem_IsActiveEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalItem.IncrementItemQuantity
// ()
// Parameters:
// int                            amount                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRepicateToClient              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDontUpdateWeight              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsFromUseConsumption          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsArkTributeItem              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsFromCraftingConsumption     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPrimalItem::IncrementItemQuantity(int amount, bool bRepicateToClient, bool bDontUpdateWeight, bool bIsFromUseConsumption, bool bIsArkTributeItem, bool bIsFromCraftingConsumption)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalItem.IncrementItemQuantity");

	UPrimalItem_IncrementItemQuantity_Params params;
	params.amount = amount;
	params.bRepicateToClient = bRepicateToClient;
	params.bDontUpdateWeight = bDontUpdateWeight;
	params.bIsFromUseConsumption = bIsFromUseConsumption;
	params.bIsArkTributeItem = bIsArkTributeItem;
	params.bIsFromCraftingConsumption = bIsFromCraftingConsumption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalItem.EquippedBlueprintTick
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem::EquippedBlueprintTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalItem.EquippedBlueprintTick");

	UPrimalItem_EquippedBlueprintTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalItem.BPUsedOntoItem
// ()
// Parameters:
// class UPrimalItem*             DestinationItem                (Parm, ZeroConstructor, IsPlainOldData)
// int                            AdditionalData                 (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem::BPUsedOntoItem(class UPrimalItem* DestinationItem, int AdditionalData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalItem.BPUsedOntoItem");

	UPrimalItem_BPUsedOntoItem_Params params;
	params.DestinationItem = DestinationItem;
	params.AdditionalData = AdditionalData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalItem.BPSupportUseOntoItem
// ()
// Parameters:
// class UPrimalItem*             DestinationItem                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalItem::BPSupportUseOntoItem(class UPrimalItem* DestinationItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalItem.BPSupportUseOntoItem");

	UPrimalItem_BPSupportUseOntoItem_Params params;
	params.DestinationItem = DestinationItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalItem.BPGetFuelParticleSystemOverride
// ()
// Parameters:
// class APrimalStructure*        ForStructure                   (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UParticleSystem* UPrimalItem::BPGetFuelParticleSystemOverride(class APrimalStructure* ForStructure)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalItem.BPGetFuelParticleSystemOverride");

	UPrimalItem_BPGetFuelParticleSystemOverride_Params params;
	params.ForStructure = ForStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalItem.BPGetFuelAudioOverride
// ()
// Parameters:
// class APrimalStructure*        ForStructure                   (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USoundBase* UPrimalItem::BPGetFuelAudioOverride(class APrimalStructure* ForStructure)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalItem.BPGetFuelAudioOverride");

	UPrimalItem_BPGetFuelAudioOverride_Params params;
	params.ForStructure = ForStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalItem.BPCanUse
// ()
// Parameters:
// bool                           bIgnoreCooldown                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalItem::BPCanUse(bool bIgnoreCooldown)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalItem.BPCanUse");

	UPrimalItem_BPCanUse_Params params;
	params.bIgnoreCooldown = bIgnoreCooldown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalItem.BPCanAddToInventory
// ()
// Parameters:
// class UPrimalInventoryComponent* toInventory                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalItem::BPCanAddToInventory(class UPrimalInventoryComponent* toInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalItem.BPCanAddToInventory");

	UPrimalItem_BPCanAddToInventory_Params params;
	params.toInventory = toInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalItem.BPAllowCrafting
// ()
// Parameters:
// class AShooterPlayerController* ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPrimalItem::BPAllowCrafting(class AShooterPlayerController* ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalItem.BPAllowCrafting");

	UPrimalItem_BPAllowCrafting_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalItem.BlueprintUsed
// ()

void UPrimalItem::BlueprintUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalItem.BlueprintUsed");

	UPrimalItem_BlueprintUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalItem.BlueprintUnequipped
// ()

void UPrimalItem::BlueprintUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalItem.BlueprintUnequipped");

	UPrimalItem_BlueprintUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalItem.BlueprintEquipped
// ()
// Parameters:
// bool                           bIsFromSaveGame                (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem::BlueprintEquipped(bool bIsFromSaveGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalItem.BlueprintEquipped");

	UPrimalItem_BlueprintEquipped_Params params;
	params.bIsFromSaveGame = bIsFromSaveGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalItem.AddNewItem
// ()
// Parameters:
// class UClass*                  ItemArchetype                  (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalInventoryComponent* GiveToInventory                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bEquipItem                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDontStack                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ItemQuality                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceNoBlueprint              (Parm, ZeroConstructor, IsPlainOldData)
// int                            quantityOverride               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceBlueprint                (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPrimalItem* UPrimalItem::AddNewItem(class UClass* ItemArchetype, class UPrimalInventoryComponent* GiveToInventory, bool bEquipItem, bool bDontStack, float ItemQuality, bool bForceNoBlueprint, int quantityOverride, bool bForceBlueprint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalItem.AddNewItem");

	UPrimalItem_AddNewItem_Params params;
	params.ItemArchetype = ItemArchetype;
	params.GiveToInventory = GiveToInventory;
	params.bEquipItem = bEquipItem;
	params.bDontStack = bDontStack;
	params.ItemQuality = ItemQuality;
	params.bForceNoBlueprint = bForceNoBlueprint;
	params.quantityOverride = quantityOverride;
	params.bForceBlueprint = bForceBlueprint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalItem.AddItemDurability
// ()
// Parameters:
// float                          durabilityToAdd                (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem::AddItemDurability(float durabilityToAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalItem.AddItemDurability");

	UPrimalItem_AddItemDurability_Params params;
	params.durabilityToAdd = durabilityToAdd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterHUD.GetPlayerOwner
// ()
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerController* AShooterHUD::GetPlayerOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD.GetPlayerOwner");

	AShooterHUD_GetPlayerOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalInventoryComponent.UpdateTribeGroupInventoryRank
// ()
// Parameters:
// unsigned char                  NewRank                        (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryComponent::UpdateTribeGroupInventoryRank(unsigned char NewRank)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.UpdateTribeGroupInventoryRank");

	UPrimalInventoryComponent_UpdateTribeGroupInventoryRank_Params params;
	params.NewRank = NewRank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalInventoryComponent.StaticDropNewItem
// ()
// Parameters:
// class AActor*                  forActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  AnItemClass                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ItemQuality                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceNoBlueprint              (Parm, ZeroConstructor, IsPlainOldData)
// int                            quantityOverride               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceBlueprint                (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  TheDroppedTemplateOverride     (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                DroppedRotationOffset          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bOverrideSpawnTransform        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LocationOverride               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                RotationOverride               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bPreventDropImpulse            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bThrow                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSecondaryAction               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetItemDropLocation           (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryComponent::StaticDropNewItem(class AActor* forActor, class UClass* AnItemClass, float ItemQuality, bool bForceNoBlueprint, int quantityOverride, bool bForceBlueprint, class UClass* TheDroppedTemplateOverride, const struct FRotator& DroppedRotationOffset, bool bOverrideSpawnTransform, const struct FVector& LocationOverride, const struct FRotator& RotationOverride, bool bPreventDropImpulse, bool bThrow, bool bSecondaryAction, bool bSetItemDropLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.StaticDropNewItem");

	UPrimalInventoryComponent_StaticDropNewItem_Params params;
	params.forActor = forActor;
	params.AnItemClass = AnItemClass;
	params.ItemQuality = ItemQuality;
	params.bForceNoBlueprint = bForceNoBlueprint;
	params.quantityOverride = quantityOverride;
	params.bForceBlueprint = bForceBlueprint;
	params.TheDroppedTemplateOverride = TheDroppedTemplateOverride;
	params.DroppedRotationOffset = DroppedRotationOffset;
	params.bOverrideSpawnTransform = bOverrideSpawnTransform;
	params.LocationOverride = LocationOverride;
	params.RotationOverride = RotationOverride;
	params.bPreventDropImpulse = bPreventDropImpulse;
	params.bThrow = bThrow;
	params.bSecondaryAction = bSecondaryAction;
	params.bSetItemDropLocation = bSetItemDropLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalInventoryComponent.SetNextItemSpoilingID
// ()
// Parameters:
// struct FItemNetID              NextItemID                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryComponent::SetNextItemSpoilingID(const struct FItemNetID& NextItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.SetNextItemSpoilingID");

	UPrimalInventoryComponent_SetNextItemSpoilingID_Params params;
	params.NextItemID = NextItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalInventoryComponent.SetNextItemConsumptionID
// ()
// Parameters:
// struct FItemNetID              NextItemID                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryComponent::SetNextItemConsumptionID(const struct FItemNetID& NextItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.SetNextItemConsumptionID");

	UPrimalInventoryComponent_SetNextItemConsumptionID_Params params;
	params.NextItemID = NextItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalInventoryComponent.SetCraftingEnabled
// ()
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryComponent::SetCraftingEnabled(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.SetCraftingEnabled");

	UPrimalInventoryComponent_SetCraftingEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalInventoryComponent.ServerSplitItemStack
// ()
// Parameters:
// struct FItemNetID              ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            AmountToSplit                  (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryComponent::ServerSplitItemStack(const struct FItemNetID& ItemId, int AmountToSplit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.ServerSplitItemStack");

	UPrimalInventoryComponent_ServerSplitItemStack_Params params;
	params.ItemId = ItemId;
	params.AmountToSplit = AmountToSplit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalInventoryComponent.ServerRemoveItemFromSlot
// ()
// Parameters:
// struct FItemNetID              ItemId                         (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryComponent::ServerRemoveItemFromSlot(const struct FItemNetID& ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.ServerRemoveItemFromSlot");

	UPrimalInventoryComponent_ServerRemoveItemFromSlot_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalInventoryComponent.ServerMergeItemStack
// ()
// Parameters:
// struct FItemNetID              ItemId                         (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryComponent::ServerMergeItemStack(const struct FItemNetID& ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.ServerMergeItemStack");

	UPrimalInventoryComponent_ServerMergeItemStack_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalInventoryComponent.ServerMakeRecipeItem
// ()
// Parameters:
// class APrimalStructureItemContainer* Container                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemNetID              NoteToConsume                  (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  RecipeItemTemplate             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 CustomName                     (Parm, ZeroConstructor)
// struct FString                 CustomDescription              (Parm, ZeroConstructor)
// TArray<struct FColor>          CustomColors                   (ConstParm, Parm, ZeroConstructor)
// TArray<struct FCraftingResourceRequirement> CustomRequirements             (ConstParm, Parm, ZeroConstructor)

void UPrimalInventoryComponent::ServerMakeRecipeItem(class APrimalStructureItemContainer* Container, const struct FItemNetID& NoteToConsume, class UClass* RecipeItemTemplate, const struct FString& CustomName, const struct FString& CustomDescription, TArray<struct FColor> CustomColors, TArray<struct FCraftingResourceRequirement> CustomRequirements)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.ServerMakeRecipeItem");

	UPrimalInventoryComponent_ServerMakeRecipeItem_Params params;
	params.Container = Container;
	params.NoteToConsume = NoteToConsume;
	params.RecipeItemTemplate = RecipeItemTemplate;
	params.CustomName = CustomName;
	params.CustomDescription = CustomDescription;
	params.CustomColors = CustomColors;
	params.CustomRequirements = CustomRequirements;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalInventoryComponent.ServerForceMergeItemStack
// ()
// Parameters:
// struct FItemNetID              Item1ID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemNetID              Item2ID                        (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryComponent::ServerForceMergeItemStack(const struct FItemNetID& Item1ID, const struct FItemNetID& Item2ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.ServerForceMergeItemStack");

	UPrimalInventoryComponent_ServerForceMergeItemStack_Params params;
	params.Item1ID = Item1ID;
	params.Item2ID = Item2ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalInventoryComponent.ServerCraftItem
// ()
// Parameters:
// struct FItemNetID              ItemId                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController* ByPC                           (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryComponent::ServerCraftItem(class AShooterPlayerController* ByPC, struct FItemNetID* ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.ServerCraftItem");

	UPrimalInventoryComponent_ServerCraftItem_Params params;
	params.ByPC = ByPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemId != nullptr)
		*ItemId = params.ItemId;
}


// Function ShooterGame.PrimalInventoryComponent.ServerAddItemToSlot
// ()
// Parameters:
// struct FItemNetID              ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryComponent::ServerAddItemToSlot(const struct FItemNetID& ItemId, int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.ServerAddItemToSlot");

	UPrimalInventoryComponent_ServerAddItemToSlot_Params params;
	params.ItemId = ItemId;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalInventoryComponent.RemoveItem
// ()
// Parameters:
// struct FItemNetID              ItemId                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bDoDrop                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSecondryAction                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceRemoval                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalInventoryComponent::RemoveItem(bool bDoDrop, bool bSecondryAction, bool bForceRemoval, struct FItemNetID* ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.RemoveItem");

	UPrimalInventoryComponent_RemoveItem_Params params;
	params.bDoDrop = bDoDrop;
	params.bSecondryAction = bSecondryAction;
	params.bForceRemoval = bForceRemoval;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemId != nullptr)
		*ItemId = params.ItemId;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalInventoryComponent.RemoteInventoryAllowViewing
// ()
// Parameters:
// class AShooterPlayerController* PC                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalInventoryComponent::RemoteInventoryAllowViewing(class AShooterPlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.RemoteInventoryAllowViewing");

	UPrimalInventoryComponent_RemoteInventoryAllowViewing_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalInventoryComponent.RemoteInventoryAllowRepairingItems
// ()
// Parameters:
// class AShooterPlayerController* PC                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIgnoreEnabled                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalInventoryComponent::RemoteInventoryAllowRepairingItems(class AShooterPlayerController* PC, bool bIgnoreEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.RemoteInventoryAllowRepairingItems");

	UPrimalInventoryComponent_RemoteInventoryAllowRepairingItems_Params params;
	params.PC = PC;
	params.bIgnoreEnabled = bIgnoreEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalInventoryComponent.RemoteInventoryAllowCraftingItems
// ()
// Parameters:
// class AShooterPlayerController* PC                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIgnoreEnabled                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalInventoryComponent::RemoteInventoryAllowCraftingItems(class AShooterPlayerController* PC, bool bIgnoreEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.RemoteInventoryAllowCraftingItems");

	UPrimalInventoryComponent_RemoteInventoryAllowCraftingItems_Params params;
	params.PC = PC;
	params.bIgnoreEnabled = bIgnoreEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalInventoryComponent.IsRepairingAllowed
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalInventoryComponent::IsRepairingAllowed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.IsRepairingAllowed");

	UPrimalInventoryComponent_IsRepairingAllowed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalInventoryComponent.IsLocal
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalInventoryComponent::IsLocal()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.IsLocal");

	UPrimalInventoryComponent_IsLocal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalInventoryComponent.IsCraftingAllowed
// ()
// Parameters:
// class UPrimalItem*             anItem                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalInventoryComponent::IsCraftingAllowed(class UPrimalItem* anItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.IsCraftingAllowed");

	UPrimalInventoryComponent_IsCraftingAllowed_Params params;
	params.anItem = anItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalInventoryComponent.GetTotalEquippedItemStat
// ()
// Parameters:
// TEnumAsByte<EPrimalItemStat>   statType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPrimalInventoryComponent::GetTotalEquippedItemStat(TEnumAsByte<EPrimalItemStat> statType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.GetTotalEquippedItemStat");

	UPrimalInventoryComponent_GetTotalEquippedItemStat_Params params;
	params.statType = statType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalInventoryComponent.GetMaxInventoryItems
// ()
// Parameters:
// bool                           bIgnoreHiddenDefaultInventory  (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPrimalInventoryComponent::GetMaxInventoryItems(bool bIgnoreHiddenDefaultInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.GetMaxInventoryItems");

	UPrimalInventoryComponent_GetMaxInventoryItems_Params params;
	params.bIgnoreHiddenDefaultInventory = bIgnoreHiddenDefaultInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalInventoryComponent.GetItemTemplateQuantity
// ()
// Parameters:
// class UClass*                  ItemTemplate                   (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem*             IgnoreItem                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIgnoreBlueprints              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCheckValidForCrafting         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRequireExactClassMatch        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPrimalInventoryComponent::GetItemTemplateQuantity(class UClass* ItemTemplate, class UPrimalItem* IgnoreItem, bool bIgnoreBlueprints, bool bCheckValidForCrafting, bool bRequireExactClassMatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.GetItemTemplateQuantity");

	UPrimalInventoryComponent_GetItemTemplateQuantity_Params params;
	params.ItemTemplate = ItemTemplate;
	params.IgnoreItem = IgnoreItem;
	params.bIgnoreBlueprints = bIgnoreBlueprints;
	params.bCheckValidForCrafting = bCheckValidForCrafting;
	params.bRequireExactClassMatch = bRequireExactClassMatch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalInventoryComponent.GetEquippedItemOfType
// ()
// Parameters:
// TEnumAsByte<EPrimalEquipmentType> aType                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPrimalItem* UPrimalInventoryComponent::GetEquippedItemOfType(TEnumAsByte<EPrimalEquipmentType> aType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.GetEquippedItemOfType");

	UPrimalInventoryComponent_GetEquippedItemOfType_Params params;
	params.aType = aType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalInventoryComponent.GetEquippedArmorRating
// ()
// Parameters:
// TEnumAsByte<EPrimalEquipmentType> EquipmentType                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPrimalInventoryComponent::GetEquippedArmorRating(TEnumAsByte<EPrimalEquipmentType> EquipmentType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.GetEquippedArmorRating");

	UPrimalInventoryComponent_GetEquippedArmorRating_Params params;
	params.EquipmentType = EquipmentType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalInventoryComponent.GenerateCrateItems
// ()
// Parameters:
// float                          MinQualityMultiplier           (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxQualityMultiplier           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalInventoryComponent::GenerateCrateItems(float MinQualityMultiplier, float MaxQualityMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.GenerateCrateItems");

	UPrimalInventoryComponent_GenerateCrateItems_Params params;
	params.MinQualityMultiplier = MinQualityMultiplier;
	params.MaxQualityMultiplier = MaxQualityMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalInventoryComponent.ConsumeArmorDurability
// ()
// Parameters:
// float                          ConsumptionAmount              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllArmorTypes                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPrimalEquipmentType> SpecificArmorType              (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryComponent::ConsumeArmorDurability(float ConsumptionAmount, bool bAllArmorTypes, TEnumAsByte<EPrimalEquipmentType> SpecificArmorType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.ConsumeArmorDurability");

	UPrimalInventoryComponent_ConsumeArmorDurability_Params params;
	params.ConsumptionAmount = ConsumptionAmount;
	params.bAllArmorTypes = bAllArmorTypes;
	params.SpecificArmorType = SpecificArmorType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalInventoryComponent.ClientItemMessageNotification
// ()
// Parameters:
// struct FItemNetID              ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPrimalItemMessage> ItemMessageType                (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryComponent::ClientItemMessageNotification(const struct FItemNetID& ItemId, TEnumAsByte<EPrimalItemMessage> ItemMessageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.ClientItemMessageNotification");

	UPrimalInventoryComponent_ClientItemMessageNotification_Params params;
	params.ItemId = ItemId;
	params.ItemMessageType = ItemMessageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalInventoryComponent.BPRemoteInventoryAllowRemoveItems
// ()
// Parameters:
// class AShooterPlayerController* PC                             (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem*             anItemToTransfer               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalInventoryComponent::BPRemoteInventoryAllowRemoveItems(class AShooterPlayerController* PC, class UPrimalItem* anItemToTransfer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.BPRemoteInventoryAllowRemoveItems");

	UPrimalInventoryComponent_BPRemoteInventoryAllowRemoveItems_Params params;
	params.PC = PC;
	params.anItemToTransfer = anItemToTransfer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalInventoryComponent.BPOverrideItemMinimumUseInterval
// ()
// Parameters:
// class UPrimalItem*             theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPrimalInventoryComponent::BPOverrideItemMinimumUseInterval(class UPrimalItem* theItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.BPOverrideItemMinimumUseInterval");

	UPrimalInventoryComponent_BPOverrideItemMinimumUseInterval_Params params;
	params.theItem = theItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalInventoryComponent.BPNotifyItemRemoved
// ()
// Parameters:
// class UPrimalItem*             anItem                         (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryComponent::BPNotifyItemRemoved(class UPrimalItem* anItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.BPNotifyItemRemoved");

	UPrimalInventoryComponent_BPNotifyItemRemoved_Params params;
	params.anItem = anItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalInventoryComponent.BPNotifyItemQuantityUpdated
// ()
// Parameters:
// class UPrimalItem*             anItem                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            amount                         (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryComponent::BPNotifyItemQuantityUpdated(class UPrimalItem* anItem, int amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.BPNotifyItemQuantityUpdated");

	UPrimalInventoryComponent_BPNotifyItemQuantityUpdated_Params params;
	params.anItem = anItem;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalInventoryComponent.BPNotifyItemAdded
// ()
// Parameters:
// class UPrimalItem*             anItem                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEquipItem                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryComponent::BPNotifyItemAdded(class UPrimalItem* anItem, bool bEquipItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.BPNotifyItemAdded");

	UPrimalInventoryComponent_BPNotifyItemAdded_Params params;
	params.anItem = anItem;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalInventoryComponent.BPInventoryRefresh
// ()

void UPrimalInventoryComponent::BPInventoryRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.BPInventoryRefresh");

	UPrimalInventoryComponent_BPInventoryRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalInventoryComponent.BPIncrementItemTemplateQuantity
// ()
// Parameters:
// class UClass*                  ItemTemplate                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            amount                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReplicateToClient             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsBlueprint                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRequireExactClassMatch        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsCraftingResourceConsumption (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsFromUseConsumption          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsArkTributeItem              (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPrimalInventoryComponent::BPIncrementItemTemplateQuantity(class UClass* ItemTemplate, int amount, bool bReplicateToClient, bool bIsBlueprint, bool bRequireExactClassMatch, bool bIsCraftingResourceConsumption, bool bIsFromUseConsumption, bool bIsArkTributeItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.BPIncrementItemTemplateQuantity");

	UPrimalInventoryComponent_BPIncrementItemTemplateQuantity_Params params;
	params.ItemTemplate = ItemTemplate;
	params.amount = amount;
	params.bReplicateToClient = bReplicateToClient;
	params.bIsBlueprint = bIsBlueprint;
	params.bRequireExactClassMatch = bRequireExactClassMatch;
	params.bIsCraftingResourceConsumption = bIsCraftingResourceConsumption;
	params.bIsFromUseConsumption = bIsFromUseConsumption;
	params.bIsArkTributeItem = bIsArkTributeItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalInventoryComponent.BPGetItemOfTemplate
// ()
// Parameters:
// class UClass*                  ItemTemplate                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOnlyInventoryItems            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOnlyEquippedItems             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreItemsWithFullQuantity    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFavorSlotItems                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsBlueprint                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRequiresExactClassMatch       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIgnoreSlotItems               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOnlyArkItems                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPreferEngram                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsForCraftingConsumption      (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPrimalItem* UPrimalInventoryComponent::BPGetItemOfTemplate(class UClass* ItemTemplate, bool bOnlyInventoryItems, bool bOnlyEquippedItems, bool IgnoreItemsWithFullQuantity, bool bFavorSlotItems, bool bIsBlueprint, bool bRequiresExactClassMatch, bool bIgnoreSlotItems, bool bOnlyArkItems, bool bPreferEngram, bool bIsForCraftingConsumption)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.BPGetItemOfTemplate");

	UPrimalInventoryComponent_BPGetItemOfTemplate_Params params;
	params.ItemTemplate = ItemTemplate;
	params.bOnlyInventoryItems = bOnlyInventoryItems;
	params.bOnlyEquippedItems = bOnlyEquippedItems;
	params.IgnoreItemsWithFullQuantity = IgnoreItemsWithFullQuantity;
	params.bFavorSlotItems = bFavorSlotItems;
	params.bIsBlueprint = bIsBlueprint;
	params.bRequiresExactClassMatch = bRequiresExactClassMatch;
	params.bIgnoreSlotItems = bIgnoreSlotItems;
	params.bOnlyArkItems = bOnlyArkItems;
	params.bPreferEngram = bPreferEngram;
	params.bIsForCraftingConsumption = bIsForCraftingConsumption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalInventoryComponent.BPDropInventoryDeposit
// ()
// Parameters:
// double                         DestroyAtTime                  (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryComponent::BPDropInventoryDeposit(double DestroyAtTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.BPDropInventoryDeposit");

	UPrimalInventoryComponent_BPDropInventoryDeposit_Params params;
	params.DestroyAtTime = DestroyAtTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalInventoryComponent.BPCraftingFinishedNotification
// ()
// Parameters:
// class UPrimalItem*             itemToBeCrafted                (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryComponent::BPCraftingFinishedNotification(class UPrimalItem* itemToBeCrafted)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.BPCraftingFinishedNotification");

	UPrimalInventoryComponent_BPCraftingFinishedNotification_Params params;
	params.itemToBeCrafted = itemToBeCrafted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalInventoryComponent.BPAllowUseInInventory
// ()
// Parameters:
// class UPrimalItem*             theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsRemoteInventory             (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController* ByPC                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalInventoryComponent::BPAllowUseInInventory(class UPrimalItem* theItem, bool bIsRemoteInventory, class AShooterPlayerController* ByPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.BPAllowUseInInventory");

	UPrimalInventoryComponent_BPAllowUseInInventory_Params params;
	params.theItem = theItem;
	params.bIsRemoteInventory = bIsRemoteInventory;
	params.ByPC = ByPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalInventoryComponent.BPAccessedInventory
// ()
// Parameters:
// class AShooterPlayerController* ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryComponent::BPAccessedInventory(class AShooterPlayerController* ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalInventoryComponent.BPAccessedInventory");

	UPrimalInventoryComponent_BPAccessedInventory_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalPlayerData.LinkedPlayerIDString
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPrimalPlayerData::LinkedPlayerIDString()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalPlayerData.LinkedPlayerIDString");

	UPrimalPlayerData_LinkedPlayerIDString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalPlayerData.GetUniqueIdString
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPrimalPlayerData::GetUniqueIdString()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalPlayerData.GetUniqueIdString");

	UPrimalPlayerData_GetUniqueIdString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalPlayerData.FindCharacterForPlayer
// ()
// Parameters:
// class UWorld*                  inWorld                        (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterCharacter* UPrimalPlayerData::FindCharacterForPlayer(class UWorld* inWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalPlayerData.FindCharacterForPlayer");

	UPrimalPlayerData_FindCharacterForPlayer_Params params;
	params.inWorld = inWorld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerController.TestPhysxPerf
// ()

void AShooterPlayerController::TestPhysxPerf()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.TestPhysxPerf");

	AShooterPlayerController_TestPhysxPerf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.TestNotification
// ()

void AShooterPlayerController::TestNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.TestNotification");

	AShooterPlayerController_TestNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.TestAlarmNotification
// ()
// Parameters:
// struct FString                 Title                          (Parm, ZeroConstructor)
// struct FString                 Message                        (Parm, ZeroConstructor)

void AShooterPlayerController::TestAlarmNotification(const struct FString& Title, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.TestAlarmNotification");

	AShooterPlayerController_TestAlarmNotification_Params params;
	params.Title = Title;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.TeleportSpectatorToPlayerCharacter
// ()
// Parameters:
// class AShooterCharacter*       ToPlayerCharacter              (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::TeleportSpectatorToPlayerCharacter(class AShooterCharacter* ToPlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.TeleportSpectatorToPlayerCharacter");

	AShooterPlayerController_TeleportSpectatorToPlayerCharacter_Params params;
	params.ToPlayerCharacter = ToPlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.StopSpectating
// ()

void AShooterPlayerController::StopSpectating()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.StopSpectating");

	AShooterPlayerController_StopSpectating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ShowTribeManager
// ()

void AShooterPlayerController::ShowTribeManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ShowTribeManager");

	AShooterPlayerController_ShowTribeManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ShowMyAdminManager
// ()

void AShooterPlayerController::ShowMyAdminManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ShowMyAdminManager");

	AShooterPlayerController_ShowMyAdminManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.SetCheatPlayer
// ()
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::SetCheatPlayer(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.SetCheatPlayer");

	AShooterPlayerController_SetCheatPlayer_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.SetAdminIcon
// ()
// Parameters:
// bool                           bAdminIcon                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::SetAdminIcon(bool bAdminIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.SetAdminIcon");

	AShooterPlayerController_SetAdminIcon_Params params;
	params.bAdminIcon = bAdminIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerUploadDino
// ()
// Parameters:
// class APrimalDinoCharacter*    DownloadedDino                 (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerUploadDino(class APrimalDinoCharacter* DownloadedDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerUploadDino");

	AShooterPlayerController_ServerUploadDino_Params params;
	params.DownloadedDino = DownloadedDino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerUploadCharaterDataToArk
// ()
// Parameters:
// class UPrimalInventoryComponent* InventoryComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AShooterPlayerController::ServerUploadCharaterDataToArk(class UPrimalInventoryComponent* InventoryComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerUploadCharaterDataToArk");

	AShooterPlayerController_ServerUploadCharaterDataToArk_Params params;
	params.InventoryComp = InventoryComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerUnbanPlayer
// ()
// Parameters:
// struct FString                 PlayerSteamName                (Parm, ZeroConstructor)
// struct FString                 PlayerSteamID                  (Parm, ZeroConstructor)

void AShooterPlayerController::ServerUnbanPlayer(const struct FString& PlayerSteamName, const struct FString& PlayerSteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerUnbanPlayer");

	AShooterPlayerController_ServerUnbanPlayer_Params params;
	params.PlayerSteamName = PlayerSteamName;
	params.PlayerSteamID = PlayerSteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerTransferToRemoteInventory
// ()
// Parameters:
// class UPrimalInventoryComponent* InventoryComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FItemNetID              ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAlsoTryToEqup                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            requestedQuantity              (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerTransferToRemoteInventory(class UPrimalInventoryComponent* InventoryComp, const struct FItemNetID& ItemId, bool bAlsoTryToEqup, int requestedQuantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerTransferToRemoteInventory");

	AShooterPlayerController_ServerTransferToRemoteInventory_Params params;
	params.InventoryComp = InventoryComp;
	params.ItemId = ItemId;
	params.bAlsoTryToEqup = bAlsoTryToEqup;
	params.requestedQuantity = requestedQuantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerTransferFromRemoteInventory
// ()
// Parameters:
// class UPrimalInventoryComponent* InventoryComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FItemNetID              ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            requestedQuantity              (Parm, ZeroConstructor, IsPlainOldData)
// int                            ToSlotIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEquipItem                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerTransferFromRemoteInventory(class UPrimalInventoryComponent* InventoryComp, const struct FItemNetID& ItemId, int requestedQuantity, int ToSlotIndex, bool bEquipItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerTransferFromRemoteInventory");

	AShooterPlayerController_ServerTransferFromRemoteInventory_Params params;
	params.InventoryComp = InventoryComp;
	params.ItemId = ItemId;
	params.requestedQuantity = requestedQuantity;
	params.ToSlotIndex = ToSlotIndex;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerTransferAllToRemoteInventory
// ()
// Parameters:
// class UPrimalInventoryComponent* InventoryComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 CurrentCustomFolderFilter      (Parm, ZeroConstructor)
// struct FString                 CurrentNameFilter              (Parm, ZeroConstructor)

void AShooterPlayerController::ServerTransferAllToRemoteInventory(class UPrimalInventoryComponent* InventoryComp, const struct FString& CurrentCustomFolderFilter, const struct FString& CurrentNameFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerTransferAllToRemoteInventory");

	AShooterPlayerController_ServerTransferAllToRemoteInventory_Params params;
	params.InventoryComp = InventoryComp;
	params.CurrentCustomFolderFilter = CurrentCustomFolderFilter;
	params.CurrentNameFilter = CurrentNameFilter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerTransferAllFromRemoteInventory
// ()
// Parameters:
// class UPrimalInventoryComponent* InventoryComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 CurrentCustomFolderFilter      (Parm, ZeroConstructor)
// struct FString                 CurrentNameFilter              (Parm, ZeroConstructor)

void AShooterPlayerController::ServerTransferAllFromRemoteInventory(class UPrimalInventoryComponent* InventoryComp, const struct FString& CurrentCustomFolderFilter, const struct FString& CurrentNameFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerTransferAllFromRemoteInventory");

	AShooterPlayerController_ServerTransferAllFromRemoteInventory_Params params;
	params.InventoryComp = InventoryComp;
	params.CurrentCustomFolderFilter = CurrentCustomFolderFilter;
	params.CurrentNameFilter = CurrentNameFilter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerSuicide
// ()

void AShooterPlayerController::ServerSuicide()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerSuicide");

	AShooterPlayerController_ServerSuicide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerStopSpectating
// ()

void AShooterPlayerController::ServerStopSpectating()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerStopSpectating");

	AShooterPlayerController_ServerStopSpectating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerStayAlive
// ()

void AShooterPlayerController::ServerStayAlive()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerStayAlive");

	AShooterPlayerController_ServerStayAlive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerSpectateToPlayerByID
// ()
// Parameters:
// uint64_t                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerSpectateToPlayerByID(uint64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerSpectateToPlayerByID");

	AShooterPlayerController_ServerSpectateToPlayerByID_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerSpectateLastDeathLocation
// ()

void AShooterPlayerController::ServerSpectateLastDeathLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerSpectateLastDeathLocation");

	AShooterPlayerController_ServerSpectateLastDeathLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerShowMessageOfTheDay
// ()

void AShooterPlayerController::ServerShowMessageOfTheDay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerShowMessageOfTheDay");

	AShooterPlayerController_ServerShowMessageOfTheDay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerSetVRPlayer
// ()
// Parameters:
// bool                           bSetVRPlayer                   (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerSetVRPlayer(bool bSetVRPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerSetVRPlayer");

	AShooterPlayerController_ServerSetVRPlayer_Params params;
	params.bSetVRPlayer = bSetVRPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerSetSupressAdminIcon
// ()
// Parameters:
// bool                           bSuppress                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerSetSupressAdminIcon(bool bSuppress)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerSetSupressAdminIcon");

	AShooterPlayerController_ServerSetSupressAdminIcon_Params params;
	params.bSuppress = bSuppress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerSetSubscribedApp
// ()
// Parameters:
// int                            AppID                          (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerSetSubscribedApp(int AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerSetSubscribedApp");

	AShooterPlayerController_ServerSetSubscribedApp_Params params;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerSetSpectatorFirstPersonViewTarget
// ()
// Parameters:
// class AActor*                  InTarget                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerSetSpectatorFirstPersonViewTarget(class AActor* InTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerSetSpectatorFirstPersonViewTarget");

	AShooterPlayerController_ServerSetSpectatorFirstPersonViewTarget_Params params;
	params.InTarget = InTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerSetMessageOfTheDay
// ()
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void AShooterPlayerController::ServerSetMessageOfTheDay(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerSetMessageOfTheDay");

	AShooterPlayerController_ServerSetMessageOfTheDay_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerSetDamageLogOpen
// ()
// Parameters:
// bool                           bIsOpen                        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerSetDamageLogOpen(bool bIsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerSetDamageLogOpen");

	AShooterPlayerController_ServerSetDamageLogOpen_Params params;
	params.bIsOpen = bIsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerSetAutoJoinTribe
// ()
// Parameters:
// struct FSOTFPartyInfo          PartyInfo                      (Parm)

void AShooterPlayerController::ServerSetAutoJoinTribe(const struct FSOTFPartyInfo& PartyInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerSetAutoJoinTribe");

	AShooterPlayerController_ServerSetAutoJoinTribe_Params params;
	params.PartyInfo = PartyInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerSendDirectMessage
// ()
// Parameters:
// struct FString                 PlayerSteamID                  (Parm, ZeroConstructor)
// struct FString                 Message                        (Parm, ZeroConstructor)

void AShooterPlayerController::ServerSendDirectMessage(const struct FString& PlayerSteamID, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerSendDirectMessage");

	AShooterPlayerController_ServerSendDirectMessage_Params params;
	params.PlayerSteamID = PlayerSteamID;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerSendChatMessage
// ()
// Parameters:
// struct FString                 ChatMessage                    (Parm, ZeroConstructor)
// int                            SendMode                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerSendChatMessage(const struct FString& ChatMessage, int SendMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerSendChatMessage");

	AShooterPlayerController_ServerSendChatMessage_Params params;
	params.ChatMessage = ChatMessage;
	params.SendMode = SendMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerSendArkDataPayloadEnd
// ()
// Parameters:
// struct FGuid                   ID                             (Parm, ZeroConstructor)
// TEnumAsByte<EPrimalARKTributeDataType> ArkDataType                    (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerSendArkDataPayloadEnd(const struct FGuid& ID, TEnumAsByte<EPrimalARKTributeDataType> ArkDataType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerSendArkDataPayloadEnd");

	AShooterPlayerController_ServerSendArkDataPayloadEnd_Params params;
	params.ID = ID;
	params.ArkDataType = ArkDataType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerSendArkDataPayloadBegin
// ()
// Parameters:
// struct FGuid                   ID                             (Parm, ZeroConstructor)
// TEnumAsByte<EPrimalARKTributeDataType> ArkDataType                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DataClass                      (Parm, ZeroConstructor)
// struct FString                 TagName                        (Parm, ZeroConstructor)
// struct FString                 Name                           (Parm, ZeroConstructor)
// TArray<struct FString>         DataStats                      (ConstParm, Parm, ZeroConstructor)
// uint32_t                       ID1                            (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       ID2                            (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerSendArkDataPayloadBegin(const struct FGuid& ID, TEnumAsByte<EPrimalARKTributeDataType> ArkDataType, const struct FString& DataClass, const struct FString& TagName, const struct FString& Name, TArray<struct FString> DataStats, uint32_t ID1, uint32_t ID2)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerSendArkDataPayloadBegin");

	AShooterPlayerController_ServerSendArkDataPayloadBegin_Params params;
	params.ID = ID;
	params.ArkDataType = ArkDataType;
	params.DataClass = DataClass;
	params.TagName = TagName;
	params.Name = Name;
	params.DataStats = DataStats;
	params.ID1 = ID1;
	params.ID2 = ID2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerSendArkDataPayload
// ()
// Parameters:
// struct FGuid                   ID                             (Parm, ZeroConstructor)
// TEnumAsByte<EPrimalARKTributeDataType> ArkDataType                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          DataBytes                      (ConstParm, Parm, ZeroConstructor)

void AShooterPlayerController::ServerSendArkDataPayload(const struct FGuid& ID, TEnumAsByte<EPrimalARKTributeDataType> ArkDataType, TArray<unsigned char> DataBytes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerSendArkDataPayload");

	AShooterPlayerController_ServerSendArkDataPayload_Params params;
	params.ID = ID;
	params.ArkDataType = ArkDataType;
	params.DataBytes = DataBytes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerSaveWorld
// ()

void AShooterPlayerController::ServerSaveWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerSaveWorld");

	AShooterPlayerController_ServerSaveWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerRequestTribeLog
// ()

void AShooterPlayerController::ServerRequestTribeLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerRequestTribeLog");

	AShooterPlayerController_ServerRequestTribeLog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerRequestSetPin
// ()
// Parameters:
// class UObject*                 forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            PinValue                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsSetting                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerRequestSetPin(class UObject* forTarget, int PinValue, bool bIsSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerRequestSetPin");

	AShooterPlayerController_ServerRequestSetPin_Params params;
	params.forTarget = forTarget;
	params.PinValue = PinValue;
	params.bIsSetting = bIsSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerRequestRespawnAtPoint
// ()
// Parameters:
// int                            spawnPointID                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            spawnRegionIndex               (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerRequestRespawnAtPoint(int spawnPointID, int spawnRegionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerRequestRespawnAtPoint");

	AShooterPlayerController_ServerRequestRespawnAtPoint_Params params;
	params.spawnPointID = spawnPointID;
	params.spawnRegionIndex = spawnRegionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerRequestRemoveWeaponClipAmmo
// ()
// Parameters:
// class UPrimalInventoryComponent* InventoryComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FItemNetID              ItemId                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerRequestRemoveWeaponClipAmmo(class UPrimalInventoryComponent* InventoryComp, const struct FItemNetID& ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerRequestRemoveWeaponClipAmmo");

	AShooterPlayerController_ServerRequestRemoveWeaponClipAmmo_Params params;
	params.InventoryComp = InventoryComp;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerRequestRemoveItemSkin
// ()
// Parameters:
// class UPrimalInventoryComponent* InventoryComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FItemNetID              ItemId                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerRequestRemoveItemSkin(class UPrimalInventoryComponent* InventoryComp, const struct FItemNetID& ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerRequestRemoveItemSkin");

	AShooterPlayerController_ServerRequestRemoveItemSkin_Params params;
	params.InventoryComp = InventoryComp;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerRequestRemoteDropAllItems
// ()
// Parameters:
// class UPrimalInventoryComponent* InventoryComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 CurrentCustomFolderFilter      (Parm, ZeroConstructor)
// struct FString                 CurrentNameFilter              (Parm, ZeroConstructor)

void AShooterPlayerController::ServerRequestRemoteDropAllItems(class UPrimalInventoryComponent* InventoryComp, const struct FString& CurrentCustomFolderFilter, const struct FString& CurrentNameFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerRequestRemoteDropAllItems");

	AShooterPlayerController_ServerRequestRemoteDropAllItems_Params params;
	params.InventoryComp = InventoryComp;
	params.CurrentCustomFolderFilter = CurrentCustomFolderFilter;
	params.CurrentNameFilter = CurrentNameFilter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerRequestPlaceStructure
// ()
// Parameters:
// int                            StructureIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BuildLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                BuildRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                PlayerViewRotation             (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   AttachToPawn                   (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalDinoCharacter*    DinoCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemNetID              PlaceUsingItemID               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSnapped                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsCheat                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsFlipped                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerRequestPlaceStructure(int StructureIndex, const struct FVector& BuildLocation, const struct FRotator& BuildRotation, const struct FRotator& PlayerViewRotation, class APawn* AttachToPawn, class APrimalDinoCharacter* DinoCharacter, const struct FName& BoneName, const struct FItemNetID& PlaceUsingItemID, bool bSnapped, bool bIsCheat, bool bIsFlipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerRequestPlaceStructure");

	AShooterPlayerController_ServerRequestPlaceStructure_Params params;
	params.StructureIndex = StructureIndex;
	params.BuildLocation = BuildLocation;
	params.BuildRotation = BuildRotation;
	params.PlayerViewRotation = PlayerViewRotation;
	params.AttachToPawn = AttachToPawn;
	params.DinoCharacter = DinoCharacter;
	params.BoneName = BoneName;
	params.PlaceUsingItemID = PlaceUsingItemID;
	params.bSnapped = bSnapped;
	params.bIsCheat = bIsCheat;
	params.bIsFlipped = bIsFlipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerRequestLevelUp
// ()
// Parameters:
// class UPrimalCharacterStatusComponent* forStatusComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EPrimalCharacterStatusValue> ValueType                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerRequestLevelUp(class UPrimalCharacterStatusComponent* forStatusComp, TEnumAsByte<EPrimalCharacterStatusValue> ValueType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerRequestLevelUp");

	AShooterPlayerController_ServerRequestLevelUp_Params params;
	params.forStatusComp = forStatusComp;
	params.ValueType = ValueType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerRequestInventoryUseItemWithItem
// ()
// Parameters:
// class UPrimalInventoryComponent* InventoryComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FItemNetID              ItemID1                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemNetID              ItemID2                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            AdditionalData                 (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerRequestInventoryUseItemWithItem(class UPrimalInventoryComponent* InventoryComp, const struct FItemNetID& ItemID1, const struct FItemNetID& ItemID2, int AdditionalData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerRequestInventoryUseItemWithItem");

	AShooterPlayerController_ServerRequestInventoryUseItemWithItem_Params params;
	params.InventoryComp = InventoryComp;
	params.ItemID1 = ItemID1;
	params.ItemID2 = ItemID2;
	params.AdditionalData = AdditionalData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerRequestInventoryUseItemWithActor
// ()
// Parameters:
// class AActor*                  anActor                        (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalInventoryComponent* InventoryComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FItemNetID              ItemID1                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            AdditionalData                 (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerRequestInventoryUseItemWithActor(class AActor* anActor, class UPrimalInventoryComponent* InventoryComp, const struct FItemNetID& ItemID1, int AdditionalData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerRequestInventoryUseItemWithActor");

	AShooterPlayerController_ServerRequestInventoryUseItemWithActor_Params params;
	params.anActor = anActor;
	params.InventoryComp = InventoryComp;
	params.ItemID1 = ItemID1;
	params.AdditionalData = AdditionalData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerRequestInventoryUseItem
// ()
// Parameters:
// class UPrimalInventoryComponent* InventoryComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FItemNetID              ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEntireStack                   (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerRequestInventoryUseItem(class UPrimalInventoryComponent* InventoryComp, const struct FItemNetID& ItemId, bool bEntireStack)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerRequestInventoryUseItem");

	AShooterPlayerController_ServerRequestInventoryUseItem_Params params;
	params.InventoryComp = InventoryComp;
	params.ItemId = ItemId;
	params.bEntireStack = bEntireStack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerRequestInventorySwapItems
// ()
// Parameters:
// class UPrimalInventoryComponent* InventoryComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FItemNetID              ItemID1                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemNetID              ItemID2                        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerRequestInventorySwapItems(class UPrimalInventoryComponent* InventoryComp, const struct FItemNetID& ItemID1, const struct FItemNetID& ItemID2)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerRequestInventorySwapItems");

	AShooterPlayerController_ServerRequestInventorySwapItems_Params params;
	params.InventoryComp = InventoryComp;
	params.ItemID1 = ItemID1;
	params.ItemID2 = ItemID2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerRequestFastTravelToPoint
// ()
// Parameters:
// int                            fromSpawnPointID               (Parm, ZeroConstructor, IsPlainOldData)
// int                            spawnPointID                   (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerRequestFastTravelToPoint(int fromSpawnPointID, int spawnPointID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerRequestFastTravelToPoint");

	AShooterPlayerController_ServerRequestFastTravelToPoint_Params params;
	params.fromSpawnPointID = fromSpawnPointID;
	params.spawnPointID = spawnPointID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerRequestDropAllItems
// ()
// Parameters:
// struct FString                 CurrentCustomFolderFilter      (Parm, ZeroConstructor)
// struct FString                 CurrentNameFilter              (Parm, ZeroConstructor)

void AShooterPlayerController::ServerRequestDropAllItems(const struct FString& CurrentCustomFolderFilter, const struct FString& CurrentNameFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerRequestDropAllItems");

	AShooterPlayerController_ServerRequestDropAllItems_Params params;
	params.CurrentCustomFolderFilter = CurrentCustomFolderFilter;
	params.CurrentNameFilter = CurrentNameFilter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerRequestCreateNewPlayerWithArkData
// ()
// Parameters:
// TArray<unsigned char>          PlayerArkDataBytes             (ConstParm, Parm, ZeroConstructor)

void AShooterPlayerController::ServerRequestCreateNewPlayerWithArkData(TArray<unsigned char> PlayerArkDataBytes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerRequestCreateNewPlayerWithArkData");

	AShooterPlayerController_ServerRequestCreateNewPlayerWithArkData_Params params;
	params.PlayerArkDataBytes = PlayerArkDataBytes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerRequestActorItems
// ()
// Parameters:
// class UPrimalInventoryComponent* forInventory                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bInventoryItems                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsFirstSpawn                  (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerRequestActorItems(class UPrimalInventoryComponent* forInventory, bool bInventoryItems, bool bIsFirstSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerRequestActorItems");

	AShooterPlayerController_ServerRequestActorItems_Params params;
	params.forInventory = forInventory;
	params.bInventoryItems = bInventoryItems;
	params.bIsFirstSpawn = bIsFirstSpawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerRepeatMultiUse
// ()
// Parameters:
// class UObject*                 ForObject                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerRepeatMultiUse(class UObject* ForObject, int UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerRepeatMultiUse");

	AShooterPlayerController_ServerRepeatMultiUse_Params params;
	params.ForObject = ForObject;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerRepairItem
// ()
// Parameters:
// class UPrimalInventoryComponent* InventoryComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FItemNetID              ItemId                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerRepairItem(class UPrimalInventoryComponent* InventoryComp, const struct FItemNetID& ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerRepairItem");

	AShooterPlayerController_ServerRepairItem_Params params;
	params.InventoryComp = InventoryComp;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerRemoveSteamItemSucceeded
// ()

void AShooterPlayerController::ServerRemoveSteamItemSucceeded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerRemoveSteamItemSucceeded");

	AShooterPlayerController_ServerRemoveSteamItemSucceeded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerRemoveSteamItem
// ()
// Parameters:
// uint32_t                       ItemdDefId                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerRemoveSteamItem(uint32_t ItemdDefId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerRemoveSteamItem");

	AShooterPlayerController_ServerRemoveSteamItem_Params params;
	params.ItemdDefId = ItemdDefId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerRemovePawnItem
// ()
// Parameters:
// struct FItemNetID              ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSecondryAction                (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerRemovePawnItem(const struct FItemNetID& ItemId, bool bSecondryAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerRemovePawnItem");

	AShooterPlayerController_ServerRemovePawnItem_Params params;
	params.ItemId = ItemId;
	params.bSecondryAction = bSecondryAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerRemovePassenger
// ()

void AShooterPlayerController::ServerRemovePassenger()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerRemovePassenger");

	AShooterPlayerController_ServerRemovePassenger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerRemoveAllSteamInventory
// ()

void AShooterPlayerController::ServerRemoveAllSteamInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerRemoveAllSteamInventory");

	AShooterPlayerController_ServerRemoveAllSteamInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerReleaseSeatingStructure
// ()

void AShooterPlayerController::ServerReleaseSeatingStructure()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerReleaseSeatingStructure");

	AShooterPlayerController_ServerReleaseSeatingStructure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerRefreshSteamInventory
// ()

void AShooterPlayerController::ServerRefreshSteamInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerRefreshSteamInventory");

	AShooterPlayerController_ServerRefreshSteamInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerRefreshCosmeticsSteamInventory
// ()

void AShooterPlayerController::ServerRefreshCosmeticsSteamInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerRefreshCosmeticsSteamInventory");

	AShooterPlayerController_ServerRefreshCosmeticsSteamInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerReadMessageOFTheDay
// ()

void AShooterPlayerController::ServerReadMessageOFTheDay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerReadMessageOFTheDay");

	AShooterPlayerController_ServerReadMessageOFTheDay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerPaint
// ()
// Parameters:
// class UStructurePaintingComponent* Structure                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<struct FPaintItem>      Paints                         (ConstParm, Parm, ZeroConstructor)
// bool                           bLastBatch                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromLoadFile                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReplicateToClients             (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerPaint(class UStructurePaintingComponent* Structure, TArray<struct FPaintItem> Paints, bool bLastBatch, bool bFromLoadFile, bool ReplicateToClients)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerPaint");

	AShooterPlayerController_ServerPaint_Params params;
	params.Structure = Structure;
	params.Paints = Paints;
	params.bLastBatch = bLastBatch;
	params.bFromLoadFile = bFromLoadFile;
	params.ReplicateToClients = ReplicateToClients;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerNotifyEditText
// ()
// Parameters:
// struct FString                 TextToUse                      (Parm, ZeroConstructor)
// bool                           checkedBox                     (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ForObjectClass                 (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       ExtraID1                       (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       ExtraID2                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ForObject                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerNotifyEditText(const struct FString& TextToUse, bool checkedBox, class UClass* ForObjectClass, uint32_t ExtraID1, uint32_t ExtraID2, class UObject* ForObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerNotifyEditText");

	AShooterPlayerController_ServerNotifyEditText_Params params;
	params.TextToUse = TextToUse;
	params.checkedBox = checkedBox;
	params.ForObjectClass = ForObjectClass;
	params.ExtraID1 = ExtraID1;
	params.ExtraID2 = ExtraID2;
	params.ForObject = ForObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerMultiUse
// ()
// Parameters:
// class UObject*                 ForObject                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerMultiUse(class UObject* ForObject, int UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerMultiUse");

	AShooterPlayerController_ServerMultiUse_Params params;
	params.ForObject = ForObject;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerLoadWorld
// ()

void AShooterPlayerController::ServerLoadWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerLoadWorld");

	AShooterPlayerController_ServerLoadWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerLoadArkInventoryItems
// ()
// Parameters:
// TArray<struct FItemNetInfo>    ArkInventoryItems              (ConstParm, Parm, ZeroConstructor)

void AShooterPlayerController::ServerLoadArkInventoryItems(TArray<struct FItemNetInfo> ArkInventoryItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerLoadArkInventoryItems");

	AShooterPlayerController_ServerLoadArkInventoryItems_Params params;
	params.ArkInventoryItems = ArkInventoryItems;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerListPlayers
// ()

void AShooterPlayerController::ServerListPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerListPlayers");

	AShooterPlayerController_ServerListPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerKickPlayer
// ()
// Parameters:
// struct FString                 PlayerSteamName                (Parm, ZeroConstructor)
// struct FString                 PlayerSteamID                  (Parm, ZeroConstructor)

void AShooterPlayerController::ServerKickPlayer(const struct FString& PlayerSteamName, const struct FString& PlayerSteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerKickPlayer");

	AShooterPlayerController_ServerKickPlayer_Params params;
	params.PlayerSteamName = PlayerSteamName;
	params.PlayerSteamID = PlayerSteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerInventoryClearCraftQueue
// ()
// Parameters:
// class UPrimalInventoryComponent* InventoryComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AShooterPlayerController::ServerInventoryClearCraftQueue(class UPrimalInventoryComponent* InventoryComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerInventoryClearCraftQueue");

	AShooterPlayerController_ServerInventoryClearCraftQueue_Params params;
	params.InventoryComp = InventoryComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerGiveItem
// ()
// Parameters:
// int                            ArchIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerGiveItem(int ArchIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerGiveItem");

	AShooterPlayerController_ServerGiveItem_Params params;
	params.ArchIndex = ArchIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerGetMessageOfTheDay
// ()

void AShooterPlayerController::ServerGetMessageOfTheDay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerGetMessageOfTheDay");

	AShooterPlayerController_ServerGetMessageOfTheDay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerGetCosmeticsItems
// ()
// Parameters:
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerGetCosmeticsItems(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerGetCosmeticsItems");

	AShooterPlayerController_ServerGetCosmeticsItems_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerEquipToRemoteInventory
// ()
// Parameters:
// class UPrimalInventoryComponent* InventoryComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FItemNetID              ItemId                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerEquipToRemoteInventory(class UPrimalInventoryComponent* InventoryComp, const struct FItemNetID& ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerEquipToRemoteInventory");

	AShooterPlayerController_ServerEquipToRemoteInventory_Params params;
	params.InventoryComp = InventoryComp;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerEquipPawnItem
// ()
// Parameters:
// struct FItemNetID              ItemId                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerEquipPawnItem(const struct FItemNetID& ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerEquipPawnItem");

	AShooterPlayerController_ServerEquipPawnItem_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerDropFromRemoteInventory
// ()
// Parameters:
// class UPrimalInventoryComponent* InventoryComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FItemNetID              ItemId                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerDropFromRemoteInventory(class UPrimalInventoryComponent* InventoryComp, const struct FItemNetID& ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerDropFromRemoteInventory");

	AShooterPlayerController_ServerDropFromRemoteInventory_Params params;
	params.InventoryComp = InventoryComp;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerDisallowPlayerToJoinNoCheck
// ()
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor)

void AShooterPlayerController::ServerDisallowPlayerToJoinNoCheck(const struct FString& PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerDisallowPlayerToJoinNoCheck");

	AShooterPlayerController_ServerDisallowPlayerToJoinNoCheck_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerDeleteItemFromCustomFolder
// ()
// Parameters:
// class UPrimalInventoryComponent* forInventory                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 CFolderName                    (Parm, ZeroConstructor)
// int                            InventoryCompType              (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemNetID              ItemId                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerDeleteItemFromCustomFolder(class UPrimalInventoryComponent* forInventory, const struct FString& CFolderName, int InventoryCompType, const struct FItemNetID& ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerDeleteItemFromCustomFolder");

	AShooterPlayerController_ServerDeleteItemFromCustomFolder_Params params;
	params.forInventory = forInventory;
	params.CFolderName = CFolderName;
	params.InventoryCompType = InventoryCompType;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerDeleteCustomFolder
// ()
// Parameters:
// class UPrimalInventoryComponent* forInventory                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 CFolderName                    (Parm, ZeroConstructor)
// int                            InventoryCompType              (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerDeleteCustomFolder(class UPrimalInventoryComponent* forInventory, const struct FString& CFolderName, int InventoryCompType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerDeleteCustomFolder");

	AShooterPlayerController_ServerDeleteCustomFolder_Params params;
	params.forInventory = forInventory;
	params.CFolderName = CFolderName;
	params.InventoryCompType = InventoryCompType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerCycleToClosestEnemies
// ()
// Parameters:
// bool                           bIsFirstPersonSpectating       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerCycleToClosestEnemies(bool bIsFirstPersonSpectating)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerCycleToClosestEnemies");

	AShooterPlayerController_ServerCycleToClosestEnemies_Params params;
	params.bIsFirstPersonSpectating = bIsFirstPersonSpectating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerCycleSpectator
// ()
// Parameters:
// bool                           bNext                          (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerCycleSpectator(bool bNext)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerCycleSpectator");

	AShooterPlayerController_ServerCycleSpectator_Params params;
	params.bNext = bNext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerCraftItem
// ()
// Parameters:
// class UPrimalInventoryComponent* InventoryComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FItemNetID              ItemId                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerCraftItem(class UPrimalInventoryComponent* InventoryComp, const struct FItemNetID& ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerCraftItem");

	AShooterPlayerController_ServerCraftItem_Params params;
	params.InventoryComp = InventoryComp;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerCheckUnfreeze
// ()

void AShooterPlayerController::ServerCheckUnfreeze()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerCheckUnfreeze");

	AShooterPlayerController_ServerCheckUnfreeze_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerBanPlayer
// ()
// Parameters:
// struct FString                 PlayerSteamName                (Parm, ZeroConstructor)
// struct FString                 PlayerSteamID                  (Parm, ZeroConstructor)

void AShooterPlayerController::ServerBanPlayer(const struct FString& PlayerSteamName, const struct FString& PlayerSteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerBanPlayer");

	AShooterPlayerController_ServerBanPlayer_Params params;
	params.PlayerSteamName = PlayerSteamName;
	params.PlayerSteamID = PlayerSteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerAutoCreateTribe
// ()
// Parameters:
// struct FSOTFPartyInfo          PartyInfo                      (Parm)

void AShooterPlayerController::ServerAutoCreateTribe(const struct FSOTFPartyInfo& PartyInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerAutoCreateTribe");

	AShooterPlayerController_ServerAutoCreateTribe_Params params;
	params.PartyInfo = PartyInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerAllowPlayerToJoinNoCheck
// ()
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor)

void AShooterPlayerController::ServerAllowPlayerToJoinNoCheck(const struct FString& PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerAllowPlayerToJoinNoCheck");

	AShooterPlayerController_ServerAllowPlayerToJoinNoCheck_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerAddItemToCustomFolder
// ()
// Parameters:
// class UPrimalInventoryComponent* forInventory                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 CFolderName                    (Parm, ZeroConstructor)
// int                            InventoryCompType              (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemNetID              ItemId                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerAddItemToCustomFolder(class UPrimalInventoryComponent* forInventory, const struct FString& CFolderName, int InventoryCompType, const struct FItemNetID& ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerAddItemToCustomFolder");

	AShooterPlayerController_ServerAddItemToCustomFolder_Params params;
	params.forInventory = forInventory;
	params.CFolderName = CFolderName;
	params.InventoryCompType = InventoryCompType;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerAddItemToArkInventory
// ()
// Parameters:
// class UPrimalInventoryComponent* InventoryComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FItemNetID              ItemId                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerAddItemToArkInventory(class UPrimalInventoryComponent* InventoryComp, const struct FItemNetID& ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerAddItemToArkInventory");

	AShooterPlayerController_ServerAddItemToArkInventory_Params params;
	params.InventoryComp = InventoryComp;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerAddItemFromArkInventory
// ()
// Parameters:
// class UPrimalInventoryComponent* InventoryComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FItemNetID              ItemId                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerAddItemFromArkInventory(class UPrimalInventoryComponent* InventoryComp, const struct FItemNetID& ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerAddItemFromArkInventory");

	AShooterPlayerController_ServerAddItemFromArkInventory_Params params;
	params.InventoryComp = InventoryComp;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerActorViewRemoteInventory
// ()
// Parameters:
// class UPrimalInventoryComponent* InventoryComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AShooterPlayerController::ServerActorViewRemoteInventory(class UPrimalInventoryComponent* InventoryComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerActorViewRemoteInventory");

	AShooterPlayerController_ServerActorViewRemoteInventory_Params params;
	params.InventoryComp = InventoryComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerActorCloseRemoteInventory
// ()
// Parameters:
// class UPrimalInventoryComponent* InventoryComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AShooterPlayerController::ServerActorCloseRemoteInventory(class UPrimalInventoryComponent* InventoryComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerActorCloseRemoteInventory");

	AShooterPlayerController_ServerActorCloseRemoteInventory_Params params;
	params.InventoryComp = InventoryComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerAcceptTribeInvite
// ()

void AShooterPlayerController::ServerAcceptTribeInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerAcceptTribeInvite");

	AShooterPlayerController_ServerAcceptTribeInvite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.SendAlarmNotification
// ()
// Parameters:
// struct FString                 SteamID                        (Parm, ZeroConstructor)
// struct FString                 Title                          (Parm, ZeroConstructor)
// struct FString                 Message                        (Parm, ZeroConstructor)

void AShooterPlayerController::SendAlarmNotification(const struct FString& SteamID, const struct FString& Title, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.SendAlarmNotification");

	AShooterPlayerController_SendAlarmNotification_Params params;
	params.SteamID = SteamID;
	params.Title = Title;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.SameLinkedId
// ()
// Parameters:
// int64_t                        Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterPlayerController::SameLinkedId(int64_t Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.SameLinkedId");

	AShooterPlayerController_SameLinkedId_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerController.RPCStayAlive
// ()

void AShooterPlayerController::RPCStayAlive()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.RPCStayAlive");

	AShooterPlayerController_RPCStayAlive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ResetDodgePunishment
// ()

void AShooterPlayerController::ResetDodgePunishment()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ResetDodgePunishment");

	AShooterPlayerController_ResetDodgePunishment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.RequestSpectator
// ()
// Parameters:
// struct FString                 InSpectatorPass                (ConstParm, Parm, ZeroConstructor)

void AShooterPlayerController::RequestSpectator(const struct FString& InSpectatorPass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.RequestSpectator");

	AShooterPlayerController_RequestSpectator_Params params;
	params.InSpectatorPass = InSpectatorPass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.RemoveItemSucceeded
// ()

void AShooterPlayerController::RemoveItemSucceeded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.RemoveItemSucceeded");

	AShooterPlayerController_RemoveItemSucceeded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.PrintColors
// ()

void AShooterPlayerController::PrintColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.PrintColors");

	AShooterPlayerController_PrintColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.OnToggleInGameMenu
// ()

void AShooterPlayerController::OnToggleInGameMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.OnToggleInGameMenu");

	AShooterPlayerController_OnToggleInGameMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.OnServerRefreshSteamInventoryForRemoveFinished
// ()
// Parameters:
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       SteamID                        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::OnServerRefreshSteamInventoryForRemoveFinished(bool bSuccess, uint64_t SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.OnServerRefreshSteamInventoryForRemoveFinished");

	AShooterPlayerController_OnServerRefreshSteamInventoryForRemoveFinished_Params params;
	params.bSuccess = bSuccess;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.OnServerRefreshSteamInventoryFinished
// ()
// Parameters:
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       SteamID                        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::OnServerRefreshSteamInventoryFinished(bool bSuccess, uint64_t SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.OnServerRefreshSteamInventoryFinished");

	AShooterPlayerController_OnServerRefreshSteamInventoryFinished_Params params;
	params.bSuccess = bSuccess;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.OnServerRefreshCosmeticsSteamInventoryFinished
// ()
// Parameters:
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       SteamID                        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::OnServerRefreshCosmeticsSteamInventoryFinished(bool bSuccess, uint64_t SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.OnServerRefreshCosmeticsSteamInventoryFinished");

	AShooterPlayerController_OnServerRefreshCosmeticsSteamInventoryFinished_Params params;
	params.bSuccess = bSuccess;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.OnRefreshSteamInventoryToCheckConsumeFinished
// ()
// Parameters:
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       SteamID                        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::OnRefreshSteamInventoryToCheckConsumeFinished(bool bSuccess, uint64_t SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.OnRefreshSteamInventoryToCheckConsumeFinished");

	AShooterPlayerController_OnRefreshSteamInventoryToCheckConsumeFinished_Params params;
	params.bSuccess = bSuccess;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.OnRefreshSteamInventoryFinished
// ()
// Parameters:
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       SteamID                        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::OnRefreshSteamInventoryFinished(bool bSuccess, uint64_t SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.OnRefreshSteamInventoryFinished");

	AShooterPlayerController_OnRefreshSteamInventoryFinished_Params params;
	params.bSuccess = bSuccess;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.OnEnableSpectator
// ()

void AShooterPlayerController::OnEnableSpectator()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.OnEnableSpectator");

	AShooterPlayerController_OnEnableSpectator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.OnDisableSpectator
// ()

void AShooterPlayerController::OnDisableSpectator()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.OnDisableSpectator");

	AShooterPlayerController_OnDisableSpectator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.OnConsumeItemFinished
// ()
// Parameters:
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       SteamID                        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::OnConsumeItemFinished(bool bSuccess, uint64_t SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.OnConsumeItemFinished");

	AShooterPlayerController_OnConsumeItemFinished_Params params;
	params.bSuccess = bSuccess;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.OnAddItemFinished
// ()
// Parameters:
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<uint64_t>               SteamItemUserIDs               (Parm, ZeroConstructor)
// uint64_t                       SteamID                        (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       SteamDefID                     (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       AppID                          (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::OnAddItemFinished(bool bSuccess, TArray<uint64_t> SteamItemUserIDs, uint64_t SteamID, uint32_t SteamDefID, uint32_t AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.OnAddItemFinished");

	AShooterPlayerController_OnAddItemFinished_Params params;
	params.bSuccess = bSuccess;
	params.SteamItemUserIDs = SteamItemUserIDs;
	params.SteamID = SteamID;
	params.SteamDefID = SteamDefID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.NotifyTribeWarStatus
// ()
// Parameters:
// struct FString                 EnemyTribeString               (Parm, ZeroConstructor)
// int                            StatusType                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::NotifyTribeWarStatus(const struct FString& EnemyTribeString, int StatusType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.NotifyTribeWarStatus");

	AShooterPlayerController_NotifyTribeWarStatus_Params params;
	params.EnemyTribeString = EnemyTribeString;
	params.StatusType = StatusType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.LinkedPlayerIDString
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString AShooterPlayerController::LinkedPlayerIDString()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.LinkedPlayerIDString");

	AShooterPlayerController_LinkedPlayerIDString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerController.IsSpectator
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterPlayerController::IsSpectator()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.IsSpectator");

	AShooterPlayerController_IsSpectator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerController.IsHudVisible
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterPlayerController::IsHudVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.IsHudVisible");

	AShooterPlayerController_IsHudVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerController.InitCharacterPainting
// ()
// Parameters:
// class APrimalCharacter*        Char                           (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::InitCharacterPainting(class APrimalCharacter* Char)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.InitCharacterPainting");

	AShooterPlayerController_InitCharacterPainting_Params params;
	params.Char = Char;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.HideRiders
// ()
// Parameters:
// bool                           bDoHide                        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::HideRiders(bool bDoHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.HideRiders");

	AShooterPlayerController_HideRiders_Params params;
	params.bDoHide = bDoHide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.GiveSlotItemNum
// ()
// Parameters:
// int                            masterIndexNum                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            slotNum                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            quantityOverride               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterPlayerController::GiveSlotItemNum(int masterIndexNum, int slotNum, int quantityOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.GiveSlotItemNum");

	AShooterPlayerController_GiveSlotItemNum_Params params;
	params.masterIndexNum = masterIndexNum;
	params.slotNum = slotNum;
	params.quantityOverride = quantityOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerController.GiveSlotItem
// ()
// Parameters:
// struct FString                 blueprintPath                  (Parm, ZeroConstructor)
// int                            slotNum                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            quantityOverride               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterPlayerController::GiveSlotItem(const struct FString& blueprintPath, int slotNum, int quantityOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.GiveSlotItem");

	AShooterPlayerController_GiveSlotItem_Params params;
	params.blueprintPath = blueprintPath;
	params.slotNum = slotNum;
	params.quantityOverride = quantityOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerController.GiveColors
// ()
// Parameters:
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::GiveColors(int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.GiveColors");

	AShooterPlayerController_GiveColors_Params params;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.GetTribeID
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterPlayerController::GetTribeID()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.GetTribeID");

	AShooterPlayerController_GetTribeID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerController.GetSpectatorOrbitTarget
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* AShooterPlayerController::GetSpectatorOrbitTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.GetSpectatorOrbitTarget");

	AShooterPlayerController_GetSpectatorOrbitTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerController.GetSpectatorFirstPersonTarget
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* AShooterPlayerController::GetSpectatorFirstPersonTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.GetSpectatorFirstPersonTarget");

	AShooterPlayerController_GetSpectatorFirstPersonTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerController.GetPlayerCharacterName
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString AShooterPlayerController::GetPlayerCharacterName()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.GetPlayerCharacterName");

	AShooterPlayerController_GetPlayerCharacterName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerController.GetPlayerCharacter
// ()
// Parameters:
// class AShooterCharacter*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterCharacter* AShooterPlayerController::GetPlayerCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.GetPlayerCharacter");

	AShooterPlayerController_GetPlayerCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerController.GetLinkedPlayerID
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterPlayerController::GetLinkedPlayerID()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.GetLinkedPlayerID");

	AShooterPlayerController_GetLinkedPlayerID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerController.ForfeitMatch
// ()
// Parameters:
// bool                           AFK                            (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ForfeitMatch(bool AFK)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ForfeitMatch");

	AShooterPlayerController_ForfeitMatch_Params params;
	params.AFK = AFK;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.Forfeit
// ()

void AShooterPlayerController::Forfeit()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.Forfeit");

	AShooterPlayerController_Forfeit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.FlushLevelStreaming
// ()

void AShooterPlayerController::FlushLevelStreaming()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.FlushLevelStreaming");

	AShooterPlayerController_FlushLevelStreaming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.EnableSpectator
// ()

void AShooterPlayerController::EnableSpectator()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.EnableSpectator");

	AShooterPlayerController_EnableSpectator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.DoServerCheckUnfreeze
// ()

void AShooterPlayerController::DoServerCheckUnfreeze()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.DoServerCheckUnfreeze");

	AShooterPlayerController_DoServerCheckUnfreeze_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.DoCrash
// ()

void AShooterPlayerController::DoCrash()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.DoCrash");

	AShooterPlayerController_DoCrash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.DebugStructures
// ()

void AShooterPlayerController::DebugStructures()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.DebugStructures");

	AShooterPlayerController_DebugStructures_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientUsedActorItem
// ()
// Parameters:
// class UPrimalInventoryComponent* forInventory                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FItemNetID              ItemId                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientUsedActorItem(class UPrimalInventoryComponent* forInventory, const struct FItemNetID& ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientUsedActorItem");

	AShooterPlayerController_ClientUsedActorItem_Params params;
	params.forInventory = forInventory;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientUploadDino
// ()
// Parameters:
// class APrimalDinoCharacter*    DownloadedDino                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientUploadDino(class APrimalDinoCharacter* DownloadedDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientUploadDino");

	AShooterPlayerController_ClientUploadDino_Params params;
	params.DownloadedDino = DownloadedDino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientUpdateItemQuantity
// ()
// Parameters:
// class UPrimalInventoryComponent* forInventory                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FItemNetID              ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemQuantity                   (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientUpdateItemQuantity(class UPrimalInventoryComponent* forInventory, const struct FItemNetID& ItemId, int ItemQuantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientUpdateItemQuantity");

	AShooterPlayerController_ClientUpdateItemQuantity_Params params;
	params.forInventory = forInventory;
	params.ItemId = ItemId;
	params.ItemQuantity = ItemQuantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientUpdateItemDurability
// ()
// Parameters:
// class UPrimalInventoryComponent* forInventory                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FItemNetID              ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ItemDurability                 (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientUpdateItemDurability(class UPrimalInventoryComponent* forInventory, const struct FItemNetID& ItemId, float ItemDurability)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientUpdateItemDurability");

	AShooterPlayerController_ClientUpdateItemDurability_Params params;
	params.forInventory = forInventory;
	params.ItemId = ItemId;
	params.ItemDurability = ItemDurability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientUpdateInventoryCraftQueue
// ()
// Parameters:
// class UPrimalInventoryComponent* forInventory                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<struct FItemCraftQueueEntry> CraftQueueEntries              (ConstParm, Parm, ZeroConstructor)

void AShooterPlayerController::ClientUpdateInventoryCraftQueue(class UPrimalInventoryComponent* forInventory, TArray<struct FItemCraftQueueEntry> CraftQueueEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientUpdateInventoryCraftQueue");

	AShooterPlayerController_ClientUpdateInventoryCraftQueue_Params params;
	params.forInventory = forInventory;
	params.CraftQueueEntries = CraftQueueEntries;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientUpdateActorTransform
// ()
// Parameters:
// class AActor*                  forActor                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TheLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                TheRotation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TheVelocity                    (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientUpdateActorTransform(class AActor* forActor, const struct FVector& TheLocation, const struct FRotator& TheRotation, const struct FVector& TheVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientUpdateActorTransform");

	AShooterPlayerController_ClientUpdateActorTransform_Params params;
	params.forActor = forActor;
	params.TheLocation = TheLocation;
	params.TheRotation = TheRotation;
	params.TheVelocity = TheVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientUnlockAchievement
// ()
// Parameters:
// struct FString                 AchievementID                  (Parm, ZeroConstructor)

void AShooterPlayerController::ClientUnlockAchievement(const struct FString& AchievementID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientUnlockAchievement");

	AShooterPlayerController_ClientUnlockAchievement_Params params;
	params.AchievementID = AchievementID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientTeleportSpectator
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCanSpectateDeadPlayers        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSpectatingToLoc               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 camDir                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceDisableFirstPersonSpectator (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientTeleportSpectator(const struct FVector& Location, uint64_t PlayerId, bool bCanSpectateDeadPlayers, bool bSpectatingToLoc, const struct FVector& camDir, bool bForceDisableFirstPersonSpectator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientTeleportSpectator");

	AShooterPlayerController_ClientTeleportSpectator_Params params;
	params.Location = Location;
	params.PlayerId = PlayerId;
	params.bCanSpectateDeadPlayers = bCanSpectateDeadPlayers;
	params.bSpectatingToLoc = bSpectatingToLoc;
	params.camDir = camDir;
	params.bForceDisableFirstPersonSpectator = bForceDisableFirstPersonSpectator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientSwapActorItems
// ()
// Parameters:
// class UPrimalInventoryComponent* forInventory                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FItemNetID              ItemID1                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemNetID              ItemID2                        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientSwapActorItems(class UPrimalInventoryComponent* forInventory, const struct FItemNetID& ItemID1, const struct FItemNetID& ItemID2)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientSwapActorItems");

	AShooterPlayerController_ClientSwapActorItems_Params params;
	params.forInventory = forInventory;
	params.ItemID1 = ItemID1;
	params.ItemID2 = ItemID2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientStopAFKCountDown
// ()

void AShooterPlayerController::ClientStopAFKCountDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientStopAFKCountDown");

	AShooterPlayerController_ClientStopAFKCountDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientStartReceivingTribeLog
// ()

void AShooterPlayerController::ClientStartReceivingTribeLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientStartReceivingTribeLog");

	AShooterPlayerController_ClientStartReceivingTribeLog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientStartReceivingActorItems
// ()
// Parameters:
// class UPrimalInventoryComponent* forInventory                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bEquippedItems                 (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientStartReceivingActorItems(class UPrimalInventoryComponent* forInventory, bool bEquippedItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientStartReceivingActorItems");

	AShooterPlayerController_ClientStartReceivingActorItems_Params params;
	params.forInventory = forInventory;
	params.bEquippedItems = bEquippedItems;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientStartAFKCountDown
// ()
// Parameters:
// float                          CountDownTime                  (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientStartAFKCountDown(float CountDownTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientStartAFKCountDown");

	AShooterPlayerController_ClientStartAFKCountDown_Params params;
	params.CountDownTime = CountDownTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientShowSpawnUI
// ()
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientShowSpawnUI(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientShowSpawnUI");

	AShooterPlayerController_ClientShowSpawnUI_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientShowPaintingUI
// ()
// Parameters:
// class UObject*                 ObjectToPaint                  (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientShowPaintingUI(class UObject* ObjectToPaint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientShowPaintingUI");

	AShooterPlayerController_ClientShowPaintingUI_Params params;
	params.ObjectToPaint = ObjectToPaint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientShowCosmeticsRewardPopup
// ()
// Parameters:
// int                            SteamItemID                    (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientShowCosmeticsRewardPopup(int SteamItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientShowCosmeticsRewardPopup");

	AShooterPlayerController_ClientShowCosmeticsRewardPopup_Params params;
	params.SteamItemID = SteamItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientShowCharacterCreationUI
// ()

void AShooterPlayerController::ClientShowCharacterCreationUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientShowCharacterCreationUI");

	AShooterPlayerController_ClientShowCharacterCreationUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientServerSOTFNotificationCustom
// ()
// Parameters:
// struct FString                 MessageText                    (Parm, ZeroConstructor)
// struct FLinearColor            MessageColor                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          DisplayScale                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          DisplayTime                    (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              MessageIcon                    (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              SoundToPlay                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCanUseChatNotification        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientServerSOTFNotificationCustom(const struct FString& MessageText, const struct FLinearColor& MessageColor, float DisplayScale, float DisplayTime, class UTexture2D* MessageIcon, class USoundBase* SoundToPlay, bool bCanUseChatNotification)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientServerSOTFNotificationCustom");

	AShooterPlayerController_ClientServerSOTFNotificationCustom_Params params;
	params.MessageText = MessageText;
	params.MessageColor = MessageColor;
	params.DisplayScale = DisplayScale;
	params.DisplayTime = DisplayTime;
	params.MessageIcon = MessageIcon;
	params.SoundToPlay = SoundToPlay;
	params.bCanUseChatNotification = bCanUseChatNotification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientServerSOTFNotification
// ()
// Parameters:
// TEnumAsByte<ESTOFNotificationType> NotificationType               (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MessageText                    (Parm, ZeroConstructor)
// struct FLinearColor            MessageColor                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          DisplayScale                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          DisplayTime                    (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              MessageIcon                    (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              SoundToPlay                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLastPlayer                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 TribeName                      (Parm, ZeroConstructor)
// int                            TribeID                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         PlayerNames                    (ConstParm, Parm, ZeroConstructor)
// struct FString                 DeathReason                    (Parm, ZeroConstructor)
// TArray<struct FPrimalPlayerCharacterConfigStructReplicated> DeadPlayersData                (ConstParm, Parm, ZeroConstructor)
// bool                           bCanUseChatNotification        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceScreenMessage            (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientServerSOTFNotification(TEnumAsByte<ESTOFNotificationType> NotificationType, const struct FString& MessageText, const struct FLinearColor& MessageColor, float DisplayScale, float DisplayTime, class UTexture2D* MessageIcon, class USoundBase* SoundToPlay, bool bLastPlayer, const struct FString& TribeName, int TribeID, TArray<struct FString> PlayerNames, const struct FString& DeathReason, TArray<struct FPrimalPlayerCharacterConfigStructReplicated> DeadPlayersData, bool bCanUseChatNotification, bool bForceScreenMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientServerSOTFNotification");

	AShooterPlayerController_ClientServerSOTFNotification_Params params;
	params.NotificationType = NotificationType;
	params.MessageText = MessageText;
	params.MessageColor = MessageColor;
	params.DisplayScale = DisplayScale;
	params.DisplayTime = DisplayTime;
	params.MessageIcon = MessageIcon;
	params.SoundToPlay = SoundToPlay;
	params.bLastPlayer = bLastPlayer;
	params.TribeName = TribeName;
	params.TribeID = TribeID;
	params.PlayerNames = PlayerNames;
	params.DeathReason = DeathReason;
	params.DeadPlayersData = DeadPlayersData;
	params.bCanUseChatNotification = bCanUseChatNotification;
	params.bForceScreenMessage = bForceScreenMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientServerNotificationSingle
// ()
// Parameters:
// struct FString                 MessageText                    (Parm, ZeroConstructor)
// struct FLinearColor            MessageColor                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          DisplayScale                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          DisplayTime                    (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              MessageIcon                    (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              SoundToPlay                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            MessageTypeID                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCanUseChatNotification        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientServerNotificationSingle(const struct FString& MessageText, const struct FLinearColor& MessageColor, float DisplayScale, float DisplayTime, class UTexture2D* MessageIcon, class USoundBase* SoundToPlay, int MessageTypeID, bool bCanUseChatNotification)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientServerNotificationSingle");

	AShooterPlayerController_ClientServerNotificationSingle_Params params;
	params.MessageText = MessageText;
	params.MessageColor = MessageColor;
	params.DisplayScale = DisplayScale;
	params.DisplayTime = DisplayTime;
	params.MessageIcon = MessageIcon;
	params.SoundToPlay = SoundToPlay;
	params.MessageTypeID = MessageTypeID;
	params.bCanUseChatNotification = bCanUseChatNotification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientServerNotification
// ()
// Parameters:
// struct FString                 MessageText                    (Parm, ZeroConstructor)
// struct FLinearColor            MessageColor                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          DisplayScale                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          DisplayTime                    (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              MessageIcon                    (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              SoundToPlay                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCanUseChatNotification        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientServerNotification(const struct FString& MessageText, const struct FLinearColor& MessageColor, float DisplayScale, float DisplayTime, class UTexture2D* MessageIcon, class USoundBase* SoundToPlay, bool bCanUseChatNotification)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientServerNotification");

	AShooterPlayerController_ClientServerNotification_Params params;
	params.MessageText = MessageText;
	params.MessageColor = MessageColor;
	params.DisplayScale = DisplayScale;
	params.DisplayTime = DisplayTime;
	params.MessageIcon = MessageIcon;
	params.SoundToPlay = SoundToPlay;
	params.bCanUseChatNotification = bCanUseChatNotification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientServerChatMessage
// ()
// Parameters:
// struct FString                 MessageText                    (Parm, ZeroConstructor)
// struct FLinearColor            MessageColor                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsBold                        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientServerChatMessage(const struct FString& MessageText, const struct FLinearColor& MessageColor, bool bIsBold)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientServerChatMessage");

	AShooterPlayerController_ClientServerChatMessage_Params params;
	params.MessageText = MessageText;
	params.MessageColor = MessageColor;
	params.bIsBold = bIsBold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientServerChatDirectMessage
// ()
// Parameters:
// struct FString                 MessageText                    (Parm, ZeroConstructor)
// struct FLinearColor            MessageColor                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsBold                        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientServerChatDirectMessage(const struct FString& MessageText, const struct FLinearColor& MessageColor, bool bIsBold)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientServerChatDirectMessage");

	AShooterPlayerController_ClientServerChatDirectMessage_Params params;
	params.MessageText = MessageText;
	params.MessageColor = MessageColor;
	params.bIsBold = bIsBold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientSendFolderData
// ()
// Parameters:
// class UPrimalInventoryComponent* forInventory                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<struct FServerCustomFolder> ServerCustomFolder             (ConstParm, Parm, ZeroConstructor)

void AShooterPlayerController::ClientSendFolderData(class UPrimalInventoryComponent* forInventory, TArray<struct FServerCustomFolder> ServerCustomFolder)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientSendFolderData");

	AShooterPlayerController_ClientSendFolderData_Params params;
	params.forInventory = forInventory;
	params.ServerCustomFolder = ServerCustomFolder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientSendArkDataPayloadEnd
// ()
// Parameters:
// struct FGuid                   ID                             (Parm, ZeroConstructor)
// TEnumAsByte<EPrimalARKTributeDataType> ArkDataType                    (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientSendArkDataPayloadEnd(const struct FGuid& ID, TEnumAsByte<EPrimalARKTributeDataType> ArkDataType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientSendArkDataPayloadEnd");

	AShooterPlayerController_ClientSendArkDataPayloadEnd_Params params;
	params.ID = ID;
	params.ArkDataType = ArkDataType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientSendArkDataPayloadBegin
// ()
// Parameters:
// struct FGuid                   ID                             (Parm, ZeroConstructor)
// TEnumAsByte<EPrimalARKTributeDataType> ArkDataType                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DataClass                      (Parm, ZeroConstructor)
// struct FString                 TagName                        (Parm, ZeroConstructor)
// struct FString                 Name                           (Parm, ZeroConstructor)
// TArray<struct FString>         DataStats                      (ConstParm, Parm, ZeroConstructor)
// uint32_t                       ID1                            (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       ID2                            (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientSendArkDataPayloadBegin(const struct FGuid& ID, TEnumAsByte<EPrimalARKTributeDataType> ArkDataType, const struct FString& DataClass, const struct FString& TagName, const struct FString& Name, TArray<struct FString> DataStats, uint32_t ID1, uint32_t ID2)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientSendArkDataPayloadBegin");

	AShooterPlayerController_ClientSendArkDataPayloadBegin_Params params;
	params.ID = ID;
	params.ArkDataType = ArkDataType;
	params.DataClass = DataClass;
	params.TagName = TagName;
	params.Name = Name;
	params.DataStats = DataStats;
	params.ID1 = ID1;
	params.ID2 = ID2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientSendArkDataPayload
// ()
// Parameters:
// struct FGuid                   ID                             (Parm, ZeroConstructor)
// TEnumAsByte<EPrimalARKTributeDataType> ArkDataType                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          DataBytes                      (ConstParm, Parm, ZeroConstructor)

void AShooterPlayerController::ClientSendArkDataPayload(const struct FGuid& ID, TEnumAsByte<EPrimalARKTributeDataType> ArkDataType, TArray<unsigned char> DataBytes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientSendArkDataPayload");

	AShooterPlayerController_ClientSendArkDataPayload_Params params;
	params.ID = ID;
	params.ArkDataType = ArkDataType;
	params.DataBytes = DataBytes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientResetLastPartyData
// ()

void AShooterPlayerController::ClientResetLastPartyData()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientResetLastPartyData");

	AShooterPlayerController_ClientResetLastPartyData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientRemoveItemFromSteamInventory
// ()
// Parameters:
// TArray<uint64_t>               ItemSteamUserID                (ConstParm, Parm, ZeroConstructor)
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientRemoveItemFromSteamInventory(TArray<uint64_t> ItemSteamUserID, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientRemoveItemFromSteamInventory");

	AShooterPlayerController_ClientRemoveItemFromSteamInventory_Params params;
	params.ItemSteamUserID = ItemSteamUserID;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientRemoveItemFromArk
// ()
// Parameters:
// class UPrimalInventoryComponent* forInventory                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FItemNetID              RemovedItemID                  (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientRemoveItemFromArk(class UPrimalInventoryComponent* forInventory, const struct FItemNetID& RemovedItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientRemoveItemFromArk");

	AShooterPlayerController_ClientRemoveItemFromArk_Params params;
	params.forInventory = forInventory;
	params.RemovedItemID = RemovedItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientRemoveActorItem
// ()
// Parameters:
// class UPrimalInventoryComponent* forInventory                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FItemNetID              ItemId                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientRemoveActorItem(class UPrimalInventoryComponent* forInventory, const struct FItemNetID& ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientRemoveActorItem");

	AShooterPlayerController_ClientRemoveActorItem_Params params;
	params.forInventory = forInventory;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientRefreshSteamInventoryFinished
// ()
// Parameters:
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientRefreshSteamInventoryFinished(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientRefreshSteamInventoryFinished");

	AShooterPlayerController_ClientRefreshSteamInventoryFinished_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientReceiveTribeLog
// ()
// Parameters:
// struct FString                 LogString                      (Parm, ZeroConstructor)

void AShooterPlayerController::ClientReceiveTribeLog(const struct FString& LogString)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientReceiveTribeLog");

	AShooterPlayerController_ClientReceiveTribeLog_Params params;
	params.LogString = LogString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientPlayLocalSound
// ()
// Parameters:
// class USoundBase*              aSound                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientPlayLocalSound(class USoundBase* aSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientPlayLocalSound");

	AShooterPlayerController_ClientPlayLocalSound_Params params;
	params.aSound = aSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientPlayHitMarkerStructureAlly
// ()

void AShooterPlayerController::ClientPlayHitMarkerStructureAlly()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientPlayHitMarkerStructureAlly");

	AShooterPlayerController_ClientPlayHitMarkerStructureAlly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientPlayHitMarkerStructure
// ()

void AShooterPlayerController::ClientPlayHitMarkerStructure()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientPlayHitMarkerStructure");

	AShooterPlayerController_ClientPlayHitMarkerStructure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientPlayHitMarkerDinoAlly
// ()

void AShooterPlayerController::ClientPlayHitMarkerDinoAlly()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientPlayHitMarkerDinoAlly");

	AShooterPlayerController_ClientPlayHitMarkerDinoAlly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientPlayHitMarkerDino
// ()

void AShooterPlayerController::ClientPlayHitMarkerDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientPlayHitMarkerDino");

	AShooterPlayerController_ClientPlayHitMarkerDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientPlayHitMarkerCharacterAlly
// ()

void AShooterPlayerController::ClientPlayHitMarkerCharacterAlly()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientPlayHitMarkerCharacterAlly");

	AShooterPlayerController_ClientPlayHitMarkerCharacterAlly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientPlayHitMarkerCharacter
// ()

void AShooterPlayerController::ClientPlayHitMarkerCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientPlayHitMarkerCharacter");

	AShooterPlayerController_ClientPlayHitMarkerCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientOpenMainMenu
// ()

void AShooterPlayerController::ClientOpenMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientOpenMainMenu");

	AShooterPlayerController_ClientOpenMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientNotifyTribeXP
// ()
// Parameters:
// float                          HowMuch                        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientNotifyTribeXP(float HowMuch)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientNotifyTribeXP");

	AShooterPlayerController_ClientNotifyTribeXP_Params params;
	params.HowMuch = HowMuch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientNotifyTorpidityIncrease
// ()

void AShooterPlayerController::ClientNotifyTorpidityIncrease()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientNotifyTorpidityIncrease");

	AShooterPlayerController_ClientNotifyTorpidityIncrease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientNotifyTamedDino
// ()
// Parameters:
// class UClass*                  DinoClass                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientNotifyTamedDino(class UClass* DinoClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientNotifyTamedDino");

	AShooterPlayerController_ClientNotifyTamedDino_Params params;
	params.DinoClass = DinoClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientNotifySummonedDino
// ()
// Parameters:
// class UClass*                  DinoClass                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientNotifySummonedDino(class UClass* DinoClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientNotifySummonedDino");

	AShooterPlayerController_ClientNotifySummonedDino_Params params;
	params.DinoClass = DinoClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientNotifyRemotePlayerDeath
// ()
// Parameters:
// struct FString                 PlayerName                     (Parm, ZeroConstructor)
// struct FString                 AttackerName                   (Parm, ZeroConstructor)

void AShooterPlayerController::ClientNotifyRemotePlayerDeath(const struct FString& PlayerName, const struct FString& AttackerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientNotifyRemotePlayerDeath");

	AShooterPlayerController_ClientNotifyRemotePlayerDeath_Params params;
	params.PlayerName = PlayerName;
	params.AttackerName = AttackerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientNotifyPlayerKill
// ()
// Parameters:
// class AShooterCharacter*       PlayerPawn                     (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   VictimPawn                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientNotifyPlayerKill(class AShooterCharacter* PlayerPawn, class APawn* VictimPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientNotifyPlayerKill");

	AShooterPlayerController_ClientNotifyPlayerKill_Params params;
	params.PlayerPawn = PlayerPawn;
	params.VictimPawn = VictimPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientNotifyPlayerDeathReason
// ()
// Parameters:
// struct FString                 ReasonString                   (Parm, ZeroConstructor)

void AShooterPlayerController::ClientNotifyPlayerDeathReason(const struct FString& ReasonString)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientNotifyPlayerDeathReason");

	AShooterPlayerController_ClientNotifyPlayerDeathReason_Params params;
	params.ReasonString = ReasonString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientNotifyPlayerDeath
// ()
// Parameters:
// class APawn*                   InstigatingPawn                (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientNotifyPlayerDeath(class APawn* InstigatingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientNotifyPlayerDeath");

	AShooterPlayerController_ClientNotifyPlayerDeath_Params params;
	params.InstigatingPawn = InstigatingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientNotifyPaintFinished
// ()
// Parameters:
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientNotifyPaintFinished(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientNotifyPaintFinished");

	AShooterPlayerController_ClientNotifyPaintFinished_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientNotifyMessageOfTheDay
// ()
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)
// float                          timeToDisplay                  (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientNotifyMessageOfTheDay(const struct FString& Message, float timeToDisplay)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientNotifyMessageOfTheDay");

	AShooterPlayerController_ClientNotifyMessageOfTheDay_Params params;
	params.Message = Message;
	params.timeToDisplay = timeToDisplay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientNotifyListenServerOutOfRange
// ()

void AShooterPlayerController::ClientNotifyListenServerOutOfRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientNotifyListenServerOutOfRange");

	AShooterPlayerController_ClientNotifyListenServerOutOfRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientNotifyLevelUp
// ()
// Parameters:
// class APrimalCharacter*        ForChar                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewLevel                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientNotifyLevelUp(class APrimalCharacter* ForChar, int NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientNotifyLevelUp");

	AShooterPlayerController_ClientNotifyLevelUp_Params params;
	params.ForChar = ForChar;
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientNotifyHitHarvest
// ()

void AShooterPlayerController::ClientNotifyHitHarvest()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientNotifyHitHarvest");

	AShooterPlayerController_ClientNotifyHitHarvest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientNotifyEditText
// ()
// Parameters:
// class UClass*                  ForObjectClass                 (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       ExtraID1                       (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       ExtraID2                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ForObject                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientNotifyEditText(class UClass* ForObjectClass, uint32_t ExtraID1, uint32_t ExtraID2, class UObject* ForObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientNotifyEditText");

	AShooterPlayerController_ClientNotifyEditText_Params params;
	params.ForObjectClass = ForObjectClass;
	params.ExtraID1 = ExtraID1;
	params.ExtraID2 = ExtraID2;
	params.ForObject = ForObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientNotifyDinoKill
// ()
// Parameters:
// class APrimalDinoCharacter*    InstigatingPawn                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   VictimPawn                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientNotifyDinoKill(class APrimalDinoCharacter* InstigatingPawn, class APawn* VictimPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientNotifyDinoKill");

	AShooterPlayerController_ClientNotifyDinoKill_Params params;
	params.InstigatingPawn = InstigatingPawn;
	params.VictimPawn = VictimPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientNotifyDinoDeath
// ()
// Parameters:
// struct FString                 DinoName                       (Parm, ZeroConstructor)
// struct FString                 AttackerName                   (Parm, ZeroConstructor)
// bool                           bIsVehicle                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientNotifyDinoDeath(const struct FString& DinoName, const struct FString& AttackerName, bool bIsVehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientNotifyDinoDeath");

	AShooterPlayerController_ClientNotifyDinoDeath_Params params;
	params.DinoName = DinoName;
	params.AttackerName = AttackerName;
	params.bIsVehicle = bIsVehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientNotifyDefeatedDino
// ()
// Parameters:
// class UClass*                  DinoClass                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientNotifyDefeatedDino(class UClass* DinoClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientNotifyDefeatedDino");

	AShooterPlayerController_ClientNotifyDefeatedDino_Params params;
	params.DinoClass = DinoClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientNotifyCantHitHarvest
// ()

void AShooterPlayerController::ClientNotifyCantHitHarvest()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientNotifyCantHitHarvest");

	AShooterPlayerController_ClientNotifyCantHitHarvest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientNotifyCantHarvest
// ()

void AShooterPlayerController::ClientNotifyCantHarvest()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientNotifyCantHarvest");

	AShooterPlayerController_ClientNotifyCantHarvest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientNotifyAdmin
// ()

void AShooterPlayerController::ClientNotifyAdmin()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientNotifyAdmin");

	AShooterPlayerController_ClientNotifyAdmin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientLoadArkItems
// ()
// Parameters:
// class UPrimalInventoryComponent* forInventory                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<struct FItemNetInfo>    itemInfos                      (ConstParm, Parm, ZeroConstructor)

void AShooterPlayerController::ClientLoadArkItems(class UPrimalInventoryComponent* forInventory, TArray<struct FItemNetInfo> itemInfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientLoadArkItems");

	AShooterPlayerController_ClientLoadArkItems_Params params;
	params.forInventory = forInventory;
	params.itemInfos = itemInfos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientInsertActorItem
// ()
// Parameters:
// class UPrimalInventoryComponent* forInventory                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FItemNetInfo            itemInfo                       (Parm)
// struct FItemNetID              InsertAfterItemID              (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientInsertActorItem(class UPrimalInventoryComponent* forInventory, const struct FItemNetInfo& itemInfo, const struct FItemNetID& InsertAfterItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientInsertActorItem");

	AShooterPlayerController_ClientInsertActorItem_Params params;
	params.forInventory = forInventory;
	params.itemInfo = itemInfo;
	params.InsertAfterItemID = InsertAfterItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientHandleCosmeticsItems
// ()
// Parameters:
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FItemNetInfo>    itemsInfo                      (ConstParm, Parm, ZeroConstructor)
// bool                           GiveCosmetics                  (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientHandleCosmeticsItems(bool bSuccess, TArray<struct FItemNetInfo> itemsInfo, bool GiveCosmetics)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientHandleCosmeticsItems");

	AShooterPlayerController_ClientHandleCosmeticsItems_Params params;
	params.bSuccess = bSuccess;
	params.itemsInfo = itemsInfo;
	params.GiveCosmetics = GiveCosmetics;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientGetMessageOfTheDay
// ()
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void AShooterPlayerController::ClientGetMessageOfTheDay(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientGetMessageOfTheDay");

	AShooterPlayerController_ClientGetMessageOfTheDay_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientFinishedReceivingActorItems
// ()
// Parameters:
// class UPrimalInventoryComponent* forInventory                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bEquippedItems                 (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientFinishedReceivingActorItems(class UPrimalInventoryComponent* forInventory, bool bEquippedItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientFinishedReceivingActorItems");

	AShooterPlayerController_ClientFinishedReceivingActorItems_Params params;
	params.forInventory = forInventory;
	params.bEquippedItems = bEquippedItems;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientFinishedLoadArkItems
// ()
// Parameters:
// class UPrimalInventoryComponent* forInventory                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AShooterPlayerController::ClientFinishedLoadArkItems(class UPrimalInventoryComponent* forInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientFinishedLoadArkItems");

	AShooterPlayerController_ClientFinishedLoadArkItems_Params params;
	params.forInventory = forInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientFailedRemoveSaddle
// ()

void AShooterPlayerController::ClientFailedRemoveSaddle()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientFailedRemoveSaddle");

	AShooterPlayerController_ClientFailedRemoveSaddle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientEndReceivingTribeLog
// ()

void AShooterPlayerController::ClientEndReceivingTribeLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientEndReceivingTribeLog");

	AShooterPlayerController_ClientEndReceivingTribeLog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientDoMultiUse
// ()
// Parameters:
// class UObject*                 ForObject                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientDoMultiUse(class UObject* ForObject, int UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientDoMultiUse");

	AShooterPlayerController_ClientDoMultiUse_Params params;
	params.ForObject = ForObject;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientCycleToClosestEnemies
// ()
// Parameters:
// struct FVector                 NewLoc                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 camDir                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientCycleToClosestEnemies(const struct FVector& NewLoc, const struct FVector& camDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientCycleToClosestEnemies");

	AShooterPlayerController_ClientCycleToClosestEnemies_Params params;
	params.NewLoc = NewLoc;
	params.camDir = camDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientCollectedAchievementItem
// ()
// Parameters:
// class UClass*                  ItemClass                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientCollectedAchievementItem(class UClass* ItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientCollectedAchievementItem");

	AShooterPlayerController_ClientCollectedAchievementItem_Params params;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientChatMessage
// ()
// Parameters:
// struct FChatMessage            Chat                           (Parm)

void AShooterPlayerController::ClientChatMessage(const struct FChatMessage& Chat)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientChatMessage");

	AShooterPlayerController_ClientChatMessage_Params params;
	params.Chat = Chat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientAddItemToArk
// ()
// Parameters:
// class UPrimalInventoryComponent* forInventory                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FItemNetInfo            itemInfo                       (Parm)
// bool                           bFromLoad                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientAddItemToArk(class UPrimalInventoryComponent* forInventory, const struct FItemNetInfo& itemInfo, bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientAddItemToArk");

	AShooterPlayerController_ClientAddItemToArk_Params params;
	params.forInventory = forInventory;
	params.itemInfo = itemInfo;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientAddFolderToInventoryComponent
// ()
// Parameters:
// class UPrimalInventoryComponent* forInventory                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 NewCustomFolderName            (Parm, ZeroConstructor)
// int                            InventoryCompType              (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientAddFolderToInventoryComponent(class UPrimalInventoryComponent* forInventory, const struct FString& NewCustomFolderName, int InventoryCompType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientAddFolderToInventoryComponent");

	AShooterPlayerController_ClientAddFolderToInventoryComponent_Params params;
	params.forInventory = forInventory;
	params.NewCustomFolderName = NewCustomFolderName;
	params.InventoryCompType = InventoryCompType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientAddFloatingText
// ()
// Parameters:
// struct FVector_NetQuantize     AtLocation                     (Parm)
// struct FString                 FloatingTextString             (Parm, ZeroConstructor)
// struct FColor                  FloatingTextColor              (Parm, ZeroConstructor, IsPlainOldData)
// float                          ScaleX                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ScaleY                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          TextLifeSpan                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TextVelocity                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinScale                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeInTime                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeOutTime                    (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientAddFloatingText(const struct FVector_NetQuantize& AtLocation, const struct FString& FloatingTextString, const struct FColor& FloatingTextColor, float ScaleX, float ScaleY, float TextLifeSpan, const struct FVector& TextVelocity, float MinScale, float FadeInTime, float FadeOutTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientAddFloatingText");

	AShooterPlayerController_ClientAddFloatingText_Params params;
	params.AtLocation = AtLocation;
	params.FloatingTextString = FloatingTextString;
	params.FloatingTextColor = FloatingTextColor;
	params.ScaleX = ScaleX;
	params.ScaleY = ScaleY;
	params.TextLifeSpan = TextLifeSpan;
	params.TextVelocity = TextVelocity;
	params.MinScale = MinScale;
	params.FadeInTime = FadeInTime;
	params.FadeOutTime = FadeOutTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientAddFloatingDamageText
// ()
// Parameters:
// struct FVector_NetQuantize     AtLocation                     (Parm)
// int                            DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            FromTeamID                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientAddFloatingDamageText(const struct FVector_NetQuantize& AtLocation, int DamageAmount, int FromTeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientAddFloatingDamageText");

	AShooterPlayerController_ClientAddFloatingDamageText_Params params;
	params.AtLocation = AtLocation;
	params.DamageAmount = DamageAmount;
	params.FromTeamID = FromTeamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientAddEntryToCombatLogBox
// ()
// Parameters:
// struct FString                 DamageString                   (Parm, ZeroConstructor)
// class UTexture2D*              DamageIcon                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESoTFDamageType>   DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       DamagedPlayerID                (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientAddEntryToCombatLogBox(const struct FString& DamageString, class UTexture2D* DamageIcon, TEnumAsByte<ESoTFDamageType> DamageType, uint64_t DamagedPlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientAddEntryToCombatLogBox");

	AShooterPlayerController_ClientAddEntryToCombatLogBox_Params params;
	params.DamageString = DamageString;
	params.DamageIcon = DamageIcon;
	params.DamageType = DamageType;
	params.DamagedPlayerID = DamagedPlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientAddActorItem
// ()
// Parameters:
// class UPrimalInventoryComponent* forInventory                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FItemNetInfo            itemInfo                       (Parm)
// bool                           bEquipItem                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientAddActorItem(class UPrimalInventoryComponent* forInventory, const struct FItemNetInfo& itemInfo, bool bEquipItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientAddActorItem");

	AShooterPlayerController_ClientAddActorItem_Params params;
	params.forInventory = forInventory;
	params.itemInfo = itemInfo;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.CheckRequestSpectator
// ()
// Parameters:
// struct FString                 InSpectatorPass                (Parm, ZeroConstructor)

void AShooterPlayerController::CheckRequestSpectator(const struct FString& InSpectatorPass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.CheckRequestSpectator");

	AShooterPlayerController_CheckRequestSpectator_Params params;
	params.InSpectatorPass = InSpectatorPass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.CheckForPlayerInventory
// ()

void AShooterPlayerController::CheckForPlayerInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.CheckForPlayerInventory");

	AShooterPlayerController_CheckForPlayerInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.CheckforOrbiting
// ()

void AShooterPlayerController::CheckforOrbiting()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.CheckforOrbiting");

	AShooterPlayerController_CheckforOrbiting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.CheckCheatsPassword
// ()
// Parameters:
// struct FString                 pass                           (Parm, ZeroConstructor)

void AShooterPlayerController::CheckCheatsPassword(const struct FString& pass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.CheckCheatsPassword");

	AShooterPlayerController_CheckCheatsPassword_Params params;
	params.pass = pass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.Cheat
// ()
// Parameters:
// struct FString                 Msg                            (Parm, ZeroConstructor)

void AShooterPlayerController::Cheat(const struct FString& Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.Cheat");

	AShooterPlayerController_Cheat_Params params;
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.AutoCycle
// ()
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::AutoCycle(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.AutoCycle");

	AShooterPlayerController_AutoCycle_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.AllowTribeGroupPermission
// ()
// Parameters:
// TEnumAsByte<ETribeGroupPermission> TribeGroupPermission           (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 OnObject                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterPlayerController::AllowTribeGroupPermission(TEnumAsByte<ETribeGroupPermission> TribeGroupPermission, class UObject* OnObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.AllowTribeGroupPermission");

	AShooterPlayerController_AllowTribeGroupPermission_Params params;
	params.TribeGroupPermission = TribeGroupPermission;
	params.OnObject = OnObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerController.AdminCheat
// ()
// Parameters:
// struct FString                 Msg                            (Parm, ZeroConstructor)

void AShooterPlayerController::AdminCheat(const struct FString& Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.AdminCheat");

	AShooterPlayerController_AdminCheat_Params params;
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.BiomeZoneVolume.OnEndOverlap
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void ABiomeZoneVolume::OnEndOverlap(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.BiomeZoneVolume.OnEndOverlap");

	ABiomeZoneVolume_OnEndOverlap_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.BiomeZoneVolume.OnBeginOverlap
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void ABiomeZoneVolume::OnBeginOverlap(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.BiomeZoneVolume.OnBeginOverlap");

	ABiomeZoneVolume_OnBeginOverlap_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.BiomeZoneVolume.IsPointUnderwater
// ()
// Parameters:
// class UWorld*                  ForWorld                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AtPoint                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFastPath                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinimumWaterHeight             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABiomeZoneVolume::IsPointUnderwater(class UWorld* ForWorld, const struct FVector& AtPoint, bool bFastPath, float MinimumWaterHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.BiomeZoneVolume.IsPointUnderwater");

	ABiomeZoneVolume_IsPointUnderwater_Params params;
	params.ForWorld = ForWorld;
	params.AtPoint = AtPoint;
	params.bFastPath = bFastPath;
	params.MinimumWaterHeight = MinimumWaterHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.BiomeZoneVolume.GetBiomeZoneVolume
// ()
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class ABiomeZoneVolume*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABiomeZoneVolume* ABiomeZoneVolume::GetBiomeZoneVolume(class UWorld* World, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.BiomeZoneVolume.GetBiomeZoneVolume");

	ABiomeZoneVolume_GetBiomeZoneVolume_Params params;
	params.World = World;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomActorList.DestroyActors
// ()

void ACustomActorList::DestroyActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomActorList.DestroyActors");

	ACustomActorList_DestroyActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.CustomCanvasWidget.OnDraggedClickedEventObject__DelegateSignature
// ()
// Parameters:
// class UWidget*                 draggeddWidget                 (Parm, ZeroConstructor, IsPlainOldData)

void UCustomCanvasWidget::OnDraggedClickedEventObject__DelegateSignature(class UWidget* draggeddWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomCanvasWidget.OnDraggedClickedEventObject__DelegateSignature");

	UCustomCanvasWidget_OnDraggedClickedEventObject__DelegateSignature_Params params;
	params.draggeddWidget = draggeddWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.DataListEntryButton.ClickedButton
// ()
// Parameters:
// class UWidget*                 clickedWidget                  (Parm, ZeroConstructor, IsPlainOldData)

void UDataListEntryButton::ClickedButton(class UWidget* clickedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.DataListEntryButton.ClickedButton");

	UDataListEntryButton_ClickedButton_Params params;
	params.clickedWidget = clickedWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.DamageVolumeBase.OnEndOverlap
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void ADamageVolumeBase::OnEndOverlap(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.DamageVolumeBase.OnEndOverlap");

	ADamageVolumeBase_OnEndOverlap_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.DamageVolumeBase.OnBeginOverlap
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void ADamageVolumeBase::OnBeginOverlap(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.DamageVolumeBase.OnBeginOverlap");

	ADamageVolumeBase_OnBeginOverlap_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.DataListEntryWidget.OnDraggedClickedEventObject
// ()
// Parameters:
// class UWidget*                 draggeddWidget                 (Parm, ZeroConstructor, IsPlainOldData)

void UDataListEntryWidget::OnDraggedClickedEventObject(class UWidget* draggeddWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.DataListEntryWidget.OnDraggedClickedEventObject");

	UDataListEntryWidget_OnDraggedClickedEventObject_Params params;
	params.draggeddWidget = draggeddWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.DataListEntryWidget.InitializeMeDefaults
// ()

void UDataListEntryWidget::InitializeMeDefaults()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.DataListEntryWidget.InitializeMeDefaults");

	UDataListEntryWidget_InitializeMeDefaults_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.DataListEntryWidget.GetDataListButton
// ()
// Parameters:
// class UDataListEntryButton*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDataListEntryButton* UDataListEntryWidget::GetDataListButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.DataListEntryWidget.GetDataListButton");

	UDataListEntryWidget_GetDataListButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.DayCycleManager.IsDaytime
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADayCycleManager::IsDaytime()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.DayCycleManager.IsDaytime");

	ADayCycleManager_IsDaytime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.DestroyedMeshActor.SetNoCollisionProfile
// ()

void ADestroyedMeshActor::SetNoCollisionProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.DestroyedMeshActor.SetNoCollisionProfile");

	ADestroyedMeshActor_SetNoCollisionProfile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.DroppedItem.ForceSleep
// ()

void ADroppedItem::ForceSleep()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.DroppedItem.ForceSleep");

	ADroppedItem_ForceSleep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.DroppedItemEgg.NetSpawnDinoEmitter
// ()

void ADroppedItemEgg::NetSpawnDinoEmitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.DroppedItemEgg.NetSpawnDinoEmitter");

	ADroppedItemEgg_NetSpawnDinoEmitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.DroppedItemTorch.OnRep_FireIsOn
// ()

void ADroppedItemTorch::OnRep_FireIsOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.DroppedItemTorch.OnRep_FireIsOn");

	ADroppedItemTorch_OnRep_FireIsOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.FadingDestructibleActor.SetupFade
// ()

void AFadingDestructibleActor::SetupFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.FadingDestructibleActor.SetupFade");

	AFadingDestructibleActor_SetupFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.NPCZoneManager.StaticSpawnNPCs
// ()
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// class ANPCZoneManager*         AtZoneManager                  (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  TheNPCSpawnEntries             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AtSpawnPoint                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                AtRotation                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            UseSpawnVolumeIndex            (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class APrimalDinoCharacter*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class APrimalDinoCharacter*> ANPCZoneManager::StaticSpawnNPCs(class UObject* WorldContext, class ANPCZoneManager* AtZoneManager, class UClass* TheNPCSpawnEntries, const struct FVector& AtSpawnPoint, const struct FRotator& AtRotation, int UseSpawnVolumeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.NPCZoneManager.StaticSpawnNPCs");

	ANPCZoneManager_StaticSpawnNPCs_Params params;
	params.WorldContext = WorldContext;
	params.AtZoneManager = AtZoneManager;
	params.TheNPCSpawnEntries = TheNPCSpawnEntries;
	params.AtSpawnPoint = AtSpawnPoint;
	params.AtRotation = AtRotation;
	params.UseSpawnVolumeIndex = UseSpawnVolumeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.NPCZoneVolume.OnEndOverlap
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void ANPCZoneVolume::OnEndOverlap(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.NPCZoneVolume.OnEndOverlap");

	ANPCZoneVolume_OnEndOverlap_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.NPCZoneVolume.OnBeginOverlap
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void ANPCZoneVolume::OnBeginOverlap(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.NPCZoneVolume.OnBeginOverlap");

	ANPCZoneVolume_OnBeginOverlap_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PaintingStreamingComponent.ServerSendNextChunk
// ()
// Parameters:
// class UStructurePaintingComponent* PaintingComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPaintingStreamingComponent::ServerSendNextChunk(class UStructurePaintingComponent* PaintingComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PaintingStreamingComponent.ServerSendNextChunk");

	UPaintingStreamingComponent_ServerSendNextChunk_Params params;
	params.PaintingComponent = PaintingComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PaintingStreamingComponent.ServerRequestPaintingStream
// ()
// Parameters:
// class UStructurePaintingComponent* PaintingComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPaintingStreamingComponent::ServerRequestPaintingStream(class UStructurePaintingComponent* PaintingComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PaintingStreamingComponent.ServerRequestPaintingStream");

	UPaintingStreamingComponent_ServerRequestPaintingStream_Params params;
	params.PaintingComponent = PaintingComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PaintingStreamingComponent.ServerCancelPaintingStream
// ()
// Parameters:
// class UStructurePaintingComponent* PaintingComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPaintingStreamingComponent::ServerCancelPaintingStream(class UStructurePaintingComponent* PaintingComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PaintingStreamingComponent.ServerCancelPaintingStream");

	UPaintingStreamingComponent_ServerCancelPaintingStream_Params params;
	params.PaintingComponent = PaintingComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PaintingStreamingComponent.ClientRecieveChunk
// ()
// Parameters:
// class UStructurePaintingComponent* PaintingComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<unsigned char>          Bytes                          (ConstParm, Parm, ZeroConstructor)

void UPaintingStreamingComponent::ClientRecieveChunk(class UStructurePaintingComponent* PaintingComponent, TArray<unsigned char> Bytes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PaintingStreamingComponent.ClientRecieveChunk");

	UPaintingStreamingComponent_ClientRecieveChunk_Params params;
	params.PaintingComponent = PaintingComponent;
	params.Bytes = Bytes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PaintingStreamingComponent.ClientEndStreamingJob
// ()
// Parameters:
// class UStructurePaintingComponent* PaintingComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPaintingStreamingComponent::ClientEndStreamingJob(class UStructurePaintingComponent* PaintingComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PaintingStreamingComponent.ClientEndStreamingJob");

	UPaintingStreamingComponent_ClientEndStreamingJob_Params params;
	params.PaintingComponent = PaintingComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PaintingStreamingComponent.ClientCancelSteamingJob
// ()
// Parameters:
// class UStructurePaintingComponent* PaintingComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPaintingStreamingComponent::ClientCancelSteamingJob(class UStructurePaintingComponent* PaintingComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PaintingStreamingComponent.ClientCancelSteamingJob");

	UPaintingStreamingComponent_ClientCancelSteamingJob_Params params;
	params.PaintingComponent = PaintingComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PaintingStreamingComponent.ClientBeginStreamingJob
// ()
// Parameters:
// class UStructurePaintingComponent* PaintingComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Revision                       (Parm, ZeroConstructor, IsPlainOldData)

void UPaintingStreamingComponent::ClientBeginStreamingJob(class UStructurePaintingComponent* PaintingComponent, int Revision)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PaintingStreamingComponent.ClientBeginStreamingJob");

	UPaintingStreamingComponent_ClientBeginStreamingJob_Params params;
	params.PaintingComponent = PaintingComponent;
	params.Revision = Revision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalAIState.TickAnimationStateEvent
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENetRole>          Role                           (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalAIState::TickAnimationStateEvent(float DeltaTime, const struct FName& CustomEventName, TEnumAsByte<ENetRole> Role)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalAIState.TickAnimationStateEvent");

	UPrimalAIState_TickAnimationStateEvent_Params params;
	params.DeltaTime = DeltaTime;
	params.CustomEventName = CustomEventName;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalAIState.TickAnimationState
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENetRole>          Role                           (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalAIState::TickAnimationState(float DeltaTime, const struct FName& CustomEventName, TEnumAsByte<ENetRole> Role)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalAIState.TickAnimationState");

	UPrimalAIState_TickAnimationState_Params params;
	params.DeltaTime = DeltaTime;
	params.CustomEventName = CustomEventName;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalAIState.StartAnimationStateEvent
// ()
// Parameters:
// struct FName                   CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENetRole>          Role                           (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalAIState::StartAnimationStateEvent(const struct FName& CustomEventName, TEnumAsByte<ENetRole> Role)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalAIState.StartAnimationStateEvent");

	UPrimalAIState_StartAnimationStateEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalAIState.StartAnimationState
// ()
// Parameters:
// struct FName                   CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENetRole>          Role                           (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalAIState::StartAnimationState(const struct FName& CustomEventName, TEnumAsByte<ENetRole> Role)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalAIState.StartAnimationState");

	UPrimalAIState_StartAnimationState_Params params;
	params.CustomEventName = CustomEventName;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalAIState.ShouldSkipRangeCheckEvent
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalAIState::ShouldSkipRangeCheckEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalAIState.ShouldSkipRangeCheckEvent");

	UPrimalAIState_ShouldSkipRangeCheckEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalAIState.ShouldSkipIntervalCheckEvent
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalAIState::ShouldSkipIntervalCheckEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalAIState.ShouldSkipIntervalCheckEvent");

	UPrimalAIState_ShouldSkipIntervalCheckEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalAIState.SetLastAttackTime
// ()

void UPrimalAIState::SetLastAttackTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalAIState.SetLastAttackTime");

	UPrimalAIState_SetLastAttackTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalAIState.SetInAnimationStateActive
// ()
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalAIState::SetInAnimationStateActive(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalAIState.SetInAnimationStateActive");

	UPrimalAIState_SetInAnimationStateActive_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalAIState.OnTickEvent
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalAIState::OnTickEvent(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalAIState.OnTickEvent");

	UPrimalAIState_OnTickEvent_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalAIState.OnTick
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalAIState::OnTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalAIState.OnTick");

	UPrimalAIState_OnTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalAIState.OnEndEvent
// ()

void UPrimalAIState::OnEndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalAIState.OnEndEvent");

	UPrimalAIState_OnEndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalAIState.OnEnd
// ()

void UPrimalAIState::OnEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalAIState.OnEnd");

	UPrimalAIState_OnEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalAIState.OnChildStateEndedEvent
// ()
// Parameters:
// class UPrimalAIState*          PrimalAIState                  (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalAIState::OnChildStateEndedEvent(class UPrimalAIState* PrimalAIState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalAIState.OnChildStateEndedEvent");

	UPrimalAIState_OnChildStateEndedEvent_Params params;
	params.PrimalAIState = PrimalAIState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalAIState.OnCanUseStateEvent
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalAIState::OnCanUseStateEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalAIState.OnCanUseStateEvent");

	UPrimalAIState_OnCanUseStateEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalAIState.OnBeginEvent
// ()
// Parameters:
// class UPrimalAIState*          InParentState                  (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalAIState::OnBeginEvent(class UPrimalAIState* InParentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalAIState.OnBeginEvent");

	UPrimalAIState_OnBeginEvent_Params params;
	params.InParentState = InParentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalAIState.OnBegin
// ()
// Parameters:
// class UPrimalAIState*          InParentState                  (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalAIState::OnBegin(class UPrimalAIState* InParentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalAIState.OnBegin");

	UPrimalAIState_OnBegin_Params params;
	params.InParentState = InParentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalAIState.EndAnimationStateEvent
// ()
// Parameters:
// struct FName                   CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENetRole>          Role                           (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalAIState::EndAnimationStateEvent(const struct FName& CustomEventName, TEnumAsByte<ENetRole> Role)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalAIState.EndAnimationStateEvent");

	UPrimalAIState_EndAnimationStateEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalAIState.EndAnimationState
// ()
// Parameters:
// struct FName                   CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENetRole>          Role                           (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalAIState::EndAnimationState(const struct FName& CustomEventName, TEnumAsByte<ENetRole> Role)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalAIState.EndAnimationState");

	UPrimalAIState_EndAnimationState_Params params;
	params.CustomEventName = CustomEventName;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalAIState.CanUseState
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalAIState::CanUseState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalAIState.CanUseState");

	UPrimalAIState_CanUseState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.TargetableInterface.ToUObject
// ()
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UTargetableInterface::ToUObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.TargetableInterface.ToUObject");

	UTargetableInterface_ToUObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacter.UpdateTickSetting
// ()

void APrimalCharacter::UpdateTickSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.UpdateTickSetting");

	APrimalCharacter_UpdateTickSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.TakeDamage
// ()
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
// class AController*             EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APrimalCharacter::TakeDamage(float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.TakeDamage");

	APrimalCharacter_TakeDamage_Params params;
	params.Damage = Damage;
	params.DamageEvent = DamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacter.StopAnimEx
// ()
// Parameters:
// class UAnimMontage*            AnimMontage                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReplicate                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReplicateToOwner              (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendOutTime                   (Parm, ZeroConstructor, IsPlainOldData)

void APrimalCharacter::StopAnimEx(class UAnimMontage* AnimMontage, bool bReplicate, bool bReplicateToOwner, float BlendOutTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.StopAnimEx");

	APrimalCharacter_StopAnimEx_Params params;
	params.AnimMontage = AnimMontage;
	params.bReplicate = bReplicate;
	params.bReplicateToOwner = bReplicateToOwner;
	params.BlendOutTime = BlendOutTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.StartForceSkelUpdate
// ()
// Parameters:
// float                          ForTime                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceUpdateMesh               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bServerOnly                    (Parm, ZeroConstructor, IsPlainOldData)

void APrimalCharacter::StartForceSkelUpdate(float ForTime, bool bForceUpdateMesh, bool bServerOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.StartForceSkelUpdate");

	APrimalCharacter_StartForceSkelUpdate_Params params;
	params.ForTime = ForTime;
	params.bForceUpdateMesh = bForceUpdateMesh;
	params.bServerOnly = bServerOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.SleepBodies
// ()

void APrimalCharacter::SleepBodies()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.SleepBodies");

	APrimalCharacter_SleepBodies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.SetStatusStateDefinition
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterStatusState> StatusStateType                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUsed                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            StatusValueThresholdIndex      (Parm, ZeroConstructor, IsPlainOldData)

void APrimalCharacter::SetStatusStateDefinition(TEnumAsByte<EPrimalCharacterStatusState> StatusStateType, bool bUsed, int StatusValueThresholdIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.SetStatusStateDefinition");

	APrimalCharacter_SetStatusStateDefinition_Params params;
	params.StatusStateType = StatusStateType;
	params.bUsed = bUsed;
	params.StatusValueThresholdIndex = StatusValueThresholdIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.SetDeathByRing
// ()

void APrimalCharacter::SetDeathByRing()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.SetDeathByRing");

	APrimalCharacter_SetDeathByRing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.ServerTryPoop
// ()

void APrimalCharacter::ServerTryPoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.ServerTryPoop");

	APrimalCharacter_ServerTryPoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.ServerSetRunning
// ()
// Parameters:
// bool                           bNewRunning                    (Parm, ZeroConstructor, IsPlainOldData)

void APrimalCharacter::ServerSetRunning(bool bNewRunning)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.ServerSetRunning");

	APrimalCharacter_ServerSetRunning_Params params;
	params.bNewRunning = bNewRunning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.ServerRequestDrag
// ()

void APrimalCharacter::ServerRequestDrag()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.ServerRequestDrag");

	APrimalCharacter_ServerRequestDrag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.ServerGiveDefaultWeapon
// ()

void APrimalCharacter::ServerGiveDefaultWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.ServerGiveDefaultWeapon");

	APrimalCharacter_ServerGiveDefaultWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.ServerDinoOrder
// ()
// Parameters:
// class APrimalDinoCharacter*    aDino                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDinoTamedOrder>   OrderType                      (Parm, ZeroConstructor, IsPlainOldData)

void APrimalCharacter::ServerDinoOrder(class APrimalDinoCharacter* aDino, TEnumAsByte<EDinoTamedOrder> OrderType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.ServerDinoOrder");

	APrimalCharacter_ServerDinoOrder_Params params;
	params.aDino = aDino;
	params.OrderType = OrderType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.ServerCallStayOne
// ()
// Parameters:
// class APrimalDinoCharacter*    ForDinoChar                    (Parm, ZeroConstructor, IsPlainOldData)

void APrimalCharacter::ServerCallStayOne(class APrimalDinoCharacter* ForDinoChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.ServerCallStayOne");

	APrimalCharacter_ServerCallStayOne_Params params;
	params.ForDinoChar = ForDinoChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.ServerCallStay
// ()

void APrimalCharacter::ServerCallStay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.ServerCallStay");

	APrimalCharacter_ServerCallStay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.ServerCallPassive
// ()

void APrimalCharacter::ServerCallPassive()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.ServerCallPassive");

	APrimalCharacter_ServerCallPassive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.ServerCallNeutral
// ()

void APrimalCharacter::ServerCallNeutral()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.ServerCallNeutral");

	APrimalCharacter_ServerCallNeutral_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.ServerCallFollowOne
// ()
// Parameters:
// class APrimalDinoCharacter*    ForDinoChar                    (Parm, ZeroConstructor, IsPlainOldData)

void APrimalCharacter::ServerCallFollowOne(class APrimalDinoCharacter* ForDinoChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.ServerCallFollowOne");

	APrimalCharacter_ServerCallFollowOne_Params params;
	params.ForDinoChar = ForDinoChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.ServerCallFollowDistanceCycleOne
// ()
// Parameters:
// class APrimalDinoCharacter*    ForDinoChar                    (Parm, ZeroConstructor, IsPlainOldData)

void APrimalCharacter::ServerCallFollowDistanceCycleOne(class APrimalDinoCharacter* ForDinoChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.ServerCallFollowDistanceCycleOne");

	APrimalCharacter_ServerCallFollowDistanceCycleOne_Params params;
	params.ForDinoChar = ForDinoChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.ServerCallFollow
// ()

void APrimalCharacter::ServerCallFollow()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.ServerCallFollow");

	APrimalCharacter_ServerCallFollow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.ServerCallAttackTarget
// ()
// Parameters:
// class AActor*                  TheTarget                      (Parm, ZeroConstructor, IsPlainOldData)

void APrimalCharacter::ServerCallAttackTarget(class AActor* TheTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.ServerCallAttackTarget");

	APrimalCharacter_ServerCallAttackTarget_Params params;
	params.TheTarget = TheTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.ServerCallAggressive
// ()

void APrimalCharacter::ServerCallAggressive()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.ServerCallAggressive");

	APrimalCharacter_ServerCallAggressive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.PrimalCharacterDied__DelegateSignature
// ()
// Parameters:
// class APrimalCharacter*        DiedCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void APrimalCharacter::PrimalCharacterDied__DelegateSignature(class APrimalCharacter* DiedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.PrimalCharacterDied__DelegateSignature");

	APrimalCharacter_PrimalCharacterDied__DelegateSignature_Params params;
	params.DiedCharacter = DiedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.PlayHitEffectRadial
// ()
// Parameters:
// float                          DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FRadialDamageEvent      DamageEvent                    (Parm)
// class APawn*                   PawnInstigator                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void APrimalCharacter::PlayHitEffectRadial(float DamageTaken, const struct FRadialDamageEvent& DamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.PlayHitEffectRadial");

	APrimalCharacter_PlayHitEffectRadial_Params params;
	params.DamageTaken = DamageTaken;
	params.DamageEvent = DamageEvent;
	params.PawnInstigator = PawnInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.PlayHitEffectPoint
// ()
// Parameters:
// float                          DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FPointDamageEvent       DamageEvent                    (Parm)
// class APawn*                   PawnInstigator                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void APrimalCharacter::PlayHitEffectPoint(float DamageTaken, const struct FPointDamageEvent& DamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.PlayHitEffectPoint");

	APrimalCharacter_PlayHitEffectPoint_Params params;
	params.DamageTaken = DamageTaken;
	params.DamageEvent = DamageEvent;
	params.PawnInstigator = PawnInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.PlayHitEffectGeneric
// ()
// Parameters:
// float                          DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm)
// class APawn*                   PawnInstigator                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void APrimalCharacter::PlayHitEffectGeneric(float DamageTaken, const struct FDamageEvent& DamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.PlayHitEffectGeneric");

	APrimalCharacter_PlayHitEffectGeneric_Params params;
	params.DamageTaken = DamageTaken;
	params.DamageEvent = DamageEvent;
	params.PawnInstigator = PawnInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.PlayDyingRadial
// ()
// Parameters:
// float                          KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FRadialDamageEvent      DamageEvent                    (Parm)
// class APawn*                   InstigatingPawn                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void APrimalCharacter::PlayDyingRadial(float KillingDamage, const struct FRadialDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.PlayDyingRadial");

	APrimalCharacter_PlayDyingRadial_Params params;
	params.KillingDamage = KillingDamage;
	params.DamageEvent = DamageEvent;
	params.InstigatingPawn = InstigatingPawn;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.PlayDyingPoint
// ()
// Parameters:
// float                          KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FPointDamageEvent       DamageEvent                    (Parm)
// class APawn*                   InstigatingPawn                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void APrimalCharacter::PlayDyingPoint(float KillingDamage, const struct FPointDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.PlayDyingPoint");

	APrimalCharacter_PlayDyingPoint_Params params;
	params.KillingDamage = KillingDamage;
	params.DamageEvent = DamageEvent;
	params.InstigatingPawn = InstigatingPawn;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.PlayDyingGeneric
// ()
// Parameters:
// float                          KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm)
// class APawn*                   InstigatingPawn                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void APrimalCharacter::PlayDyingGeneric(float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.PlayDyingGeneric");

	APrimalCharacter_PlayDyingGeneric_Params params;
	params.KillingDamage = KillingDamage;
	params.DamageEvent = DamageEvent;
	params.InstigatingPawn = InstigatingPawn;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.PlayAnimEx
// ()
// Parameters:
// class UAnimMontage*            AnimMontage                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          InPlayRate                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   StartSectionName               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReplicate                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReplicateToOwner              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceTickPoseAndServerUpdateMesh (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceTickPoseOnServer         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APrimalCharacter::PlayAnimEx(class UAnimMontage* AnimMontage, float InPlayRate, const struct FName& StartSectionName, bool bReplicate, bool bReplicateToOwner, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.PlayAnimEx");

	APrimalCharacter_PlayAnimEx_Params params;
	params.AnimMontage = AnimMontage;
	params.InPlayRate = InPlayRate;
	params.StartSectionName = StartSectionName;
	params.bReplicate = bReplicate;
	params.bReplicateToOwner = bReplicateToOwner;
	params.bForceTickPoseAndServerUpdateMesh = bForceTickPoseAndServerUpdateMesh;
	params.bForceTickPoseOnServer = bForceTickPoseOnServer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacter.OnRep_RagdollPositions
// ()

void APrimalCharacter::OnRep_RagdollPositions()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.OnRep_RagdollPositions");

	APrimalCharacter_OnRep_RagdollPositions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.OnRep_PaintingComponent
// ()

void APrimalCharacter::OnRep_PaintingComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.OnRep_PaintingComponent");

	APrimalCharacter_OnRep_PaintingComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.OnRep_MountedDino
// ()

void APrimalCharacter::OnRep_MountedDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.OnRep_MountedDino");

	APrimalCharacter_OnRep_MountedDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.OnRep_IsSleeping
// ()

void APrimalCharacter::OnRep_IsSleeping()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.OnRep_IsSleeping");

	APrimalCharacter_OnRep_IsSleeping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.OnRep_IsDead
// ()

void APrimalCharacter::OnRep_IsDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.OnRep_IsDead");

	APrimalCharacter_OnRep_IsDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.OnEndDrag
// ()

void APrimalCharacter::OnEndDrag()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.OnEndDrag");

	APrimalCharacter_OnEndDrag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.OnBeginDrag
// ()
// Parameters:
// class APrimalCharacter*        Dragged                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            BoneIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWithGrapHook                  (Parm, ZeroConstructor, IsPlainOldData)

void APrimalCharacter::OnBeginDrag(class APrimalCharacter* Dragged, int BoneIndex, bool bWithGrapHook)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.OnBeginDrag");

	APrimalCharacter_OnBeginDrag_Params params;
	params.Dragged = Dragged;
	params.BoneIndex = BoneIndex;
	params.bWithGrapHook = bWithGrapHook;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.NetUpdateTribeName
// ()
// Parameters:
// struct FString                 NewTribeName                   (Parm, ZeroConstructor)

void APrimalCharacter::NetUpdateTribeName(const struct FString& NewTribeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.NetUpdateTribeName");

	APrimalCharacter_NetUpdateTribeName_Params params;
	params.NewTribeName = NewTribeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.NetStopAllAnimMontage
// ()

void APrimalCharacter::NetStopAllAnimMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.NetStopAllAnimMontage");

	APrimalCharacter_NetStopAllAnimMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.NetPlaySoundOnCharacter
// ()
// Parameters:
// class USoundBase*              SoundToPlay                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPlayOnOwner                   (Parm, ZeroConstructor, IsPlainOldData)

void APrimalCharacter::NetPlaySoundOnCharacter(class USoundBase* SoundToPlay, bool bPlayOnOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.NetPlaySoundOnCharacter");

	APrimalCharacter_NetPlaySoundOnCharacter_Params params;
	params.SoundToPlay = SoundToPlay;
	params.bPlayOnOwner = bPlayOnOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.NetOnJumped
// ()

void APrimalCharacter::NetOnJumped()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.NetOnJumped");

	APrimalCharacter_NetOnJumped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.NetDidLand
// ()

void APrimalCharacter::NetDidLand()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.NetDidLand");

	APrimalCharacter_NetDidLand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.NetAddCharacterMovementImpulse
// ()
// Parameters:
// struct FVector                 Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ImpulseExponent                (Parm, ZeroConstructor, IsPlainOldData)

void APrimalCharacter::NetAddCharacterMovementImpulse(const struct FVector& Impulse, bool bVelChange, float ImpulseExponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.NetAddCharacterMovementImpulse");

	APrimalCharacter_NetAddCharacterMovementImpulse_Params params;
	params.Impulse = Impulse;
	params.bVelChange = bVelChange;
	params.ImpulseExponent = ImpulseExponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.LocalUnpossessed
// ()

void APrimalCharacter::LocalUnpossessed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.LocalUnpossessed");

	APrimalCharacter_LocalUnpossessed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.IsValidForCombatMusic
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalCharacter::IsValidForCombatMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.IsValidForCombatMusic");

	APrimalCharacter_IsValidForCombatMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacter.IsRunning
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalCharacter::IsRunning()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.IsRunning");

	APrimalCharacter_IsRunning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacter.IsMoving
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalCharacter::IsMoving()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.IsMoving");

	APrimalCharacter_IsMoving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacter.IsMontagePlaying
// ()
// Parameters:
// class UAnimMontage*            AnimMontage                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeFromEndToConsiderFinished  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalCharacter::IsMontagePlaying(class UAnimMontage* AnimMontage, float TimeFromEndToConsiderFinished)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.IsMontagePlaying");

	APrimalCharacter_IsMontagePlaying_Params params;
	params.AnimMontage = AnimMontage;
	params.TimeFromEndToConsiderFinished = TimeFromEndToConsiderFinished;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacter.IsMeshGameplayRelevant
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalCharacter::IsMeshGameplayRelevant()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.IsMeshGameplayRelevant");

	APrimalCharacter_IsMeshGameplayRelevant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacter.IsInvincible
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalCharacter::IsInvincible()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.IsInvincible");

	APrimalCharacter_IsInvincible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacter.IsFirstPerson
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalCharacter::IsFirstPerson()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.IsFirstPerson");

	APrimalCharacter_IsFirstPerson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacter.IsAlive
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalCharacter::IsAlive()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.IsAlive");

	APrimalCharacter_IsAlive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacter.HurtMe
// ()
// Parameters:
// int                            HowMuch                        (Parm, ZeroConstructor, IsPlainOldData)

void APrimalCharacter::HurtMe(int HowMuch)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.HurtMe");

	APrimalCharacter_HurtMe_Params params;
	params.HowMuch = HowMuch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.HasBuff
// ()
// Parameters:
// class UClass*                  BuffClass                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalCharacter::HasBuff(class UClass* BuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.HasBuff");

	APrimalCharacter_HasBuff_Params params;
	params.BuffClass = BuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacter.GiveKillExperience
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalCharacter::GiveKillExperience()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.GiveKillExperience");

	APrimalCharacter_GiveKillExperience_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacter.GetRunningSpeedModifier
// ()
// Parameters:
// bool                           bIsForDefaultSpeed             (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APrimalCharacter::GetRunningSpeedModifier(bool bIsForDefaultSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.GetRunningSpeedModifier");

	APrimalCharacter_GetRunningSpeedModifier_Params params;
	params.bIsForDefaultSpeed = bIsForDefaultSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacter.GetRole
// ()
// Parameters:
// TEnumAsByte<ENetRole>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ENetRole> APrimalCharacter::GetRole()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.GetRole");

	APrimalCharacter_GetRole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacter.GetOverridenMontage
// ()
// Parameters:
// class UAnimMontage*            AnimMontage                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* APrimalCharacter::GetOverridenMontage(class UAnimMontage* AnimMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.GetOverridenMontage");

	APrimalCharacter_GetOverridenMontage_Params params;
	params.AnimMontage = AnimMontage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacter.GetOverridenAnimSequence
// ()
// Parameters:
// class UAnimSequence*           AnimSeq                        (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequence*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimSequence* APrimalCharacter::GetOverridenAnimSequence(class UAnimSequence* AnimSeq)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.GetOverridenAnimSequence");

	APrimalCharacter_GetOverridenAnimSequence_Params params;
	params.AnimSeq = AnimSeq;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacter.GetMaxHealth
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APrimalCharacter::GetMaxHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.GetMaxHealth");

	APrimalCharacter_GetMaxHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacter.GetHealthPercentage
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APrimalCharacter::GetHealthPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.GetHealthPercentage");

	APrimalCharacter_GetHealthPercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacter.GetFootPhysicalSurfaceType
// ()
// Parameters:
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPhysicalSurface>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EPhysicalSurface> APrimalCharacter::GetFootPhysicalSurfaceType(bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.GetFootPhysicalSurfaceType");

	APrimalCharacter_GetFootPhysicalSurfaceType_Params params;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacter.GetDescriptiveName
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString APrimalCharacter::GetDescriptiveName()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.GetDescriptiveName");

	APrimalCharacter_GetDescriptiveName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacter.GetDefaultMovementSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APrimalCharacter::GetDefaultMovementSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.GetDefaultMovementSpeed");

	APrimalCharacter_GetDefaultMovementSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacter.GetCharacterStatusComponent
// ()
// Parameters:
// class UPrimalCharacterStatusComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPrimalCharacterStatusComponent* APrimalCharacter::GetCharacterStatusComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.GetCharacterStatusComponent");

	APrimalCharacter_GetCharacterStatusComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacter.GetBuffs
// ()
// Parameters:
// TArray<class APrimalBuff*>     TheBuffs                       (Parm, OutParm, ZeroConstructor)

void APrimalCharacter::GetBuffs(TArray<class APrimalBuff*>* TheBuffs)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.GetBuffs");

	APrimalCharacter_GetBuffs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TheBuffs != nullptr)
		*TheBuffs = params.TheBuffs;
}


// Function ShooterGame.PrimalCharacter.GetBasedOnDino
// ()
// Parameters:
// class APrimalDinoCharacter*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APrimalDinoCharacter* APrimalCharacter::GetBasedOnDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.GetBasedOnDino");

	APrimalCharacter_GetBasedOnDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacter.GetAimOffsets
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                RootRotOffset                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          TheRootYawSpeed                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MaxYawAimClamp                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 RootLocOffset                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator APrimalCharacter::GetAimOffsets(float DeltaTime, float MaxYawAimClamp, struct FRotator* RootRotOffset, float* TheRootYawSpeed, struct FVector* RootLocOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.GetAimOffsets");

	APrimalCharacter_GetAimOffsets_Params params;
	params.DeltaTime = DeltaTime;
	params.MaxYawAimClamp = MaxYawAimClamp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RootRotOffset != nullptr)
		*RootRotOffset = params.RootRotOffset;
	if (TheRootYawSpeed != nullptr)
		*TheRootYawSpeed = params.TheRootYawSpeed;
	if (RootLocOffset != nullptr)
		*RootLocOffset = params.RootLocOffset;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacter.ForceUpdateAimedCharacters
// ()
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StartLoc                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 EndLoc                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  IgnoreActor                    (Parm, ZeroConstructor, IsPlainOldData)

void APrimalCharacter::ForceUpdateAimedCharacters(class UWorld* World, const struct FVector& StartLoc, const struct FVector& EndLoc, class AActor* IgnoreActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.ForceUpdateAimedCharacters");

	APrimalCharacter_ForceUpdateAimedCharacters_Params params;
	params.World = World;
	params.StartLoc = StartLoc;
	params.EndLoc = EndLoc;
	params.IgnoreActor = IgnoreActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.ForceTickPoseDelta
// ()

void APrimalCharacter::ForceTickPoseDelta()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.ForceTickPoseDelta");

	APrimalCharacter_ForceTickPoseDelta_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.FadeOutLoadingMusic
// ()

void APrimalCharacter::FadeOutLoadingMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.FadeOutLoadingMusic");

	APrimalCharacter_FadeOutLoadingMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.ExecSetSleeping
// ()
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void APrimalCharacter::ExecSetSleeping(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.ExecSetSleeping");

	APrimalCharacter_ExecSetSleeping_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.EndForceSkelUpdate
// ()

void APrimalCharacter::EndForceSkelUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.EndForceSkelUpdate");

	APrimalCharacter_EndForceSkelUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.DeathHarvestingFadeOut
// ()

void APrimalCharacter::DeathHarvestingFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.DeathHarvestingFadeOut");

	APrimalCharacter_DeathHarvestingFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.DeactivateBuffs
// ()
// Parameters:
// class UClass*                  ForBuffClass                   (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem*             ForInstigatorItem              (Parm, ZeroConstructor, IsPlainOldData)

void APrimalCharacter::DeactivateBuffs(class UClass* ForBuffClass, class UPrimalItem* ForInstigatorItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.DeactivateBuffs");

	APrimalCharacter_DeactivateBuffs_Params params;
	params.ForBuffClass = ForBuffClass;
	params.ForInstigatorItem = ForInstigatorItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.ClientStopAnimation
// ()
// Parameters:
// class UAnimMontage*            AnimMontage                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStopOnOwner                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendOutTime                   (Parm, ZeroConstructor, IsPlainOldData)

void APrimalCharacter::ClientStopAnimation(class UAnimMontage* AnimMontage, bool bStopOnOwner, float BlendOutTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.ClientStopAnimation");

	APrimalCharacter_ClientStopAnimation_Params params;
	params.AnimMontage = AnimMontage;
	params.bStopOnOwner = bStopOnOwner;
	params.BlendOutTime = BlendOutTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.ClientRagdollUpdate
// ()
// Parameters:
// TArray<struct FVector_NetQuantize> BoneLocations                  (ConstParm, Parm, ZeroConstructor)
// struct FRotator_NetQuantize    TargetRootRotation             (Parm)

void APrimalCharacter::ClientRagdollUpdate(TArray<struct FVector_NetQuantize> BoneLocations, const struct FRotator_NetQuantize& TargetRootRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.ClientRagdollUpdate");

	APrimalCharacter_ClientRagdollUpdate_Params params;
	params.BoneLocations = BoneLocations;
	params.TargetRootRotation = TargetRootRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.ClientPlayAnimation
// ()
// Parameters:
// class UAnimMontage*            AnimMontage                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          PlayRate                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   StartSectionName               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPlayOnOwner                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceTickPoseAndServerUpdateMesh (Parm, ZeroConstructor, IsPlainOldData)

void APrimalCharacter::ClientPlayAnimation(class UAnimMontage* AnimMontage, float PlayRate, const struct FName& StartSectionName, bool bPlayOnOwner, bool bForceTickPoseAndServerUpdateMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.ClientPlayAnimation");

	APrimalCharacter_ClientPlayAnimation_Params params;
	params.AnimMontage = AnimMontage;
	params.PlayRate = PlayRate;
	params.StartSectionName = StartSectionName;
	params.bPlayOnOwner = bPlayOnOwner;
	params.bForceTickPoseAndServerUpdateMesh = bForceTickPoseAndServerUpdateMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.ClientNotifyLevelUp
// ()

void APrimalCharacter::ClientNotifyLevelUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.ClientNotifyLevelUp");

	APrimalCharacter_ClientNotifyLevelUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.ClientFailedPoop
// ()

void APrimalCharacter::ClientFailedPoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.ClientFailedPoop");

	APrimalCharacter_ClientFailedPoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.ClientEndRagdollUpdate
// ()

void APrimalCharacter::ClientEndRagdollUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.ClientEndRagdollUpdate");

	APrimalCharacter_ClientEndRagdollUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.ClientDidPoop
// ()

void APrimalCharacter::ClientDidPoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.ClientDidPoop");

	APrimalCharacter_ClientDidPoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.BPNotifyBumpedPawn
// ()
// Parameters:
// class APrimalCharacter*        BumpedPawn                     (Parm, ZeroConstructor, IsPlainOldData)

void APrimalCharacter::BPNotifyBumpedPawn(class APrimalCharacter* BumpedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.BPNotifyBumpedPawn");

	APrimalCharacter_BPNotifyBumpedPawn_Params params;
	params.BumpedPawn = BumpedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.BPNotifyBumpedByPawn
// ()
// Parameters:
// class APrimalCharacter*        ByPawn                         (Parm, ZeroConstructor, IsPlainOldData)

void APrimalCharacter::BPNotifyBumpedByPawn(class APrimalCharacter* ByPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.BPNotifyBumpedByPawn");

	APrimalCharacter_BPNotifyBumpedByPawn_Params params;
	params.ByPawn = ByPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacter.BPIsConscious
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalCharacter::BPIsConscious()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.BPIsConscious");

	APrimalCharacter_BPIsConscious_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacter.BPIsBasedOnDynamicActor
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalCharacter::BPIsBasedOnDynamicActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.BPIsBasedOnDynamicActor");

	APrimalCharacter_BPIsBasedOnDynamicActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacter.BPGetHUDOverrideBuffProgressBarPercent
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APrimalCharacter::BPGetHUDOverrideBuffProgressBarPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.BPGetHUDOverrideBuffProgressBarPercent");

	APrimalCharacter_BPGetHUDOverrideBuffProgressBarPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacter.BPGetExtraMeleeDamageModifier
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APrimalCharacter::BPGetExtraMeleeDamageModifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.BPGetExtraMeleeDamageModifier");

	APrimalCharacter_BPGetExtraMeleeDamageModifier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacter.BPAdjustDamage
// ()
// Parameters:
// float                          IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            TheDamageEvent                 (Parm)
// class AController*             EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APrimalCharacter::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.BPAdjustDamage");

	APrimalCharacter_BPAdjustDamage_Params params;
	params.IncomingDamage = IncomingDamage;
	params.TheDamageEvent = TheDamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsPointDamage = bIsPointDamage;
	params.PointHitInfo = PointHitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacter.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName                   CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  MeshComp                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAnimSequenceBase*       Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify*             AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void APrimalCharacter::BlueprintAnimNotifyCustomEvent(const struct FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacter.BlueprintAnimNotifyCustomEvent");

	APrimalCharacter_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.UpdateTribeGroupRanks
// ()
// Parameters:
// unsigned char                  NewTribeGroupPetOrderingRank   (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  NewTribeGroupPetRidingRank     (Parm, ZeroConstructor, IsPlainOldData)

void APrimalDinoCharacter::UpdateTribeGroupRanks(unsigned char NewTribeGroupPetOrderingRank, unsigned char NewTribeGroupPetRidingRank)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.UpdateTribeGroupRanks");

	APrimalDinoCharacter_UpdateTribeGroupRanks_Params params;
	params.NewTribeGroupPetOrderingRank = NewTribeGroupPetOrderingRank;
	params.NewTribeGroupPetRidingRank = NewTribeGroupPetRidingRank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.UpdateImprintingQuality
// ()
// Parameters:
// float                          NewImprintingQuality           (Parm, ZeroConstructor, IsPlainOldData)

void APrimalDinoCharacter::UpdateImprintingQuality(float NewImprintingQuality)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.UpdateImprintingQuality");

	APrimalDinoCharacter_UpdateImprintingQuality_Params params;
	params.NewImprintingQuality = NewImprintingQuality;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.UpdateImprintingDetails
// ()
// Parameters:
// struct FString                 NewImprinterName               (Parm, ZeroConstructor)
// uint64_t                       NewImprinterPlayerDataID       (Parm, ZeroConstructor, IsPlainOldData)

void APrimalDinoCharacter::UpdateImprintingDetails(const struct FString& NewImprinterName, uint64_t NewImprinterPlayerDataID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.UpdateImprintingDetails");

	APrimalDinoCharacter_UpdateImprintingDetails_Params params;
	params.NewImprinterName = NewImprinterName;
	params.NewImprinterPlayerDataID = NewImprinterPlayerDataID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.UpdateBabyCuddling
// ()
// Parameters:
// double                         NewBabyNextCuddleTime          (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  NewBabyCuddleType              (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  NewBabyCuddleFood              (Parm, ZeroConstructor, IsPlainOldData)

void APrimalDinoCharacter::UpdateBabyCuddling(double NewBabyNextCuddleTime, unsigned char NewBabyCuddleType, class UClass* NewBabyCuddleFood)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.UpdateBabyCuddling");

	APrimalDinoCharacter_UpdateBabyCuddling_Params params;
	params.NewBabyNextCuddleTime = NewBabyNextCuddleTime;
	params.NewBabyCuddleType = NewBabyCuddleType;
	params.NewBabyCuddleFood = NewBabyCuddleFood;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.UpdateAttackTargets
// ()

void APrimalDinoCharacter::UpdateAttackTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.UpdateAttackTargets");

	APrimalDinoCharacter_UpdateAttackTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.UnclaimDino
// ()
// Parameters:
// bool                           bDestroyAI                     (Parm, ZeroConstructor, IsPlainOldData)

void APrimalDinoCharacter::UnclaimDino(bool bDestroyAI)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.UnclaimDino");

	APrimalDinoCharacter_UnclaimDino_Params params;
	params.bDestroyAI = bDestroyAI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.TamedProcessOrder
// ()
// Parameters:
// class APrimalCharacter*        FromCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDinoTamedOrder>   OrderType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalDinoCharacter::TamedProcessOrder(class APrimalCharacter* FromCharacter, TEnumAsByte<EDinoTamedOrder> OrderType, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.TamedProcessOrder");

	APrimalDinoCharacter_TamedProcessOrder_Params params;
	params.FromCharacter = FromCharacter;
	params.OrderType = OrderType;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoCharacter.TameDino
// ()
// Parameters:
// class AShooterPlayerController* ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void APrimalDinoCharacter::TameDino(class AShooterPlayerController* ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.TameDino");

	APrimalDinoCharacter_TameDino_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.StopActiveState
// ()
// Parameters:
// bool                           bShouldResetAttackIndex        (Parm, ZeroConstructor, IsPlainOldData)

void APrimalDinoCharacter::StopActiveState(bool bShouldResetAttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.StopActiveState");

	APrimalDinoCharacter_StopActiveState_Params params;
	params.bShouldResetAttackIndex = bShouldResetAttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.SpawnDino
// ()
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DinoClass                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SpawnLoc                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                SpawnRot                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          LevelMultiplier                (Parm, ZeroConstructor, IsPlainOldData)
// int                            ExtraLevelOffset               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AddLevelOffsetBeforeMultiplier (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideBaseNPCLevel          (Parm, ZeroConstructor, IsPlainOldData)
// int                            BaseLevelOverrideValue         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNPCDontWander                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          NPCAIRangeMultiplier           (Parm, ZeroConstructor, IsPlainOldData)
// int                            NPCAbsoluteBaseLevel           (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalDinoCharacter*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APrimalDinoCharacter* APrimalDinoCharacter::SpawnDino(class UWorld* World, class UClass* DinoClass, const struct FVector& SpawnLoc, const struct FRotator& SpawnRot, float LevelMultiplier, int ExtraLevelOffset, bool AddLevelOffsetBeforeMultiplier, bool bOverrideBaseNPCLevel, int BaseLevelOverrideValue, bool bNPCDontWander, float NPCAIRangeMultiplier, int NPCAbsoluteBaseLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.SpawnDino");

	APrimalDinoCharacter_SpawnDino_Params params;
	params.World = World;
	params.DinoClass = DinoClass;
	params.SpawnLoc = SpawnLoc;
	params.SpawnRot = SpawnRot;
	params.LevelMultiplier = LevelMultiplier;
	params.ExtraLevelOffset = ExtraLevelOffset;
	params.AddLevelOffsetBeforeMultiplier = AddLevelOffsetBeforeMultiplier;
	params.bOverrideBaseNPCLevel = bOverrideBaseNPCLevel;
	params.BaseLevelOverrideValue = BaseLevelOverrideValue;
	params.bNPCDontWander = bNPCDontWander;
	params.NPCAIRangeMultiplier = NPCAIRangeMultiplier;
	params.NPCAbsoluteBaseLevel = NPCAbsoluteBaseLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoCharacter.ShouldForceFlee
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalDinoCharacter::ShouldForceFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.ShouldForceFlee");

	APrimalDinoCharacter_ShouldForceFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoCharacter.ShouldAttackOfPlayedAnimationStopMovement
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalDinoCharacter::ShouldAttackOfPlayedAnimationStopMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.ShouldAttackOfPlayedAnimationStopMovement");

	APrimalDinoCharacter_ShouldAttackOfPlayedAnimationStopMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoCharacter.SetState
// ()
// Parameters:
// class UPrimalAIState*          State                          (Parm, ZeroConstructor, IsPlainOldData)

void APrimalDinoCharacter::SetState(class UPrimalAIState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.SetState");

	APrimalDinoCharacter_SetState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.SetStasisComponentRadius
// ()
// Parameters:
// float                          StasisOverrideRadius           (Parm, ZeroConstructor, IsPlainOldData)

void APrimalDinoCharacter::SetStasisComponentRadius(float StasisOverrideRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.SetStasisComponentRadius");

	APrimalDinoCharacter_SetStasisComponentRadius_Params params;
	params.StasisOverrideRadius = StasisOverrideRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.SetPreventSaving
// ()
// Parameters:
// bool                           fPreventSaving                 (Parm, ZeroConstructor, IsPlainOldData)

void APrimalDinoCharacter::SetPreventSaving(bool fPreventSaving)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.SetPreventSaving");

	APrimalDinoCharacter_SetPreventSaving_Params params;
	params.fPreventSaving = fPreventSaving;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.SetMovementAccelerationVector
// ()
// Parameters:
// struct FVector                 fVector                        (Parm, ZeroConstructor, IsPlainOldData)

void APrimalDinoCharacter::SetMovementAccelerationVector(const struct FVector& fVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.SetMovementAccelerationVector");

	APrimalDinoCharacter_SetMovementAccelerationVector_Params params;
	params.fVector = fVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.SetFlight
// ()
// Parameters:
// bool                           bFly                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCancelForceLand               (Parm, ZeroConstructor, IsPlainOldData)

void APrimalDinoCharacter::SetFlight(bool bFly, bool bCancelForceLand)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.SetFlight");

	APrimalDinoCharacter_SetFlight_Params params;
	params.bFly = bFly;
	params.bCancelForceLand = bCancelForceLand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.SetCurrentAttackIndex
// ()
// Parameters:
// unsigned char                  Index                          (Parm, ZeroConstructor, IsPlainOldData)

void APrimalDinoCharacter::SetCurrentAttackIndex(unsigned char Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.SetCurrentAttackIndex");

	APrimalDinoCharacter_SetCurrentAttackIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.ServerUpdateAttackTargets
// ()
// Parameters:
// class AActor*                  AttackTarget                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AttackLocation                 (Parm, ZeroConstructor, IsPlainOldData)

void APrimalDinoCharacter::ServerUpdateAttackTargets(class AActor* AttackTarget, const struct FVector& AttackLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.ServerUpdateAttackTargets");

	APrimalDinoCharacter_ServerUpdateAttackTargets_Params params;
	params.AttackTarget = AttackTarget;
	params.AttackLocation = AttackLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.ServerToggleCharging
// ()

void APrimalDinoCharacter::ServerToggleCharging()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.ServerToggleCharging");

	APrimalDinoCharacter_ServerToggleCharging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.ServerToClientsPlayAttackAnimation
// ()
// Parameters:
// int8_t                         AttackinfoIndex                (Parm, ZeroConstructor, IsPlainOldData)
// int8_t                         animationIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          InPlayRate                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   StartSectionName               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceTickPoseAndServerUpdateMesh (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceTickPoseOnServer         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  MyTarget                       (Parm, ZeroConstructor, IsPlainOldData)

void APrimalDinoCharacter::ServerToClientsPlayAttackAnimation(int8_t AttackinfoIndex, int8_t animationIndex, float InPlayRate, const struct FName& StartSectionName, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer, class AActor* MyTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.ServerToClientsPlayAttackAnimation");

	APrimalDinoCharacter_ServerToClientsPlayAttackAnimation_Params params;
	params.AttackinfoIndex = AttackinfoIndex;
	params.animationIndex = animationIndex;
	params.InPlayRate = InPlayRate;
	params.StartSectionName = StartSectionName;
	params.bForceTickPoseAndServerUpdateMesh = bForceTickPoseAndServerUpdateMesh;
	params.bForceTickPoseOnServer = bForceTickPoseOnServer;
	params.MyTarget = MyTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.ServerTamedTick
// ()

void APrimalDinoCharacter::ServerTamedTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.ServerTamedTick");

	APrimalDinoCharacter_ServerTamedTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.ServerSleepingTick
// ()

void APrimalDinoCharacter::ServerSleepingTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.ServerSleepingTick");

	APrimalDinoCharacter_ServerSleepingTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.ServerRequestWaterSurfaceJump
// ()

void APrimalDinoCharacter::ServerRequestWaterSurfaceJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.ServerRequestWaterSurfaceJump");

	APrimalDinoCharacter_ServerRequestWaterSurfaceJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.ServerRequestToggleFlight
// ()

void APrimalDinoCharacter::ServerRequestToggleFlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.ServerRequestToggleFlight");

	APrimalDinoCharacter_ServerRequestToggleFlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.ServerRequestBraking
// ()
// Parameters:
// bool                           bWantsToBrake                  (Parm, ZeroConstructor, IsPlainOldData)

void APrimalDinoCharacter::ServerRequestBraking(bool bWantsToBrake)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.ServerRequestBraking");

	APrimalDinoCharacter_ServerRequestBraking_Params params;
	params.bWantsToBrake = bWantsToBrake;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.ServerRequestAttack
// ()
// Parameters:
// int                            AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void APrimalDinoCharacter::ServerRequestAttack(int AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.ServerRequestAttack");

	APrimalDinoCharacter_ServerRequestAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.ServerInterruptLanding
// ()

void APrimalDinoCharacter::ServerInterruptLanding()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.ServerInterruptLanding");

	APrimalDinoCharacter_ServerInterruptLanding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.ServerFinishedLanding
// ()

void APrimalDinoCharacter::ServerFinishedLanding()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.ServerFinishedLanding");

	APrimalDinoCharacter_ServerFinishedLanding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.ServerClearRider
// ()

void APrimalDinoCharacter::ServerClearRider()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.ServerClearRider");

	APrimalDinoCharacter_ServerClearRider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.PlayWeightedAttackAnimation
// ()

void APrimalDinoCharacter::PlayWeightedAttackAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.PlayWeightedAttackAnimation");

	APrimalDinoCharacter_PlayWeightedAttackAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.PlayHardEndChargingShake
// ()

void APrimalDinoCharacter::PlayHardEndChargingShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.PlayHardEndChargingShake");

	APrimalDinoCharacter_PlayHardEndChargingShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.PlayedAnimationHasAttack
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalDinoCharacter::PlayedAnimationHasAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.PlayedAnimationHasAttack");

	APrimalDinoCharacter_PlayedAnimationHasAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoCharacter.OverrideRandomWanderLocation
// ()
// Parameters:
// struct FVector                 inVec                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APrimalDinoCharacter::OverrideRandomWanderLocation(struct FVector* inVec)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.OverrideRandomWanderLocation");

	APrimalDinoCharacter_OverrideRandomWanderLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (inVec != nullptr)
		*inVec = params.inVec;
}


// Function ShooterGame.PrimalDinoCharacter.OverrideFinalWanderLocation
// ()
// Parameters:
// struct FVector                 outVec                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalDinoCharacter::OverrideFinalWanderLocation(struct FVector* outVec)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.OverrideFinalWanderLocation");

	APrimalDinoCharacter_OverrideFinalWanderLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outVec != nullptr)
		*outVec = params.outVec;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoCharacter.OnRep_Saddle
// ()

void APrimalDinoCharacter::OnRep_Saddle()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.OnRep_Saddle");

	APrimalDinoCharacter_OnRep_Saddle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.OnRep_Rider
// ()

void APrimalDinoCharacter::OnRep_Rider()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.OnRep_Rider");

	APrimalDinoCharacter_OnRep_Rider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.OnRep_PassengerPerSeat
// ()

void APrimalDinoCharacter::OnRep_PassengerPerSeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.OnRep_PassengerPerSeat");

	APrimalDinoCharacter_OnRep_PassengerPerSeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.OnRep_CarriedCharacter
// ()

void APrimalDinoCharacter::OnRep_CarriedCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.OnRep_CarriedCharacter");

	APrimalDinoCharacter_OnRep_CarriedCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.OnRep_bIsFlying
// ()

void APrimalDinoCharacter::OnRep_bIsFlying()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.OnRep_bIsFlying");

	APrimalDinoCharacter_OnRep_bIsFlying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.OnRep_bIsCharging
// ()

void APrimalDinoCharacter::OnRep_bIsCharging()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.OnRep_bIsCharging");

	APrimalDinoCharacter_OnRep_bIsCharging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.OnRep_bBonesHidden
// ()

void APrimalDinoCharacter::OnRep_bBonesHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.OnRep_bBonesHidden");

	APrimalDinoCharacter_OnRep_bBonesHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.NetUpdateDinoOwnerData
// ()
// Parameters:
// struct FString                 NewOwningPlayerName            (Parm, ZeroConstructor)
// int                            NewOwningPlayerID              (Parm, ZeroConstructor, IsPlainOldData)

void APrimalDinoCharacter::NetUpdateDinoOwnerData(const struct FString& NewOwningPlayerName, int NewOwningPlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.NetUpdateDinoOwnerData");

	APrimalDinoCharacter_NetUpdateDinoOwnerData_Params params;
	params.NewOwningPlayerName = NewOwningPlayerName;
	params.NewOwningPlayerID = NewOwningPlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.NetUpdateDinoNameStrings
// ()
// Parameters:
// struct FString                 NewTamerString                 (Parm, ZeroConstructor)
// struct FString                 NewTamedName                   (Parm, ZeroConstructor)

void APrimalDinoCharacter::NetUpdateDinoNameStrings(const struct FString& NewTamerString, const struct FString& NewTamedName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.NetUpdateDinoNameStrings");

	APrimalDinoCharacter_NetUpdateDinoNameStrings_Params params;
	params.NewTamerString = NewTamerString;
	params.NewTamedName = NewTamedName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.KeepFlightTimer
// ()

void APrimalDinoCharacter::KeepFlightTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.KeepFlightTimer");

	APrimalDinoCharacter_KeepFlightTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.IsCurrentlyPlayingAttackAnimation
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalDinoCharacter::IsCurrentlyPlayingAttackAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.IsCurrentlyPlayingAttackAnimation");

	APrimalDinoCharacter_IsCurrentlyPlayingAttackAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoCharacter.IsCurrentAttackStopsMovement
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalDinoCharacter::IsCurrentAttackStopsMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.IsCurrentAttackStopsMovement");

	APrimalDinoCharacter_IsCurrentAttackStopsMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoCharacter.IsAttacking
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalDinoCharacter::IsAttacking()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.IsAttacking");

	APrimalDinoCharacter_IsAttacking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoCharacter.GetTamedFollowTarget
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* APrimalDinoCharacter::GetTamedFollowTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.GetTamedFollowTarget");

	APrimalDinoCharacter_GetTamedFollowTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoCharacter.GetStateOfPlayedAnimationAttack
// ()
// Parameters:
// class UPrimalAIState*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPrimalAIState* APrimalDinoCharacter::GetStateOfPlayedAnimationAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.GetStateOfPlayedAnimationAttack");

	APrimalDinoCharacter_GetStateOfPlayedAnimationAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoCharacter.GetLandingLocation
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector APrimalDinoCharacter::GetLandingLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.GetLandingLocation");

	APrimalDinoCharacter_GetLandingLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoCharacter.GetForceTickPose
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalDinoCharacter::GetForceTickPose()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.GetForceTickPose");

	APrimalDinoCharacter_GetForceTickPose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoCharacter.GetDinoVelocity
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector APrimalDinoCharacter::GetDinoVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.GetDinoVelocity");

	APrimalDinoCharacter_GetDinoVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoCharacter.GetDinoPlatformCollisionIgnoreActors
// ()
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> APrimalDinoCharacter::GetDinoPlatformCollisionIgnoreActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.GetDinoPlatformCollisionIgnoreActors");

	APrimalDinoCharacter_GetDinoPlatformCollisionIgnoreActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoCharacter.GetAimOffsetsTransform
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              RootRotOffsetTransform         (Parm, OutParm, IsPlainOldData)
// float                          TheRootYawSpeed                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MaxYawAimClamp                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 RootLocOffset                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator APrimalDinoCharacter::GetAimOffsetsTransform(float DeltaTime, float MaxYawAimClamp, struct FTransform* RootRotOffsetTransform, float* TheRootYawSpeed, struct FVector* RootLocOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.GetAimOffsetsTransform");

	APrimalDinoCharacter_GetAimOffsetsTransform_Params params;
	params.DeltaTime = DeltaTime;
	params.MaxYawAimClamp = MaxYawAimClamp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RootRotOffsetTransform != nullptr)
		*RootRotOffsetTransform = params.RootRotOffsetTransform;
	if (TheRootYawSpeed != nullptr)
		*TheRootYawSpeed = params.TheRootYawSpeed;
	if (RootLocOffset != nullptr)
		*RootLocOffset = params.RootLocOffset;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoCharacter.GetAIFollowStoppingDistanceOffset
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APrimalDinoCharacter::GetAIFollowStoppingDistanceOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.GetAIFollowStoppingDistanceOffset");

	APrimalDinoCharacter_GetAIFollowStoppingDistanceOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoCharacter.GetAIFollowStoppingDistanceMultiplier
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APrimalDinoCharacter::GetAIFollowStoppingDistanceMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.GetAIFollowStoppingDistanceMultiplier");

	APrimalDinoCharacter_GetAIFollowStoppingDistanceMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoCharacter.GetActiveState
// ()
// Parameters:
// class UPrimalAIState*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPrimalAIState* APrimalDinoCharacter::GetActiveState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.GetActiveState");

	APrimalDinoCharacter_GetActiveState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoCharacter.ForceUpdateColorSets
// ()
// Parameters:
// int                            ColorRegion                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ColorSet                       (Parm, ZeroConstructor, IsPlainOldData)

void APrimalDinoCharacter::ForceUpdateColorSets(int ColorRegion, int ColorSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.ForceUpdateColorSets");

	APrimalDinoCharacter_ForceUpdateColorSets_Params params;
	params.ColorRegion = ColorRegion;
	params.ColorSet = ColorSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.ForceClearRider
// ()

void APrimalDinoCharacter::ForceClearRider()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.ForceClearRider");

	APrimalDinoCharacter_ForceClearRider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.FireProjectile
// ()
// Parameters:
// struct FVector                 Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantizeNormal ShootDir                       (Parm)
// bool                           bScaleProjDamageByDinoDamage   (Parm, ZeroConstructor, IsPlainOldData)

void APrimalDinoCharacter::FireProjectile(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir, bool bScaleProjDamageByDinoDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.FireProjectile");

	APrimalDinoCharacter_FireProjectile_Params params;
	params.Origin = Origin;
	params.ShootDir = ShootDir;
	params.bScaleProjDamageByDinoDamage = bScaleProjDamageByDinoDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.FedWakingTameDino
// ()

void APrimalDinoCharacter::FedWakingTameDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.FedWakingTameDino");

	APrimalDinoCharacter_FedWakingTameDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.DoAttack
// ()
// Parameters:
// int                            AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalDinoCharacter::DoAttack(int AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.DoAttack");

	APrimalDinoCharacter_DoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoCharacter.ClientStartLanding
// ()
// Parameters:
// struct FVector                 landingLoc                     (Parm, ZeroConstructor, IsPlainOldData)

void APrimalDinoCharacter::ClientStartLanding(const struct FVector& landingLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.ClientStartLanding");

	APrimalDinoCharacter_ClientStartLanding_Params params;
	params.landingLoc = landingLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.ClientShouldNotifyLanded
// ()

void APrimalDinoCharacter::ClientShouldNotifyLanded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.ClientShouldNotifyLanded");

	APrimalDinoCharacter_ClientShouldNotifyLanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.ClientInterruptLanding
// ()

void APrimalDinoCharacter::ClientInterruptLanding()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.ClientInterruptLanding");

	APrimalDinoCharacter_ClientInterruptLanding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.ClearCharacterAIMovement
// ()

void APrimalDinoCharacter::ClearCharacterAIMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.ClearCharacterAIMovement");

	APrimalDinoCharacter_ClearCharacterAIMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.CanFly
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalDinoCharacter::CanFly()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.CanFly");

	APrimalDinoCharacter_CanFly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoCharacter.CanAttack
// ()
// Parameters:
// int                            AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalDinoCharacter::CanAttack(int AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.CanAttack");

	APrimalDinoCharacter_CanAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoCharacter.BPUnstasis
// ()

void APrimalDinoCharacter::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.BPUnstasis");

	APrimalDinoCharacter_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.BPSetupTamed
// ()

void APrimalDinoCharacter::BPSetupTamed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.BPSetupTamed");

	APrimalDinoCharacter_BPSetupTamed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.BPIsTamed
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalDinoCharacter::BPIsTamed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.BPIsTamed");

	APrimalDinoCharacter_BPIsTamed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoCharacter.BPAllowEquippingItemType
// ()
// Parameters:
// TEnumAsByte<EPrimalEquipmentType> EquipmentType                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalDinoCharacter::BPAllowEquippingItemType(TEnumAsByte<EPrimalEquipmentType> EquipmentType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.BPAllowEquippingItemType");

	APrimalDinoCharacter_BPAllowEquippingItemType_Params params;
	params.EquipmentType = EquipmentType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoCharacter.BlueprintTamedTick
// ()

void APrimalDinoCharacter::BlueprintTamedTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.BlueprintTamedTick");

	APrimalDinoCharacter_BlueprintTamedTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.BlueprintOverrideWantsToRun
// ()
// Parameters:
// bool                           bInputWantsToRun               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalDinoCharacter::BlueprintOverrideWantsToRun(bool bInputWantsToRun)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.BlueprintOverrideWantsToRun");

	APrimalDinoCharacter_BlueprintOverrideWantsToRun_Params params;
	params.bInputWantsToRun = bInputWantsToRun;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoCharacter.BlueprintDrawFloatingHUD
// ()
// Parameters:
// class AShooterHUD*             HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void APrimalDinoCharacter::BlueprintDrawFloatingHUD(class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.BlueprintDrawFloatingHUD");

	APrimalDinoCharacter_BlueprintDrawFloatingHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.BlueprintCanAttack
// ()
// Parameters:
// int                            AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalDinoCharacter::BlueprintCanAttack(int AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.BlueprintCanAttack");

	APrimalDinoCharacter_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoCharacter.ApplyRidingAttackExtraVelocity
// ()

void APrimalDinoCharacter::ApplyRidingAttackExtraVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.ApplyRidingAttackExtraVelocity");

	APrimalDinoCharacter_ApplyRidingAttackExtraVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoCharacter.AllowWakingTame
// ()
// Parameters:
// class APlayerController*       ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalDinoCharacter::AllowWakingTame(class APlayerController* ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.AllowWakingTame");

	APrimalDinoCharacter_AllowWakingTame_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoCharacter.AddedImprintingQuality
// ()
// Parameters:
// float                          amount                         (Parm, ZeroConstructor, IsPlainOldData)

void APrimalDinoCharacter::AddedImprintingQuality(float amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoCharacter.AddedImprintingQuality");

	APrimalDinoCharacter_AddedImprintingQuality_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalWheeledVehicleCharacter.ServerHonk
// ()
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void APrimalWheeledVehicleCharacter::ServerHonk(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalWheeledVehicleCharacter.ServerHonk");

	APrimalWheeledVehicleCharacter_ServerHonk_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalWheeledVehicleCharacter.NetHonk
// ()
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void APrimalWheeledVehicleCharacter::NetHonk(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalWheeledVehicleCharacter.NetHonk");

	APrimalWheeledVehicleCharacter_NetHonk_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalWheeledVehicleCharacter.GetVehicleMovementComponent
// ()
// Parameters:
// class UWheeledVehicleMovementComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWheeledVehicleMovementComponent* APrimalWheeledVehicleCharacter::GetVehicleMovementComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalWheeledVehicleCharacter.GetVehicleMovementComponent");

	APrimalWheeledVehicleCharacter_GetVehicleMovementComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.UseAlternateStandingAnim
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::UseAlternateStandingAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.UseAlternateStandingAnim");

	AShooterCharacter_UseAlternateStandingAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.UseAltAimOffsetAnim
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::UseAltAimOffsetAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.UseAltAimOffsetAnim");

	AShooterCharacter_UseAltAimOffsetAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.UseAdditiveStandingAnim
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::UseAdditiveStandingAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.UseAdditiveStandingAnim");

	AShooterCharacter_UseAdditiveStandingAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.SyncGrapHookDistance
// ()
// Parameters:
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::SyncGrapHookDistance(float Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.SyncGrapHookDistance");

	AShooterCharacter_SyncGrapHookDistance_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.SetCarriedPitchYaw
// ()
// Parameters:
// float                          NewCarriedPitch                (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewCarriedYaw                  (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::SetCarriedPitchYaw(float NewCarriedPitch, float NewCarriedYaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.SetCarriedPitchYaw");

	AShooterCharacter_SetCarriedPitchYaw_Params params;
	params.NewCarriedPitch = NewCarriedPitch;
	params.NewCarriedYaw = NewCarriedYaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerToClientsPlayFireBallistaAnimation
// ()

void AShooterCharacter::ServerToClientsPlayFireBallistaAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerToClientsPlayFireBallistaAnimation");

	AShooterCharacter_ServerToClientsPlayFireBallistaAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerSwitchMap
// ()

void AShooterCharacter::ServerSwitchMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerSwitchMap");

	AShooterCharacter_ServerSwitchMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerStopFireBallista
// ()

void AShooterCharacter::ServerStopFireBallista()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerStopFireBallista");

	AShooterCharacter_ServerStopFireBallista_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerSetViewingInventory
// ()
// Parameters:
// bool                           bIsViewing                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ServerSetViewingInventory(bool bIsViewing)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerSetViewingInventory");

	AShooterCharacter_ServerSetViewingInventory_Params params;
	params.bIsViewing = bIsViewing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerSetTargeting
// ()
// Parameters:
// bool                           bNewTargeting                  (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ServerSetTargeting(bool bNewTargeting)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerSetTargeting");

	AShooterCharacter_ServerSetTargeting_Params params;
	params.bNewTargeting = bNewTargeting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerSetBallistaNewRotation
// ()
// Parameters:
// float                          Pitch                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ServerSetBallistaNewRotation(float Pitch, float Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerSetBallistaNewRotation");

	AShooterCharacter_ServerSetBallistaNewRotation_Params params;
	params.Pitch = Pitch;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerSeatingStructureAction
// ()
// Parameters:
// unsigned char                  ActionNumber                   (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ServerSeatingStructureAction(unsigned char ActionNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerSeatingStructureAction");

	AShooterCharacter_ServerSeatingStructureAction_Params params;
	params.ActionNumber = ActionNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerReleaseGrapHookCable
// ()
// Parameters:
// bool                           bReleasing                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ServerReleaseGrapHookCable(bool bReleasing)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerReleaseGrapHookCable");

	AShooterCharacter_ServerReleaseGrapHookCable_Params params;
	params.bReleasing = bReleasing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerPlayFireBallistaAnimation
// ()

void AShooterCharacter::ServerPlayFireBallistaAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerPlayFireBallistaAnimation");

	AShooterCharacter_ServerPlayFireBallistaAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerNotifyBallistaShot
// ()
// Parameters:
// struct FHitResult              Impact                         (Parm)
// struct FVector_NetQuantizeNormal ShootDir                       (Parm)

void AShooterCharacter::ServerNotifyBallistaShot(const struct FHitResult& Impact, const struct FVector_NetQuantizeNormal& ShootDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerNotifyBallistaShot");

	AShooterCharacter_ServerNotifyBallistaShot_Params params;
	params.Impact = Impact;
	params.ShootDir = ShootDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerNetEndClimbingLadder
// ()
// Parameters:
// bool                           bIsClimbOver                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ClimbOverLoc                   (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ServerNetEndClimbingLadder(bool bIsClimbOver, const struct FVector& ClimbOverLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerNetEndClimbingLadder");

	AShooterCharacter_ServerNetEndClimbingLadder_Params params;
	params.bIsClimbOver = bIsClimbOver;
	params.ClimbOverLoc = ClimbOverLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerLaunchMountedDino
// ()

void AShooterCharacter::ServerLaunchMountedDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerLaunchMountedDino");

	AShooterCharacter_ServerLaunchMountedDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerFireBallistaProjectile
// ()
// Parameters:
// struct FVector                 Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantizeNormal ShootDir                       (Parm)

void AShooterCharacter::ServerFireBallistaProjectile(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerFireBallistaProjectile");

	AShooterCharacter_ServerFireBallistaProjectile_Params params;
	params.Origin = Origin;
	params.ShootDir = ShootDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerDoProne
// ()

void AShooterCharacter::ServerDoProne()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerDoProne");

	AShooterCharacter_ServerDoProne_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerDoCrouch
// ()

void AShooterCharacter::ServerDoCrouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerDoCrouch");

	AShooterCharacter_ServerDoCrouch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerDetachGrapHookCable
// ()
// Parameters:
// bool                           bDoUpwardsJump                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          UpwardsJumpYaw                 (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ServerDetachGrapHookCable(bool bDoUpwardsJump, float UpwardsJumpYaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerDetachGrapHookCable");

	AShooterCharacter_ServerDetachGrapHookCable_Params params;
	params.bDoUpwardsJump = bDoUpwardsJump;
	params.UpwardsJumpYaw = UpwardsJumpYaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerCheckDrinkingWater
// ()

void AShooterCharacter::ServerCheckDrinkingWater()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerCheckDrinkingWater");

	AShooterCharacter_ServerCheckDrinkingWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.RenamePlayer
// ()
// Parameters:
// struct FString                 NewName                        (Parm, ZeroConstructor)

void AShooterCharacter::RenamePlayer(const struct FString& NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.RenamePlayer");

	AShooterCharacter_RenamePlayer_Params params;
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.PlayEmoteAnimation
// ()
// Parameters:
// unsigned char                  EmoteIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::PlayEmoteAnimation(unsigned char EmoteIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.PlayEmoteAnimation");

	AShooterCharacter_PlayEmoteAnimation_Params params;
	params.EmoteIndex = EmoteIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnRep_RawBoneModifiers
// ()

void AShooterCharacter::OnRep_RawBoneModifiers()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnRep_RawBoneModifiers");

	AShooterCharacter_OnRep_RawBoneModifiers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnRep_CurrentWeapon
// ()
// Parameters:
// class AShooterWeapon*          LastWeapon                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::OnRep_CurrentWeapon(class AShooterWeapon* LastWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnRep_CurrentWeapon");

	AShooterCharacter_OnRep_CurrentWeapon_Params params;
	params.LastWeapon = LastWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.LinkedPlayerUniqueIDString
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString AShooterCharacter::LinkedPlayerUniqueIDString()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.LinkedPlayerUniqueIDString");

	AShooterCharacter_LinkedPlayerUniqueIDString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.LinkedPlayerIDString
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString AShooterCharacter::LinkedPlayerIDString()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.LinkedPlayerIDString");

	AShooterCharacter_LinkedPlayerIDString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsUsingShield
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsUsingShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsUsingShield");

	AShooterCharacter_IsUsingShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsTargeting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsTargeting");

	AShooterCharacter_IsTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsIndoorsAtLoc
// ()
// Parameters:
// class UWorld*                  TheWorld                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 actorLoc                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsIndoorsAtLoc(class UWorld* TheWorld, const struct FVector& actorLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsIndoorsAtLoc");

	AShooterCharacter_IsIndoorsAtLoc_Params params;
	params.TheWorld = TheWorld;
	params.actorLoc = actorLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsFiring
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsFiring");

	AShooterCharacter_IsFiring_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsCarriedAsPassenger
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsCarriedAsPassenger()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsCarriedAsPassenger");

	AShooterCharacter_IsCarriedAsPassenger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsBlockingWithShield
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsBlockingWithShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsBlockingWithShield");

	AShooterCharacter_IsBlockingWithShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GiveDefaultWeaponTimer
// ()

void AShooterCharacter::GiveDefaultWeaponTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GiveDefaultWeaponTimer");

	AShooterCharacter_GiveDefaultWeaponTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.GetWeapon
// ()
// Parameters:
// class AShooterWeapon*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterWeapon* AShooterCharacter::GetWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetWeapon");

	AShooterCharacter_GetWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetTargetingSpeedModifier
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterCharacter::GetTargetingSpeedModifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetTargetingSpeedModifier");

	AShooterCharacter_GetTargetingSpeedModifier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetSeatingAnimation
// ()
// Parameters:
// class UAnimSequence*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimSequence* AShooterCharacter::GetSeatingAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetSeatingAnimation");

	AShooterCharacter_GetSeatingAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetRidingDinoAnimSpeedRatio
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterCharacter::GetRidingDinoAnimSpeedRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetRidingDinoAnimSpeedRatio");

	AShooterCharacter_GetRidingDinoAnimSpeedRatio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetPlayerData
// ()
// Parameters:
// class UPrimalPlayerData*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPrimalPlayerData* AShooterCharacter::GetPlayerData()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetPlayerData");

	AShooterCharacter_GetPlayerData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetDinoRidingMoveAnimation
// ()
// Parameters:
// class UAnimSequence*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimSequence* AShooterCharacter::GetDinoRidingMoveAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetDinoRidingMoveAnimation");

	AShooterCharacter_GetDinoRidingMoveAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetDinoRidingAnimation
// ()
// Parameters:
// class UAnimSequence*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimSequence* AShooterCharacter::GetDinoRidingAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetDinoRidingAnimation");

	AShooterCharacter_GetDinoRidingAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetBlockingShieldOffsets
// ()
// Parameters:
// struct FVector                 OutBlockingShieldFPVTranslation (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                OutBlockingShieldFPVRotation   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::GetBlockingShieldOffsets(struct FVector* OutBlockingShieldFPVTranslation, struct FRotator* OutBlockingShieldFPVRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetBlockingShieldOffsets");

	AShooterCharacter_GetBlockingShieldOffsets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutBlockingShieldFPVTranslation != nullptr)
		*OutBlockingShieldFPVTranslation = params.OutBlockingShieldFPVTranslation;
	if (OutBlockingShieldFPVRotation != nullptr)
		*OutBlockingShieldFPVRotation = params.OutBlockingShieldFPVRotation;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetAlternateStandingAnim
// ()
// Parameters:
// float                          OutBlendInTime                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutBlendOutTime                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UAnimSequence*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimSequence* AShooterCharacter::GetAlternateStandingAnim(float* OutBlendInTime, float* OutBlendOutTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetAlternateStandingAnim");

	AShooterCharacter_GetAlternateStandingAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutBlendInTime != nullptr)
		*OutBlendInTime = params.OutBlendInTime;
	if (OutBlendOutTime != nullptr)
		*OutBlendOutTime = params.OutBlendOutTime;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetAdditiveStandingAnim
// ()
// Parameters:
// float                          OutBlendInTime                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutBlendOutTime                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UAnimSequence*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimSequence* AShooterCharacter::GetAdditiveStandingAnim(float* OutBlendInTime, float* OutBlendOutTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetAdditiveStandingAnim");

	AShooterCharacter_GetAdditiveStandingAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutBlendInTime != nullptr)
		*OutBlendInTime = params.OutBlendInTime;
	if (OutBlendOutTime != nullptr)
		*OutBlendOutTime = params.OutBlendOutTime;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetActualTargetingFOV
// ()
// Parameters:
// float                          DefaultTargetingFOV            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterCharacter::GetActualTargetingFOV(float DefaultTargetingFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetActualTargetingFOV");

	AShooterCharacter_GetActualTargetingFOV_Params params;
	params.DefaultTargetingFOV = DefaultTargetingFOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GameStateHandleEvent
// ()
// Parameters:
// struct FName                   NameParam                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 VecParam                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::GameStateHandleEvent(const struct FName& NameParam, const struct FVector& VecParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GameStateHandleEvent");

	AShooterCharacter_GameStateHandleEvent_Params params;
	params.NameParam = NameParam;
	params.VecParam = VecParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.DetachGrapHookCable
// ()

void AShooterCharacter::DetachGrapHookCable()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.DetachGrapHookCable");

	AShooterCharacter_DetachGrapHookCable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.DetachFromLadder
// ()

void AShooterCharacter::DetachFromLadder()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.DetachFromLadder");

	AShooterCharacter_DetachFromLadder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ClientUpdateTranspondersInfo
// ()
// Parameters:
// TArray<struct FTransponderInfo> TranspondersInfo               (ConstParm, Parm, ZeroConstructor)
// bool                           bNewData                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ClientUpdateTranspondersInfo(TArray<struct FTransponderInfo> TranspondersInfo, bool bNewData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ClientUpdateTranspondersInfo");

	AShooterCharacter_ClientUpdateTranspondersInfo_Params params;
	params.TranspondersInfo = TranspondersInfo;
	params.bNewData = bNewData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ClientPlayHarvestAnim
// ()

void AShooterCharacter::ClientPlayHarvestAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ClientPlayHarvestAnim");

	AShooterCharacter_ClientPlayHarvestAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ClientNotifyTribeRequest
// ()
// Parameters:
// struct FString                 RequestTribeName               (Parm, ZeroConstructor)
// class AShooterCharacter*       PlayerCharacter                (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ClientNotifyTribeRequest(const struct FString& RequestTribeName, class AShooterCharacter* PlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ClientNotifyTribeRequest");

	AShooterCharacter_ClientNotifyTribeRequest_Params params;
	params.RequestTribeName = RequestTribeName;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ClientNetEndClimbingLadder
// ()

void AShooterCharacter::ClientNetEndClimbingLadder()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ClientNetEndClimbingLadder");

	AShooterCharacter_ClientNetEndClimbingLadder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ClientInviteToAlliance
// ()
// Parameters:
// int                            RequestingTeam                 (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       AllianceID                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 AllianceName                   (Parm, ZeroConstructor)
// struct FString                 InviteeName                    (Parm, ZeroConstructor)

void AShooterCharacter::ClientInviteToAlliance(int RequestingTeam, uint32_t AllianceID, const struct FString& AllianceName, const struct FString& InviteeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ClientInviteToAlliance");

	AShooterCharacter_ClientInviteToAlliance_Params params;
	params.RequestingTeam = RequestingTeam;
	params.AllianceID = AllianceID;
	params.AllianceName = AllianceName;
	params.InviteeName = InviteeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ClientClearTribeRequest
// ()

void AShooterCharacter::ClientClearTribeRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ClientClearTribeRequest");

	AShooterCharacter_ClientClearTribeRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ClearSpawnAnim
// ()

void AShooterCharacter::ClearSpawnAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ClearSpawnAnim");

	AShooterCharacter_ClearSpawnAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ClearRidingDino
// ()
// Parameters:
// bool                           bFromDino                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ClearRidingDino(bool bFromDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ClearRidingDino");

	AShooterCharacter_ClearRidingDino_Params params;
	params.bFromDino = bFromDino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.CallGameStateHandleEvent
// ()
// Parameters:
// struct FName                   NameParam                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 VecParam                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::CallGameStateHandleEvent(const struct FName& NameParam, const struct FVector& VecParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.CallGameStateHandleEvent");

	AShooterCharacter_CallGameStateHandleEvent_Params params;
	params.NameParam = NameParam;
	params.VecParam = VecParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.BlueprintDrawFloatingHUD
// ()
// Parameters:
// class AShooterHUD*             HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::BlueprintDrawFloatingHUD(class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.BlueprintDrawFloatingHUD");

	AShooterCharacter_BlueprintDrawFloatingHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.AuthPostSpawnInit
// ()

void AShooterCharacter::AuthPostSpawnInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.AuthPostSpawnInit");

	AShooterCharacter_AuthPostSpawnInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.AttachToLadder
// ()
// Parameters:
// class USceneComponent*         Parent                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AShooterCharacter::AttachToLadder(class USceneComponent* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.AttachToLadder");

	AShooterCharacter_AttachToLadder_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.AnimUseAimOffset
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::AnimUseAimOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.AnimUseAimOffset");

	AShooterCharacter_AnimUseAimOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerState.ServerTribeRequestRemoveRankGroup
// ()
// Parameters:
// int                            RankGroupIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerState::ServerTribeRequestRemoveRankGroup(int RankGroupIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ServerTribeRequestRemoveRankGroup");

	AShooterPlayerState_ServerTribeRequestRemoveRankGroup_Params params;
	params.RankGroupIndex = RankGroupIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ServerTribeRequestNewAlliance
// ()
// Parameters:
// struct FString                 AllianceName                   (Parm, ZeroConstructor)

void AShooterPlayerState::ServerTribeRequestNewAlliance(const struct FString& AllianceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ServerTribeRequestNewAlliance");

	AShooterPlayerState_ServerTribeRequestNewAlliance_Params params;
	params.AllianceName = AllianceName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ServerTribeRequestApplyRankGroupSettings
// ()
// Parameters:
// int                            RankGroupIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTribeRankGroup         newGroupSettings               (Parm)

void AShooterPlayerState::ServerTribeRequestApplyRankGroupSettings(int RankGroupIndex, const struct FTribeRankGroup& newGroupSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ServerTribeRequestApplyRankGroupSettings");

	AShooterPlayerState_ServerTribeRequestApplyRankGroupSettings_Params params;
	params.RankGroupIndex = RankGroupIndex;
	params.newGroupSettings = newGroupSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ServerTribeRequestAddRankGroup
// ()

void AShooterPlayerState::ServerTribeRequestAddRankGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ServerTribeRequestAddRankGroup");

	AShooterPlayerState_ServerTribeRequestAddRankGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ServerSetDefaultItemSlotClass
// ()
// Parameters:
// int                            slotNum                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ItemClass                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsEngram                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerState::ServerSetDefaultItemSlotClass(int slotNum, class UClass* ItemClass, bool bIsEngram)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ServerSetDefaultItemSlotClass");

	AShooterPlayerState_ServerSetDefaultItemSlotClass_Params params;
	params.slotNum = slotNum;
	params.ItemClass = ItemClass;
	params.bIsEngram = bIsEngram;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ServerRequestTransferOwnershipInMyTribe
// ()
// Parameters:
// int                            PlayerIndexInTribe             (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerState::ServerRequestTransferOwnershipInMyTribe(int PlayerIndexInTribe)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ServerRequestTransferOwnershipInMyTribe");

	AShooterPlayerState_ServerRequestTransferOwnershipInMyTribe_Params params;
	params.PlayerIndexInTribe = PlayerIndexInTribe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ServerRequestSetTribeMemberGroupRank
// ()
// Parameters:
// int                            PlayerIndexInTribe             (Parm, ZeroConstructor, IsPlainOldData)
// int                            RankGroupIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerState::ServerRequestSetTribeMemberGroupRank(int PlayerIndexInTribe, int RankGroupIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ServerRequestSetTribeMemberGroupRank");

	AShooterPlayerState_ServerRequestSetTribeMemberGroupRank_Params params;
	params.PlayerIndexInTribe = PlayerIndexInTribe;
	params.RankGroupIndex = RankGroupIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ServerRequestSetTribeGovernment
// ()
// Parameters:
// struct FTribeGovernment        TribeGovernment                (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerState::ServerRequestSetTribeGovernment(const struct FTribeGovernment& TribeGovernment)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ServerRequestSetTribeGovernment");

	AShooterPlayerState_ServerRequestSetTribeGovernment_Params params;
	params.TribeGovernment = TribeGovernment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ServerRequestRenameTribe
// ()
// Parameters:
// struct FString                 ServerRequestRenameTribe       (Parm, ZeroConstructor)

void AShooterPlayerState::ServerRequestRenameTribe(const struct FString& ServerRequestRenameTribe)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ServerRequestRenameTribe");

	AShooterPlayerState_ServerRequestRenameTribe_Params params;
	params.ServerRequestRenameTribe = ServerRequestRenameTribe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ServerRequestRemovePlayerIndexFromMyTribe
// ()
// Parameters:
// int                            PlayerIndexInTribe             (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerState::ServerRequestRemovePlayerIndexFromMyTribe(int PlayerIndexInTribe)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ServerRequestRemovePlayerIndexFromMyTribe");

	AShooterPlayerState_ServerRequestRemovePlayerIndexFromMyTribe_Params params;
	params.PlayerIndexInTribe = PlayerIndexInTribe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ServerRequestRemoveAllianceMember
// ()
// Parameters:
// uint32_t                       AllianceID                     (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       MemberID                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerState::ServerRequestRemoveAllianceMember(uint32_t AllianceID, uint32_t MemberID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ServerRequestRemoveAllianceMember");

	AShooterPlayerState_ServerRequestRemoveAllianceMember_Params params;
	params.AllianceID = AllianceID;
	params.MemberID = MemberID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ServerRequestPromotePlayerInMyTribe
// ()
// Parameters:
// int                            PlayerIndexInTribe             (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerState::ServerRequestPromotePlayerInMyTribe(int PlayerIndexInTribe)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ServerRequestPromotePlayerInMyTribe");

	AShooterPlayerState_ServerRequestPromotePlayerInMyTribe_Params params;
	params.PlayerIndexInTribe = PlayerIndexInTribe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ServerRequestPromoteAllianceMember
// ()
// Parameters:
// uint32_t                       AllianceID                     (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       MemberID                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerState::ServerRequestPromoteAllianceMember(uint32_t AllianceID, uint32_t MemberID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ServerRequestPromoteAllianceMember");

	AShooterPlayerState_ServerRequestPromoteAllianceMember_Params params;
	params.AllianceID = AllianceID;
	params.MemberID = MemberID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ServerRequestMySpawnPoints
// ()
// Parameters:
// int                            IgnoreBedID                    (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerState::ServerRequestMySpawnPoints(int IgnoreBedID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ServerRequestMySpawnPoints");

	AShooterPlayerState_ServerRequestMySpawnPoints_Params params;
	params.IgnoreBedID = IgnoreBedID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ServerRequestLeaveTribe
// ()

void AShooterPlayerState::ServerRequestLeaveTribe()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ServerRequestLeaveTribe");

	AShooterPlayerState_ServerRequestLeaveTribe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ServerRequestLeaveAlliance
// ()
// Parameters:
// uint32_t                       AllianceID                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerState::ServerRequestLeaveAlliance(uint32_t AllianceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ServerRequestLeaveAlliance");

	AShooterPlayerState_ServerRequestLeaveAlliance_Params params;
	params.AllianceID = AllianceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ServerRequestDemotePlayerInMyTribe
// ()
// Parameters:
// int                            PlayerIndexInTribe             (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerState::ServerRequestDemotePlayerInMyTribe(int PlayerIndexInTribe)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ServerRequestDemotePlayerInMyTribe");

	AShooterPlayerState_ServerRequestDemotePlayerInMyTribe_Params params;
	params.PlayerIndexInTribe = PlayerIndexInTribe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ServerRequestCreateNewTribe
// ()
// Parameters:
// struct FString                 TribeName                      (Parm, ZeroConstructor)
// struct FTribeGovernment        TribeGovernment                (Parm, ZeroConstructor, IsPlainOldData)
// struct FUserCosmeticInfo       UserCosmeticInfo               (Parm)

void AShooterPlayerState::ServerRequestCreateNewTribe(const struct FString& TribeName, const struct FTribeGovernment& TribeGovernment, const struct FUserCosmeticInfo& UserCosmeticInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ServerRequestCreateNewTribe");

	AShooterPlayerState_ServerRequestCreateNewTribe_Params params;
	params.TribeName = TribeName;
	params.TribeGovernment = TribeGovernment;
	params.UserCosmeticInfo = UserCosmeticInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ServerRequestCreateNewPlayer
// ()
// Parameters:
// struct FPrimalPlayerCharacterConfigStructReplicated PlayerCharacterConfig          (Parm)
// struct FUserCosmeticInfo       UserCosmeticInfo               (Parm)

void AShooterPlayerState::ServerRequestCreateNewPlayer(const struct FPrimalPlayerCharacterConfigStructReplicated& PlayerCharacterConfig, const struct FUserCosmeticInfo& UserCosmeticInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ServerRequestCreateNewPlayer");

	AShooterPlayerState_ServerRequestCreateNewPlayer_Params params;
	params.PlayerCharacterConfig = PlayerCharacterConfig;
	params.UserCosmeticInfo = UserCosmeticInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ServerRequestApplyEngramPoints
// ()
// Parameters:
// class UClass*                  forItemEntry                   (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerState::ServerRequestApplyEngramPoints(class UClass* forItemEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ServerRequestApplyEngramPoints");

	AShooterPlayerState_ServerRequestApplyEngramPoints_Params params;
	params.forItemEntry = forItemEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ServerRejectTribeWar
// ()
// Parameters:
// int                            EnemyTeamID                    (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerState::ServerRejectTribeWar(int EnemyTeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ServerRejectTribeWar");

	AShooterPlayerState_ServerRejectTribeWar_Params params;
	params.EnemyTeamID = EnemyTeamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ServerGetServerOptions
// ()

void AShooterPlayerState::ServerGetServerOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ServerGetServerOptions");

	AShooterPlayerState_ServerGetServerOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ServerGetPlayerWhiteListedData
// ()

void AShooterPlayerState::ServerGetPlayerWhiteListedData()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ServerGetPlayerWhiteListedData");

	AShooterPlayerState_ServerGetPlayerWhiteListedData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ServerGetPlayerConnectedData
// ()

void AShooterPlayerState::ServerGetPlayerConnectedData()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ServerGetPlayerConnectedData");

	AShooterPlayerState_ServerGetPlayerConnectedData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ServerGetPlayerBannedData
// ()

void AShooterPlayerState::ServerGetPlayerBannedData()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ServerGetPlayerBannedData");

	AShooterPlayerState_ServerGetPlayerBannedData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ServerGetAllPlayerNamesAndLocations
// ()

void AShooterPlayerState::ServerGetAllPlayerNamesAndLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ServerGetAllPlayerNamesAndLocations");

	AShooterPlayerState_ServerGetAllPlayerNamesAndLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ServerGetAlivePlayerConnectedData
// ()

void AShooterPlayerState::ServerGetAlivePlayerConnectedData()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ServerGetAlivePlayerConnectedData");

	AShooterPlayerState_ServerGetAlivePlayerConnectedData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ServerDeclareTribeWar
// ()
// Parameters:
// int                            EnemyTeamID                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            StartDayNum                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            EndDayNumber                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          WarStartTime                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          WarEndTime                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerState::ServerDeclareTribeWar(int EnemyTeamID, int StartDayNum, int EndDayNumber, float WarStartTime, float WarEndTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ServerDeclareTribeWar");

	AShooterPlayerState_ServerDeclareTribeWar_Params params;
	params.EnemyTeamID = EnemyTeamID;
	params.StartDayNum = StartDayNum;
	params.EndDayNumber = EndDayNumber;
	params.WarStartTime = WarStartTime;
	params.WarEndTime = WarEndTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ServerAcceptTribeWar
// ()
// Parameters:
// int                            EnemyTeamID                    (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerState::ServerAcceptTribeWar(int EnemyTeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ServerAcceptTribeWar");

	AShooterPlayerState_ServerAcceptTribeWar_Params params;
	params.EnemyTeamID = EnemyTeamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.SendTribeInviteData
// ()
// Parameters:
// struct FTribeData              TribeInviteData                (Parm)

void AShooterPlayerState::SendTribeInviteData(const struct FTribeData& TribeInviteData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.SendTribeInviteData");

	AShooterPlayerState_SendTribeInviteData_Params params;
	params.TribeInviteData = TribeInviteData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.NotifyTribememberLeft
// ()
// Parameters:
// struct FString                 ThePlayerName                  (Parm, ZeroConstructor)

void AShooterPlayerState::NotifyTribememberLeft(const struct FString& ThePlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.NotifyTribememberLeft");

	AShooterPlayerState_NotifyTribememberLeft_Params params;
	params.ThePlayerName = ThePlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.NotifyTribememberJoined
// ()
// Parameters:
// struct FString                 ThePlayerName                  (Parm, ZeroConstructor)

void AShooterPlayerState::NotifyTribememberJoined(const struct FString& ThePlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.NotifyTribememberJoined");

	AShooterPlayerState_NotifyTribememberJoined_Params params;
	params.ThePlayerName = ThePlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.NotifyPlayerLeftTribe
// ()
// Parameters:
// struct FString                 ThePlayerName                  (Parm, ZeroConstructor)
// struct FString                 TribeName                      (Parm, ZeroConstructor)

void AShooterPlayerState::NotifyPlayerLeftTribe(const struct FString& ThePlayerName, const struct FString& TribeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.NotifyPlayerLeftTribe");

	AShooterPlayerState_NotifyPlayerLeftTribe_Params params;
	params.ThePlayerName = ThePlayerName;
	params.TribeName = TribeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.NotifyPlayerLeft
// ()
// Parameters:
// struct FString                 ThePlayerName                  (Parm, ZeroConstructor)

void AShooterPlayerState::NotifyPlayerLeft(const struct FString& ThePlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.NotifyPlayerLeft");

	AShooterPlayerState_NotifyPlayerLeft_Params params;
	params.ThePlayerName = ThePlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.NotifyPlayerJoinedTribe
// ()
// Parameters:
// struct FString                 ThePlayerName                  (Parm, ZeroConstructor)
// struct FString                 TribeName                      (Parm, ZeroConstructor)

void AShooterPlayerState::NotifyPlayerJoinedTribe(const struct FString& ThePlayerName, const struct FString& TribeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.NotifyPlayerJoinedTribe");

	AShooterPlayerState_NotifyPlayerJoinedTribe_Params params;
	params.ThePlayerName = ThePlayerName;
	params.TribeName = TribeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.NotifyPlayerJoined
// ()
// Parameters:
// struct FString                 ThePlayerName                  (Parm, ZeroConstructor)

void AShooterPlayerState::NotifyPlayerJoined(const struct FString& ThePlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.NotifyPlayerJoined");

	AShooterPlayerState_NotifyPlayerJoined_Params params;
	params.ThePlayerName = ThePlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.IsInTribe
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterPlayerState::IsInTribe()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.IsInTribe");

	AShooterPlayerState_IsInTribe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerState.GetUniqueIdString
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString AShooterPlayerState::GetUniqueIdString()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.GetUniqueIdString");

	AShooterPlayerState_GetUniqueIdString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerState.GetTribeID
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterPlayerState::GetTribeID()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.GetTribeID");

	AShooterPlayerState_GetTribeID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerState.DoRespec
// ()

void AShooterPlayerState::DoRespec()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.DoRespec");

	AShooterPlayerState_DoRespec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ClientReceiveSpawnPoints
// ()
// Parameters:
// TArray<struct FSpawnPointInfo> SpawnPointsInfos               (ConstParm, Parm, ZeroConstructor)

void AShooterPlayerState::ClientReceiveSpawnPoints(TArray<struct FSpawnPointInfo> SpawnPointsInfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ClientReceiveSpawnPoints");

	AShooterPlayerState_ClientReceiveSpawnPoints_Params params;
	params.SpawnPointsInfos = SpawnPointsInfos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ClientNotifyLevelUpAvailable
// ()

void AShooterPlayerState::ClientNotifyLevelUpAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ClientNotifyLevelUpAvailable");

	AShooterPlayerState_ClientNotifyLevelUpAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ClientGetServerOptions
// ()
// Parameters:
// struct FServerOptions          Info                           (Parm)

void AShooterPlayerState::ClientGetServerOptions(const struct FServerOptions& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ClientGetServerOptions");

	AShooterPlayerState_ClientGetServerOptions_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ClientGetPlayerWhiteListedData
// ()
// Parameters:
// TArray<struct FAdminPlayerDataInfo> list                           (ConstParm, Parm, ZeroConstructor)

void AShooterPlayerState::ClientGetPlayerWhiteListedData(TArray<struct FAdminPlayerDataInfo> list)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ClientGetPlayerWhiteListedData");

	AShooterPlayerState_ClientGetPlayerWhiteListedData_Params params;
	params.list = list;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ClientGetPlayerConnectedData
// ()
// Parameters:
// TArray<struct FAdminPlayerDataInfo> list                           (ConstParm, Parm, ZeroConstructor)

void AShooterPlayerState::ClientGetPlayerConnectedData(TArray<struct FAdminPlayerDataInfo> list)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ClientGetPlayerConnectedData");

	AShooterPlayerState_ClientGetPlayerConnectedData_Params params;
	params.list = list;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ClientGetPlayerBannedData
// ()
// Parameters:
// TArray<struct FAdminPlayerDataInfo> list                           (ConstParm, Parm, ZeroConstructor)

void AShooterPlayerState::ClientGetPlayerBannedData(TArray<struct FAdminPlayerDataInfo> list)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ClientGetPlayerBannedData");

	AShooterPlayerState_ClientGetPlayerBannedData_Params params;
	params.list = list;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ClientGetAllPlayerNamesAndLocations
// ()
// Parameters:
// TArray<struct FAliveNameAndLocation> list                           (ConstParm, Parm, ZeroConstructor)

void AShooterPlayerState::ClientGetAllPlayerNamesAndLocations(TArray<struct FAliveNameAndLocation> list)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ClientGetAllPlayerNamesAndLocations");

	AShooterPlayerState_ClientGetAllPlayerNamesAndLocations_Params params;
	params.list = list;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ClientGetAlivePlayerConnectedData
// ()
// Parameters:
// TArray<struct FAlivePlayerDataInfo> list                           (ConstParm, Parm, ZeroConstructor)

void AShooterPlayerState::ClientGetAlivePlayerConnectedData(TArray<struct FAlivePlayerDataInfo> list)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ClientGetAlivePlayerConnectedData");

	AShooterPlayerState_ClientGetAlivePlayerConnectedData_Params params;
	params.list = list;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ClearTribe
// ()
// Parameters:
// bool                           bDontRemoveFromTribe           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerState::ClearTribe(bool bDontRemoveFromTribe, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ClearTribe");

	AShooterPlayerState_ClearTribe_Params params;
	params.bDontRemoveFromTribe = bDontRemoveFromTribe;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.BroadcastDeath
// ()
// Parameters:
// class AShooterPlayerState*     KillerPlayerState              (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             KillerDamageType               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerState*     KilledPlayerState              (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerState::BroadcastDeath(class AShooterPlayerState* KillerPlayerState, class UDamageType* KillerDamageType, class AShooterPlayerState* KilledPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.BroadcastDeath");

	AShooterPlayerState_BroadcastDeath_Params params;
	params.KillerPlayerState = KillerPlayerState;
	params.KillerDamageType = KillerDamageType;
	params.KilledPlayerState = KilledPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.AllowTribeGroupPermission
// ()
// Parameters:
// TEnumAsByte<ETribeGroupPermission> TribeGroupPermission           (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 OnObject                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterPlayerState::AllowTribeGroupPermission(TEnumAsByte<ETribeGroupPermission> TribeGroupPermission, class UObject* OnObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.AllowTribeGroupPermission");

	AShooterPlayerState_AllowTribeGroupPermission_Params params;
	params.TribeGroupPermission = TribeGroupPermission;
	params.OnObject = OnObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerState.AddToTribe
// ()
// Parameters:
// struct FTribeData              MyNewTribe                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bMergeTribe                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsFromInvite                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterPlayerState::AddToTribe(const struct FTribeData& MyNewTribe, bool bMergeTribe, bool bForce, bool bIsFromInvite)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.AddToTribe");

	AShooterPlayerState_AddToTribe_Params params;
	params.MyNewTribe = MyNewTribe;
	params.bMergeTribe = bMergeTribe;
	params.bForce = bForce;
	params.bIsFromInvite = bIsFromInvite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalUI.OnHTTPGetResponse__DelegateSignature
// ()
// Parameters:
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 StringResult                   (Parm, ZeroConstructor)

void UPrimalUI::OnHTTPGetResponse__DelegateSignature(bool bSuccess, const struct FString& StringResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalUI.OnHTTPGetResponse__DelegateSignature");

	UPrimalUI_OnHTTPGetResponse__DelegateSignature_Params params;
	params.bSuccess = bSuccess;
	params.StringResult = StringResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalUI.OnConfirmationDialogClosed
// ()
// Parameters:
// bool                           bAccept                        (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalUI::OnConfirmationDialogClosed(bool bAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalUI.OnConfirmationDialogClosed");

	UPrimalUI_OnConfirmationDialogClosed_Params params;
	params.bAccept = bAccept;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalUI.HTTPGetString
// ()
// Parameters:
// struct FString                 InURL                          (Parm, ZeroConstructor)

void UPrimalUI::HTTPGetString(const struct FString& InURL)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalUI.HTTPGetString");

	UPrimalUI_HTTPGetString_Params params;
	params.InURL = InURL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalUI.CloseWithAnimation
// ()

void UPrimalUI::CloseWithAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalUI.CloseWithAnimation");

	UPrimalUI_CloseWithAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalUI.ClickedButton
// ()
// Parameters:
// class UWidget*                 clickedWidget                  (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalUI::ClickedButton(class UWidget* clickedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalUI.ClickedButton");

	UPrimalUI_ClickedButton_Params params;
	params.clickedWidget = clickedWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_Spawn.OnSaveToFileEditableChanged
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_Spawn::OnSaveToFileEditableChanged(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_Spawn.OnSaveToFileEditableChanged");

	UUI_Spawn_OnSaveToFileEditableChanged_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_Spawn.OnLoadFromFileComboBoxSelectionChanged
// ()
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Spawn::OnLoadFromFileComboBoxSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_Spawn.OnLoadFromFileComboBoxSelectionChanged");

	UUI_Spawn_OnLoadFromFileComboBoxSelectionChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_Spawn.OnArkPlayerDataChosen
// ()
// Parameters:
// TArray<unsigned char>          ChoosenPlayerData              (Parm, ZeroConstructor)

void UUI_Spawn::OnArkPlayerDataChosen(TArray<unsigned char> ChoosenPlayerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_Spawn.OnArkPlayerDataChosen");

	UUI_Spawn_OnArkPlayerDataChosen_Params params;
	params.ChoosenPlayerData = ChoosenPlayerData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacterStatusComponent.TickStatus
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceStatusUpdate             (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalCharacterStatusComponent::TickStatus(float DeltaTime, bool bForceStatusUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacterStatusComponent.TickStatus");

	UPrimalCharacterStatusComponent_TickStatus_Params params;
	params.DeltaTime = DeltaTime;
	params.bForceStatusUpdate = bForceStatusUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacterStatusComponent.SetMaxStatusValue
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterStatusValue> statType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          newValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalCharacterStatusComponent::SetMaxStatusValue(TEnumAsByte<EPrimalCharacterStatusValue> statType, float newValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacterStatusComponent.SetMaxStatusValue");

	UPrimalCharacterStatusComponent_SetMaxStatusValue_Params params;
	params.statType = statType;
	params.newValue = newValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacterStatusComponent.ServerSyncReplicatedValues
// ()

void UPrimalCharacterStatusComponent::ServerSyncReplicatedValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacterStatusComponent.ServerSyncReplicatedValues");

	UPrimalCharacterStatusComponent_ServerSyncReplicatedValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacterStatusComponent.RescaleMaxStat
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterStatusValue> LevelUpValueType               (Parm, ZeroConstructor, IsPlainOldData)
// float                          TargetValue                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPercentOfTrueValue          (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalCharacterStatusComponent::RescaleMaxStat(TEnumAsByte<EPrimalCharacterStatusValue> LevelUpValueType, float TargetValue, bool bIsPercentOfTrueValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacterStatusComponent.RescaleMaxStat");

	UPrimalCharacterStatusComponent_RescaleMaxStat_Params params;
	params.LevelUpValueType = LevelUpValueType;
	params.TargetValue = TargetValue;
	params.bIsPercentOfTrueValue = bIsPercentOfTrueValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacterStatusComponent.OnRep_ReplicatedExperiencePoints
// ()

void UPrimalCharacterStatusComponent::OnRep_ReplicatedExperiencePoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacterStatusComponent.OnRep_ReplicatedExperiencePoints");

	UPrimalCharacterStatusComponent_OnRep_ReplicatedExperiencePoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacterStatusComponent.OnRep_GlobalMaxStatusValues
// ()

void UPrimalCharacterStatusComponent::OnRep_GlobalMaxStatusValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacterStatusComponent.OnRep_GlobalMaxStatusValues");

	UPrimalCharacterStatusComponent_OnRep_GlobalMaxStatusValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacterStatusComponent.OnRep_GlobalCurrentStatusValues
// ()

void UPrimalCharacterStatusComponent::OnRep_GlobalCurrentStatusValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacterStatusComponent.OnRep_GlobalCurrentStatusValues");

	UPrimalCharacterStatusComponent_OnRep_GlobalCurrentStatusValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacterStatusComponent.OnRep_GlobalBaseLevelMaxStatusValues
// ()

void UPrimalCharacterStatusComponent::OnRep_GlobalBaseLevelMaxStatusValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacterStatusComponent.OnRep_GlobalBaseLevelMaxStatusValues");

	UPrimalCharacterStatusComponent_OnRep_GlobalBaseLevelMaxStatusValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacterStatusComponent.OnRep_CurrentStatusValues
// ()

void UPrimalCharacterStatusComponent::OnRep_CurrentStatusValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacterStatusComponent.OnRep_CurrentStatusValues");

	UPrimalCharacterStatusComponent_OnRep_CurrentStatusValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacterStatusComponent.NetSyncMaxStatusValues
// ()
// Parameters:
// TArray<float>                  NetMaxStatusValues             (ConstParm, Parm, ZeroConstructor)
// TArray<float>                  NetBaseMaxStatusValues         (ConstParm, Parm, ZeroConstructor)

void UPrimalCharacterStatusComponent::NetSyncMaxStatusValues(TArray<float> NetMaxStatusValues, TArray<float> NetBaseMaxStatusValues)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacterStatusComponent.NetSyncMaxStatusValues");

	UPrimalCharacterStatusComponent_NetSyncMaxStatusValues_Params params;
	params.NetMaxStatusValues = NetMaxStatusValues;
	params.NetBaseMaxStatusValues = NetBaseMaxStatusValues;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacterStatusComponent.ModifyCurrentStatusValue
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterStatusValue> ValueType                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          amount                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPercentOfMax                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPercentOfCurrent              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bManualModification            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetValue                      (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageTypeClass                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDamageDontKill                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPrimalCharacterStatusComponent::ModifyCurrentStatusValue(TEnumAsByte<EPrimalCharacterStatusValue> ValueType, float amount, bool bPercentOfMax, bool bPercentOfCurrent, bool bManualModification, bool bSetValue, class UClass* DamageTypeClass, bool bDamageDontKill)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacterStatusComponent.ModifyCurrentStatusValue");

	UPrimalCharacterStatusComponent_ModifyCurrentStatusValue_Params params;
	params.ValueType = ValueType;
	params.amount = amount;
	params.bPercentOfMax = bPercentOfMax;
	params.bPercentOfCurrent = bPercentOfCurrent;
	params.bManualModification = bManualModification;
	params.bSetValue = bSetValue;
	params.DamageTypeClass = DamageTypeClass;
	params.bDamageDontKill = bDamageDontKill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacterStatusComponent.IsInStatusState
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterStatusState> StateType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalCharacterStatusComponent::IsInStatusState(TEnumAsByte<EPrimalCharacterStatusState> StateType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacterStatusComponent.IsInStatusState");

	UPrimalCharacterStatusComponent_IsInStatusState_Params params;
	params.StateType = StateType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacterStatusComponent.IsInDeathStatusState
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterStatusState> StateType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalCharacterStatusComponent::IsInDeathStatusState(TEnumAsByte<EPrimalCharacterStatusState> StateType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacterStatusComponent.IsInDeathStatusState");

	UPrimalCharacterStatusComponent_IsInDeathStatusState_Params params;
	params.StateType = StateType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacterStatusComponent.GetCharacterLevel
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPrimalCharacterStatusComponent::GetCharacterLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacterStatusComponent.GetCharacterLevel");

	UPrimalCharacterStatusComponent_GetCharacterLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacterStatusComponent.ClientSyncMaxStatusValues
// ()
// Parameters:
// TArray<float>                  NetMaxStatusValues             (ConstParm, Parm, ZeroConstructor)
// TArray<float>                  NetBaseMaxStatusValues         (ConstParm, Parm, ZeroConstructor)

void UPrimalCharacterStatusComponent::ClientSyncMaxStatusValues(TArray<float> NetMaxStatusValues, TArray<float> NetBaseMaxStatusValues)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacterStatusComponent.ClientSyncMaxStatusValues");

	UPrimalCharacterStatusComponent_ClientSyncMaxStatusValues_Params params;
	params.NetMaxStatusValues = NetMaxStatusValues;
	params.NetBaseMaxStatusValues = NetBaseMaxStatusValues;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacterStatusComponent.BPSetRecoveryRateStatusValue
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterStatusValue> ValueType                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          newValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalCharacterStatusComponent::BPSetRecoveryRateStatusValue(TEnumAsByte<EPrimalCharacterStatusValue> ValueType, float newValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacterStatusComponent.BPSetRecoveryRateStatusValue");

	UPrimalCharacterStatusComponent_BPSetRecoveryRateStatusValue_Params params;
	params.ValueType = ValueType;
	params.newValue = newValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalCharacterStatusComponent.BPGetPercentStatusValue
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterStatusValue> ValueType                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPrimalCharacterStatusComponent::BPGetPercentStatusValue(TEnumAsByte<EPrimalCharacterStatusValue> ValueType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacterStatusComponent.BPGetPercentStatusValue");

	UPrimalCharacterStatusComponent_BPGetPercentStatusValue_Params params;
	params.ValueType = ValueType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacterStatusComponent.BPGetMaxStatusValue
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterStatusValue> ValueType                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPrimalCharacterStatusComponent::BPGetMaxStatusValue(TEnumAsByte<EPrimalCharacterStatusValue> ValueType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacterStatusComponent.BPGetMaxStatusValue");

	UPrimalCharacterStatusComponent_BPGetMaxStatusValue_Params params;
	params.ValueType = ValueType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacterStatusComponent.BPGetCurrentStatusValue
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterStatusValue> ValueType                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPrimalCharacterStatusComponent::BPGetCurrentStatusValue(TEnumAsByte<EPrimalCharacterStatusValue> ValueType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacterStatusComponent.BPGetCurrentStatusValue");

	UPrimalCharacterStatusComponent_BPGetCurrentStatusValue_Params params;
	params.ValueType = ValueType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacterStatusComponent.BPAdjustStatusValueModification
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterStatusValue> ValueType                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          amount                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageTypeClass                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPrimalCharacterStatusComponent::BPAdjustStatusValueModification(TEnumAsByte<EPrimalCharacterStatusValue> ValueType, float amount, class UClass* DamageTypeClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacterStatusComponent.BPAdjustStatusValueModification");

	UPrimalCharacterStatusComponent_BPAdjustStatusValueModification_Params params;
	params.ValueType = ValueType;
	params.amount = amount;
	params.DamageTypeClass = DamageTypeClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalCharacterStatusComponent.AddExperience
// ()
// Parameters:
// float                          HowMuch                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShareWithTribe                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EXPType>           XPType                         (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalCharacterStatusComponent::AddExperience(float HowMuch, bool bShareWithTribe, TEnumAsByte<EXPType> XPType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalCharacterStatusComponent.AddExperience");

	UPrimalCharacterStatusComponent_AddExperience_Params params;
	params.HowMuch = HowMuch;
	params.bShareWithTribe = bShareWithTribe;
	params.XPType = XPType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoAIController.UpdateAggro
// ()

void APrimalDinoAIController::UpdateAggro()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoAIController.UpdateAggro");

	APrimalDinoAIController_UpdateAggro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoAIController.ShouldForceRunWhenAttacking
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalDinoAIController::ShouldForceRunWhenAttacking()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoAIController.ShouldForceRunWhenAttacking");

	APrimalDinoAIController_ShouldForceRunWhenAttacking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoAIController.SetAttackRotationRate
// ()

void APrimalDinoAIController::SetAttackRotationRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoAIController.SetAttackRotationRate");

	APrimalDinoAIController_SetAttackRotationRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoAIController.SetAttackGroundSpeed
// ()

void APrimalDinoAIController::SetAttackGroundSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoAIController.SetAttackGroundSpeed");

	APrimalDinoAIController_SetAttackGroundSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoAIController.ResetRotationUseAcceleration
// ()

void APrimalDinoAIController::ResetRotationUseAcceleration()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoAIController.ResetRotationUseAcceleration");

	APrimalDinoAIController_ResetRotationUseAcceleration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoAIController.ResetRotationRate
// ()

void APrimalDinoAIController::ResetRotationRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoAIController.ResetRotationRate");

	APrimalDinoAIController_ResetRotationRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoAIController.ResetGroundSpeed
// ()

void APrimalDinoAIController::ResetGroundSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoAIController.ResetGroundSpeed");

	APrimalDinoAIController_ResetGroundSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoAIController.ResetAccelerationFollowsRotation
// ()

void APrimalDinoAIController::ResetAccelerationFollowsRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoAIController.ResetAccelerationFollowsRotation");

	APrimalDinoAIController_ResetAccelerationFollowsRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoAIController.RecoverMovement
// ()

void APrimalDinoAIController::RecoverMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoAIController.RecoverMovement");

	APrimalDinoAIController_RecoverMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoAIController.PlayStartledAnim
// ()

void APrimalDinoAIController::PlayStartledAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoAIController.PlayStartledAnim");

	APrimalDinoAIController_PlayStartledAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoAIController.OnLosingTargetEvent
// ()

void APrimalDinoAIController::OnLosingTargetEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoAIController.OnLosingTargetEvent");

	APrimalDinoAIController_OnLosingTargetEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoAIController.IsWithinAttackRangeAndCalculateBestAttack
// ()
// Parameters:
// class AActor*                  Other                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAttackChanged                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalDinoAIController::IsWithinAttackRangeAndCalculateBestAttack(class AActor* Other, bool* bAttackChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoAIController.IsWithinAttackRangeAndCalculateBestAttack");

	APrimalDinoAIController_IsWithinAttackRangeAndCalculateBestAttack_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAttackChanged != nullptr)
		*bAttackChanged = params.bAttackChanged;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoAIController.IsWithinAttackRange
// ()
// Parameters:
// class AActor*                  Other                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalDinoAIController::IsWithinAttackRange(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoAIController.IsWithinAttackRange");

	APrimalDinoAIController_IsWithinAttackRange_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoAIController.GetTarget
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* APrimalDinoAIController::GetTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoAIController.GetTarget");

	APrimalDinoAIController_GetTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoAIController.GetRandomWanderDestination
// ()
// Parameters:
// struct FVector                 LocOverride                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          RandomOffsetMultiplier         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseRandomNegativeXDir         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOrientRandOffsetByRotation    (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                OrientRandOffsetByRotation     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector APrimalDinoAIController::GetRandomWanderDestination(const struct FVector& LocOverride, float RandomOffsetMultiplier, bool bUseRandomNegativeXDir, bool bOrientRandOffsetByRotation, const struct FRotator& OrientRandOffsetByRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoAIController.GetRandomWanderDestination");

	APrimalDinoAIController_GetRandomWanderDestination_Params params;
	params.LocOverride = LocOverride;
	params.RandomOffsetMultiplier = RandomOffsetMultiplier;
	params.bUseRandomNegativeXDir = bUseRandomNegativeXDir;
	params.bOrientRandOffsetByRotation = bOrientRandOffsetByRotation;
	params.OrientRandOffsetByRotation = OrientRandOffsetByRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoAIController.GetMinAttackRange
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APrimalDinoAIController::GetMinAttackRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoAIController.GetMinAttackRange");

	APrimalDinoAIController_GetMinAttackRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoAIController.GetLandingLocation
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector APrimalDinoAIController::GetLandingLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoAIController.GetLandingLocation");

	APrimalDinoAIController_GetLandingLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoAIController.GetCurrentAttackIndex
// ()
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char APrimalDinoAIController::GetCurrentAttackIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoAIController.GetCurrentAttackIndex");

	APrimalDinoAIController_GetCurrentAttackIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoAIController.GetControllerPawn
// ()
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APawn* APrimalDinoAIController::GetControllerPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoAIController.GetControllerPawn");

	APrimalDinoAIController_GetControllerPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoAIController.GetAttackRotationRate
// ()
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator APrimalDinoAIController::GetAttackRotationRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoAIController.GetAttackRotationRate");

	APrimalDinoAIController_GetAttackRotationRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoAIController.GetAttackRotationRangeDegrees
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APrimalDinoAIController::GetAttackRotationRangeDegrees()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoAIController.GetAttackRotationRangeDegrees");

	APrimalDinoAIController_GetAttackRotationRangeDegrees_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoAIController.GetAttackRotationGroundSpeedMultiplier
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APrimalDinoAIController::GetAttackRotationGroundSpeedMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoAIController.GetAttackRotationGroundSpeedMultiplier");

	APrimalDinoAIController_GetAttackRotationGroundSpeedMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoAIController.GetAttackRange
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APrimalDinoAIController::GetAttackRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoAIController.GetAttackRange");

	APrimalDinoAIController_GetAttackRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoAIController.GetAttackInterval
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APrimalDinoAIController::GetAttackInterval()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoAIController.GetAttackInterval");

	APrimalDinoAIController_GetAttackInterval_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoAIController.GetAggroEntriesCount
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APrimalDinoAIController::GetAggroEntriesCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoAIController.GetAggroEntriesCount");

	APrimalDinoAIController_GetAggroEntriesCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoAIController.GetAggroEntriesAttackerAtIndex
// ()
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* APrimalDinoAIController::GetAggroEntriesAttackerAtIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoAIController.GetAggroEntriesAttackerAtIndex");

	APrimalDinoAIController_GetAggroEntriesAttackerAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoAIController.FindTarget
// ()
// Parameters:
// bool                           bDontSet                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* APrimalDinoAIController::FindTarget(bool bDontSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoAIController.FindTarget");

	APrimalDinoAIController_FindTarget_Params params;
	params.bDontSet = bDontSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoAIController.FindNewTarget
// ()
// Parameters:
// bool                           bDontSet                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* APrimalDinoAIController::FindNewTarget(bool bDontSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoAIController.FindNewTarget");

	APrimalDinoAIController_FindNewTarget_Params params;
	params.bDontSet = bDontSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoAIController.ClearAggroEntries
// ()

void APrimalDinoAIController::ClearAggroEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoAIController.ClearAggroEntries");

	APrimalDinoAIController_ClearAggroEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoAIController.ChangedTarget
// ()

void APrimalDinoAIController::ChangedTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoAIController.ChangedTarget");

	APrimalDinoAIController_ChangedTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoAIController.CanLand
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalDinoAIController::CanLand()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoAIController.CanLand");

	APrimalDinoAIController_CanLand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoAIController.CalculateAndSetWonderingAIStateEvent
// ()
// Parameters:
// bool                           StateChanged                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalDinoAIController::CalculateAndSetWonderingAIStateEvent(bool StateChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoAIController.CalculateAndSetWonderingAIStateEvent");

	APrimalDinoAIController_CalculateAndSetWonderingAIStateEvent_Params params;
	params.StateChanged = StateChanged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoAIController.CalculateAndSetWonderingAIState
// ()
// Parameters:
// bool                           StateChanged                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalDinoAIController::CalculateAndSetWonderingAIState(bool* StateChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoAIController.CalculateAndSetWonderingAIState");

	APrimalDinoAIController_CalculateAndSetWonderingAIState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StateChanged != nullptr)
		*StateChanged = params.StateChanged;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoAIController.BPGetTargetingDesire
// ()
// Parameters:
// class AActor*                  forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ForTargetingDesireValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APrimalDinoAIController::BPGetTargetingDesire(class AActor* forTarget, float ForTargetingDesireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoAIController.BPGetTargetingDesire");

	APrimalDinoAIController_BPGetTargetingDesire_Params params;
	params.forTarget = forTarget;
	params.ForTargetingDesireValue = ForTargetingDesireValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalDinoAIController.AvoidOutOfWater
// ()

void APrimalDinoAIController::AvoidOutOfWater()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoAIController.AvoidOutOfWater");

	APrimalDinoAIController_AvoidOutOfWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalDinoAIController.AddToAggro
// ()
// Parameters:
// class AActor*                  Attacker                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          DamagePercent                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNotifyNeighbors               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SetValue                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsFromDamage                  (Parm, ZeroConstructor, IsPlainOldData)

void APrimalDinoAIController::AddToAggro(class AActor* Attacker, float DamagePercent, bool bNotifyNeighbors, bool SetValue, bool bIsFromDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalDinoAIController.AddToAggro");

	APrimalDinoAIController_AddToAggro_Params params;
	params.Attacker = Attacker;
	params.DamagePercent = DamagePercent;
	params.bNotifyNeighbors = bNotifyNeighbors;
	params.SetValue = SetValue;
	params.bIsFromDamage = bIsFromDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalBuff.UpdateBuffPersistentData
// ()

void APrimalBuff::UpdateBuffPersistentData()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalBuff.UpdateBuffPersistentData");

	APrimalBuff_UpdateBuffPersistentData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalBuff.StaticAddBuff
// ()
// Parameters:
// class UClass*                  BuffClass                      (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        ForCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem*             AssociatedItem                 (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalBuff*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APrimalBuff* APrimalBuff::StaticAddBuff(class UClass* BuffClass, class APrimalCharacter* ForCharacter, class UPrimalItem* AssociatedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalBuff.StaticAddBuff");

	APrimalBuff_StaticAddBuff_Params params;
	params.BuffClass = BuffClass;
	params.ForCharacter = ForCharacter;
	params.AssociatedItem = AssociatedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalBuff.SetupForInstigator
// ()

void APrimalBuff::SetupForInstigator()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalBuff.SetupForInstigator");

	APrimalBuff_SetupForInstigator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalBuff.PreventActorTargeting
// ()
// Parameters:
// class AActor*                  ByActor                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalBuff::PreventActorTargeting(class AActor* ByActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalBuff.PreventActorTargeting");

	APrimalBuff_PreventActorTargeting_Params params;
	params.ByActor = ByActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalBuff.NotifyDamage
// ()
// Parameters:
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TheDamageCauser                (Parm, ZeroConstructor, IsPlainOldData)

void APrimalBuff::NotifyDamage(float DamageAmount, class UClass* DamageClass, class AController* EventInstigator, class AActor* TheDamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalBuff.NotifyDamage");

	APrimalBuff_NotifyDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.DamageClass = DamageClass;
	params.EventInstigator = EventInstigator;
	params.TheDamageCauser = TheDamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalBuff.NotifyBumpedPawn
// ()
// Parameters:
// class APrimalCharacter*        BumpedPawn                     (Parm, ZeroConstructor, IsPlainOldData)

void APrimalBuff::NotifyBumpedPawn(class APrimalCharacter* BumpedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalBuff.NotifyBumpedPawn");

	APrimalBuff_NotifyBumpedPawn_Params params;
	params.BumpedPawn = BumpedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalBuff.NotifyBumpedByPawn
// ()
// Parameters:
// class APrimalCharacter*        BumpedBy                       (Parm, ZeroConstructor, IsPlainOldData)

void APrimalBuff::NotifyBumpedByPawn(class APrimalCharacter* BumpedBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalBuff.NotifyBumpedByPawn");

	APrimalBuff_NotifyBumpedByPawn_Params params;
	params.BumpedBy = BumpedBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalBuff.NetResetBuffStart
// ()

void APrimalBuff::NetResetBuffStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalBuff.NetResetBuffStart");

	APrimalBuff_NetResetBuffStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalBuff.NetDeactivate
// ()

void APrimalBuff::NetDeactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalBuff.NetDeactivate");

	APrimalBuff_NetDeactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalBuff.GetHUDProgressBarPercent
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APrimalBuff::GetHUDProgressBarPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalBuff.GetHUDProgressBarPercent");

	APrimalBuff_GetHUDProgressBarPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalBuff.DrawBuffFloatingHUD
// ()
// Parameters:
// int                            BuffIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterHUD*             HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void APrimalBuff::DrawBuffFloatingHUD(int BuffIndex, class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalBuff.DrawBuffFloatingHUD");

	APrimalBuff_DrawBuffFloatingHUD_Params params;
	params.BuffIndex = BuffIndex;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalBuff.BuffAdjustDamage
// ()
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm)
// class AController*             EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APrimalBuff::BuffAdjustDamage(float Damage, const struct FHitResult& HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UClass* TheDamgeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalBuff.BuffAdjustDamage");

	APrimalBuff_BuffAdjustDamage_Params params;
	params.Damage = Damage;
	params.HitInfo = HitInfo;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.TheDamgeType = TheDamgeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalBuff.BPSetupForInstigator
// ()
// Parameters:
// class AActor*                  ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void APrimalBuff::BPSetupForInstigator(class AActor* ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalBuff.BPSetupForInstigator");

	APrimalBuff_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalBuff.BPPreventAddingOtherBuff
// ()
// Parameters:
// class UClass*                  anotherBuffClass               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalBuff::BPPreventAddingOtherBuff(class UClass* anotherBuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalBuff.BPPreventAddingOtherBuff");

	APrimalBuff_BPPreventAddingOtherBuff_Params params;
	params.anotherBuffClass = anotherBuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalBuff.BPPreSetupForInstigator
// ()
// Parameters:
// class AActor*                  ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void APrimalBuff::BPPreSetupForInstigator(class AActor* ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalBuff.BPPreSetupForInstigator");

	APrimalBuff_BPPreSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalBuff.BPDeactivated
// ()
// Parameters:
// class AActor*                  ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void APrimalBuff::BPDeactivated(class AActor* ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalBuff.BPDeactivated");

	APrimalBuff_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalBuff.BPDeactivate
// ()

void APrimalBuff::BPDeactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalBuff.BPDeactivate");

	APrimalBuff_BPDeactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalBuff.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter*        ForCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalBuff::BPCustomAllowAddBuff(class APrimalCharacter* ForCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalBuff.BPCustomAllowAddBuff");

	APrimalBuff_BPCustomAllowAddBuff_Params params;
	params.ForCharacter = ForCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalRichTextBlock.SetText
// ()
// Parameters:
// struct FText                   InText                         (Parm)
// bool                           bDoParse                       (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalRichTextBlock::SetText(const struct FText& InText, bool bDoParse)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalRichTextBlock.SetText");

	UPrimalRichTextBlock_SetText_Params params;
	params.InText = InText;
	params.bDoParse = bDoParse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalRichTextBlock.SetString
// ()
// Parameters:
// struct FString                 InString                       (Parm, ZeroConstructor)

void UPrimalRichTextBlock::SetString(const struct FString& InString)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalRichTextBlock.SetString");

	UPrimalRichTextBlock_SetString_Params params;
	params.InString = InString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalRichTextBlock.GetText
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPrimalRichTextBlock::GetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalRichTextBlock.GetText");

	UPrimalRichTextBlock_GetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalTargetableActor.PlayHitEffectRadial
// ()
// Parameters:
// float                          DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FRadialDamageEvent      DamageEvent                    (Parm)
// class APawn*                   PawnInstigator                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void APrimalTargetableActor::PlayHitEffectRadial(float DamageTaken, const struct FRadialDamageEvent& DamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalTargetableActor.PlayHitEffectRadial");

	APrimalTargetableActor_PlayHitEffectRadial_Params params;
	params.DamageTaken = DamageTaken;
	params.DamageEvent = DamageEvent;
	params.PawnInstigator = PawnInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalTargetableActor.PlayHitEffectPoint
// ()
// Parameters:
// float                          DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FPointDamageEvent       DamageEvent                    (Parm)
// class APawn*                   PawnInstigator                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void APrimalTargetableActor::PlayHitEffectPoint(float DamageTaken, const struct FPointDamageEvent& DamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalTargetableActor.PlayHitEffectPoint");

	APrimalTargetableActor_PlayHitEffectPoint_Params params;
	params.DamageTaken = DamageTaken;
	params.DamageEvent = DamageEvent;
	params.PawnInstigator = PawnInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalTargetableActor.PlayHitEffectGeneric
// ()
// Parameters:
// float                          DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm)
// class APawn*                   PawnInstigator                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void APrimalTargetableActor::PlayHitEffectGeneric(float DamageTaken, const struct FDamageEvent& DamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalTargetableActor.PlayHitEffectGeneric");

	APrimalTargetableActor_PlayHitEffectGeneric_Params params;
	params.DamageTaken = DamageTaken;
	params.DamageEvent = DamageEvent;
	params.PawnInstigator = PawnInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalTargetableActor.PlayDyingRadial
// ()
// Parameters:
// float                          KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FRadialDamageEvent      DamageEvent                    (Parm)
// class APawn*                   InstigatingPawn                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void APrimalTargetableActor::PlayDyingRadial(float KillingDamage, const struct FRadialDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalTargetableActor.PlayDyingRadial");

	APrimalTargetableActor_PlayDyingRadial_Params params;
	params.KillingDamage = KillingDamage;
	params.DamageEvent = DamageEvent;
	params.InstigatingPawn = InstigatingPawn;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalTargetableActor.PlayDyingPoint
// ()
// Parameters:
// float                          KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FPointDamageEvent       DamageEvent                    (Parm)
// class APawn*                   InstigatingPawn                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void APrimalTargetableActor::PlayDyingPoint(float KillingDamage, const struct FPointDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalTargetableActor.PlayDyingPoint");

	APrimalTargetableActor_PlayDyingPoint_Params params;
	params.KillingDamage = KillingDamage;
	params.DamageEvent = DamageEvent;
	params.InstigatingPawn = InstigatingPawn;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalTargetableActor.PlayDyingGeneric
// ()
// Parameters:
// float                          KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm)
// class APawn*                   InstigatingPawn                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void APrimalTargetableActor::PlayDyingGeneric(float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalTargetableActor.PlayDyingGeneric");

	APrimalTargetableActor_PlayDyingGeneric_Params params;
	params.KillingDamage = KillingDamage;
	params.DamageEvent = DamageEvent;
	params.InstigatingPawn = InstigatingPawn;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalTargetableActor.OnRep_ReplicatedHealth
// ()

void APrimalTargetableActor::OnRep_ReplicatedHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalTargetableActor.OnRep_ReplicatedHealth");

	APrimalTargetableActor_OnRep_ReplicatedHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalTargetableActor.NetUpdatedHealth
// ()
// Parameters:
// int                            NewHealth                      (Parm, ZeroConstructor, IsPlainOldData)

void APrimalTargetableActor::NetUpdatedHealth(int NewHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalTargetableActor.NetUpdatedHealth");

	APrimalTargetableActor_NetUpdatedHealth_Params params;
	params.NewHealth = NewHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalTargetableActor.IsInvincible
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalTargetableActor::IsInvincible()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalTargetableActor.IsInvincible");

	APrimalTargetableActor_IsInvincible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalTargetableActor.GetMaxHealth
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APrimalTargetableActor::GetMaxHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalTargetableActor.GetMaxHealth");

	APrimalTargetableActor_GetMaxHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalTargetableActor.GetDescriptiveName
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString APrimalTargetableActor::GetDescriptiveName()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalTargetableActor.GetDescriptiveName");

	APrimalTargetableActor_GetDescriptiveName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalTargetableActor.FlushNetUpdate
// ()

void APrimalTargetableActor::FlushNetUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalTargetableActor.FlushNetUpdate");

	APrimalTargetableActor_FlushNetUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalTargetableActor.BPAdjustDamage
// ()
// Parameters:
// float                          IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            TheDamageEvent                 (Parm)
// class AController*             EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APrimalTargetableActor::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalTargetableActor.BPAdjustDamage");

	APrimalTargetableActor_BPAdjustDamage_Params params;
	params.IncomingDamage = IncomingDamage;
	params.TheDamageEvent = TheDamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsPointDamage = bIsPointDamage;
	params.PointHitInfo = PointHitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalStructure.UpdateTribeGroupStructureRank
// ()
// Parameters:
// unsigned char                  NewRank                        (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructure::UpdateTribeGroupStructureRank(unsigned char NewRank)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructure.UpdateTribeGroupStructureRank");

	APrimalStructure_UpdateTribeGroupStructureRank_Params params;
	params.NewRank = NewRank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructure.SetupDynamicMeshMaterials
// ()
// Parameters:
// class UMeshComponent*          MeshComp                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APrimalStructure::SetupDynamicMeshMaterials(class UMeshComponent* MeshComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructure.SetupDynamicMeshMaterials");

	APrimalStructure_SetupDynamicMeshMaterials_Params params;
	params.MeshComp = MeshComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructure.SetContainerActive
// ()
// Parameters:
// bool                           bNewActive                     (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructure::SetContainerActive(bool bNewActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructure.SetContainerActive");

	APrimalStructure_SetContainerActive_Params params;
	params.bNewActive = bNewActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructure.OnRep_StructureColors
// ()

void APrimalStructure::OnRep_StructureColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructure.OnRep_StructureColors");

	APrimalStructure_OnRep_StructureColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructure.NetUpdateTeamAndOwnerName
// ()
// Parameters:
// int                            NewTeam                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 NewOwnerName                   (Parm, ZeroConstructor)

void APrimalStructure::NetUpdateTeamAndOwnerName(int NewTeam, const struct FString& NewOwnerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructure.NetUpdateTeamAndOwnerName");

	APrimalStructure_NetUpdateTeamAndOwnerName_Params params;
	params.NewTeam = NewTeam;
	params.NewOwnerName = NewOwnerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructure.NetUpdateOriginalOwnerNameAndID
// ()
// Parameters:
// int                            NewOriginalOwnerID             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 NewOriginalOwnerName           (Parm, ZeroConstructor)

void APrimalStructure::NetUpdateOriginalOwnerNameAndID(int NewOriginalOwnerID, const struct FString& NewOriginalOwnerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructure.NetUpdateOriginalOwnerNameAndID");

	APrimalStructure_NetUpdateOriginalOwnerNameAndID_Params params;
	params.NewOriginalOwnerID = NewOriginalOwnerID;
	params.NewOriginalOwnerName = NewOriginalOwnerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructure.NetSpawnCoreStructureDeathActor
// ()

void APrimalStructure::NetSpawnCoreStructureDeathActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructure.NetSpawnCoreStructureDeathActor");

	APrimalStructure_NetSpawnCoreStructureDeathActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructure.NetDoSpawnEffects
// ()

void APrimalStructure::NetDoSpawnEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructure.NetDoSpawnEffects");

	APrimalStructure_NetDoSpawnEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructure.IsValidSnapPointTo
// ()
// Parameters:
// class APrimalStructure*        childStructure                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            MySnapPointToIndex             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalStructure::IsValidSnapPointTo(class APrimalStructure* childStructure, int MySnapPointToIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructure.IsValidSnapPointTo");

	APrimalStructure_IsValidSnapPointTo_Params params;
	params.childStructure = childStructure;
	params.MySnapPointToIndex = MySnapPointToIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalStructure.IsValidSnapPointFrom
// ()
// Parameters:
// class APrimalStructure*        ParentStructure                (Parm, ZeroConstructor, IsPlainOldData)
// int                            MySnapPointFromIndex           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalStructure::IsValidSnapPointFrom(class APrimalStructure* ParentStructure, int MySnapPointFromIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructure.IsValidSnapPointFrom");

	APrimalStructure_IsValidSnapPointFrom_Params params;
	params.ParentStructure = ParentStructure;
	params.MySnapPointFromIndex = MySnapPointFromIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalStructure.IsValidForSnappingFrom
// ()
// Parameters:
// class APrimalStructure*        OtherStructure                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalStructure::IsValidForSnappingFrom(class APrimalStructure* OtherStructure)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructure.IsValidForSnappingFrom");

	APrimalStructure_IsValidForSnappingFrom_Params params;
	params.OtherStructure = OtherStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalStructure.IsPointObstructedByWorldGeometry
// ()
// Parameters:
// class UWorld*                  ForWorld                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ThePoint                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIgnoreTerrain                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOnlyCheckTerrain              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCheckStructurePreventionVolumes (Parm, ZeroConstructor, IsPlainOldData)
// float                          OBSTRUCTION_CHECK_DIST         (Parm, ZeroConstructor, IsPlainOldData)
// float                          XYMultiplier                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ZMultiplier                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalStructure::IsPointObstructedByWorldGeometry(class UWorld* ForWorld, const struct FVector& ThePoint, bool bIgnoreTerrain, bool bOnlyCheckTerrain, bool bCheckStructurePreventionVolumes, float OBSTRUCTION_CHECK_DIST, float XYMultiplier, float ZMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructure.IsPointObstructedByWorldGeometry");

	APrimalStructure_IsPointObstructedByWorldGeometry_Params params;
	params.ForWorld = ForWorld;
	params.ThePoint = ThePoint;
	params.bIgnoreTerrain = bIgnoreTerrain;
	params.bOnlyCheckTerrain = bOnlyCheckTerrain;
	params.bCheckStructurePreventionVolumes = bCheckStructurePreventionVolumes;
	params.OBSTRUCTION_CHECK_DIST = OBSTRUCTION_CHECK_DIST;
	params.XYMultiplier = XYMultiplier;
	params.ZMultiplier = ZMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalStructure.GetClosestStructureToPoint
// ()
// Parameters:
// class UWorld*                  ForWorld                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AtPoint                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          OverlapRadius                  (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalStructure*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APrimalStructure* APrimalStructure::GetClosestStructureToPoint(class UWorld* ForWorld, const struct FVector& AtPoint, float OverlapRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructure.GetClosestStructureToPoint");

	APrimalStructure_GetClosestStructureToPoint_Params params;
	params.ForWorld = ForWorld;
	params.AtPoint = AtPoint;
	params.OverlapRadius = OverlapRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalStructure.ClientUpdateLinkedStructures
// ()
// Parameters:
// TArray<uint32_t>               NewLinkedStructures            (ConstParm, Parm, ZeroConstructor)

void APrimalStructure::ClientUpdateLinkedStructures(TArray<uint32_t> NewLinkedStructures)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructure.ClientUpdateLinkedStructures");

	APrimalStructure_ClientUpdateLinkedStructures_Params params;
	params.NewLinkedStructures = NewLinkedStructures;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructure.ClearCustomColors
// ()

void APrimalStructure::ClearCustomColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructure.ClearCustomColors");

	APrimalStructure_ClearCustomColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructure.BPOverrideSnappedToTransform
// ()
// Parameters:
// class APrimalStructure*        childStructure                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            ChildSnapFromIndex             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 UnsnappedPlacementPos          (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                UnsnappedPlacementRot          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SnappedPlacementPos            (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                SnappedPlacementRot            (Parm, ZeroConstructor, IsPlainOldData)
// int                            SnapToIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                OutRotation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            bForceInvalidateSnap           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalStructure::BPOverrideSnappedToTransform(class APrimalStructure* childStructure, int ChildSnapFromIndex, const struct FVector& UnsnappedPlacementPos, const struct FRotator& UnsnappedPlacementRot, const struct FVector& SnappedPlacementPos, const struct FRotator& SnappedPlacementRot, int SnapToIndex, struct FVector* OutLocation, struct FRotator* OutRotation, int* bForceInvalidateSnap)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructure.BPOverrideSnappedToTransform");

	APrimalStructure_BPOverrideSnappedToTransform_Params params;
	params.childStructure = childStructure;
	params.ChildSnapFromIndex = ChildSnapFromIndex;
	params.UnsnappedPlacementPos = UnsnappedPlacementPos;
	params.UnsnappedPlacementRot = UnsnappedPlacementRot;
	params.SnappedPlacementPos = SnappedPlacementPos;
	params.SnappedPlacementRot = SnappedPlacementRot;
	params.SnapToIndex = SnapToIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;
	if (bForceInvalidateSnap != nullptr)
		*bForceInvalidateSnap = params.bForceInvalidateSnap;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalStructure.BPOverrideDemolish
// ()
// Parameters:
// class AShooterPlayerController* ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalStructure::BPOverrideDemolish(class AShooterPlayerController* ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructure.BPOverrideDemolish");

	APrimalStructure_BPOverrideDemolish_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalStructure.BPOverrideAllowStructureAccess
// ()
// Parameters:
// class AShooterPlayerController* ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsAccessAllowed               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalStructure::BPOverrideAllowStructureAccess(class AShooterPlayerController* ForPC, bool bIsAccessAllowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructure.BPOverrideAllowStructureAccess");

	APrimalStructure_BPOverrideAllowStructureAccess_Params params;
	params.ForPC = ForPC;
	params.bIsAccessAllowed = bIsAccessAllowed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalStructure.BPIsAllowedToBuild
// ()
// Parameters:
// struct FPlacementData          OutPlacementData               (ConstParm, Parm, OutParm, ReferenceParm)
// int                            CurrentAllowedReason           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APrimalStructure::BPIsAllowedToBuild(const struct FPlacementData& OutPlacementData, int CurrentAllowedReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructure.BPIsAllowedToBuild");

	APrimalStructure_BPIsAllowedToBuild_Params params;
	params.OutPlacementData = OutPlacementData;
	params.CurrentAllowedReason = CurrentAllowedReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalStructureBearTrap.TriggerTouched
// ()
// Parameters:
// class AActor*                  Other                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void APrimalStructureBearTrap::TriggerTouched(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureBearTrap.TriggerTouched");

	APrimalStructureBearTrap_TriggerTouched_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureBearTrap.OnRep_CurrentTrapState
// ()

void APrimalStructureBearTrap::OnRep_CurrentTrapState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureBearTrap.OnRep_CurrentTrapState");

	APrimalStructureBearTrap_OnRep_CurrentTrapState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureBearTrap.NetGotoTrapState
// ()
// Parameters:
// int8_t                         TrapState                      (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructureBearTrap::NetGotoTrapState(int8_t TrapState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureBearTrap.NetGotoTrapState");

	APrimalStructureBearTrap_NetGotoTrapState_Params params;
	params.TrapState = TrapState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureBearTrap.IsTrapPrepared
// ()
// Parameters:
// float                          AnimSetupTime                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalStructureBearTrap::IsTrapPrepared(float AnimSetupTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureBearTrap.IsTrapPrepared");

	APrimalStructureBearTrap_IsTrapPrepared_Params params;
	params.AnimSetupTime = AnimSetupTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.PrimalStructureBearTrap.HideAnimatedSK
// ()

void APrimalStructureBearTrap::HideAnimatedSK()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureBearTrap.HideAnimatedSK");

	APrimalStructureBearTrap_HideAnimatedSK_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureBearTrap.DecreaseDamageTimer
// ()

void APrimalStructureBearTrap::DecreaseDamageTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureBearTrap.DecreaseDamageTimer");

	APrimalStructureBearTrap_DecreaseDamageTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureDoor.OnRep_DoorOpenState
// ()
// Parameters:
// int8_t                         PrevDoorOpenState              (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructureDoor::OnRep_DoorOpenState(int8_t PrevDoorOpenState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureDoor.OnRep_DoorOpenState");

	APrimalStructureDoor_OnRep_DoorOpenState_Params params;
	params.PrevDoorOpenState = PrevDoorOpenState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureDoor.NetGotoDoorState
// ()
// Parameters:
// int8_t                         DoorState                      (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructureDoor::NetGotoDoorState(int8_t DoorState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureDoor.NetGotoDoorState");

	APrimalStructureDoor_NetGotoDoorState_Params params;
	params.DoorState = DoorState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureDoor.DelayedGotoDoorStateTimer
// ()

void APrimalStructureDoor::DelayedGotoDoorStateTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureDoor.DelayedGotoDoorStateTimer");

	APrimalStructureDoor_DelayedGotoDoorStateTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureElevatorPlatform.ServerActivate
// ()
// Parameters:
// class APlayerController*       ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceDirection                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPrimalStructureElevatorState> Dir                            (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructureElevatorPlatform::ServerActivate(class APlayerController* ForPC, bool bForceDirection, TEnumAsByte<EPrimalStructureElevatorState> Dir)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureElevatorPlatform.ServerActivate");

	APrimalStructureElevatorPlatform_ServerActivate_Params params;
	params.ForPC = ForPC;
	params.bForceDirection = bForceDirection;
	params.Dir = Dir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureElevatorPlatform.OnRep_bIsActivated
// ()

void APrimalStructureElevatorPlatform::OnRep_bIsActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureElevatorPlatform.OnRep_bIsActivated");

	APrimalStructureElevatorPlatform_OnRep_bIsActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureElevatorPlatform.Activate
// ()
// Parameters:
// class APlayerController*       ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceDirection                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPrimalStructureElevatorState> Dir                            (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructureElevatorPlatform::Activate(class APlayerController* ForPC, bool bForceDirection, TEnumAsByte<EPrimalStructureElevatorState> Dir)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureElevatorPlatform.Activate");

	APrimalStructureElevatorPlatform_Activate_Params params;
	params.ForPC = ForPC;
	params.bForceDirection = bForceDirection;
	params.Dir = Dir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureExplosive.ApplyPlacementPreview
// ()

void APrimalStructureExplosive::ApplyPlacementPreview()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureExplosive.ApplyPlacementPreview");

	APrimalStructureExplosive_ApplyPlacementPreview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureExplosiveTransGPS.NetSetLocation
// ()
// Parameters:
// struct FVector                 NewLocation                    (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructureExplosiveTransGPS::NetSetLocation(const struct FVector& NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureExplosiveTransGPS.NetSetLocation");

	APrimalStructureExplosiveTransGPS_NetSetLocation_Params params;
	params.NewLocation = NewLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureTripwire.WireCheck
// ()

void APrimalStructureTripwire::WireCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureTripwire.WireCheck");

	APrimalStructureTripwire_WireCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureTripwire.TriggerTouched
// ()
// Parameters:
// class AActor*                  Other                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void APrimalStructureTripwire::TriggerTouched(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureTripwire.TriggerTouched");

	APrimalStructureTripwire_TriggerTouched_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureTripwire.OnRep_UnwiredTrap
// ()

void APrimalStructureTripwire::OnRep_UnwiredTrap()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureTripwire.OnRep_UnwiredTrap");

	APrimalStructureTripwire_OnRep_UnwiredTrap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureTripwire.OnRep_ConnectedTo
// ()

void APrimalStructureTripwire::OnRep_ConnectedTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureTripwire.OnRep_ConnectedTo");

	APrimalStructureTripwire_OnRep_ConnectedTo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureTripwire.NetUpdateBoxName
// ()
// Parameters:
// struct FString                 NewName                        (Parm, ZeroConstructor)

void APrimalStructureTripwire::NetUpdateBoxName(const struct FString& NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureTripwire.NetUpdateBoxName");

	APrimalStructureTripwire_NetUpdateBoxName_Params params;
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureTripwire.DisconnectMe
// ()

void APrimalStructureTripwire::DisconnectMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureTripwire.DisconnectMe");

	APrimalStructureTripwire_DisconnectMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureItemContainer.UpdateContainerActiveHealthDecrease
// ()

void APrimalStructureItemContainer::UpdateContainerActiveHealthDecrease()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureItemContainer.UpdateContainerActiveHealthDecrease");

	APrimalStructureItemContainer_UpdateContainerActiveHealthDecrease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureItemContainer.RefreshPowerJunctionLink
// ()

void APrimalStructureItemContainer::RefreshPowerJunctionLink()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureItemContainer.RefreshPowerJunctionLink");

	APrimalStructureItemContainer_RefreshPowerJunctionLink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureItemContainer.NetUpdateLocation
// ()
// Parameters:
// struct FVector                 NewLocation                    (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructureItemContainer::NetUpdateLocation(const struct FVector& NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureItemContainer.NetUpdateLocation");

	APrimalStructureItemContainer_NetUpdateLocation_Params params;
	params.NewLocation = NewLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureItemContainer.NetUpdateBoxName
// ()
// Parameters:
// struct FString                 NewName                        (Parm, ZeroConstructor)

void APrimalStructureItemContainer::NetUpdateBoxName(const struct FString& NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureItemContainer.NetUpdateBoxName");

	APrimalStructureItemContainer_NetUpdateBoxName_Params params;
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureItemContainer.NetSetContainerActive
// ()
// Parameters:
// bool                           bSetActive                     (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  NetReplicatedFuelItemClass     (Parm, ZeroConstructor, IsPlainOldData)
// int16_t                        NetReplicatedFuelItemColorIndex (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructureItemContainer::NetSetContainerActive(bool bSetActive, class UClass* NetReplicatedFuelItemClass, int16_t NetReplicatedFuelItemColorIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureItemContainer.NetSetContainerActive");

	APrimalStructureItemContainer_NetSetContainerActive_Params params;
	params.bSetActive = bSetActive;
	params.NetReplicatedFuelItemClass = NetReplicatedFuelItemClass;
	params.NetReplicatedFuelItemColorIndex = NetReplicatedFuelItemColorIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureItemContainer.MovePowerJunctionLink
// ()

void APrimalStructureItemContainer::MovePowerJunctionLink()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureItemContainer.MovePowerJunctionLink");

	APrimalStructureItemContainer_MovePowerJunctionLink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureItemContainer.EnableActive
// ()

void APrimalStructureItemContainer::EnableActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureItemContainer.EnableActive");

	APrimalStructureItemContainer_EnableActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureItemContainer.BPNotifyInventoryItemChange
// ()
// Parameters:
// bool                           bIsItemAdd                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem*             theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEquipItem                     (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructureItemContainer::BPNotifyInventoryItemChange(bool bIsItemAdd, class UPrimalItem* theItem, bool bEquipItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureItemContainer.BPNotifyInventoryItemChange");

	APrimalStructureItemContainer_BPNotifyInventoryItemChange_Params params;
	params.bIsItemAdd = bIsItemAdd;
	params.theItem = theItem;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureItemContainer.BPContainerDeactivated
// ()

void APrimalStructureItemContainer::BPContainerDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureItemContainer.BPContainerDeactivated");

	APrimalStructureItemContainer_BPContainerDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureItemContainer.BPContainerActivated
// ()

void APrimalStructureItemContainer::BPContainerActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureItemContainer.BPContainerActivated");

	APrimalStructureItemContainer_BPContainerActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureElevatorTrack.ClientHasPlatform
// ()

void APrimalStructureElevatorTrack::ClientHasPlatform()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureElevatorTrack.ClientHasPlatform");

	APrimalStructureElevatorTrack_ClientHasPlatform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureItemContainer_CropPlot.OnRep_PlantedCrop
// ()
// Parameters:
// class UClass*                  PrevPlantedCrop                (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructureItemContainer_CropPlot::OnRep_PlantedCrop(class UClass* PrevPlantedCrop)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureItemContainer_CropPlot.OnRep_PlantedCrop");

	APrimalStructureItemContainer_CropPlot_OnRep_PlantedCrop_Params params;
	params.PrevPlantedCrop = PrevPlantedCrop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureItemContainer_CropPlot.OnRep_HasFruitItems
// ()
// Parameters:
// bool                           bPreviousHasFruitItems         (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructureItemContainer_CropPlot::OnRep_HasFruitItems(bool bPreviousHasFruitItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureItemContainer_CropPlot.OnRep_HasFruitItems");

	APrimalStructureItemContainer_CropPlot_OnRep_HasFruitItems_Params params;
	params.bPreviousHasFruitItems = bPreviousHasFruitItems;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureItemContainer_CropPlot.OnRep_CurrentCropPhase
// ()
// Parameters:
// TEnumAsByte<ESeedCropPhase>    PrevCropPhase                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructureItemContainer_CropPlot::OnRep_CurrentCropPhase(TEnumAsByte<ESeedCropPhase> PrevCropPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureItemContainer_CropPlot.OnRep_CurrentCropPhase");

	APrimalStructureItemContainer_CropPlot_OnRep_CurrentCropPhase_Params params;
	params.PrevCropPhase = PrevCropPhase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureItemContainer_CropPlot_VisualItems.OnRep_HasItems
// ()

void APrimalStructureItemContainer_CropPlot_VisualItems::OnRep_HasItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureItemContainer_CropPlot_VisualItems.OnRep_HasItems");

	APrimalStructureItemContainer_CropPlot_VisualItems_OnRep_HasItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureItemContainer_CropPlot_VisualItems.BPUpdateItemVisuals
// ()

void APrimalStructureItemContainer_CropPlot_VisualItems::BPUpdateItemVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureItemContainer_CropPlot_VisualItems.BPUpdateItemVisuals");

	APrimalStructureItemContainer_CropPlot_VisualItems_BPUpdateItemVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureItemContainer_SupplyCrate.StartLosingHealth
// ()

void APrimalStructureItemContainer_SupplyCrate::StartLosingHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureItemContainer_SupplyCrate.StartLosingHealth");

	APrimalStructureItemContainer_SupplyCrate_StartLosingHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureItemContainer_SupplyCrate.LoseHealth
// ()

void APrimalStructureItemContainer_SupplyCrate::LoseHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureItemContainer_SupplyCrate.LoseHealth");

	APrimalStructureItemContainer_SupplyCrate_LoseHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureItemContainer_VisualItems.OnRep_HasItems
// ()

void APrimalStructureItemContainer_VisualItems::OnRep_HasItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureItemContainer_VisualItems.OnRep_HasItems");

	APrimalStructureItemContainer_VisualItems_OnRep_HasItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureItemContainer_VisualItems.BPUpdateItemVisuals
// ()

void APrimalStructureItemContainer_VisualItems::BPUpdateItemVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureItemContainer_VisualItems.BPUpdateItemVisuals");

	APrimalStructureItemContainer_VisualItems_BPUpdateItemVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureSeating.OnRep_SeatedCharacter
// ()

void APrimalStructureSeating::OnRep_SeatedCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureSeating.OnRep_SeatedCharacter");

	APrimalStructureSeating_OnRep_SeatedCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureSeating.OnRep_CharacterPerSeat
// ()

void APrimalStructureSeating::OnRep_CharacterPerSeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureSeating.OnRep_CharacterPerSeat");

	APrimalStructureSeating_OnRep_CharacterPerSeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureTurretBallista.ClientsPlayFireAnim
// ()

void APrimalStructureTurretBallista::ClientsPlayFireAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureTurretBallista.ClientsPlayFireAnim");

	APrimalStructureTurretBallista_ClientsPlayFireAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureTurretBallista.ClientsFireProjectile
// ()
// Parameters:
// struct FVector                 Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantizeNormal ShootDir                       (Parm)

void APrimalStructureTurretBallista::ClientsFireProjectile(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureTurretBallista.ClientsFireProjectile");

	APrimalStructureTurretBallista_ClientsFireProjectile_Params params;
	params.Origin = Origin;
	params.ShootDir = ShootDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureTurret.UpdatedTargeting
// ()

void APrimalStructureTurret::UpdatedTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureTurret.UpdatedTargeting");

	APrimalStructureTurret_UpdatedTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureTurret.StartWarning
// ()

void APrimalStructureTurret::StartWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureTurret.StartWarning");

	APrimalStructureTurret_StartWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureTurret.ClientsFireProjectile
// ()
// Parameters:
// struct FVector                 Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantizeNormal ShootDir                       (Parm)

void APrimalStructureTurret::ClientsFireProjectile(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureTurret.ClientsFireProjectile");

	APrimalStructureTurret_ClientsFireProjectile_Params params;
	params.Origin = Origin;
	params.ShootDir = ShootDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureTurretPlant.RecoverHealthTimer
// ()

void APrimalStructureTurretPlant::RecoverHealthTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureTurretPlant.RecoverHealthTimer");

	APrimalStructureTurretPlant_RecoverHealthTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureLadder.UpdateRetraction
// ()

void APrimalStructureLadder::UpdateRetraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureLadder.UpdateRetraction");

	APrimalStructureLadder_UpdateRetraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureSeaMine.RefreshSeaMineTarget
// ()

void APrimalStructureSeaMine::RefreshSeaMineTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureSeaMine.RefreshSeaMineTarget");

	APrimalStructureSeaMine_RefreshSeaMineTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureSeaMine.OnTriggerEndOverlap
// ()
// Parameters:
// class AActor*                  Other                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructureSeaMine::OnTriggerEndOverlap(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureSeaMine.OnTriggerEndOverlap");

	APrimalStructureSeaMine_OnTriggerEndOverlap_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureSeaMine.OnTriggerBeginOverlap
// ()
// Parameters:
// class AActor*                  Other                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void APrimalStructureSeaMine::OnTriggerBeginOverlap(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureSeaMine.OnTriggerBeginOverlap");

	APrimalStructureSeaMine_OnTriggerBeginOverlap_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureSeaMine.OnRep_SeaMineTarget
// ()

void APrimalStructureSeaMine::OnRep_SeaMineTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureSeaMine.OnRep_SeaMineTarget");

	APrimalStructureSeaMine_OnRep_SeaMineTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureSeaMine.OnHit
// ()
// Parameters:
// class AActor*                  SelfActor                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm)

void APrimalStructureSeaMine::OnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureSeaMine.OnHit");

	APrimalStructureSeaMine_OnHit_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureSeaMine.OnExplodingTriggerBeginOverlap
// ()
// Parameters:
// class AActor*                  Other                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void APrimalStructureSeaMine::OnExplodingTriggerBeginOverlap(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureSeaMine.OnExplodingTriggerBeginOverlap");

	APrimalStructureSeaMine_OnExplodingTriggerBeginOverlap_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureSeaMine.Explode
// ()

void APrimalStructureSeaMine::Explode()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureSeaMine.Explode");

	APrimalStructureSeaMine_Explode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureSign.OnRep_SignText
// ()
// Parameters:
// struct FString                 PreviousSignText               (Parm, ZeroConstructor)

void APrimalStructureSign::OnRep_SignText(const struct FString& PreviousSignText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureSign.OnRep_SignText");

	APrimalStructureSign_OnRep_SignText_Params params;
	params.PreviousSignText = PreviousSignText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalStructureWaterPipe.OnRep_HasWater
// ()
// Parameters:
// bool                           bPreviousHasWater              (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructureWaterPipe::OnRep_HasWater(bool bPreviousHasWater)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalStructureWaterPipe.OnRep_HasWater");

	APrimalStructureWaterPipe_OnRep_HasWater_Params params;
	params.bPreviousHasWater = bPreviousHasWater;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_AdminMangment.OnTextCommittedWhiteListed
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_AdminMangment::OnTextCommittedWhiteListed(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_AdminMangment.OnTextCommittedWhiteListed");

	UUI_AdminMangment_OnTextCommittedWhiteListed_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_AdminMangment.OnTextCommittedMessageOfTheDay
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_AdminMangment::OnTextCommittedMessageOfTheDay(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_AdminMangment.OnTextCommittedMessageOfTheDay");

	UUI_AdminMangment_OnTextCommittedMessageOfTheDay_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_AdminMangment.OnTextCommittedManualBan
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_AdminMangment::OnTextCommittedManualBan(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_AdminMangment.OnTextCommittedManualBan");

	UUI_AdminMangment_OnTextCommittedManualBan_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_AdminMangment.OnTextCommitted
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_AdminMangment::OnTextCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_AdminMangment.OnTextCommitted");

	UUI_AdminMangment_OnTextCommitted_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_AdminMangment.OnTextChangedMessageOfTheDay
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_AdminMangment::OnTextChangedMessageOfTheDay(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_AdminMangment.OnTextChangedMessageOfTheDay");

	UUI_AdminMangment_OnTextChangedMessageOfTheDay_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_AdminMangment.OnTextChangedManulaBan
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_AdminMangment::OnTextChangedManulaBan(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_AdminMangment.OnTextChangedManulaBan");

	UUI_AdminMangment_OnTextChangedManulaBan_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_AdminMangment.OnTextChangedManualWhiteLised
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_AdminMangment::OnTextChangedManualWhiteLised(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_AdminMangment.OnTextChangedManualWhiteLised");

	UUI_AdminMangment_OnTextChangedManualWhiteLised_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_AdminMangment.OnTextChanged
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_AdminMangment::OnTextChanged(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_AdminMangment.OnTextChanged");

	UUI_AdminMangment_OnTextChanged_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_AllPlayersList.OnTribeNameFilterChanged
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_AllPlayersList::OnTribeNameFilterChanged(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_AllPlayersList.OnTribeNameFilterChanged");

	UUI_AllPlayersList_OnTribeNameFilterChanged_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_AllPlayersList.OnPlayerNameFilterChanged
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_AllPlayersList::OnPlayerNameFilterChanged(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_AllPlayersList.OnPlayerNameFilterChanged");

	UUI_AllPlayersList_OnPlayerNameFilterChanged_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_ChangeTransponderFreqencyEntry.HandleFilterStringTextChanged
// ()
// Parameters:
// struct FText                   NewText                        (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_ChangeTransponderFreqencyEntry::HandleFilterStringTextChanged(const struct FText& NewText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_ChangeTransponderFreqencyEntry.HandleFilterStringTextChanged");

	UUI_ChangeTransponderFreqencyEntry_HandleFilterStringTextChanged_Params params;
	params.NewText = NewText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_ChatBox.HandleChatTextCommitted
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ChatBox::HandleChatTextCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_ChatBox.HandleChatTextCommitted");

	UUI_ChatBox_HandleChatTextCommitted_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_Cooking.RefreshItemLists
// ()

void UUI_Cooking::RefreshItemLists()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_Cooking.RefreshItemLists");

	UUI_Cooking_RefreshItemLists_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_Cooking.OnRedSliderValueChanged
// ()
// Parameters:
// float                          SliderValue                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Cooking::OnRedSliderValueChanged(float SliderValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_Cooking.OnRedSliderValueChanged");

	UUI_Cooking_OnRedSliderValueChanged_Params params;
	params.SliderValue = SliderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_Cooking.OnItemNameChanged
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_Cooking::OnItemNameChanged(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_Cooking.OnItemNameChanged");

	UUI_Cooking_OnItemNameChanged_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_Cooking.OnItemDescriptionChanged
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_Cooking::OnItemDescriptionChanged(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_Cooking.OnItemDescriptionChanged");

	UUI_Cooking_OnItemDescriptionChanged_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_Cooking.OnGreenSliderValueChanged
// ()
// Parameters:
// float                          SliderValue                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Cooking::OnGreenSliderValueChanged(float SliderValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_Cooking.OnGreenSliderValueChanged");

	UUI_Cooking_OnGreenSliderValueChanged_Params params;
	params.SliderValue = SliderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_Cooking.OnBlueSliderValueChanged
// ()
// Parameters:
// float                          SliderValue                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Cooking::OnBlueSliderValueChanged(float SliderValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_Cooking.OnBlueSliderValueChanged");

	UUI_Cooking_OnBlueSliderValueChanged_Params params;
	params.SliderValue = SliderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_Cosmetics.StartPreview
// ()

void UUI_Cosmetics::StartPreview()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_Cosmetics.StartPreview");

	UUI_Cosmetics_StartPreview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_Cosmetics.OnPrimalDinoCharacterComboBoxSelectionChanged
// ()
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Cosmetics::OnPrimalDinoCharacterComboBoxSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_Cosmetics.OnPrimalDinoCharacterComboBoxSelectionChanged");

	UUI_Cosmetics_OnPrimalDinoCharacterComboBoxSelectionChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_GenericConfirmationDialog.OnConfirmationDialogClosedEvent__DelegateSignature
// ()
// Parameters:
// bool                           bAccept                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_GenericConfirmationDialog::OnConfirmationDialogClosedEvent__DelegateSignature(bool bAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_GenericConfirmationDialog.OnConfirmationDialogClosedEvent__DelegateSignature");

	UUI_GenericConfirmationDialog_OnConfirmationDialogClosedEvent__DelegateSignature_Params params;
	params.bAccept = bAccept;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_HostSession.OnTextCommitted
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HostSession::OnTextCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_HostSession.OnTextCommitted");

	UUI_HostSession_OnTextCommitted_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_HostSession.OnTextChanged
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_HostSession::OnTextChanged(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_HostSession.OnTextChanged");

	UUI_HostSession_OnTextChanged_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_HostSession.OnSliderValueChanged
// ()
// Parameters:
// float                          SliderValue                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HostSession::OnSliderValueChanged(float SliderValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_HostSession.OnSliderValueChanged");

	UUI_HostSession_OnSliderValueChanged_Params params;
	params.SliderValue = SliderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_HostSession.OnNumericValueCommitted
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HostSession::OnNumericValueCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_HostSession.OnNumericValueCommitted");

	UUI_HostSession_OnNumericValueCommitted_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_Inventory.ShowAllCosmetics
// ()

void UUI_Inventory::ShowAllCosmetics()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_Inventory.ShowAllCosmetics");

	UUI_Inventory_ShowAllCosmetics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_Inventory.RefreshPreviewWidget
// ()

void UUI_Inventory::RefreshPreviewWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_Inventory.RefreshPreviewWidget");

	UUI_Inventory_RefreshPreviewWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_Inventory.OnShowAllStatusChanged
// ()
// Parameters:
// bool                           bIsChecked                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Inventory::OnShowAllStatusChanged(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_Inventory.OnShowAllStatusChanged");

	UUI_Inventory_OnShowAllStatusChanged_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_Inventory.OnShowAllRemoteItemsStatusChanged
// ()
// Parameters:
// bool                           bIsChecked                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Inventory::OnShowAllRemoteItemsStatusChanged(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_Inventory.OnShowAllRemoteItemsStatusChanged");

	UUI_Inventory_OnShowAllRemoteItemsStatusChanged_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_Inventory.OnShowAllLocalItemsStatusChanged
// ()
// Parameters:
// bool                           bIsChecked                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Inventory::OnShowAllLocalItemsStatusChanged(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_Inventory.OnShowAllLocalItemsStatusChanged");

	UUI_Inventory_OnShowAllLocalItemsStatusChanged_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_Inventory.OnRemoteItemNameFilterChanged
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_Inventory::OnRemoteItemNameFilterChanged(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_Inventory.OnRemoteItemNameFilterChanged");

	UUI_Inventory_OnRemoteItemNameFilterChanged_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_Inventory.OnItemNameFilterChanged
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_Inventory::OnItemNameFilterChanged(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_Inventory.OnItemNameFilterChanged");

	UUI_Inventory_OnItemNameFilterChanged_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_Inventory.OnEngramFilterChanged
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_Inventory::OnEngramFilterChanged(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_Inventory.OnEngramFilterChanged");

	UUI_Inventory_OnEngramFilterChanged_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_Inventory.NewFolderRemoteClickedButton
// ()
// Parameters:
// class UWidget*                 clickedWidget                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Inventory::NewFolderRemoteClickedButton(class UWidget* clickedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_Inventory.NewFolderRemoteClickedButton");

	UUI_Inventory_NewFolderRemoteClickedButton_Params params;
	params.clickedWidget = clickedWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_Inventory.NewFolderClickedButton
// ()
// Parameters:
// class UWidget*                 clickedWidget                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Inventory::NewFolderClickedButton(class UWidget* clickedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_Inventory.NewFolderClickedButton");

	UUI_Inventory_NewFolderClickedButton_Params params;
	params.clickedWidget = clickedWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_Inventory.DoHideEngrams
// ()

void UUI_Inventory::DoHideEngrams()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_Inventory.DoHideEngrams");

	UUI_Inventory_DoHideEngrams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_ListCharacterData.OnArkCharacterPlayerDataChosen__DelegateSignature
// ()
// Parameters:
// TArray<unsigned char>          ChoosenPlayerDataBytes         (Parm, ZeroConstructor)

void UUI_ListCharacterData::OnArkCharacterPlayerDataChosen__DelegateSignature(TArray<unsigned char> ChoosenPlayerDataBytes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_ListCharacterData.OnArkCharacterPlayerDataChosen__DelegateSignature");

	UUI_ListCharacterData_OnArkCharacterPlayerDataChosen__DelegateSignature_Params params;
	params.ChoosenPlayerDataBytes = ChoosenPlayerDataBytes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_ListLobbies.RefreshSlotButtons
// ()

void UUI_ListLobbies::RefreshSlotButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_ListLobbies.RefreshSlotButtons");

	UUI_ListLobbies_RefreshSlotButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_ListLobbies.OnRegionComboBoxSelectionChanged
// ()
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ListLobbies::OnRegionComboBoxSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_ListLobbies.OnRegionComboBoxSelectionChanged");

	UUI_ListLobbies_OnRegionComboBoxSelectionChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_ListLobbies.OnRankRangeComboBoxSelectionChanged
// ()
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ListLobbies::OnRankRangeComboBoxSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_ListLobbies.OnRankRangeComboBoxSelectionChanged");

	UUI_ListLobbies_OnRankRangeComboBoxSelectionChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_ListSessions.RefreshSlotButtons
// ()

void UUI_ListSessions::RefreshSlotButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_ListSessions.RefreshSlotButtons");

	UUI_ListSessions_RefreshSlotButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_ListSessions.OnTextCommitted
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ListSessions::OnTextCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_ListSessions.OnTextCommitted");

	UUI_ListSessions_OnTextCommitted_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_ListSessions.OnTextChanged
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_ListSessions::OnTextChanged(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_ListSessions.OnTextChanged");

	UUI_ListSessions_OnTextChanged_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_ListSessions.OnServersFilterComboBoxSelectionChanged
// ()
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ListSessions::OnServersFilterComboBoxSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_ListSessions.OnServersFilterComboBoxSelectionChanged");

	UUI_ListSessions_OnServersFilterComboBoxSelectionChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_ListSessions.OnCheckBoxChecked
// ()
// Parameters:
// bool                           InNewState                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ListSessions::OnCheckBoxChecked(bool InNewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_ListSessions.OnCheckBoxChecked");

	UUI_ListSessions_OnCheckBoxChecked_Params params;
	params.InNewState = InNewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_Lobby.OnRegionComboBoxSelectionChanged
// ()
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Lobby::OnRegionComboBoxSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_Lobby.OnRegionComboBoxSelectionChanged");

	UUI_Lobby_OnRegionComboBoxSelectionChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_Lobby.OnMinELOComboBoxSelectionChanged
// ()
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Lobby::OnMinELOComboBoxSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_Lobby.OnMinELOComboBoxSelectionChanged");

	UUI_Lobby_OnMinELOComboBoxSelectionChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_Lobby.OnHideChatCheckBoxStateChanged
// ()
// Parameters:
// bool                           bIsChecked                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Lobby::OnHideChatCheckBoxStateChanged(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_Lobby.OnHideChatCheckBoxStateChanged");

	UUI_Lobby_OnHideChatCheckBoxStateChanged_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_LobbyEntry.RemoteVersionRecieved
// ()
// Parameters:
// int                            RemoteMajorVersion             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_LobbyEntry::RemoteVersionRecieved(int RemoteMajorVersion, bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_LobbyEntry.RemoteVersionRecieved");

	UUI_LobbyEntry_RemoteVersionRecieved_Params params;
	params.RemoteMajorVersion = RemoteMajorVersion;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_LobbyEntry.OnRegionComboBoxSelectionChanged
// ()
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_LobbyEntry::OnRegionComboBoxSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_LobbyEntry.OnRegionComboBoxSelectionChanged");

	UUI_LobbyEntry_OnRegionComboBoxSelectionChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_LobbyEntry.OnRankRangeComboBoxSelectionChanged
// ()
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_LobbyEntry::OnRankRangeComboBoxSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_LobbyEntry.OnRankRangeComboBoxSelectionChanged");

	UUI_LobbyEntry_OnRankRangeComboBoxSelectionChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_LobbyEntry.OnModeChanged
// ()
// Parameters:
// class UWidget*                 Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_LobbyEntry::OnModeChanged(class UWidget* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_LobbyEntry.OnModeChanged");

	UUI_LobbyEntry_OnModeChanged_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_MainMenu.OnModeChanged
// ()
// Parameters:
// class UWidget*                 Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MainMenu::OnModeChanged(class UWidget* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_MainMenu.OnModeChanged");

	UUI_MainMenu_OnModeChanged_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_MapMarkersEntry.OnTextCommitted
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MapMarkersEntry::OnTextCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_MapMarkersEntry.OnTextCommitted");

	UUI_MapMarkersEntry_OnTextCommitted_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_MapMarkersEntry.OnTextChanged
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_MapMarkersEntry::OnTextChanged(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_MapMarkersEntry.OnTextChanged");

	UUI_MapMarkersEntry_OnTextChanged_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_MultiUse.ClickedEntry
// ()
// Parameters:
// class UWidget*                 clickedWidget                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MultiUse::ClickedEntry(class UWidget* clickedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_MultiUse.ClickedEntry");

	UUI_MultiUse_ClickedEntry_Params params;
	params.clickedWidget = clickedWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_OptionsMenu.OptionsGraphTick
// ()
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// float                          InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_OptionsMenu::OptionsGraphTick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_OptionsMenu.OptionsGraphTick");

	UUI_OptionsMenu_OptionsGraphTick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_OptionsMenu.OnWidthChanged
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_OptionsMenu::OnWidthChanged(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_OptionsMenu.OnWidthChanged");

	UUI_OptionsMenu_OnWidthChanged_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_OptionsMenu.OnSliderValueChanged
// ()
// Parameters:
// float                          SliderValue                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_OptionsMenu::OnSliderValueChanged(float SliderValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_OptionsMenu.OnSliderValueChanged");

	UUI_OptionsMenu_OnSliderValueChanged_Params params;
	params.SliderValue = SliderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_OptionsMenu.OnResolutionsComboBoxSelectionChanged
// ()
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_OptionsMenu::OnResolutionsComboBoxSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_OptionsMenu.OnResolutionsComboBoxSelectionChanged");

	UUI_OptionsMenu_OnResolutionsComboBoxSelectionChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_OptionsMenu.OnHeightChanged
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_OptionsMenu::OnHeightChanged(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_OptionsMenu.OnHeightChanged");

	UUI_OptionsMenu_OnHeightChanged_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_OptionsMenu.OnGraphicsQualityComboBoxChanged
// ()
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor)

void UUI_OptionsMenu::OnGraphicsQualityComboBoxChanged(const struct FString& SelectedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_OptionsMenu.OnGraphicsQualityComboBoxChanged");

	UUI_OptionsMenu_OnGraphicsQualityComboBoxChanged_Params params;
	params.SelectedItem = SelectedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_OptionsMenu.OnGraphicsPresetValueChanged
// ()

void UUI_OptionsMenu::OnGraphicsPresetValueChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_OptionsMenu.OnGraphicsPresetValueChanged");

	UUI_OptionsMenu_OnGraphicsPresetValueChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_PartySystem.OnRankRangeComboBoxSelectionChanged
// ()
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PartySystem::OnRankRangeComboBoxSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_PartySystem.OnRankRangeComboBoxSelectionChanged");

	UUI_PartySystem_OnRankRangeComboBoxSelectionChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_PartySystem.OnPartyComboBoxSelectionChanged
// ()
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PartySystem::OnPartyComboBoxSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_PartySystem.OnPartyComboBoxSelectionChanged");

	UUI_PartySystem_OnPartyComboBoxSelectionChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_PartySystem.OnAutoCreateTribeStateChanged
// ()
// Parameters:
// bool                           bIsChecked                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PartySystem::OnAutoCreateTribeStateChanged(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_PartySystem.OnAutoCreateTribeStateChanged");

	UUI_PartySystem_OnAutoCreateTribeStateChanged_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_RewardGroup.OnVisibilityChange__DelegateSignature
// ()

void UUI_RewardGroup::OnVisibilityChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_RewardGroup.OnVisibilityChange__DelegateSignature");

	UUI_RewardGroup_OnVisibilityChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_SavePainting.HandleFilterStringTextChanged
// ()
// Parameters:
// struct FText                   NewText                        (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_SavePainting::HandleFilterStringTextChanged(const struct FText& NewText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_SavePainting.HandleFilterStringTextChanged");

	UUI_SavePainting_HandleFilterStringTextChanged_Params params;
	params.NewText = NewText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_SurvivorProfile.HideDossier
// ()

void UUI_SurvivorProfile::HideDossier()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_SurvivorProfile.HideDossier");

	UUI_SurvivorProfile_HideDossier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_TextEntry.OnTextCommitted
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_TextEntry::OnTextCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_TextEntry.OnTextCommitted");

	UUI_TextEntry_OnTextCommitted_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_TextEntry.OnTextChanged
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_TextEntry::OnTextChanged(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_TextEntry.OnTextChanged");

	UUI_TextEntry_OnTextChanged_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_TribeWarEntry.OnTextCommitted
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_TribeWarEntry::OnTextCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_TribeWarEntry.OnTextCommitted");

	UUI_TribeWarEntry_OnTextCommitted_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.UI_TribeWarEntry.OnTextChanged
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_TribeWarEntry::OnTextChanged(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.UI_TribeWarEntry.OnTextChanged");

	UUI_TribeWarEntry_OnTextChanged_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalWorldSettings.IsAllowedInLevelBounds
// ()
// Parameters:
// struct FVector                 AtLocat                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrimalWorldSettings::IsAllowedInLevelBounds(const struct FVector& AtLocat)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalWorldSettings.IsAllowedInLevelBounds");

	APrimalWorldSettings_IsAllowedInLevelBounds_Params params;
	params.AtLocat = AtLocat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCheatManager.UnbanPlayer
// ()
// Parameters:
// struct FString                 PlayerSteamName                (Parm, ZeroConstructor)

void UShooterCheatManager::UnbanPlayer(const struct FString& PlayerSteamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.UnbanPlayer");

	UShooterCheatManager_UnbanPlayer_Params params;
	params.PlayerSteamName = PlayerSteamName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.ToggleLocation
// ()

void UShooterCheatManager::ToggleLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.ToggleLocation");

	UShooterCheatManager_ToggleLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.ToggleHud
// ()

void UShooterCheatManager::ToggleHud()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.ToggleHud");

	UShooterCheatManager_ToggleHud_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.ToggleGun
// ()

void UShooterCheatManager::ToggleGun()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.ToggleGun");

	UShooterCheatManager_ToggleGun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.TestSteamRefreshItems
// ()

void UShooterCheatManager::TestSteamRefreshItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.TestSteamRefreshItems");

	UShooterCheatManager_TestSteamRefreshItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.TeleportToPlayer
// ()
// Parameters:
// int64_t                        PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCheatManager::TeleportToPlayer(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.TeleportToPlayer");

	UShooterCheatManager_TeleportToPlayer_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.TeleportPlayerNameToMe
// ()
// Parameters:
// struct FString                 PlayerName                     (Parm, ZeroConstructor)

void UShooterCheatManager::TeleportPlayerNameToMe(const struct FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.TeleportPlayerNameToMe");

	UShooterCheatManager_TeleportPlayerNameToMe_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.TeleportPlayerIDToMe
// ()
// Parameters:
// int64_t                        PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCheatManager::TeleportPlayerIDToMe(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.TeleportPlayerIDToMe");

	UShooterCheatManager_TeleportPlayerIDToMe_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.SummonTamed
// ()
// Parameters:
// struct FString                 ClassName                      (Parm, ZeroConstructor)

void UShooterCheatManager::SummonTamed(const struct FString& ClassName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.SummonTamed");

	UShooterCheatManager_SummonTamed_Params params;
	params.ClassName = ClassName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.Suicide
// ()

void UShooterCheatManager::Suicide()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.Suicide");

	UShooterCheatManager_Suicide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.SPI
// ()
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCheatManager::SPI(float X, float Y, float Z, float Yaw, float Pitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.SPI");

	UShooterCheatManager_SPI_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.Yaw = Yaw;
	params.Pitch = Pitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.SpawnDino
// ()
// Parameters:
// struct FString                 blueprintPath                  (Parm, ZeroConstructor)
// float                          spawnDistance                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          spawnYOffset                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ZOffset                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            DinoLevel                      (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCheatManager::SpawnDino(const struct FString& blueprintPath, float spawnDistance, float spawnYOffset, float ZOffset, int DinoLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.SpawnDino");

	UShooterCheatManager_SpawnDino_Params params;
	params.blueprintPath = blueprintPath;
	params.spawnDistance = spawnDistance;
	params.spawnYOffset = spawnYOffset;
	params.ZOffset = ZOffset;
	params.DinoLevel = DinoLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.SpawnActorTamed
// ()
// Parameters:
// struct FString                 blueprintPath                  (Parm, ZeroConstructor)
// float                          spawnDistance                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          spawnYOffset                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ZOffset                        (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCheatManager::SpawnActorTamed(const struct FString& blueprintPath, float spawnDistance, float spawnYOffset, float ZOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.SpawnActorTamed");

	UShooterCheatManager_SpawnActorTamed_Params params;
	params.blueprintPath = blueprintPath;
	params.spawnDistance = spawnDistance;
	params.spawnYOffset = spawnYOffset;
	params.ZOffset = ZOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.SpawnActorSpreadTamed
// ()
// Parameters:
// struct FString                 blueprintPath                  (Parm, ZeroConstructor)
// float                          spawnDistance                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          spawnYOffset                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ZOffset                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumberActors                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          SpreadAmount                   (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCheatManager::SpawnActorSpreadTamed(const struct FString& blueprintPath, float spawnDistance, float spawnYOffset, float ZOffset, int NumberActors, float SpreadAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.SpawnActorSpreadTamed");

	UShooterCheatManager_SpawnActorSpreadTamed_Params params;
	params.blueprintPath = blueprintPath;
	params.spawnDistance = spawnDistance;
	params.spawnYOffset = spawnYOffset;
	params.ZOffset = ZOffset;
	params.NumberActors = NumberActors;
	params.SpreadAmount = SpreadAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.SpawnActorSpread
// ()
// Parameters:
// struct FString                 blueprintPath                  (Parm, ZeroConstructor)
// float                          spawnDistance                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          spawnYOffset                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ZOffset                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumberActors                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          SpreadAmount                   (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCheatManager::SpawnActorSpread(const struct FString& blueprintPath, float spawnDistance, float spawnYOffset, float ZOffset, int NumberActors, float SpreadAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.SpawnActorSpread");

	UShooterCheatManager_SpawnActorSpread_Params params;
	params.blueprintPath = blueprintPath;
	params.spawnDistance = spawnDistance;
	params.spawnYOffset = spawnYOffset;
	params.ZOffset = ZOffset;
	params.NumberActors = NumberActors;
	params.SpreadAmount = SpreadAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.SpawnActor
// ()
// Parameters:
// struct FString                 blueprintPath                  (Parm, ZeroConstructor)
// float                          spawnDistance                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          spawnYOffset                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ZOffset                        (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCheatManager::SpawnActor(const struct FString& blueprintPath, float spawnDistance, float spawnYOffset, float ZOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.SpawnActor");

	UShooterCheatManager_SpawnActor_Params params;
	params.blueprintPath = blueprintPath;
	params.spawnDistance = spawnDistance;
	params.spawnYOffset = spawnYOffset;
	params.ZOffset = ZOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.ShowTutorial
// ()
// Parameters:
// int                            TutorialIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceDisplay                  (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCheatManager::ShowTutorial(int TutorialIndex, bool bForceDisplay)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.ShowTutorial");

	UShooterCheatManager_ShowTutorial_Params params;
	params.TutorialIndex = TutorialIndex;
	params.bForceDisplay = bForceDisplay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.ShowMessageOfTheDay
// ()

void UShooterCheatManager::ShowMessageOfTheDay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.ShowMessageOfTheDay");

	UShooterCheatManager_ShowMessageOfTheDay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.ShowInGameMenu
// ()

void UShooterCheatManager::ShowInGameMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.ShowInGameMenu");

	UShooterCheatManager_ShowInGameMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.SetTimeOfDay
// ()
// Parameters:
// struct FString                 timeString                     (Parm, ZeroConstructor)

void UShooterCheatManager::SetTimeOfDay(const struct FString& timeString)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.SetTimeOfDay");

	UShooterCheatManager_SetTimeOfDay_Params params;
	params.timeString = timeString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.SetTargetPlayerColorVal
// ()
// Parameters:
// int                            ColorValIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          ColorVal                       (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCheatManager::SetTargetPlayerColorVal(int ColorValIndex, float ColorVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.SetTargetPlayerColorVal");

	UShooterCheatManager_SetTargetPlayerColorVal_Params params;
	params.ColorValIndex = ColorValIndex;
	params.ColorVal = ColorVal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.SetTargetPlayerBodyVal
// ()
// Parameters:
// int                            BodyValIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          BodyVal                        (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCheatManager::SetTargetPlayerBodyVal(int BodyValIndex, float BodyVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.SetTargetPlayerBodyVal");

	UShooterCheatManager_SetTargetPlayerBodyVal_Params params;
	params.BodyValIndex = BodyValIndex;
	params.BodyVal = BodyVal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.SetTargetDinoColor
// ()
// Parameters:
// int                            ColorRegion                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ColorID                        (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCheatManager::SetTargetDinoColor(int ColorRegion, int ColorID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.SetTargetDinoColor");

	UShooterCheatManager_SetTargetDinoColor_Params params;
	params.ColorRegion = ColorRegion;
	params.ColorID = ColorID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.SetPlayerPos
// ()
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCheatManager::SetPlayerPos(float X, float Y, float Z)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.SetPlayerPos");

	UShooterCheatManager_SetPlayerPos_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.SetMessageOfTheDay
// ()
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void UShooterCheatManager::SetMessageOfTheDay(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.SetMessageOfTheDay");

	UShooterCheatManager_SetMessageOfTheDay_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.SetMatchCanStart
// ()

void UShooterCheatManager::SetMatchCanStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.SetMatchCanStart");

	UShooterCheatManager_SetMatchCanStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.SetImprintQuality
// ()
// Parameters:
// float                          ImprintQuality                 (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCheatManager::SetImprintQuality(float ImprintQuality)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.SetImprintQuality");

	UShooterCheatManager_SetImprintQuality_Params params;
	params.ImprintQuality = ImprintQuality;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.SetGraphicsQuality
// ()
// Parameters:
// int                            Val                            (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCheatManager::SetGraphicsQuality(int Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.SetGraphicsQuality");

	UShooterCheatManager_SetGraphicsQuality_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.SetGodMode
// ()
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCheatManager::SetGodMode(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.SetGodMode");

	UShooterCheatManager_SetGodMode_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.SetGlobalPause
// ()
// Parameters:
// bool                           bIsPaused                      (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCheatManager::SetGlobalPause(bool bIsPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.SetGlobalPause");

	UShooterCheatManager_SetGlobalPause_Params params;
	params.bIsPaused = bIsPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.SetBabyAge
// ()
// Parameters:
// float                          AgeValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCheatManager::SetBabyAge(float AgeValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.SetBabyAge");

	UShooterCheatManager_SetBabyAge_Params params;
	params.AgeValue = AgeValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.ServerChatToPlayer
// ()
// Parameters:
// struct FString                 PlayerName                     (Parm, ZeroConstructor)
// struct FString                 MessageText                    (Parm, ZeroConstructor)

void UShooterCheatManager::ServerChatToPlayer(const struct FString& PlayerName, const struct FString& MessageText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.ServerChatToPlayer");

	UShooterCheatManager_ServerChatToPlayer_Params params;
	params.PlayerName = PlayerName;
	params.MessageText = MessageText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.ServerChatTo
// ()
// Parameters:
// struct FString                 SteamID                        (Parm, ZeroConstructor)
// struct FString                 MessageText                    (Parm, ZeroConstructor)

void UShooterCheatManager::ServerChatTo(const struct FString& SteamID, const struct FString& MessageText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.ServerChatTo");

	UShooterCheatManager_ServerChatTo_Params params;
	params.SteamID = SteamID;
	params.MessageText = MessageText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.ServerChat
// ()
// Parameters:
// struct FString                 MessageText                    (Parm, ZeroConstructor)

void UShooterCheatManager::ServerChat(const struct FString& MessageText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.ServerChat");

	UShooterCheatManager_ServerChat_Params params;
	params.MessageText = MessageText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.ScriptCommand
// ()
// Parameters:
// struct FString                 commandString                  (Parm, ZeroConstructor)

void UShooterCheatManager::ScriptCommand(const struct FString& commandString)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.ScriptCommand");

	UShooterCheatManager_ScriptCommand_Params params;
	params.commandString = commandString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.SaveWorld
// ()

void UShooterCheatManager::SaveWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.SaveWorld");

	UShooterCheatManager_SaveWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.ReportSpawnManagers
// ()

void UShooterCheatManager::ReportSpawnManagers()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.ReportSpawnManagers");

	UShooterCheatManager_ReportSpawnManagers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.ReportLeastSpawnManagers
// ()

void UShooterCheatManager::ReportLeastSpawnManagers()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.ReportLeastSpawnManagers");

	UShooterCheatManager_ReportLeastSpawnManagers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.RenameTribe
// ()
// Parameters:
// struct FString                 TribeName                      (Parm, ZeroConstructor)
// struct FString                 NewName                        (Parm, ZeroConstructor)

void UShooterCheatManager::RenameTribe(const struct FString& TribeName, const struct FString& NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.RenameTribe");

	UShooterCheatManager_RenameTribe_Params params;
	params.TribeName = TribeName;
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.RenamePlayer
// ()
// Parameters:
// struct FString                 PlayerName                     (Parm, ZeroConstructor)
// struct FString                 NewName                        (Parm, ZeroConstructor)

void UShooterCheatManager::RenamePlayer(const struct FString& PlayerName, const struct FString& NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.RenamePlayer");

	UShooterCheatManager_RenamePlayer_Params params;
	params.PlayerName = PlayerName;
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.RemoveTribeAdmin
// ()

void UShooterCheatManager::RemoveTribeAdmin()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.RemoveTribeAdmin");

	UShooterCheatManager_RemoveTribeAdmin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.RemoveAllSteamInventory
// ()

void UShooterCheatManager::RemoveAllSteamInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.RemoveAllSteamInventory");

	UShooterCheatManager_RemoveAllSteamInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.OpenMap
// ()
// Parameters:
// struct FString                 MapName                        (Parm, ZeroConstructor)

void UShooterCheatManager::OpenMap(const struct FString& MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.OpenMap");

	UShooterCheatManager_OpenMap_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.OnToggleInGameMenu
// ()

void UShooterCheatManager::OnToggleInGameMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.OnToggleInGameMenu");

	UShooterCheatManager_OnToggleInGameMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.MakeTribeFounder
// ()

void UShooterCheatManager::MakeTribeFounder()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.MakeTribeFounder");

	UShooterCheatManager_MakeTribeFounder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.MakeTribeAdmin
// ()

void UShooterCheatManager::MakeTribeAdmin()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.MakeTribeAdmin");

	UShooterCheatManager_MakeTribeAdmin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.ListPlayers
// ()

void UShooterCheatManager::ListPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.ListPlayers");

	UShooterCheatManager_ListPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.KillPlayer
// ()
// Parameters:
// int64_t                        PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCheatManager::KillPlayer(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.KillPlayer");

	UShooterCheatManager_KillPlayer_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.Kill
// ()

void UShooterCheatManager::Kill()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.Kill");

	UShooterCheatManager_Kill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.KickPlayer
// ()
// Parameters:
// struct FString                 PlayerSteamName                (Parm, ZeroConstructor)

void UShooterCheatManager::KickPlayer(const struct FString& PlayerSteamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.KickPlayer");

	UShooterCheatManager_KickPlayer_Params params;
	params.PlayerSteamName = PlayerSteamName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.InfiniteStats
// ()

void UShooterCheatManager::InfiniteStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.InfiniteStats");

	UShooterCheatManager_InfiniteStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.HideTutorial
// ()
// Parameters:
// int                            TutorialIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCheatManager::HideTutorial(int TutorialIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.HideTutorial");

	UShooterCheatManager_HideTutorial_Params params;
	params.TutorialIndex = TutorialIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.GiveToMe
// ()

void UShooterCheatManager::GiveToMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.GiveToMe");

	UShooterCheatManager_GiveToMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.GiveReward
// ()
// Parameters:
// int                            ItemId                         (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCheatManager::GiveReward(int ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.GiveReward");

	UShooterCheatManager_GiveReward_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.GiveResources
// ()

void UShooterCheatManager::GiveResources()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.GiveResources");

	UShooterCheatManager_GiveResources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.GiveItemToPlayer
// ()
// Parameters:
// int                            PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 blueprintPath                  (Parm, ZeroConstructor)
// int                            quantityOverride               (Parm, ZeroConstructor, IsPlainOldData)
// float                          qualityOverride                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceBlueprint                (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCheatManager::GiveItemToPlayer(int PlayerId, const struct FString& blueprintPath, int quantityOverride, float qualityOverride, bool bForceBlueprint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.GiveItemToPlayer");

	UShooterCheatManager_GiveItemToPlayer_Params params;
	params.PlayerId = PlayerId;
	params.blueprintPath = blueprintPath;
	params.quantityOverride = quantityOverride;
	params.qualityOverride = qualityOverride;
	params.bForceBlueprint = bForceBlueprint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.GiveItemNumToPlayer
// ()
// Parameters:
// int                            PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            masterIndexNum                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            quantityOverride               (Parm, ZeroConstructor, IsPlainOldData)
// float                          qualityOverride                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceBlueprint                (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCheatManager::GiveItemNumToPlayer(int PlayerId, int masterIndexNum, int quantityOverride, float qualityOverride, bool bForceBlueprint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.GiveItemNumToPlayer");

	UShooterCheatManager_GiveItemNumToPlayer_Params params;
	params.PlayerId = PlayerId;
	params.masterIndexNum = masterIndexNum;
	params.quantityOverride = quantityOverride;
	params.qualityOverride = qualityOverride;
	params.bForceBlueprint = bForceBlueprint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.GiveItemNum
// ()
// Parameters:
// int                            masterIndexNum                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            quantityOverride               (Parm, ZeroConstructor, IsPlainOldData)
// float                          qualityOverride                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceBlueprint                (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCheatManager::GiveItemNum(int masterIndexNum, int quantityOverride, float qualityOverride, bool bForceBlueprint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.GiveItemNum");

	UShooterCheatManager_GiveItemNum_Params params;
	params.masterIndexNum = masterIndexNum;
	params.quantityOverride = quantityOverride;
	params.qualityOverride = qualityOverride;
	params.bForceBlueprint = bForceBlueprint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.GiveItem
// ()
// Parameters:
// struct FString                 blueprintPath                  (Parm, ZeroConstructor)
// int                            quantityOverride               (Parm, ZeroConstructor, IsPlainOldData)
// float                          qualityOverride                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceBlueprint                (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCheatManager::GiveItem(const struct FString& blueprintPath, int quantityOverride, float qualityOverride, bool bForceBlueprint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.GiveItem");

	UShooterCheatManager_GiveItem_Params params;
	params.blueprintPath = blueprintPath;
	params.quantityOverride = quantityOverride;
	params.qualityOverride = qualityOverride;
	params.bForceBlueprint = bForceBlueprint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.GiveExpToPlayer
// ()
// Parameters:
// int64_t                        PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          HowMuch                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           fromTribeShare                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPreventSharingWithTribe       (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCheatManager::GiveExpToPlayer(int64_t PlayerId, float HowMuch, bool fromTribeShare, bool bPreventSharingWithTribe)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.GiveExpToPlayer");

	UShooterCheatManager_GiveExpToPlayer_Params params;
	params.PlayerId = PlayerId;
	params.HowMuch = HowMuch;
	params.fromTribeShare = fromTribeShare;
	params.bPreventSharingWithTribe = bPreventSharingWithTribe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.GiveEngrams
// ()

void UShooterCheatManager::GiveEngrams()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.GiveEngrams");

	UShooterCheatManager_GiveEngrams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.GiveAllStructure
// ()

void UShooterCheatManager::GiveAllStructure()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.GiveAllStructure");

	UShooterCheatManager_GiveAllStructure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.GetGameLog
// ()

void UShooterCheatManager::GetGameLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.GetGameLog");

	UShooterCheatManager_GetGameLog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.GetChat
// ()

void UShooterCheatManager::GetChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.GetChat");

	UShooterCheatManager_GetChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.GameCommand
// ()
// Parameters:
// struct FString                 TheCommand                     (Parm, ZeroConstructor)

void UShooterCheatManager::GameCommand(const struct FString& TheCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.GameCommand");

	UShooterCheatManager_GameCommand_Params params;
	params.TheCommand = TheCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.ForceTribes
// ()
// Parameters:
// struct FString                 PlayerName1                    (Parm, ZeroConstructor)
// struct FString                 PlayerName2                    (Parm, ZeroConstructor)
// struct FString                 NewTribeName                   (Parm, ZeroConstructor)

void UShooterCheatManager::ForceTribes(const struct FString& PlayerName1, const struct FString& PlayerName2, const struct FString& NewTribeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.ForceTribes");

	UShooterCheatManager_ForceTribes_Params params;
	params.PlayerName1 = PlayerName1;
	params.PlayerName2 = PlayerName2;
	params.NewTribeName = NewTribeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.ForceTame
// ()

void UShooterCheatManager::ForceTame()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.ForceTame");

	UShooterCheatManager_ForceTame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.ForcePlayerToJoinTribe
// ()
// Parameters:
// int64_t                        PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 TribeName                      (Parm, ZeroConstructor)

void UShooterCheatManager::ForcePlayerToJoinTribe(int64_t PlayerId, const struct FString& TribeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.ForcePlayerToJoinTribe");

	UShooterCheatManager_ForcePlayerToJoinTribe_Params params;
	params.PlayerId = PlayerId;
	params.TribeName = TribeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.ForcePlayerToJoinTargetTribe
// ()
// Parameters:
// int64_t                        PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCheatManager::ForcePlayerToJoinTargetTribe(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.ForcePlayerToJoinTargetTribe");

	UShooterCheatManager_ForcePlayerToJoinTargetTribe_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.EnemyInVisible
// ()
// Parameters:
// bool                           Invisible                      (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCheatManager::EnemyInVisible(bool Invisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.EnemyInVisible");

	UShooterCheatManager_EnemyInVisible_Params params;
	params.Invisible = Invisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.EnableSpectator
// ()

void UShooterCheatManager::EnableSpectator()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.EnableSpectator");

	UShooterCheatManager_EnableSpectator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.EnableCheats
// ()
// Parameters:
// struct FString                 pass                           (ConstParm, Parm, ZeroConstructor)

void UShooterCheatManager::EnableCheats(const struct FString& pass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.EnableCheats");

	UShooterCheatManager_EnableCheats_Params params;
	params.pass = pass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.DoTame
// ()

void UShooterCheatManager::DoTame()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.DoTame");

	UShooterCheatManager_DoTame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.DoRestartLevel
// ()

void UShooterCheatManager::DoRestartLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.DoRestartLevel");

	UShooterCheatManager_DoRestartLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.DoExit
// ()

void UShooterCheatManager::DoExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.DoExit");

	UShooterCheatManager_DoExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.DisallowPlayerToJoinNoCheck
// ()
// Parameters:
// struct FString                 SteamID                        (Parm, ZeroConstructor)

void UShooterCheatManager::DisallowPlayerToJoinNoCheck(const struct FString& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.DisallowPlayerToJoinNoCheck");

	UShooterCheatManager_DisallowPlayerToJoinNoCheck_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.DisableSpectator
// ()

void UShooterCheatManager::DisableSpectator()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.DisableSpectator");

	UShooterCheatManager_DisableSpectator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.DestroyWildDinos
// ()

void UShooterCheatManager::DestroyWildDinos()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.DestroyWildDinos");

	UShooterCheatManager_DestroyWildDinos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.DestroyTribeStructures
// ()

void UShooterCheatManager::DestroyTribeStructures()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.DestroyTribeStructures");

	UShooterCheatManager_DestroyTribeStructures_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.DestroyTribePlayers
// ()

void UShooterCheatManager::DestroyTribePlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.DestroyTribePlayers");

	UShooterCheatManager_DestroyTribePlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.DestroyTribeDinos
// ()

void UShooterCheatManager::DestroyTribeDinos()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.DestroyTribeDinos");

	UShooterCheatManager_DestroyTribeDinos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.DestroyStructures
// ()

void UShooterCheatManager::DestroyStructures()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.DestroyStructures");

	UShooterCheatManager_DestroyStructures_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.DestroyMyTarget
// ()

void UShooterCheatManager::DestroyMyTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.DestroyMyTarget");

	UShooterCheatManager_DestroyMyTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.DestroyAllEnemies
// ()

void UShooterCheatManager::DestroyAllEnemies()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.DestroyAllEnemies");

	UShooterCheatManager_DestroyAllEnemies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.DestroyActors
// ()
// Parameters:
// struct FString                 ClassName                      (Parm, ZeroConstructor)

void UShooterCheatManager::DestroyActors(const struct FString& ClassName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.DestroyActors");

	UShooterCheatManager_DestroyActors_Params params;
	params.ClassName = ClassName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.ClearTutorials
// ()

void UShooterCheatManager::ClearTutorials()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.ClearTutorials");

	UShooterCheatManager_ClearTutorials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.ClearPlayerInventory
// ()
// Parameters:
// int                            PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bClearInventory                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bClearSlotItems                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bClearEquippedItems            (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCheatManager::ClearPlayerInventory(int PlayerId, bool bClearInventory, bool bClearSlotItems, bool bClearEquippedItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.ClearPlayerInventory");

	UShooterCheatManager_ClearPlayerInventory_Params params;
	params.PlayerId = PlayerId;
	params.bClearInventory = bClearInventory;
	params.bClearSlotItems = bClearSlotItems;
	params.bClearEquippedItems = bClearEquippedItems;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.Broadcast
// ()
// Parameters:
// struct FString                 MessageText                    (Parm, ZeroConstructor)

void UShooterCheatManager::Broadcast(const struct FString& MessageText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.Broadcast");

	UShooterCheatManager_Broadcast_Params params;
	params.MessageText = MessageText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.BanPlayer
// ()
// Parameters:
// struct FString                 PlayerSteamName                (Parm, ZeroConstructor)

void UShooterCheatManager::BanPlayer(const struct FString& PlayerSteamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.BanPlayer");

	UShooterCheatManager_BanPlayer_Params params;
	params.PlayerSteamName = PlayerSteamName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.AllowPlayerToJoinNoCheck
// ()
// Parameters:
// struct FString                 SteamID                        (Parm, ZeroConstructor)

void UShooterCheatManager::AllowPlayerToJoinNoCheck(const struct FString& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.AllowPlayerToJoinNoCheck");

	UShooterCheatManager_AllowPlayerToJoinNoCheck_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.AddExperience
// ()
// Parameters:
// float                          HowMuch                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           fromTribeShare                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPreventSharingWithTribe       (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCheatManager::AddExperience(float HowMuch, bool fromTribeShare, bool bPreventSharingWithTribe)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.AddExperience");

	UShooterCheatManager_AddExperience_Params params;
	params.HowMuch = HowMuch;
	params.fromTribeShare = fromTribeShare;
	params.bPreventSharingWithTribe = bPreventSharingWithTribe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDamageType.BPAdjustDamage
// ()
// Parameters:
// class AActor*                  Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            TheDamageEvent                 (Parm)
// class AController*             EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UShooterDamageType::BPAdjustDamage(class AActor* Victim, float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDamageType.BPAdjustDamage");

	UShooterDamageType_BPAdjustDamage_Params params;
	params.Victim = Victim;
	params.IncomingDamage = IncomingDamage;
	params.TheDamageEvent = TheDamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGame_Menu.PlayMusic
// ()

void AShooterGame_Menu::PlayMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGame_Menu.PlayMusic");

	AShooterGame_Menu_PlayMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameInstance.OnRemoteMajorVerionRecived__DelegateSignature
// ()
// Parameters:
// int                            Version                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)

void UShooterGameInstance::OnRemoteMajorVerionRecived__DelegateSignature(int Version, bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameInstance.OnRemoteMajorVerionRecived__DelegateSignature");

	UShooterGameInstance_OnRemoteMajorVerionRecived__DelegateSignature_Params params;
	params.Version = Version;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameInstance.LoadTheGameMedia
// ()

void UShooterGameInstance::LoadTheGameMedia()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameInstance.LoadTheGameMedia");

	UShooterGameInstance_LoadTheGameMedia_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameInstance.DisplayGlobalMainMenuNotification
// ()

void UShooterGameInstance::DisplayGlobalMainMenuNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameInstance.DisplayGlobalMainMenuNotification");

	UShooterGameInstance_DisplayGlobalMainMenuNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.UpdatePlayerStats
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameMode::UpdatePlayerStats(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.UpdatePlayerStats");

	AShooterGameMode_UpdatePlayerStats_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.TriggerLevelCustomEvents
// ()
// Parameters:
// class UWorld*                  inWorld                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EventName                      (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterGameMode::TriggerLevelCustomEvents(class UWorld* inWorld, const struct FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.TriggerLevelCustomEvents");

	AShooterGameMode_TriggerLevelCustomEvents_Params params;
	params.inWorld = inWorld;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameMode.ShooterCharacterSpawned__DelegateSignature
// ()
// Parameters:
// class AShooterCharacter*       TheShooterCharacter            (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameMode::ShooterCharacterSpawned__DelegateSignature(class AShooterCharacter* TheShooterCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.ShooterCharacterSpawned__DelegateSignature");

	AShooterGameMode_ShooterCharacterSpawned__DelegateSignature_Params params;
	params.TheShooterCharacter = TheShooterCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.ShooterCharacterDied__DelegateSignature
// ()
// Parameters:
// class AShooterCharacter*       TheShooterCharacter            (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameMode::ShooterCharacterDied__DelegateSignature(class AShooterCharacter* TheShooterCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.ShooterCharacterDied__DelegateSignature");

	AShooterGameMode_ShooterCharacterDied__DelegateSignature_Params params;
	params.TheShooterCharacter = TheShooterCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.SetTimeOfDay
// ()
// Parameters:
// struct FString                 timeString                     (Parm, ZeroConstructor)

void AShooterGameMode::SetTimeOfDay(const struct FString& timeString)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.SetTimeOfDay");

	AShooterGameMode_SetTimeOfDay_Params params;
	params.timeString = timeString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.SendServerNotification
// ()
// Parameters:
// struct FString                 MessageText                    (Parm, ZeroConstructor)
// struct FLinearColor            MessageColor                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          DisplayScale                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          DisplayTime                    (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              MessageIcon                    (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              SoundToPlay                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReceiverTeamId                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReceiverPlayerID               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDoBillboard                   (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameMode::SendServerNotification(const struct FString& MessageText, const struct FLinearColor& MessageColor, float DisplayScale, float DisplayTime, class UTexture2D* MessageIcon, class USoundBase* SoundToPlay, int ReceiverTeamId, int ReceiverPlayerID, bool bDoBillboard)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.SendServerNotification");

	AShooterGameMode_SendServerNotification_Params params;
	params.MessageText = MessageText;
	params.MessageColor = MessageColor;
	params.DisplayScale = DisplayScale;
	params.DisplayTime = DisplayTime;
	params.MessageIcon = MessageIcon;
	params.SoundToPlay = SoundToPlay;
	params.ReceiverTeamId = ReceiverTeamId;
	params.ReceiverPlayerID = ReceiverPlayerID;
	params.bDoBillboard = bDoBillboard;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.SendServerDirectMessage
// ()
// Parameters:
// struct FString                 PlayerSteamIDconst             (Parm, ZeroConstructor)
// struct FString                 MessageText                    (Parm, ZeroConstructor)
// struct FLinearColor            MessageColor                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsBold                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReceiverTeamId                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReceiverPlayerID               (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PlayerName                     (Parm, ZeroConstructor)

void AShooterGameMode::SendServerDirectMessage(const struct FString& PlayerSteamIDconst, const struct FString& MessageText, const struct FLinearColor& MessageColor, bool bIsBold, int ReceiverTeamId, int ReceiverPlayerID, const struct FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.SendServerDirectMessage");

	AShooterGameMode_SendServerDirectMessage_Params params;
	params.PlayerSteamIDconst = PlayerSteamIDconst;
	params.MessageText = MessageText;
	params.MessageColor = MessageColor;
	params.bIsBold = bIsBold;
	params.ReceiverTeamId = ReceiverTeamId;
	params.ReceiverPlayerID = ReceiverPlayerID;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.SendServerChatMessage
// ()
// Parameters:
// struct FString                 MessageText                    (Parm, ZeroConstructor)
// struct FLinearColor            MessageColor                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsBold                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReceiverTeamId                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReceiverPlayerID               (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameMode::SendServerChatMessage(const struct FString& MessageText, const struct FLinearColor& MessageColor, bool bIsBold, int ReceiverTeamId, int ReceiverPlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.SendServerChatMessage");

	AShooterGameMode_SendServerChatMessage_Params params;
	params.MessageText = MessageText;
	params.MessageColor = MessageColor;
	params.bIsBold = bIsBold;
	params.ReceiverTeamId = ReceiverTeamId;
	params.ReceiverPlayerID = ReceiverPlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.RestartServer
// ()

void AShooterGameMode::RestartServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.RestartServer");

	AShooterGameMode_RestartServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.RemovePlayerData
// ()
// Parameters:
// class AShooterPlayerState*     PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameMode::RemovePlayerData(class AShooterPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.RemovePlayerData");

	AShooterGameMode_RemovePlayerData_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.RemoveInactivePlayersAndTribes
// ()

void AShooterGameMode::RemoveInactivePlayersAndTribes()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.RemoveInactivePlayersAndTribes");

	AShooterGameMode_RemoveInactivePlayersAndTribes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.PrintToServerGameLog
// ()
// Parameters:
// struct FString                 InString                       (Parm, ZeroConstructor)

void AShooterGameMode::PrintToServerGameLog(const struct FString& InString)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.PrintToServerGameLog");

	AShooterGameMode_PrintToServerGameLog_Params params;
	params.InString = InString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.PrintToGameplayLog
// ()
// Parameters:
// struct FString                 InString                       (Parm, ZeroConstructor)

void AShooterGameMode::PrintToGameplayLog(const struct FString& InString)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.PrintToGameplayLog");

	AShooterGameMode_PrintToGameplayLog_Params params;
	params.InString = InString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.PostAlarmNotificationTribe
// ()
// Parameters:
// int                            TribeID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Title                          (Parm, ZeroConstructor)
// struct FString                 Message                        (Parm, ZeroConstructor)

void AShooterGameMode::PostAlarmNotificationTribe(int TribeID, const struct FString& Title, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.PostAlarmNotificationTribe");

	AShooterGameMode_PostAlarmNotificationTribe_Params params;
	params.TribeID = TribeID;
	params.Title = Title;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.PostAlarmNotificationPlayerID
// ()
// Parameters:
// int                            PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Title                          (Parm, ZeroConstructor)
// struct FString                 Message                        (Parm, ZeroConstructor)

void AShooterGameMode::PostAlarmNotificationPlayerID(int PlayerId, const struct FString& Title, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.PostAlarmNotificationPlayerID");

	AShooterGameMode_PostAlarmNotificationPlayerID_Params params;
	params.PlayerId = PlayerId;
	params.Title = Title;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.PostAlarmNotification
// ()
// Parameters:
// struct FString                 SteamID                        (Parm, ZeroConstructor)
// struct FString                 Title                          (Parm, ZeroConstructor)
// struct FString                 Message                        (Parm, ZeroConstructor)

void AShooterGameMode::PostAlarmNotification(const struct FString& SteamID, const struct FString& Title, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.PostAlarmNotification");

	AShooterGameMode_PostAlarmNotification_Params params;
	params.SteamID = SteamID;
	params.Title = Title;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.OnMatchStart
// ()

void AShooterGameMode::OnMatchStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.OnMatchStart");

	AShooterGameMode_OnMatchStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.OnLogout
// ()
// Parameters:
// class AController*             Exiting                        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameMode::OnLogout(class AController* Exiting)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.OnLogout");

	AShooterGameMode_OnLogout_Params params;
	params.Exiting = Exiting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.MatchEnded
// ()

void AShooterGameMode::MatchEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.MatchEnded");

	AShooterGameMode_MatchEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.KickPlayerController
// ()
// Parameters:
// class APlayerController*       thePC                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 KickMessage                    (Parm, ZeroConstructor)

void AShooterGameMode::KickPlayerController(class APlayerController* thePC, const struct FString& KickMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.KickPlayerController");

	AShooterGameMode_KickPlayerController_Params params;
	params.thePC = thePC;
	params.KickMessage = KickMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.KickAllPlayersAndReload
// ()

void AShooterGameMode::KickAllPlayersAndReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.KickAllPlayersAndReload");

	AShooterGameMode_KickAllPlayersAndReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.IsPlayerControllerAllowedToJoinNoCheck
// ()
// Parameters:
// class AShooterPlayerController* ForPlayer                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterGameMode::IsPlayerControllerAllowedToJoinNoCheck(class AShooterPlayerController* ForPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.IsPlayerControllerAllowedToJoinNoCheck");

	AShooterGameMode_IsPlayerControllerAllowedToJoinNoCheck_Params params;
	params.ForPlayer = ForPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameMode.IsPlayerControllerAllowedToExclusiveJoin
// ()
// Parameters:
// class AShooterPlayerController* ForPlayer                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterGameMode::IsPlayerControllerAllowedToExclusiveJoin(class AShooterPlayerController* ForPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.IsPlayerControllerAllowedToExclusiveJoin");

	AShooterGameMode_IsPlayerControllerAllowedToExclusiveJoin_Params params;
	params.ForPlayer = ForPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameMode.IsPlayerAllowedToCheat
// ()
// Parameters:
// class AShooterPlayerController* ForPlayer                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterGameMode::IsPlayerAllowedToCheat(class AShooterPlayerController* ForPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.IsPlayerAllowedToCheat");

	AShooterGameMode_IsPlayerAllowedToCheat_Params params;
	params.ForPlayer = ForPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameMode.InitOptionString
// ()
// Parameters:
// struct FString                 Commandline                    (Parm, ZeroConstructor)
// struct FString                 Section                        (Parm, ZeroConstructor)
// struct FString                 Option                         (Parm, ZeroConstructor)

void AShooterGameMode::InitOptionString(const struct FString& Commandline, const struct FString& Section, const struct FString& Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.InitOptionString");

	AShooterGameMode_InitOptionString_Params params;
	params.Commandline = Commandline;
	params.Section = Section;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.InitOptionInteger
// ()
// Parameters:
// struct FString                 Commandline                    (Parm, ZeroConstructor)
// struct FString                 Section                        (Parm, ZeroConstructor)
// struct FString                 Option                         (Parm, ZeroConstructor)
// int                            CurrentValue                   (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameMode::InitOptionInteger(const struct FString& Commandline, const struct FString& Section, const struct FString& Option, int CurrentValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.InitOptionInteger");

	AShooterGameMode_InitOptionInteger_Params params;
	params.Commandline = Commandline;
	params.Section = Section;
	params.Option = Option;
	params.CurrentValue = CurrentValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.InitOptionFloat
// ()
// Parameters:
// struct FString                 Commandline                    (Parm, ZeroConstructor)
// struct FString                 Section                        (Parm, ZeroConstructor)
// struct FString                 Option                         (Parm, ZeroConstructor)
// float                          CurrentValue                   (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameMode::InitOptionFloat(const struct FString& Commandline, const struct FString& Section, const struct FString& Option, float CurrentValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.InitOptionFloat");

	AShooterGameMode_InitOptionFloat_Params params;
	params.Commandline = Commandline;
	params.Section = Section;
	params.Option = Option;
	params.CurrentValue = CurrentValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.InitOptionBool
// ()
// Parameters:
// struct FString                 Commandline                    (Parm, ZeroConstructor)
// struct FString                 Section                        (Parm, ZeroConstructor)
// struct FString                 Option                         (Parm, ZeroConstructor)
// bool                           bDefaultValue                  (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameMode::InitOptionBool(const struct FString& Commandline, const struct FString& Section, const struct FString& Option, bool bDefaultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.InitOptionBool");

	AShooterGameMode_InitOptionBool_Params params;
	params.Commandline = Commandline;
	params.Section = Section;
	params.Option = Option;
	params.bDefaultValue = bDefaultValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.IncrementNumDeaths
// ()
// Parameters:
// struct FString                 PlayerDataID                   (Parm, ZeroConstructor)

void AShooterGameMode::IncrementNumDeaths(const struct FString& PlayerDataID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.IncrementNumDeaths");

	AShooterGameMode_IncrementNumDeaths_Params params;
	params.PlayerDataID = PlayerDataID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.HandleNewPlayer
// ()
// Parameters:
// class AShooterPlayerController* NewPlayer                      (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalPlayerData*       PlayerData                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       PlayerCharacter                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsFromLogin                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterGameMode::HandleNewPlayer(class AShooterPlayerController* NewPlayer, class UPrimalPlayerData* PlayerData, class AShooterCharacter* PlayerCharacter, bool bIsFromLogin)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.HandleNewPlayer");

	AShooterGameMode_HandleNewPlayer_Params params;
	params.NewPlayer = NewPlayer;
	params.PlayerData = PlayerData;
	params.PlayerCharacter = PlayerCharacter;
	params.bIsFromLogin = bIsFromLogin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameMode.GetTribeDataBlueprint
// ()
// Parameters:
// int                            TribeID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FTribeData              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTribeData AShooterGameMode::GetTribeDataBlueprint(int TribeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.GetTribeDataBlueprint");

	AShooterGameMode_GetTribeDataBlueprint_Params params;
	params.TribeID = TribeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameMode.GetStringOption
// ()
// Parameters:
// struct FString                 Section                        (Parm, ZeroConstructor)
// struct FString                 OptionName                     (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString AShooterGameMode::GetStringOption(const struct FString& Section, const struct FString& OptionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.GetStringOption");

	AShooterGameMode_GetStringOption_Params params;
	params.Section = Section;
	params.OptionName = OptionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameMode.GetSessionTimeString
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString AShooterGameMode::GetSessionTimeString()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.GetSessionTimeString");

	AShooterGameMode_GetSessionTimeString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameMode.GetPlayerStats
// ()
// Parameters:
// struct FString                 PlayerDataID                   (Parm, ZeroConstructor)
// struct FPlayerStats            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPlayerStats AShooterGameMode::GetPlayerStats(const struct FString& PlayerDataID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.GetPlayerStats");

	AShooterGameMode_GetPlayerStats_Params params;
	params.PlayerDataID = PlayerDataID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameMode.GetPlayerData
// ()
// Parameters:
// struct FString                 PlayerDataID                   (Parm, ZeroConstructor)
// class UPrimalPlayerData*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPrimalPlayerData* AShooterGameMode::GetPlayerData(const struct FString& PlayerDataID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.GetPlayerData");

	AShooterGameMode_GetPlayerData_Params params;
	params.PlayerDataID = PlayerDataID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameMode.GetOverlappingDinoCharactersOfTeamAndClass
// ()
// Parameters:
// struct FVector                 AtLocation                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          OverlapRange                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DinoClass                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            DinoTeam                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bExactClassMatch               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIgnoreClass                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class APrimalDinoCharacter*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class APrimalDinoCharacter*> AShooterGameMode::GetOverlappingDinoCharactersOfTeamAndClass(const struct FVector& AtLocation, float OverlapRange, class UClass* DinoClass, int DinoTeam, bool bExactClassMatch, bool bIgnoreClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.GetOverlappingDinoCharactersOfTeamAndClass");

	AShooterGameMode_GetOverlappingDinoCharactersOfTeamAndClass_Params params;
	params.AtLocation = AtLocation;
	params.OverlapRange = OverlapRange;
	params.DinoClass = DinoClass;
	params.DinoTeam = DinoTeam;
	params.bExactClassMatch = bExactClassMatch;
	params.bIgnoreClass = bIgnoreClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameMode.GetNumDeaths
// ()
// Parameters:
// struct FString                 PlayerDataID                   (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterGameMode::GetNumDeaths(const struct FString& PlayerDataID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.GetNumDeaths");

	AShooterGameMode_GetNumDeaths_Params params;
	params.PlayerDataID = PlayerDataID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameMode.GetNumberOfLivePlayersOnTribe
// ()
// Parameters:
// struct FString                 TribeName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterGameMode::GetNumberOfLivePlayersOnTribe(const struct FString& TribeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.GetNumberOfLivePlayersOnTribe");

	AShooterGameMode_GetNumberOfLivePlayersOnTribe_Params params;
	params.TribeName = TribeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameMode.GetLaunchOptionString
// ()
// Parameters:
// struct FString                 LaunchOptionKey                (Parm, ZeroConstructor)
// struct FString                 ReturnVal                      (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterGameMode::GetLaunchOptionString(const struct FString& LaunchOptionKey, struct FString* ReturnVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.GetLaunchOptionString");

	AShooterGameMode_GetLaunchOptionString_Params params;
	params.LaunchOptionKey = LaunchOptionKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnVal != nullptr)
		*ReturnVal = params.ReturnVal;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameMode.GetLaunchOptionFloat
// ()
// Parameters:
// struct FString                 LaunchOptionKey                (Parm, ZeroConstructor)
// float                          ReturnVal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterGameMode::GetLaunchOptionFloat(const struct FString& LaunchOptionKey, float* ReturnVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.GetLaunchOptionFloat");

	AShooterGameMode_GetLaunchOptionFloat_Params params;
	params.LaunchOptionKey = LaunchOptionKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnVal != nullptr)
		*ReturnVal = params.ReturnVal;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameMode.GetIntOptionIni
// ()
// Parameters:
// struct FString                 Section                        (Parm, ZeroConstructor)
// struct FString                 OptionName                     (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterGameMode::GetIntOptionIni(const struct FString& Section, const struct FString& OptionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.GetIntOptionIni");

	AShooterGameMode_GetIntOptionIni_Params params;
	params.Section = Section;
	params.OptionName = OptionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameMode.GetFloatOptionIni
// ()
// Parameters:
// struct FString                 Section                        (Parm, ZeroConstructor)
// struct FString                 OptionName                     (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterGameMode::GetFloatOptionIni(const struct FString& Section, const struct FString& OptionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.GetFloatOptionIni");

	AShooterGameMode_GetFloatOptionIni_Params params;
	params.Section = Section;
	params.OptionName = OptionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameMode.GetBoolOptionIni
// ()
// Parameters:
// struct FString                 Section                        (Parm, ZeroConstructor)
// struct FString                 OptionName                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterGameMode::GetBoolOptionIni(const struct FString& Section, const struct FString& OptionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.GetBoolOptionIni");

	AShooterGameMode_GetBoolOptionIni_Params params;
	params.Section = Section;
	params.OptionName = OptionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameMode.ForceRepopulateFoliageAtPoint
// ()
// Parameters:
// struct FVector                 AtPoint                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxRangeFromPoint              (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxNumFoliages                 (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  RepopulatedEmitter             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StructureDownTraceVector       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 StructureUpTraceVector         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AShooterGameMode::ForceRepopulateFoliageAtPoint(const struct FVector& AtPoint, float MaxRangeFromPoint, int MaxNumFoliages, class UClass* RepopulatedEmitter, const struct FVector& StructureDownTraceVector, const struct FVector& StructureUpTraceVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.ForceRepopulateFoliageAtPoint");

	AShooterGameMode_ForceRepopulateFoliageAtPoint_Params params;
	params.AtPoint = AtPoint;
	params.MaxRangeFromPoint = MaxRangeFromPoint;
	params.MaxNumFoliages = MaxNumFoliages;
	params.RepopulatedEmitter = RepopulatedEmitter;
	params.StructureDownTraceVector = StructureDownTraceVector;
	params.StructureUpTraceVector = StructureUpTraceVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.ForceCreateTribe
// ()
// Parameters:
// struct FString                 TribeName                      (Parm, ZeroConstructor)
// int                            TeamOverride                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterGameMode::ForceCreateTribe(const struct FString& TribeName, int TeamOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.ForceCreateTribe");

	AShooterGameMode_ForceCreateTribe_Params params;
	params.TribeName = TribeName;
	params.TeamOverride = TeamOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameMode.ForceAddPlayerToTribe
// ()
// Parameters:
// class AShooterPlayerState*     ForPlayerState                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 TribeName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterGameMode::ForceAddPlayerToTribe(class AShooterPlayerState* ForPlayerState, const struct FString& TribeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.ForceAddPlayerToTribe");

	AShooterGameMode_ForceAddPlayerToTribe_Params params;
	params.ForPlayerState = ForPlayerState;
	params.TribeName = TribeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameMode.CountOverlappingDinoCharactersOfTeamAndClass
// ()
// Parameters:
// struct FVector                 AtLocation                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          OverlapRange                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DinoClass                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            DinoTeam                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bExactClassMatch               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIgnoreClass                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterGameMode::CountOverlappingDinoCharactersOfTeamAndClass(const struct FVector& AtLocation, float OverlapRange, class UClass* DinoClass, int DinoTeam, bool bExactClassMatch, bool bIgnoreClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.CountOverlappingDinoCharactersOfTeamAndClass");

	AShooterGameMode_CountOverlappingDinoCharactersOfTeamAndClass_Params params;
	params.AtLocation = AtLocation;
	params.OverlapRange = OverlapRange;
	params.DinoClass = DinoClass;
	params.DinoTeam = DinoTeam;
	params.bExactClassMatch = bExactClassMatch;
	params.bIgnoreClass = bIgnoreClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameMode.CheckJoinInProgress
// ()
// Parameters:
// bool                           bIsFromLogin                   (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       NewPlayer                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterGameMode::CheckJoinInProgress(bool bIsFromLogin, class APlayerController* NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.CheckJoinInProgress");

	AShooterGameMode_CheckJoinInProgress_Params params;
	params.bIsFromLogin = bIsFromLogin;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameMode.AreTribesAllied
// ()
// Parameters:
// int                            TribeID1                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            TribeID2                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterGameMode::AreTribesAllied(int TribeID1, int TribeID2)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.AreTribesAllied");

	AShooterGameMode_AreTribesAllied_Params params;
	params.TribeID1 = TribeID1;
	params.TribeID2 = TribeID2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameMode.AddToTribeLog
// ()
// Parameters:
// int                            TribeID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 NewLog                         (Parm, ZeroConstructor)

void AShooterGameMode::AddToTribeLog(int TribeID, const struct FString& NewLog)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.AddToTribeLog");

	AShooterGameMode_AddToTribeLog_Params params;
	params.TribeID = TribeID;
	params.NewLog = NewLog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.CustomGameMode.SaveIntToConfig
// ()
// Parameters:
// int                            IntValue                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 KeyValue                       (Parm, ZeroConstructor)

void ACustomGameMode::SaveIntToConfig(int IntValue, const struct FString& KeyValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameMode.SaveIntToConfig");

	ACustomGameMode_SaveIntToConfig_Params params;
	params.IntValue = IntValue;
	params.KeyValue = KeyValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.CustomGameMode.SaveFloatToConfig
// ()
// Parameters:
// float                          IntValue                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 KeyValue                       (Parm, ZeroConstructor)

void ACustomGameMode::SaveFloatToConfig(float IntValue, const struct FString& KeyValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameMode.SaveFloatToConfig");

	ACustomGameMode_SaveFloatToConfig_Params params;
	params.IntValue = IntValue;
	params.KeyValue = KeyValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.CustomGameMode.SaveBoolToConfig
// ()
// Parameters:
// bool                           IntValue                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 KeyValue                       (Parm, ZeroConstructor)

void ACustomGameMode::SaveBoolToConfig(bool IntValue, const struct FString& KeyValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameMode.SaveBoolToConfig");

	ACustomGameMode_SaveBoolToConfig_Params params;
	params.IntValue = IntValue;
	params.KeyValue = KeyValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.CustomGameMode.OnUpdateTribeData
// ()
// Parameters:
// struct FTribeData              NewTribeData                   (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameMode::OnUpdateTribeData(const struct FTribeData& NewTribeData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameMode.OnUpdateTribeData");

	ACustomGameMode_OnUpdateTribeData_Params params;
	params.NewTribeData = NewTribeData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameMode.OnRemoveTribe
// ()
// Parameters:
// int                            TribeID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameMode::OnRemoveTribe(int TribeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameMode.OnRemoveTribe");

	ACustomGameMode_OnRemoveTribe_Params params;
	params.TribeID = TribeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameMode.OnPlayerCanRestart
// ()
// Parameters:
// class APlayerController*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameMode::OnPlayerCanRestart(class APlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameMode.OnPlayerCanRestart");

	ACustomGameMode_OnPlayerCanRestart_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameMode.OnIsUsedSpawnPointStillSupported
// ()
// Parameters:
// class APlayerStart*            SpawnPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameMode::OnIsUsedSpawnPointStillSupported(class APlayerStart* SpawnPoint, class AController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameMode.OnIsUsedSpawnPointStillSupported");

	ACustomGameMode_OnIsUsedSpawnPointStillSupported_Params params;
	params.SpawnPoint = SpawnPoint;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameMode.OnIsSpawnpointAllowed
// ()
// Parameters:
// class APlayerStart*            SpawnPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameMode::OnIsSpawnpointAllowed(class APlayerStart* SpawnPoint, class AController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameMode.OnIsSpawnpointAllowed");

	ACustomGameMode_OnIsSpawnpointAllowed_Params params;
	params.SpawnPoint = SpawnPoint;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameMode.OnInitOptionEvent
// ()
// Parameters:
// struct FString                 Options                        (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameMode::OnInitOptionEvent(const struct FString& Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameMode.OnInitOptionEvent");

	ACustomGameMode_OnInitOptionEvent_Params params;
	params.Options = Options;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameMode.OnInitGameState
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameMode::OnInitGameState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameMode.OnInitGameState");

	ACustomGameMode_OnInitGameState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameMode.OnInitGame
// ()
// Parameters:
// struct FString                 MapName                        (Parm, ZeroConstructor)
// struct FString                 Options                        (Parm, ZeroConstructor)
// struct FString                 ErrorMessage                   (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameMode::OnInitGame(const struct FString& MapName, const struct FString& Options, struct FString* ErrorMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameMode.OnInitGame");

	ACustomGameMode_OnInitGame_Params params;
	params.MapName = MapName;
	params.Options = Options;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ErrorMessage != nullptr)
		*ErrorMessage = params.ErrorMessage;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameMode.OnHandleLeavingMap
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameMode::OnHandleLeavingMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameMode.OnHandleLeavingMap");

	ACustomGameMode_OnHandleLeavingMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameMode.OnDoGameCommand
// ()
// Parameters:
// struct FString                 TheCommand                     (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ACustomGameMode::OnDoGameCommand(const struct FString& TheCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameMode.OnDoGameCommand");

	ACustomGameMode_OnDoGameCommand_Params params;
	params.TheCommand = TheCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameMode.OnAllowRenameTribe
// ()
// Parameters:
// class AShooterPlayerState*     ForPlayerState                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 TribeName                      (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameMode::OnAllowRenameTribe(class AShooterPlayerState* ForPlayerState, const struct FString& TribeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameMode.OnAllowRenameTribe");

	ACustomGameMode_OnAllowRenameTribe_Params params;
	params.ForPlayerState = ForPlayerState;
	params.TribeName = TribeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameMode.OnAllowNotifyRemotePlayerDeath
// ()
// Parameters:
// class AShooterCharacter*       ForChar                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameMode::OnAllowNotifyRemotePlayerDeath(class AShooterCharacter* ForChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameMode.OnAllowNotifyRemotePlayerDeath");

	ACustomGameMode_OnAllowNotifyRemotePlayerDeath_Params params;
	params.ForChar = ForChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameMode.OnAllowModifyStatusValue
// ()
// Parameters:
// class UPrimalCharacterStatusComponent* forComp                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EPrimalCharacterStatusValue> ValueType                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          amount                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameMode::OnAllowModifyStatusValue(class UPrimalCharacterStatusComponent* forComp, TEnumAsByte<EPrimalCharacterStatusValue> ValueType, float amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameMode.OnAllowModifyStatusValue");

	ACustomGameMode_OnAllowModifyStatusValue_Params params;
	params.forComp = forComp;
	params.ValueType = ValueType;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameMode.OnAllowClearTribe
// ()
// Parameters:
// class AShooterPlayerState*     ForPlayerState                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameMode::OnAllowClearTribe(class AShooterPlayerState* ForPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameMode.OnAllowClearTribe");

	ACustomGameMode_OnAllowClearTribe_Params params;
	params.ForPlayerState = ForPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameMode.OnAllowAddXP
// ()
// Parameters:
// class UPrimalCharacterStatusComponent* forComp                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameMode::OnAllowAddXP(class UPrimalCharacterStatusComponent* forComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameMode.OnAllowAddXP");

	ACustomGameMode_OnAllowAddXP_Params params;
	params.forComp = forComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameMode.OnAllowAddToTribe
// ()
// Parameters:
// class AShooterPlayerState*     ForPlayerState                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTribeData              MyNewTribe                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameMode::OnAllowAddToTribe(class AShooterPlayerState* ForPlayerState, const struct FTribeData& MyNewTribe)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameMode.OnAllowAddToTribe");

	ACustomGameMode_OnAllowAddToTribe_Params params;
	params.ForPlayerState = ForPlayerState;
	params.MyNewTribe = MyNewTribe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameMode.OnAdjustDamage
// ()
// Parameters:
// class AActor*                  Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          DefaultDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
// class AController*             EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACustomGameMode::OnAdjustDamage(class AActor* Victim, float DefaultDamage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameMode.OnAdjustDamage");

	ACustomGameMode_OnAdjustDamage_Params params;
	params.Victim = Victim;
	params.DefaultDamage = DefaultDamage;
	params.DamageEvent = DamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameMode.OnAddItemSOTFFinished
// ()
// Parameters:
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<uint64_t>               SteamItemUserIDs               (Parm, ZeroConstructor)
// uint64_t                       SteamID                        (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       SteamDefID                     (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       AppID                          (Parm, ZeroConstructor, IsPlainOldData)

void ACustomGameMode::OnAddItemSOTFFinished(bool bSuccess, TArray<uint64_t> SteamItemUserIDs, uint64_t SteamID, uint32_t SteamDefID, uint32_t AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameMode.OnAddItemSOTFFinished");

	ACustomGameMode_OnAddItemSOTFFinished_Params params;
	params.bSuccess = bSuccess;
	params.SteamItemUserIDs = SteamItemUserIDs;
	params.SteamID = SteamID;
	params.SteamDefID = SteamDefID;
	params.AppID = AppID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.CustomGameMode.MakeTribeData
// ()
// Parameters:
// struct FString                 TribeName                      (Parm, OutParm, ZeroConstructor)
// int                            OwnerPlayerDataID              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            TribeID                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         MembersPlayerName              (Parm, OutParm, ZeroConstructor)
// TArray<int>                    MembersPlayerDataID            (Parm, OutParm, ZeroConstructor)
// TArray<int>                    TribeAdmins                    (Parm, OutParm, ZeroConstructor)
// bool                           bSetGovernment                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTribeGovernment        TribeGovernment                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FPrimalPlayerCharacterConfigStructReplicated> MembersConfigs                 (Parm, OutParm, ZeroConstructor)
// struct FTribeData              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTribeData ACustomGameMode::MakeTribeData(struct FString* TribeName, int* OwnerPlayerDataID, int* TribeID, TArray<struct FString>* MembersPlayerName, TArray<int>* MembersPlayerDataID, TArray<int>* TribeAdmins, bool* bSetGovernment, struct FTribeGovernment* TribeGovernment, TArray<struct FPrimalPlayerCharacterConfigStructReplicated>* MembersConfigs)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameMode.MakeTribeData");

	ACustomGameMode_MakeTribeData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TribeName != nullptr)
		*TribeName = params.TribeName;
	if (OwnerPlayerDataID != nullptr)
		*OwnerPlayerDataID = params.OwnerPlayerDataID;
	if (TribeID != nullptr)
		*TribeID = params.TribeID;
	if (MembersPlayerName != nullptr)
		*MembersPlayerName = params.MembersPlayerName;
	if (MembersPlayerDataID != nullptr)
		*MembersPlayerDataID = params.MembersPlayerDataID;
	if (TribeAdmins != nullptr)
		*TribeAdmins = params.TribeAdmins;
	if (bSetGovernment != nullptr)
		*bSetGovernment = params.bSetGovernment;
	if (TribeGovernment != nullptr)
		*TribeGovernment = params.TribeGovernment;
	if (MembersConfigs != nullptr)
		*MembersConfigs = params.MembersConfigs;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameMode.KickPlayer
// ()
// Parameters:
// class APlayerController*       NewPlayer                      (Parm, ZeroConstructor, IsPlainOldData)

void ACustomGameMode::KickPlayer(class APlayerController* NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameMode.KickPlayer");

	ACustomGameMode_KickPlayer_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.CustomGameMode.IsInAllowedToCheatList
// ()
// Parameters:
// class APlayerController*       NewPlayer                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameMode::IsInAllowedToCheatList(class APlayerController* NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameMode.IsInAllowedToCheatList");

	ACustomGameMode_IsInAllowedToCheatList_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameMode.InitOptionFloatToINI
// ()
// Parameters:
// struct FString                 Options                        (Parm, ZeroConstructor)
// float                          FloatValue                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 KeyValue                       (Parm, ZeroConstructor)

void ACustomGameMode::InitOptionFloatToINI(const struct FString& Options, float FloatValue, const struct FString& KeyValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameMode.InitOptionFloatToINI");

	ACustomGameMode_InitOptionFloatToINI_Params params;
	params.Options = Options;
	params.FloatValue = FloatValue;
	params.KeyValue = KeyValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.CustomGameMode.GetValueFromINI
// ()
// Parameters:
// struct FString                 KeyValue                       (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACustomGameMode::GetValueFromINI(const struct FString& KeyValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameMode.GetValueFromINI");

	ACustomGameMode_GetValueFromINI_Params params;
	params.KeyValue = KeyValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameMode.GetIntValueFromINI
// ()
// Parameters:
// struct FString                 KeyValue                       (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ACustomGameMode::GetIntValueFromINI(const struct FString& KeyValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameMode.GetIntValueFromINI");

	ACustomGameMode_GetIntValueFromINI_Params params;
	params.KeyValue = KeyValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameMode.GetIniFloatValue
// ()
// Parameters:
// struct FString                 Section                        (Parm, ZeroConstructor)
// struct FString                 KeyValue                       (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACustomGameMode::GetIniFloatValue(const struct FString& Section, const struct FString& KeyValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameMode.GetIniFloatValue");

	ACustomGameMode_GetIniFloatValue_Params params;
	params.Section = Section;
	params.KeyValue = KeyValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameMode.GetFloatValueFromINI
// ()
// Parameters:
// struct FString                 KeyValue                       (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACustomGameMode::GetFloatValueFromINI(const struct FString& KeyValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameMode.GetFloatValueFromINI");

	ACustomGameMode_GetFloatValueFromINI_Params params;
	params.KeyValue = KeyValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameMode.GetBoolValueFromINI
// ()
// Parameters:
// struct FString                 KeyValue                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameMode::GetBoolValueFromINI(const struct FString& KeyValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameMode.GetBoolValueFromINI");

	ACustomGameMode_GetBoolValueFromINI_Params params;
	params.KeyValue = KeyValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameMode.CleanUpSotfNotificationManager
// ()

void ACustomGameMode::CleanUpSotfNotificationManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameMode.CleanUpSotfNotificationManager");

	ACustomGameMode_CleanUpSotfNotificationManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.CustomGameMode.CheckForCommand
// ()
// Parameters:
// struct FString                 CommandName                    (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameMode::CheckForCommand(const struct FString& CommandName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameMode.CheckForCommand");

	ACustomGameMode_CheckForCommand_Params params;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameMode.BreakTribeData
// ()
// Parameters:
// struct FTribeData              Data                           (ConstParm, Parm)
// struct FString                 TribeName                      (Parm, OutParm, ZeroConstructor)
// int                            OwnerPlayerDataID              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            TribeID                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         MembersPlayerName              (Parm, OutParm, ZeroConstructor)
// TArray<int>                    MembersPlayerDataID            (Parm, OutParm, ZeroConstructor)
// TArray<int>                    TribeAdmins                    (Parm, OutParm, ZeroConstructor)
// bool                           bSetGovernment                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTribeGovernment        TribeGovernment                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FPrimalPlayerCharacterConfigStructReplicated> MembersConfigs                 (Parm, OutParm, ZeroConstructor)

void ACustomGameMode::BreakTribeData(const struct FTribeData& Data, struct FString* TribeName, int* OwnerPlayerDataID, int* TribeID, TArray<struct FString>* MembersPlayerName, TArray<int>* MembersPlayerDataID, TArray<int>* TribeAdmins, bool* bSetGovernment, struct FTribeGovernment* TribeGovernment, TArray<struct FPrimalPlayerCharacterConfigStructReplicated>* MembersConfigs)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameMode.BreakTribeData");

	ACustomGameMode_BreakTribeData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TribeName != nullptr)
		*TribeName = params.TribeName;
	if (OwnerPlayerDataID != nullptr)
		*OwnerPlayerDataID = params.OwnerPlayerDataID;
	if (TribeID != nullptr)
		*TribeID = params.TribeID;
	if (MembersPlayerName != nullptr)
		*MembersPlayerName = params.MembersPlayerName;
	if (MembersPlayerDataID != nullptr)
		*MembersPlayerDataID = params.MembersPlayerDataID;
	if (TribeAdmins != nullptr)
		*TribeAdmins = params.TribeAdmins;
	if (bSetGovernment != nullptr)
		*bSetGovernment = params.bSetGovernment;
	if (TribeGovernment != nullptr)
		*TribeGovernment = params.TribeGovernment;
	if (MembersConfigs != nullptr)
		*MembersConfigs = params.MembersConfigs;
}


// Function ShooterGame.ShooterGameSession.RemoteVersionRecieved
// ()
// Parameters:
// int                            RemoteMajorVersion             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameSession::RemoteVersionRecieved(int RemoteMajorVersion, bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameSession.RemoteVersionRecieved");

	AShooterGameSession_RemoteVersionRecieved_Params params;
	params.RemoteMajorVersion = RemoteMajorVersion;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.OnRep_ReplicateLocalizedChatRadius
// ()

void AShooterGameState::OnRep_ReplicateLocalizedChatRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.OnRep_ReplicateLocalizedChatRadius");

	AShooterGameState_OnRep_ReplicateLocalizedChatRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.NetUpdateOfflinePvPLiveTeams
// ()
// Parameters:
// TArray<int>                    NewPreventOfflinePvPLiveTeams  (ConstParm, Parm, ZeroConstructor)

void AShooterGameState::NetUpdateOfflinePvPLiveTeams(TArray<int> NewPreventOfflinePvPLiveTeams)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.NetUpdateOfflinePvPLiveTeams");

	AShooterGameState_NetUpdateOfflinePvPLiveTeams_Params params;
	params.NewPreventOfflinePvPLiveTeams = NewPreventOfflinePvPLiveTeams;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.NetUpdateOfflinePvPExpiringTeams
// ()
// Parameters:
// TArray<int>                    NewPreventOfflinePvPExpiringTeams (ConstParm, Parm, ZeroConstructor)
// TArray<double>                 NewPreventOfflinePvPExpiringTimes (ConstParm, Parm, ZeroConstructor)

void AShooterGameState::NetUpdateOfflinePvPExpiringTeams(TArray<int> NewPreventOfflinePvPExpiringTeams, TArray<double> NewPreventOfflinePvPExpiringTimes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.NetUpdateOfflinePvPExpiringTeams");

	AShooterGameState_NetUpdateOfflinePvPExpiringTeams_Params params;
	params.NewPreventOfflinePvPExpiringTeams = NewPreventOfflinePvPExpiringTeams;
	params.NewPreventOfflinePvPExpiringTimes = NewPreventOfflinePvPExpiringTimes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.NetAddFloatingText
// ()
// Parameters:
// struct FVector                 AtLocation                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FloatingTextString             (Parm, ZeroConstructor)
// struct FColor                  FloatingTextColor              (Parm, ZeroConstructor, IsPlainOldData)
// float                          ScaleX                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ScaleY                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          TextLifeSpan                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TextVelocity                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinScale                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeInTime                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeOutTime                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            OnlySendToTeamID               (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameState::NetAddFloatingText(const struct FVector& AtLocation, const struct FString& FloatingTextString, const struct FColor& FloatingTextColor, float ScaleX, float ScaleY, float TextLifeSpan, const struct FVector& TextVelocity, float MinScale, float FadeInTime, float FadeOutTime, int OnlySendToTeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.NetAddFloatingText");

	AShooterGameState_NetAddFloatingText_Params params;
	params.AtLocation = AtLocation;
	params.FloatingTextString = FloatingTextString;
	params.FloatingTextColor = FloatingTextColor;
	params.ScaleX = ScaleX;
	params.ScaleY = ScaleY;
	params.TextLifeSpan = TextLifeSpan;
	params.TextVelocity = TextVelocity;
	params.MinScale = MinScale;
	params.FadeInTime = FadeInTime;
	params.FadeOutTime = FadeOutTime;
	params.OnlySendToTeamID = OnlySendToTeamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.NetAddFloatingDamageText
// ()
// Parameters:
// struct FVector                 AtLocation                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            FromTeamID                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            OnlySendToTeamID               (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameState::NetAddFloatingDamageText(const struct FVector& AtLocation, int DamageAmount, int FromTeamID, int OnlySendToTeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.NetAddFloatingDamageText");

	AShooterGameState_NetAddFloatingDamageText_Params params;
	params.AtLocation = AtLocation;
	params.DamageAmount = DamageAmount;
	params.FromTeamID = FromTeamID;
	params.OnlySendToTeamID = OnlySendToTeamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.IsTeamIDInvincible
// ()
// Parameters:
// int                            TargetingTeamID                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterGameState::IsTeamIDInvincible(int TargetingTeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.IsTeamIDInvincible");

	AShooterGameState_IsTeamIDInvincible_Params params;
	params.TargetingTeamID = TargetingTeamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameState.GetOfflineDamagePreventionTime
// ()
// Parameters:
// int                            TargetingTeamID                (Parm, ZeroConstructor, IsPlainOldData)
// double                         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

double AShooterGameState::GetOfflineDamagePreventionTime(int TargetingTeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.GetOfflineDamagePreventionTime");

	AShooterGameState_GetOfflineDamagePreventionTime_Params params;
	params.TargetingTeamID = TargetingTeamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameState.GetDayTimeString
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString AShooterGameState::GetDayTimeString()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.GetDayTimeString");

	AShooterGameState_GetDayTimeString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameState.GetCleanServerSessionName
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString AShooterGameState::GetCleanServerSessionName()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.GetCleanServerSessionName");

	AShooterGameState_GetCleanServerSessionName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameState.DisplayWelcomeUI
// ()

void AShooterGameState::DisplayWelcomeUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.DisplayWelcomeUI");

	AShooterGameState_DisplayWelcomeUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.BaseSpawnBuffAndAttachToCharacter
// ()
// Parameters:
// class UClass*                  Buff                           (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        PrimalCharacter                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ExperiencePoints               (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalBuff*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APrimalBuff* AShooterGameState::BaseSpawnBuffAndAttachToCharacter(class UClass* Buff, class APrimalCharacter* PrimalCharacter, float ExperiencePoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.BaseSpawnBuffAndAttachToCharacter");

	AShooterGameState_BaseSpawnBuffAndAttachToCharacter_Params params;
	params.Buff = Buff;
	params.PrimalCharacter = PrimalCharacter;
	params.ExperiencePoints = ExperiencePoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameState.BaseProjectWorldToScreenPosition
// ()
// Parameters:
// struct FVector                 WorldLocation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class APlayerController*       thePC                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D AShooterGameState::BaseProjectWorldToScreenPosition(const struct FVector& WorldLocation, class APlayerController* thePC)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.BaseProjectWorldToScreenPosition");

	AShooterGameState_BaseProjectWorldToScreenPosition_Params params;
	params.WorldLocation = WorldLocation;
	params.thePC = thePC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameState.BaseIsTribeID
// ()
// Parameters:
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterGameState::BaseIsTribeID(int TeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.BaseIsTribeID");

	AShooterGameState_BaseIsTribeID_Params params;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameState.BaseGetCustomActors
// ()
// Parameters:
// struct FName                   SearchCustomTag                (Parm, ZeroConstructor, IsPlainOldData)
// class ACustomActorList*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ACustomActorList* AShooterGameState::BaseGetCustomActors(const struct FName& SearchCustomTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.BaseGetCustomActors");

	AShooterGameState_BaseGetCustomActors_Params params;
	params.SearchCustomTag = SearchCustomTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameState.BaseGetAllShooterControllers
// ()
// Parameters:
// TArray<class AShooterPlayerController*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AShooterPlayerController*> AShooterGameState::BaseGetAllShooterControllers()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.BaseGetAllShooterControllers");

	AShooterGameState_BaseGetAllShooterControllers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameState.BaseGetAllShooterCharactersOfTeam
// ()
// Parameters:
// int                            KillerTeam                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AShooterCharacter*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AShooterCharacter*> AShooterGameState::BaseGetAllShooterCharactersOfTeam(int KillerTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.BaseGetAllShooterCharactersOfTeam");

	AShooterGameState_BaseGetAllShooterCharactersOfTeam_Params params;
	params.KillerTeam = KillerTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameState.BaseGetAllShooterCharacters
// ()
// Parameters:
// TArray<class AShooterCharacter*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AShooterCharacter*> AShooterGameState::BaseGetAllShooterCharacters()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.BaseGetAllShooterCharacters");

	AShooterGameState_BaseGetAllShooterCharacters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameState.BaseGetAllDinoCharactersOfTeam
// ()
// Parameters:
// int                            KillerTeam                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class APrimalDinoCharacter*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class APrimalDinoCharacter*> AShooterGameState::BaseGetAllDinoCharactersOfTeam(int KillerTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.BaseGetAllDinoCharactersOfTeam");

	AShooterGameState_BaseGetAllDinoCharactersOfTeam_Params params;
	params.KillerTeam = KillerTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameState.BaseDrawTileOnCanvas
// ()
// Parameters:
// class AShooterHUD*             HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                Tex                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          XL                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          YL                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          U                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          V                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          UL                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          VL                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FColor                  DrawColor                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameState::BaseDrawTileOnCanvas(class AShooterHUD* HUD, class UTexture* Tex, float X, float Y, float XL, float YL, float U, float V, float UL, float VL, const struct FColor& DrawColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.BaseDrawTileOnCanvas");

	AShooterGameState_BaseDrawTileOnCanvas_Params params;
	params.HUD = HUD;
	params.Tex = Tex;
	params.X = X;
	params.Y = Y;
	params.XL = XL;
	params.YL = YL;
	params.U = U;
	params.V = V;
	params.UL = UL;
	params.VL = VL;
	params.DrawColor = DrawColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.AddFloatingText
// ()
// Parameters:
// struct FVector                 AtLocation                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FloatingTextString             (Parm, ZeroConstructor)
// struct FColor                  FloatingTextColor              (Parm, ZeroConstructor, IsPlainOldData)
// float                          ScaleX                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ScaleY                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          TextLifeSpan                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TextVelocity                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinScale                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeInTime                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeOutTime                    (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameState::AddFloatingText(const struct FVector& AtLocation, const struct FString& FloatingTextString, const struct FColor& FloatingTextColor, float ScaleX, float ScaleY, float TextLifeSpan, const struct FVector& TextVelocity, float MinScale, float FadeInTime, float FadeOutTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.AddFloatingText");

	AShooterGameState_AddFloatingText_Params params;
	params.AtLocation = AtLocation;
	params.FloatingTextString = FloatingTextString;
	params.FloatingTextColor = FloatingTextColor;
	params.ScaleX = ScaleX;
	params.ScaleY = ScaleY;
	params.TextLifeSpan = TextLifeSpan;
	params.TextVelocity = TextVelocity;
	params.MinScale = MinScale;
	params.FadeInTime = FadeInTime;
	params.FadeOutTime = FadeOutTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.CustomGameState.SpawnBuffAndAttachToCharacter
// ()
// Parameters:
// class UClass*                  Buff                           (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        PrimalCharacter                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ExperiencePoints               (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalBuff*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APrimalBuff* ACustomGameState::SpawnBuffAndAttachToCharacter(class UClass* Buff, class APrimalCharacter* PrimalCharacter, float ExperiencePoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.SpawnBuffAndAttachToCharacter");

	ACustomGameState_SpawnBuffAndAttachToCharacter_Params params;
	params.Buff = Buff;
	params.PrimalCharacter = PrimalCharacter;
	params.ExperiencePoints = ExperiencePoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.ShowAfterActionReport
// ()
// Parameters:
// int                            WinningTribeID                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReportURL                      (Parm, ZeroConstructor)

void ACustomGameState::ShowAfterActionReport(int WinningTribeID, const struct FString& ReportURL)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.ShowAfterActionReport");

	ACustomGameState_ShowAfterActionReport_Params params;
	params.WinningTribeID = WinningTribeID;
	params.ReportURL = ReportURL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.CustomGameState.SetCurrentWorldEvent
// ()
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)

void ACustomGameState::SetCurrentWorldEvent(const struct FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.SetCurrentWorldEvent");

	ACustomGameState_SetCurrentWorldEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.CustomGameState.SetAfterActionReportItems
// ()
// Parameters:
// TArray<struct FActionReportItem> Items                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ACustomGameState::SetAfterActionReportItems(TArray<struct FActionReportItem> Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.SetAfterActionReportItems");

	ACustomGameState_SetAfterActionReportItems_Params params;
	params.Items = Items;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.CustomGameState.SetActionReportItem
// ()
// Parameters:
// struct FActionReportItem       Data                           (Parm, OutParm)
// struct FString                 PlayerName                     (Parm, ZeroConstructor)
// struct FString                 PlayerUniqueID                 (Parm, ZeroConstructor)
// int                            TribeID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 TribeName                      (Parm, ZeroConstructor)
// struct FString                 TimeOfDeath                    (Parm, ZeroConstructor)
// struct FString                 LevelOfDeath                   (Parm, ZeroConstructor)
// struct FString                 DeathMessage                   (Parm, ZeroConstructor)
// class UTexture2D*              DeathIcon                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Rank                           (Parm, ZeroConstructor)

void ACustomGameState::SetActionReportItem(const struct FString& PlayerName, const struct FString& PlayerUniqueID, int TribeID, const struct FString& TribeName, const struct FString& TimeOfDeath, const struct FString& LevelOfDeath, const struct FString& DeathMessage, class UTexture2D* DeathIcon, const struct FString& Rank, struct FActionReportItem* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.SetActionReportItem");

	ACustomGameState_SetActionReportItem_Params params;
	params.PlayerName = PlayerName;
	params.PlayerUniqueID = PlayerUniqueID;
	params.TribeID = TribeID;
	params.TribeName = TribeName;
	params.TimeOfDeath = TimeOfDeath;
	params.LevelOfDeath = LevelOfDeath;
	params.DeathMessage = DeathMessage;
	params.DeathIcon = DeathIcon;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function ShooterGame.CustomGameState.SaveAfterActionReport
// ()
// Parameters:
// int                            WinningTribeID                 (Parm, ZeroConstructor, IsPlainOldData)

void ACustomGameState::SaveAfterActionReport(int WinningTribeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.SaveAfterActionReport");

	ACustomGameState_SaveAfterActionReport_Params params;
	params.WinningTribeID = WinningTribeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.CustomGameState.ProjectWorldToScreenPosition
// ()
// Parameters:
// struct FVector                 WorldLocation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class APlayerController*       thePC                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D ACustomGameState::ProjectWorldToScreenPosition(const struct FVector& WorldLocation, class APlayerController* thePC)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.ProjectWorldToScreenPosition");

	ACustomGameState_ProjectWorldToScreenPosition_Params params;
	params.WorldLocation = WorldLocation;
	params.thePC = thePC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.OnStartPreMatctCountDown
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameState::OnStartPreMatctCountDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.OnStartPreMatctCountDown");

	ACustomGameState_OnStartPreMatctCountDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.OnSetMaxNumberOfPlayersInTribe
// ()
// Parameters:
// int                            Number                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameState::OnSetMaxNumberOfPlayersInTribe(int Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.OnSetMaxNumberOfPlayersInTribe");

	ACustomGameState_OnSetMaxNumberOfPlayersInTribe_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.OnSetHudEvent
// ()

void ACustomGameState::OnSetHudEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.OnSetHudEvent");

	ACustomGameState_OnSetHudEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.CustomGameState.OnSetFlushTribeData
// ()
// Parameters:
// bool                           boolFlushTribeData             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameState::OnSetFlushTribeData(bool boolFlushTribeData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.OnSetFlushTribeData");

	ACustomGameState_OnSetFlushTribeData_Params params;
	params.boolFlushTribeData = boolFlushTribeData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.OnSavedAfterActionReport
// ()
// Parameters:
// int                            WinningTribeID                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReportURL                      (Parm, ZeroConstructor)

void ACustomGameState::OnSavedAfterActionReport(int WinningTribeID, const struct FString& ReportURL)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.OnSavedAfterActionReport");

	ACustomGameState_OnSavedAfterActionReport_Params params;
	params.WinningTribeID = WinningTribeID;
	params.ReportURL = ReportURL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.CustomGameState.OnRep_CurrentWorldEventName
// ()

void ACustomGameState::OnRep_CurrentWorldEventName()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.OnRep_CurrentWorldEventName");

	ACustomGameState_OnRep_CurrentWorldEventName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.CustomGameState.OnOverrideDynamicMusic
// ()
// Parameters:
// class APrimalCharacter*        ForCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USoundBase* ACustomGameState::OnOverrideDynamicMusic(class APrimalCharacter* ForCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.OnOverrideDynamicMusic");

	ACustomGameState_OnOverrideDynamicMusic_Params params;
	params.ForCharacter = ForCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.OnNotifyPlayerDied
// ()
// Parameters:
// class AShooterCharacter*       theShooterChar                 (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController* prevController                 (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   InstigatingPawn                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ACustomGameState::OnNotifyPlayerDied(class AShooterCharacter* theShooterChar, class AShooterPlayerController* prevController, class APawn* InstigatingPawn, class AActor* DamageCauser, class UDamageType* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.OnNotifyPlayerDied");

	ACustomGameState_OnNotifyPlayerDied_Params params;
	params.theShooterChar = theShooterChar;
	params.prevController = prevController;
	params.InstigatingPawn = InstigatingPawn;
	params.DamageCauser = DamageCauser;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.CustomGameState.OnHasGameModeMatchStarted
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameState::OnHasGameModeMatchStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.OnHasGameModeMatchStarted");

	ACustomGameState_OnHasGameModeMatchStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.OnHasGameModeMatchFinished
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameState::OnHasGameModeMatchFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.OnHasGameModeMatchFinished");

	ACustomGameState_OnHasGameModeMatchFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.OnHandleActorEvent
// ()
// Parameters:
// class AActor*                  forActor                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NameParam                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 VecParam                       (Parm, ZeroConstructor, IsPlainOldData)

void ACustomGameState::OnHandleActorEvent(class AActor* forActor, const struct FName& NameParam, const struct FVector& VecParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.OnHandleActorEvent");

	ACustomGameState_OnHandleActorEvent_Params params;
	params.forActor = forActor;
	params.NameParam = NameParam;
	params.VecParam = VecParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.CustomGameState.OnGetRemainingMatchTime
// ()
// Parameters:
// class ACustomGameState*        CustomGameState                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACustomGameState::OnGetRemainingMatchTime(class ACustomGameState* CustomGameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.OnGetRemainingMatchTime");

	ACustomGameState_OnGetRemainingMatchTime_Params params;
	params.CustomGameState = CustomGameState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.OnGetCurrentGameTimestampInSeconds
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACustomGameState::OnGetCurrentGameTimestampInSeconds()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.OnGetCurrentGameTimestampInSeconds");

	ACustomGameState_OnGetCurrentGameTimestampInSeconds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.OnForceOccludedFloatingHUD
// ()
// Parameters:
// class AActor*                  anActor                        (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController* ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameState::OnForceOccludedFloatingHUD(class AActor* anActor, class AShooterPlayerController* ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.OnForceOccludedFloatingHUD");

	ACustomGameState_OnForceOccludedFloatingHUD_Params params;
	params.anActor = anActor;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.OnExtraShooterCharacterTick
// ()
// Parameters:
// class AShooterCharacter*       ForChar                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ACustomGameState::OnExtraShooterCharacterTick(class AShooterCharacter* ForChar, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.OnExtraShooterCharacterTick");

	ACustomGameState_OnExtraShooterCharacterTick_Params params;
	params.ForChar = ForChar;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.CustomGameState.OnDrawingHUDNotifications
// ()
// Parameters:
// class AShooterHUD*             HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameState::OnDrawingHUDNotifications(class AShooterHUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.OnDrawingHUDNotifications");

	ACustomGameState_OnDrawingHUDNotifications_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.OnDrawHUD
// ()
// Parameters:
// class AShooterHUD*             HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameState::OnDrawHUD(class AShooterHUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.OnDrawHUD");

	ACustomGameState_OnDrawHUD_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.OnDrawExtraPlayerFloatingHUD
// ()
// Parameters:
// class AShooterHUD*             HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       theShooterChar                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AtLoc                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ACustomGameState::OnDrawExtraPlayerFloatingHUD(class AShooterHUD* HUD, class AShooterCharacter* theShooterChar, const struct FVector& AtLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.OnDrawExtraPlayerFloatingHUD");

	ACustomGameState_OnDrawExtraPlayerFloatingHUD_Params params;
	params.HUD = HUD;
	params.theShooterChar = theShooterChar;
	params.AtLoc = AtLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.CustomGameState.OnCheckGameStateIfCanRespawn
// ()
// Parameters:
// class APlayerController*       ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameState::OnCheckGameStateIfCanRespawn(class APlayerController* ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.OnCheckGameStateIfCanRespawn");

	ACustomGameState_OnCheckGameStateIfCanRespawn_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.OnAllowTribeManager
// ()
// Parameters:
// class AShooterPlayerController* ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameState::OnAllowTribeManager(class AShooterPlayerController* ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.OnAllowTribeManager");

	ACustomGameState_OnAllowTribeManager_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.OnAllowTribeManagement
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameState::OnAllowTribeManagement()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.OnAllowTribeManagement");

	ACustomGameState_OnAllowTribeManagement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.OnAllowStartSupplyCrateSpawns
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameState::OnAllowStartSupplyCrateSpawns()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.OnAllowStartSupplyCrateSpawns");

	ACustomGameState_OnAllowStartSupplyCrateSpawns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.OnAllowShowPlayerHudUI
// ()
// Parameters:
// class APrimalCharacter*        forPawn                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameState::OnAllowShowPlayerHudUI(class APrimalCharacter* forPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.OnAllowShowPlayerHudUI");

	ACustomGameState_OnAllowShowPlayerHudUI_Params params;
	params.forPawn = forPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.OnAllowRemoveItems
// ()
// Parameters:
// class UPrimalInventoryComponent* ForInv                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AShooterPlayerController* PC                             (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem*             anItemToTransfer               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameState::OnAllowRemoveItems(class UPrimalInventoryComponent* ForInv, class AShooterPlayerController* PC, class UPrimalItem* anItemToTransfer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.OnAllowRemoveItems");

	ACustomGameState_OnAllowRemoveItems_Params params;
	params.ForInv = ForInv;
	params.PC = PC;
	params.anItemToTransfer = anItemToTransfer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.OnAllowPopUps
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameState::OnAllowPopUps()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.OnAllowPopUps");

	ACustomGameState_OnAllowPopUps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.OnAllowOrbitCamera
// ()
// Parameters:
// class APrimalCharacter*        ForCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameState::OnAllowOrbitCamera(class APrimalCharacter* ForCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.OnAllowOrbitCamera");

	ACustomGameState_OnAllowOrbitCamera_Params params;
	params.ForCharacter = ForCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.OnAllowFastTravel
// ()
// Parameters:
// class APrimalStructureBed*     ForBed                         (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController* ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameState::OnAllowFastTravel(class APrimalStructureBed* ForBed, class AShooterPlayerController* ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.OnAllowFastTravel");

	ACustomGameState_OnAllowFastTravel_Params params;
	params.ForBed = ForBed;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.OnAllowDaytimeTransitionSounds
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameState::OnAllowDaytimeTransitionSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.OnAllowDaytimeTransitionSounds");

	ACustomGameState_OnAllowDaytimeTransitionSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.OnAllowCreateSurvivor
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameState::OnAllowCreateSurvivor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.OnAllowCreateSurvivor");

	ACustomGameState_OnAllowCreateSurvivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.MakePlayerDeathNotification
// ()
// Parameters:
// struct FString                 PlayerDeathStringEnemy         (Parm, ZeroConstructor)
// struct FString                 PlayerDeathStringAlly          (Parm, ZeroConstructor)
// struct FString                 PlayerDeathStringYou           (Parm, ZeroConstructor)
// struct FString                 DeathReason                    (Parm, ZeroConstructor)
// TArray<struct FString>         DeadPlayerNames                (Parm, ZeroConstructor)
// bool                           bIsTribeDeath                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DeathTribeName                 (Parm, ZeroConstructor)
// int                            TargetingTeamID                (Parm, ZeroConstructor, IsPlainOldData)
// int                            KillingTeamID                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 LinkedPlayerID                 (Parm, ZeroConstructor)
// TArray<struct FPrimalPlayerCharacterConfigStructReplicated> PlayersData                    (Parm, ZeroConstructor)
// struct FPlayerDeathNotification ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPlayerDeathNotification ACustomGameState::MakePlayerDeathNotification(const struct FString& PlayerDeathStringEnemy, const struct FString& PlayerDeathStringAlly, const struct FString& PlayerDeathStringYou, const struct FString& DeathReason, TArray<struct FString> DeadPlayerNames, bool bIsTribeDeath, const struct FString& DeathTribeName, int TargetingTeamID, int KillingTeamID, const struct FString& LinkedPlayerID, TArray<struct FPrimalPlayerCharacterConfigStructReplicated> PlayersData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.MakePlayerDeathNotification");

	ACustomGameState_MakePlayerDeathNotification_Params params;
	params.PlayerDeathStringEnemy = PlayerDeathStringEnemy;
	params.PlayerDeathStringAlly = PlayerDeathStringAlly;
	params.PlayerDeathStringYou = PlayerDeathStringYou;
	params.DeathReason = DeathReason;
	params.DeadPlayerNames = DeadPlayerNames;
	params.bIsTribeDeath = bIsTribeDeath;
	params.DeathTribeName = DeathTribeName;
	params.TargetingTeamID = TargetingTeamID;
	params.KillingTeamID = KillingTeamID;
	params.LinkedPlayerID = LinkedPlayerID;
	params.PlayersData = PlayersData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.MakeBattleTribeData
// ()
// Parameters:
// struct FString                 TribeName                      (Parm, ZeroConstructor)
// int                            TribeID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FBattleTribeData        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattleTribeData ACustomGameState::MakeBattleTribeData(const struct FString& TribeName, int TribeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.MakeBattleTribeData");

	ACustomGameState_MakeBattleTribeData_Params params;
	params.TribeName = TribeName;
	params.TribeID = TribeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.MakeBattlePlayerData
// ()
// Parameters:
// struct FString                 PlayerName                     (Parm, ZeroConstructor)
// bool                           bConnected                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAlive                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            TribeID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PlayerId                       (Parm, ZeroConstructor)
// int                            NumOfWins                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumOfLosses                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            Rank                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FBattlePlayerData       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattlePlayerData ACustomGameState::MakeBattlePlayerData(const struct FString& PlayerName, bool bConnected, bool bAlive, int TribeID, const struct FString& PlayerId, int NumOfWins, int NumOfLosses, int Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.MakeBattlePlayerData");

	ACustomGameState_MakeBattlePlayerData_Params params;
	params.PlayerName = PlayerName;
	params.bConnected = bConnected;
	params.bAlive = bAlive;
	params.TribeID = TribeID;
	params.PlayerId = PlayerId;
	params.NumOfWins = NumOfWins;
	params.NumOfLosses = NumOfLosses;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.KickPlayer
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Reason                         (Parm, ZeroConstructor)
// bool                           bCanRejoin                     (Parm, ZeroConstructor, IsPlainOldData)

void ACustomGameState::KickPlayer(class APlayerController* Controller, const struct FString& Reason, bool bCanRejoin)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.KickPlayer");

	ACustomGameState_KickPlayer_Params params;
	params.Controller = Controller;
	params.Reason = Reason;
	params.bCanRejoin = bCanRejoin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.CustomGameState.IsTribeID
// ()
// Parameters:
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameState::IsTribeID(int TeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.IsTribeID");

	ACustomGameState_IsTribeID_Params params;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.IsAuthorityRole
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameState::IsAuthorityRole()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.IsAuthorityRole");

	ACustomGameState_IsAuthorityRole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.HideUIScene
// ()
// Parameters:
// class UClass*                  SceneClass                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SkipAnimation                  (Parm, ZeroConstructor, IsPlainOldData)

void ACustomGameState::HideUIScene(class UClass* SceneClass, bool SkipAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.HideUIScene");

	ACustomGameState_HideUIScene_Params params;
	params.SceneClass = SceneClass;
	params.SkipAnimation = SkipAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.CustomGameState.GetTribeTexture
// ()
// Parameters:
// int                            TribeID                        (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* ACustomGameState::GetTribeTexture(int TribeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.GetTribeTexture");

	ACustomGameState_GetTribeTexture_Params params;
	params.TribeID = TribeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.GetTimeSeconds
// ()
// Parameters:
// double                         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

double ACustomGameState::GetTimeSeconds()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.GetTimeSeconds");

	ACustomGameState_GetTimeSeconds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.GetPlayerDatasForTribe
// ()
// Parameters:
// int                            TribeID                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FBattlePlayerData> AllPlayerDatas                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FBattlePlayerData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBattlePlayerData> ACustomGameState::GetPlayerDatasForTribe(int TribeID, TArray<struct FBattlePlayerData> AllPlayerDatas)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.GetPlayerDatasForTribe");

	ACustomGameState_GetPlayerDatasForTribe_Params params;
	params.TribeID = TribeID;
	params.AllPlayerDatas = AllPlayerDatas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.GetPawnName
// ()
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ACustomGameState::GetPawnName(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.GetPawnName");

	ACustomGameState_GetPawnName_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.GetPawnKillerName
// ()
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ACustomGameState::GetPawnKillerName(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.GetPawnKillerName");

	ACustomGameState_GetPawnKillerName_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.GetEvoEventIcon
// ()
// Parameters:
// struct FString                 EvoEvent                       (Parm, ZeroConstructor)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* ACustomGameState::GetEvoEventIcon(const struct FString& EvoEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.GetEvoEventIcon");

	ACustomGameState_GetEvoEventIcon_Params params;
	params.EvoEvent = EvoEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.GetDeathNotificationText
// ()
// Parameters:
// class AShooterCharacter*       theShooterChar                 (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   InstigatingPawn                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Killer                         (Parm, OutParm, ZeroConstructor)
// struct FString                 KillerAndTribe                 (Parm, OutParm, ZeroConstructor)
// struct FString                 theNotificationStringYou       (Parm, OutParm, ZeroConstructor)
// struct FString                 theNotificationStringAlly      (Parm, OutParm, ZeroConstructor)
// struct FString                 theNotificationStringEnemy     (Parm, OutParm, ZeroConstructor)
// class UTexture2D*              DeathIcon                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ACustomGameState::GetDeathNotificationText(class AShooterCharacter* theShooterChar, class APawn* InstigatingPawn, class AActor* DamageCauser, class UDamageType* DamageType, struct FString* Killer, struct FString* KillerAndTribe, struct FString* theNotificationStringYou, struct FString* theNotificationStringAlly, struct FString* theNotificationStringEnemy, class UTexture2D** DeathIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.GetDeathNotificationText");

	ACustomGameState_GetDeathNotificationText_Params params;
	params.theShooterChar = theShooterChar;
	params.InstigatingPawn = InstigatingPawn;
	params.DamageCauser = DamageCauser;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Killer != nullptr)
		*Killer = params.Killer;
	if (KillerAndTribe != nullptr)
		*KillerAndTribe = params.KillerAndTribe;
	if (theNotificationStringYou != nullptr)
		*theNotificationStringYou = params.theNotificationStringYou;
	if (theNotificationStringAlly != nullptr)
		*theNotificationStringAlly = params.theNotificationStringAlly;
	if (theNotificationStringEnemy != nullptr)
		*theNotificationStringEnemy = params.theNotificationStringEnemy;
	if (DeathIcon != nullptr)
		*DeathIcon = params.DeathIcon;
}


// Function ShooterGame.CustomGameState.GetCustomActors
// ()
// Parameters:
// struct FName                   SearchCustomTag                (Parm, ZeroConstructor, IsPlainOldData)
// class ACustomActorList*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ACustomActorList* ACustomGameState::GetCustomActors(const struct FName& SearchCustomTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.GetCustomActors");

	ACustomGameState_GetCustomActors_Params params;
	params.SearchCustomTag = SearchCustomTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.GetAllShooterControllers
// ()
// Parameters:
// TArray<class AShooterPlayerController*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AShooterPlayerController*> ACustomGameState::GetAllShooterControllers()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.GetAllShooterControllers");

	ACustomGameState_GetAllShooterControllers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.GetAllShooterCharactersOfTeam
// ()
// Parameters:
// int                            KillerTeam                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AShooterCharacter*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AShooterCharacter*> ACustomGameState::GetAllShooterCharactersOfTeam(int KillerTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.GetAllShooterCharactersOfTeam");

	ACustomGameState_GetAllShooterCharactersOfTeam_Params params;
	params.KillerTeam = KillerTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.GetAllShooterCharacters
// ()
// Parameters:
// TArray<class AShooterCharacter*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AShooterCharacter*> ACustomGameState::GetAllShooterCharacters()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.GetAllShooterCharacters");

	ACustomGameState_GetAllShooterCharacters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.GetAllLiveShooterCharactersOfTeam
// ()
// Parameters:
// int                            KillerTeam                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AShooterCharacter*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AShooterCharacter*> ACustomGameState::GetAllLiveShooterCharactersOfTeam(int KillerTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.GetAllLiveShooterCharactersOfTeam");

	ACustomGameState_GetAllLiveShooterCharactersOfTeam_Params params;
	params.KillerTeam = KillerTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.GetAllDinoCharactersOfTeam
// ()
// Parameters:
// int                            KillerTeam                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class APrimalDinoCharacter*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class APrimalDinoCharacter*> ACustomGameState::GetAllDinoCharactersOfTeam(int KillerTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.GetAllDinoCharactersOfTeam");

	ACustomGameState_GetAllDinoCharactersOfTeam_Params params;
	params.KillerTeam = KillerTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.GetAfterActionReportItems
// ()
// Parameters:
// TArray<struct FActionReportItem> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FActionReportItem> ACustomGameState::GetAfterActionReportItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.GetAfterActionReportItems");

	ACustomGameState_GetAfterActionReportItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.DrawTileOnCanvas
// ()
// Parameters:
// class AShooterHUD*             HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                Tex                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          XL                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          YL                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          U                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          V                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          UL                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          VL                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FColor                  DrawColor                      (Parm, ZeroConstructor, IsPlainOldData)

void ACustomGameState::DrawTileOnCanvas(class AShooterHUD* HUD, class UTexture* Tex, float X, float Y, float XL, float YL, float U, float V, float UL, float VL, const struct FColor& DrawColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.DrawTileOnCanvas");

	ACustomGameState_DrawTileOnCanvas_Params params;
	params.HUD = HUD;
	params.Tex = Tex;
	params.X = X;
	params.Y = Y;
	params.XL = XL;
	params.YL = YL;
	params.U = U;
	params.V = V;
	params.UL = UL;
	params.VL = VL;
	params.DrawColor = DrawColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.CustomGameState.CreateDeathNotification
// ()
// Parameters:
// class AShooterCharacter*       theShooterChar                 (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController* prevController                 (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   InstigatingPawn                (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxNumberOfRespawns            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FPlayerDeathNotification ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPlayerDeathNotification ACustomGameState::CreateDeathNotification(class AShooterCharacter* theShooterChar, class AShooterPlayerController* prevController, class APawn* InstigatingPawn, int MaxNumberOfRespawns, class AActor* DamageCauser, class UDamageType* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.CreateDeathNotification");

	ACustomGameState_CreateDeathNotification_Params params;
	params.theShooterChar = theShooterChar;
	params.prevController = prevController;
	params.InstigatingPawn = InstigatingPawn;
	params.MaxNumberOfRespawns = MaxNumberOfRespawns;
	params.DamageCauser = DamageCauser;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.CreateDamageEvent
// ()
// Parameters:
// struct FDamageEvent            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDamageEvent ACustomGameState::CreateDamageEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.CreateDamageEvent");

	ACustomGameState_CreateDamageEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.ClearWorldEvent
// ()
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)

void ACustomGameState::ClearWorldEvent(const struct FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.ClearWorldEvent");

	ACustomGameState_ClearWorldEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.CustomGameState.CheckTimeSince
// ()
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomGameState::CheckTimeSince(float Time, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.CheckTimeSince");

	ACustomGameState_CheckTimeSince_Params params;
	params.Time = Time;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomGameState.BroadcastActorCustomEvent
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   EventCustomName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EventCustomString              (Parm, ZeroConstructor)
// class AActor*                  InstigatorActor                (Parm, ZeroConstructor, IsPlainOldData)

void ACustomGameState::BroadcastActorCustomEvent(class AActor* Actor, const struct FName& EventCustomName, const struct FString& EventCustomString, class AActor* InstigatorActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.BroadcastActorCustomEvent");

	ACustomGameState_BroadcastActorCustomEvent_Params params;
	params.Actor = Actor;
	params.EventCustomName = EventCustomName;
	params.EventCustomString = EventCustomString;
	params.InstigatorActor = InstigatorActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.CustomGameState.BreakTribeData
// ()
// Parameters:
// struct FTribeData              InData                         (ConstParm, Parm)
// struct FString                 TribeName                      (Parm, OutParm, ZeroConstructor)
// int                            OwnerPlayerDataID              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            TribeID                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         MembersPlayerName              (Parm, OutParm, ZeroConstructor)
// TArray<int>                    MembersPlayerDataID            (Parm, OutParm, ZeroConstructor)
// TArray<int>                    TribeAdmins                    (Parm, OutParm, ZeroConstructor)
// bool                           bSetGovernment                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FPrimalPlayerCharacterConfigStructReplicated> MembersConfigs                 (Parm, OutParm, ZeroConstructor)

void ACustomGameState::BreakTribeData(const struct FTribeData& InData, struct FString* TribeName, int* OwnerPlayerDataID, int* TribeID, TArray<struct FString>* MembersPlayerName, TArray<int>* MembersPlayerDataID, TArray<int>* TribeAdmins, bool* bSetGovernment, TArray<struct FPrimalPlayerCharacterConfigStructReplicated>* MembersConfigs)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.BreakTribeData");

	ACustomGameState_BreakTribeData_Params params;
	params.InData = InData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TribeName != nullptr)
		*TribeName = params.TribeName;
	if (OwnerPlayerDataID != nullptr)
		*OwnerPlayerDataID = params.OwnerPlayerDataID;
	if (TribeID != nullptr)
		*TribeID = params.TribeID;
	if (MembersPlayerName != nullptr)
		*MembersPlayerName = params.MembersPlayerName;
	if (MembersPlayerDataID != nullptr)
		*MembersPlayerDataID = params.MembersPlayerDataID;
	if (TribeAdmins != nullptr)
		*TribeAdmins = params.TribeAdmins;
	if (bSetGovernment != nullptr)
		*bSetGovernment = params.bSetGovernment;
	if (MembersConfigs != nullptr)
		*MembersConfigs = params.MembersConfigs;
}


// Function ShooterGame.CustomGameState.BreakPlayerDeathNotification
// ()
// Parameters:
// struct FPlayerDeathNotification Data                           (ConstParm, Parm)
// struct FString                 PlayerDeathStringEnemy         (Parm, OutParm, ZeroConstructor)
// struct FString                 PlayerDeathStringAlly          (Parm, OutParm, ZeroConstructor)
// struct FString                 PlayerDeathStringYou           (Parm, OutParm, ZeroConstructor)
// struct FString                 DeathReason                    (Parm, OutParm, ZeroConstructor)
// TArray<struct FString>         DeadPlayerNames                (Parm, OutParm, ZeroConstructor)
// bool                           bIsTribeDeath                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 DeathTribeName                 (Parm, OutParm, ZeroConstructor)
// int                            TargetingTeamID                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            KillingTeamID                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 LinkedPlayerID                 (Parm, OutParm, ZeroConstructor)
// TArray<struct FPrimalPlayerCharacterConfigStructReplicated> PlayersData                    (Parm, OutParm, ZeroConstructor)
// class UTexture2D*              DeathIcon                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACustomGameState::BreakPlayerDeathNotification(const struct FPlayerDeathNotification& Data, struct FString* PlayerDeathStringEnemy, struct FString* PlayerDeathStringAlly, struct FString* PlayerDeathStringYou, struct FString* DeathReason, TArray<struct FString>* DeadPlayerNames, bool* bIsTribeDeath, struct FString* DeathTribeName, int* TargetingTeamID, int* KillingTeamID, struct FString* LinkedPlayerID, TArray<struct FPrimalPlayerCharacterConfigStructReplicated>* PlayersData, class UTexture2D** DeathIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.BreakPlayerDeathNotification");

	ACustomGameState_BreakPlayerDeathNotification_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerDeathStringEnemy != nullptr)
		*PlayerDeathStringEnemy = params.PlayerDeathStringEnemy;
	if (PlayerDeathStringAlly != nullptr)
		*PlayerDeathStringAlly = params.PlayerDeathStringAlly;
	if (PlayerDeathStringYou != nullptr)
		*PlayerDeathStringYou = params.PlayerDeathStringYou;
	if (DeathReason != nullptr)
		*DeathReason = params.DeathReason;
	if (DeadPlayerNames != nullptr)
		*DeadPlayerNames = params.DeadPlayerNames;
	if (bIsTribeDeath != nullptr)
		*bIsTribeDeath = params.bIsTribeDeath;
	if (DeathTribeName != nullptr)
		*DeathTribeName = params.DeathTribeName;
	if (TargetingTeamID != nullptr)
		*TargetingTeamID = params.TargetingTeamID;
	if (KillingTeamID != nullptr)
		*KillingTeamID = params.KillingTeamID;
	if (LinkedPlayerID != nullptr)
		*LinkedPlayerID = params.LinkedPlayerID;
	if (PlayersData != nullptr)
		*PlayersData = params.PlayersData;
	if (DeathIcon != nullptr)
		*DeathIcon = params.DeathIcon;
}


// Function ShooterGame.CustomGameState.BreakBattleTribeData
// ()
// Parameters:
// struct FBattleTribeData        InData                         (ConstParm, Parm)
// struct FString                 TribeName                      (Parm, OutParm, ZeroConstructor)
// int                            TribeID                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACustomGameState::BreakBattleTribeData(const struct FBattleTribeData& InData, struct FString* TribeName, int* TribeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.BreakBattleTribeData");

	ACustomGameState_BreakBattleTribeData_Params params;
	params.InData = InData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TribeName != nullptr)
		*TribeName = params.TribeName;
	if (TribeID != nullptr)
		*TribeID = params.TribeID;
}


// Function ShooterGame.CustomGameState.BreakBattlePlayerData
// ()
// Parameters:
// struct FBattlePlayerData       Data                           (ConstParm, Parm)
// struct FString                 PlayerName                     (Parm, OutParm, ZeroConstructor)
// bool                           bConnected                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bAlive                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            TribeID                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 PlayerId                       (Parm, OutParm, ZeroConstructor)
// int                            NumOfWins                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NumOfLosses                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Rank                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACustomGameState::BreakBattlePlayerData(const struct FBattlePlayerData& Data, struct FString* PlayerName, bool* bConnected, bool* bAlive, int* TribeID, struct FString* PlayerId, int* NumOfWins, int* NumOfLosses, int* Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.BreakBattlePlayerData");

	ACustomGameState_BreakBattlePlayerData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerName != nullptr)
		*PlayerName = params.PlayerName;
	if (bConnected != nullptr)
		*bConnected = params.bConnected;
	if (bAlive != nullptr)
		*bAlive = params.bAlive;
	if (TribeID != nullptr)
		*TribeID = params.TribeID;
	if (PlayerId != nullptr)
		*PlayerId = params.PlayerId;
	if (NumOfWins != nullptr)
		*NumOfWins = params.NumOfWins;
	if (NumOfLosses != nullptr)
		*NumOfLosses = params.NumOfLosses;
	if (Rank != nullptr)
		*Rank = params.Rank;
}


// Function ShooterGame.CustomGameState.BreakActionReportItem
// ()
// Parameters:
// struct FActionReportItem       Data                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 PlayerName                     (Parm, OutParm, ZeroConstructor)
// struct FString                 TribeName                      (Parm, OutParm, ZeroConstructor)
// struct FString                 TimeOfDeath                    (Parm, OutParm, ZeroConstructor)
// struct FString                 LevelOfDeath                   (Parm, OutParm, ZeroConstructor)
// struct FString                 DeathMessage                   (Parm, OutParm, ZeroConstructor)
// class UTexture2D*              DeathIcon                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 Rank                           (Parm, OutParm, ZeroConstructor)

void ACustomGameState::BreakActionReportItem(const struct FActionReportItem& Data, struct FString* PlayerName, struct FString* TribeName, struct FString* TimeOfDeath, struct FString* LevelOfDeath, struct FString* DeathMessage, class UTexture2D** DeathIcon, struct FString* Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.BreakActionReportItem");

	ACustomGameState_BreakActionReportItem_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerName != nullptr)
		*PlayerName = params.PlayerName;
	if (TribeName != nullptr)
		*TribeName = params.TribeName;
	if (TimeOfDeath != nullptr)
		*TimeOfDeath = params.TimeOfDeath;
	if (LevelOfDeath != nullptr)
		*LevelOfDeath = params.LevelOfDeath;
	if (DeathMessage != nullptr)
		*DeathMessage = params.DeathMessage;
	if (DeathIcon != nullptr)
		*DeathIcon = params.DeathIcon;
	if (Rank != nullptr)
		*Rank = params.Rank;
}


// Function ShooterGame.CustomGameState.AddActionReportItem
// ()
// Parameters:
// struct FActionReportItem       Item                           (ConstParm, Parm, OutParm, ReferenceParm)

void ACustomGameState::AddActionReportItem(const struct FActionReportItem& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomGameState.AddActionReportItem");

	ACustomGameState_AddActionReportItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameUserSettings.GetUserSettings
// ()
// Parameters:
// class UShooterGameUserSettings* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UShooterGameUserSettings* UShooterGameUserSettings::GetUserSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUserSettings.GetUserSettings");

	UShooterGameUserSettings_GetUserSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameViewportClient.GetViewportClient
// ()
// Parameters:
// class UWorld*                  ForWorld                       (Parm, ZeroConstructor, IsPlainOldData)
// class UShooterGameViewportClient* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UShooterGameViewportClient* UShooterGameViewportClient::GetViewportClient(class UWorld* ForWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameViewportClient.GetViewportClient");

	UShooterGameViewportClient_GetViewportClient_Params params;
	params.ForWorld = ForWorld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameViewportClient.GetUISceneFromClass
// ()
// Parameters:
// class UClass*                  PrimalUIClass                  (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalUI*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPrimalUI* UShooterGameViewportClient::GetUISceneFromClass(class UClass* PrimalUIClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameViewportClient.GetUISceneFromClass");

	UShooterGameViewportClient_GetUISceneFromClass_Params params;
	params.PrimalUIClass = PrimalUIClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterWeapon.StartUnequip
// ()

void AShooterWeapon::StartUnequip()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.StartUnequip");

	AShooterWeapon_StartUnequip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.ServerToggleAccessory
// ()

void AShooterWeapon::ServerToggleAccessory()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.ServerToggleAccessory");

	AShooterWeapon_ServerToggleAccessory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.ServerStopSecondaryAction
// ()

void AShooterWeapon::ServerStopSecondaryAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.ServerStopSecondaryAction");

	AShooterWeapon_ServerStopSecondaryAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.ServerStopFire
// ()

void AShooterWeapon::ServerStopFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.ServerStopFire");

	AShooterWeapon_ServerStopFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.ServerStopAltFire
// ()

void AShooterWeapon::ServerStopAltFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.ServerStopAltFire");

	AShooterWeapon_ServerStopAltFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.ServerStartSecondaryAction
// ()

void AShooterWeapon::ServerStartSecondaryAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.ServerStartSecondaryAction");

	AShooterWeapon_ServerStartSecondaryAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.ServerStartReload
// ()

void AShooterWeapon::ServerStartReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.ServerStartReload");

	AShooterWeapon_ServerStartReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.ServerStartFire
// ()

void AShooterWeapon::ServerStartFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.ServerStartFire");

	AShooterWeapon_ServerStartFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.ServerStartAltFire
// ()

void AShooterWeapon::ServerStartAltFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.ServerStartAltFire");

	AShooterWeapon_ServerStartAltFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.ServerSetColorizeRegion
// ()
// Parameters:
// int                            theRegion                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValToUse                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterWeapon::ServerSetColorizeRegion(int theRegion, bool bValToUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.ServerSetColorizeRegion");

	AShooterWeapon_ServerSetColorizeRegion_Params params;
	params.theRegion = theRegion;
	params.bValToUse = bValToUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.PlayWeaponBreakAnimation
// ()

void AShooterWeapon::PlayWeaponBreakAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.PlayWeaponBreakAnimation");

	AShooterWeapon_PlayWeaponBreakAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.PlayWeaponBlockedAnimation
// ()

void AShooterWeapon::PlayWeaponBlockedAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.PlayWeaponBlockedAnimation");

	AShooterWeapon_PlayWeaponBlockedAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.PlayUseHarvestAnimation
// ()

void AShooterWeapon::PlayUseHarvestAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.PlayUseHarvestAnimation");

	AShooterWeapon_PlayUseHarvestAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.OnRep_NetLoopedWeaponFire
// ()

void AShooterWeapon::OnRep_NetLoopedWeaponFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.OnRep_NetLoopedWeaponFire");

	AShooterWeapon_OnRep_NetLoopedWeaponFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.OnRep_MyPawn
// ()

void AShooterWeapon::OnRep_MyPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.OnRep_MyPawn");

	AShooterWeapon_OnRep_MyPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.OnRep_CurrentAmmoInClip
// ()

void AShooterWeapon::OnRep_CurrentAmmoInClip()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.OnRep_CurrentAmmoInClip");

	AShooterWeapon_OnRep_CurrentAmmoInClip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.OnRep_AccessoryToggle
// ()

void AShooterWeapon::OnRep_AccessoryToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.OnRep_AccessoryToggle");

	AShooterWeapon_OnRep_AccessoryToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.IsFiring
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterWeapon::IsFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.IsFiring");

	AShooterWeapon_IsFiring_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterWeapon.GetPawnOwner
// ()
// Parameters:
// class AShooterCharacter*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterCharacter* AShooterWeapon::GetPawnOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.GetPawnOwner");

	AShooterWeapon_GetPawnOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterWeapon.DoHandleFiring
// ()

void AShooterWeapon::DoHandleFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.DoHandleFiring");

	AShooterWeapon_DoHandleFiring_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.ClientStopSimulatingWeaponFire
// ()

void AShooterWeapon::ClientStopSimulatingWeaponFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.ClientStopSimulatingWeaponFire");

	AShooterWeapon_ClientStopSimulatingWeaponFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.ClientStartReload
// ()

void AShooterWeapon::ClientStartReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.ClientStartReload");

	AShooterWeapon_ClientStartReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.ClientStartMuzzleFX
// ()

void AShooterWeapon::ClientStartMuzzleFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.ClientStartMuzzleFX");

	AShooterWeapon_ClientStartMuzzleFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.ClientSimulateWeaponFire
// ()

void AShooterWeapon::ClientSimulateWeaponFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.ClientSimulateWeaponFire");

	AShooterWeapon_ClientSimulateWeaponFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.ClientSetClipAmmo
// ()
// Parameters:
// int                            newClipAmmo                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOnlyUpdateItem                (Parm, ZeroConstructor, IsPlainOldData)

void AShooterWeapon::ClientSetClipAmmo(int newClipAmmo, bool bOnlyUpdateItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.ClientSetClipAmmo");

	AShooterWeapon_ClientSetClipAmmo_Params params;
	params.newClipAmmo = newClipAmmo;
	params.bOnlyUpdateItem = bOnlyUpdateItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.ClientPlayShieldHitAnim
// ()

void AShooterWeapon::ClientPlayShieldHitAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.ClientPlayShieldHitAnim");

	AShooterWeapon_ClientPlayShieldHitAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.ClearClientReload
// ()

void AShooterWeapon::ClearClientReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.ClearClientReload");

	AShooterWeapon_ClearClientReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.CheckItemAssocation
// ()

void AShooterWeapon::CheckItemAssocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.CheckItemAssocation");

	AShooterWeapon_CheckItemAssocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.BPWeaponCanFire
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterWeapon::BPWeaponCanFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.BPWeaponCanFire");

	AShooterWeapon_BPWeaponCanFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterWeapon.BPAnimNotifyCustomState_End
// ()
// Parameters:
// struct FName                   CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  MeshComp                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAnimSequenceBase*       Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotifyState*        AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AShooterWeapon::BPAnimNotifyCustomState_End(const struct FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotifyState* AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.BPAnimNotifyCustomState_End");

	AShooterWeapon_BPAnimNotifyCustomState_End_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.BPAnimNotifyCustomState_Begin
// ()
// Parameters:
// struct FName                   CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  MeshComp                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAnimSequenceBase*       Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          TotalDuration                  (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotifyState*        AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AShooterWeapon::BPAnimNotifyCustomState_Begin(const struct FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, class UAnimNotifyState* AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.BPAnimNotifyCustomState_Begin");

	AShooterWeapon_BPAnimNotifyCustomState_Begin_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.TotalDuration = TotalDuration;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.BPAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName                   CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  MeshComp                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAnimSequenceBase*       Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify*             AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AShooterWeapon::BPAnimNotifyCustomEvent(const struct FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.BPAnimNotifyCustomEvent");

	AShooterWeapon_BPAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon_Projectile.ServerFireProjectileEx
// ()
// Parameters:
// struct FVector                 Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantizeNormal ShootDir                       (Parm)
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            RandomSeed                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterWeapon_Projectile::ServerFireProjectileEx(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir, float Speed, int RandomSeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon_Projectile.ServerFireProjectileEx");

	AShooterWeapon_Projectile_ServerFireProjectileEx_Params params;
	params.Origin = Origin;
	params.ShootDir = ShootDir;
	params.Speed = Speed;
	params.RandomSeed = RandomSeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon_Projectile.ServerFireProjectile
// ()
// Parameters:
// struct FVector                 Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantizeNormal ShootDir                       (Parm)

void AShooterWeapon_Projectile::ServerFireProjectile(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon_Projectile.ServerFireProjectile");

	AShooterWeapon_Projectile_ServerFireProjectile_Params params;
	params.Origin = Origin;
	params.ShootDir = ShootDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon_Projectile.ClientsFireProjectileEx
// ()
// Parameters:
// struct FVector                 Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantizeNormal ShootDir                       (Parm)
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            RandomSeed                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterWeapon_Projectile::ClientsFireProjectileEx(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir, float Speed, int RandomSeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon_Projectile.ClientsFireProjectileEx");

	AShooterWeapon_Projectile_ClientsFireProjectileEx_Params params;
	params.Origin = Origin;
	params.ShootDir = ShootDir;
	params.Speed = Speed;
	params.RandomSeed = RandomSeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon_Projectile.ClientsFireProjectile
// ()
// Parameters:
// struct FVector                 Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantizeNormal ShootDir                       (Parm)

void AShooterWeapon_Projectile::ClientsFireProjectile(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon_Projectile.ClientsFireProjectile");

	AShooterWeapon_Projectile_ClientsFireProjectile_Params params;
	params.Origin = Origin;
	params.ShootDir = ShootDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon_Projectile.CheckRefireTimer
// ()

void AShooterWeapon_Projectile::CheckRefireTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon_Projectile.CheckRefireTimer");

	AShooterWeapon_Projectile_CheckRefireTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterProjectile.ProjectileBounced
// ()
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 ImpactVelocity                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AShooterProjectile::ProjectileBounced(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterProjectile.ProjectileBounced");

	AShooterProjectile_ProjectileBounced_Params params;
	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterProjectile.OnTouch
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void AShooterProjectile::OnTouch(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterProjectile.OnTouch");

	AShooterProjectile_OnTouch_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterProjectile.OnProjectileStop
// ()
// Parameters:
// struct FHitResult              HitResult                      (ConstParm, Parm, OutParm, ReferenceParm)

void AShooterProjectile::OnProjectileStop(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterProjectile.OnProjectileStop");

	AShooterProjectile_OnProjectileStop_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterProjectile.OnImpact
// ()
// Parameters:
// struct FHitResult              HitResult                      (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bFromReplication               (Parm, ZeroConstructor, IsPlainOldData)

void AShooterProjectile::OnImpact(const struct FHitResult& HitResult, bool bFromReplication)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterProjectile.OnImpact");

	AShooterProjectile_OnImpact_Params params;
	params.HitResult = HitResult;
	params.bFromReplication = bFromReplication;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterProjectile.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (ConstParm, Parm, OutParm, ReferenceParm)

void AShooterProjectile::OnExplode(const struct FHitResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterProjectile.OnExplode");

	AShooterProjectile_OnExplode_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterProjectile.ClientOnImpact
// ()
// Parameters:
// struct FVector                 ProjectileLocation             (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ProjectileRotation             (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (Parm)

void AShooterProjectile::ClientOnImpact(const struct FVector& ProjectileLocation, const struct FRotator& ProjectileRotation, const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterProjectile.ClientOnImpact");

	AShooterProjectile_ClientOnImpact_Params params;
	params.ProjectileLocation = ProjectileLocation;
	params.ProjectileRotation = ProjectileRotation;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterProjectile.ClientNetImpactFX
// ()
// Parameters:
// struct FHitResult              HitResult                      (Parm)

void AShooterProjectile::ClientNetImpactFX(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterProjectile.ClientNetImpactFX");

	AShooterProjectile_ClientNetImpactFX_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterProjectile.ClientNetExplode
// ()
// Parameters:
// struct FHitResult              HitResult                      (Parm)

void AShooterProjectile::ClientNetExplode(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterProjectile.ClientNetExplode");

	AShooterProjectile_ClientNetExplode_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterProjectile.BPInitVelocity
// ()
// Parameters:
// struct FVector                 ShootDirection                 (Parm, ZeroConstructor, IsPlainOldData)

void AShooterProjectile::BPInitVelocity(const struct FVector& ShootDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterProjectile.BPInitVelocity");

	AShooterProjectile_BPInitVelocity_Params params;
	params.ShootDirection = ShootDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalProjectileArrow.PickUpCheck
// ()

void APrimalProjectileArrow::PickUpCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalProjectileArrow.PickUpCheck");

	APrimalProjectileArrow_PickUpCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon_Instant.SimulateInstantHit
// ()
// Parameters:
// struct FVector                 Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantizeNormal ShootDir                       (Parm)
// bool                           bForceOnLocal                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            ShotIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterWeapon_Instant::SimulateInstantHit(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir, bool bForceOnLocal, int ShotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon_Instant.SimulateInstantHit");

	AShooterWeapon_Instant_SimulateInstantHit_Params params;
	params.Origin = Origin;
	params.ShootDir = ShootDir;
	params.bForceOnLocal = bForceOnLocal;
	params.ShotIndex = ShotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon_Instant.ServerNotifyShot
// ()
// Parameters:
// TArray<struct FHitResult>      Impacts                        (ConstParm, Parm, ZeroConstructor)
// TArray<struct FVector_NetQuantizeNormal> ShootDirs                      (ConstParm, Parm, ZeroConstructor)

void AShooterWeapon_Instant::ServerNotifyShot(TArray<struct FHitResult> Impacts, TArray<struct FVector_NetQuantizeNormal> ShootDirs)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon_Instant.ServerNotifyShot");

	AShooterWeapon_Instant_ServerNotifyShot_Params params;
	params.Impacts = Impacts;
	params.ShootDirs = ShootDirs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon_Instant.CheckRefireTimer
// ()

void AShooterWeapon_Instant::CheckRefireTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon_Instant.CheckRefireTimer");

	AShooterWeapon_Instant_CheckRefireTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalWeaponGPS.ServerShowNone
// ()

void APrimalWeaponGPS::ServerShowNone()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalWeaponGPS.ServerShowNone");

	APrimalWeaponGPS_ServerShowNone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalWeaponGPS.ServerShowMapOnly
// ()

void APrimalWeaponGPS::ServerShowMapOnly()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalWeaponGPS.ServerShowMapOnly");

	APrimalWeaponGPS_ServerShowMapOnly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalWeaponGPS.ServerShowGPSOnly
// ()

void APrimalWeaponGPS::ServerShowGPSOnly()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalWeaponGPS.ServerShowGPSOnly");

	APrimalWeaponGPS_ServerShowGPSOnly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalWeaponGPS.ServerShowBoth
// ()

void APrimalWeaponGPS::ServerShowBoth()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalWeaponGPS.ServerShowBoth");

	APrimalWeaponGPS_ServerShowBoth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalWeaponGPS.ServerSetUseCompassInsteadOfGPS
// ()
// Parameters:
// bool                           bUseCompass                    (Parm, ZeroConstructor, IsPlainOldData)

void APrimalWeaponGPS::ServerSetUseCompassInsteadOfGPS(bool bUseCompass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalWeaponGPS.ServerSetUseCompassInsteadOfGPS");

	APrimalWeaponGPS_ServerSetUseCompassInsteadOfGPS_Params params;
	params.bUseCompass = bUseCompass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalWeaponGPS.RefreshUseCompass
// ()

void APrimalWeaponGPS::RefreshUseCompass()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalWeaponGPS.RefreshUseCompass");

	APrimalWeaponGPS_RefreshUseCompass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon_Placer.ServerDetonateExplosives
// ()

void AShooterWeapon_Placer::ServerDetonateExplosives()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon_Placer.ServerDetonateExplosives");

	AShooterWeapon_Placer_ServerDetonateExplosives_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon_PlacerTransGPS.ServerSetFrequency
// ()
// Parameters:
// float                          Freq                           (Parm, ZeroConstructor, IsPlainOldData)

void AShooterWeapon_PlacerTransGPS::ServerSetFrequency(float Freq)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon_PlacerTransGPS.ServerSetFrequency");

	AShooterWeapon_PlacerTransGPS_ServerSetFrequency_Params params;
	params.Freq = Freq;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon_PlacerTransGPS.ServerAttachToSelf
// ()

void AShooterWeapon_PlacerTransGPS::ServerAttachToSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon_PlacerTransGPS.ServerAttachToSelf");

	AShooterWeapon_PlacerTransGPS_ServerAttachToSelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon_PlacerTransGPS.ClientShowTransponders
// ()
// Parameters:
// bool                           bValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterWeapon_PlacerTransGPS::ClientShowTransponders(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon_PlacerTransGPS.ClientShowTransponders");

	AShooterWeapon_PlacerTransGPS_ClientShowTransponders_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalWeaponBow.UpdateTPVBowAnimation
// ()

void APrimalWeaponBow::UpdateTPVBowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalWeaponBow.UpdateTPVBowAnimation");

	APrimalWeaponBow_UpdateTPVBowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalWeaponBow.ServerSetPullString
// ()
// Parameters:
// bool                           bIsPulling                     (Parm, ZeroConstructor, IsPlainOldData)

void APrimalWeaponBow::ServerSetPullString(bool bIsPulling)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalWeaponBow.ServerSetPullString");

	APrimalWeaponBow_ServerSetPullString_Params params;
	params.bIsPulling = bIsPulling;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.PrimalWeaponGrenade.BPGetProjectileSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APrimalWeaponGrenade::BPGetProjectileSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalWeaponGrenade.BPGetProjectileSpeed");

	APrimalWeaponGrenade_BPGetProjectileSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.StructurePaintingComponent.ClientPaint
// ()
// Parameters:
// class AShooterPlayerController* Painter                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FPaintItem>      Paints                         (ConstParm, Parm, ZeroConstructor)

void UStructurePaintingComponent::ClientPaint(class AShooterPlayerController* Painter, TArray<struct FPaintItem> Paints)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.StructurePaintingComponent.ClientPaint");

	UStructurePaintingComponent_ClientPaint_Params params;
	params.Painter = Painter;
	params.Paints = Paints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.StructurePaintingComponent.ClientClearPaintingTexture
// ()
// Parameters:
// class AShooterPlayerController* Painter                        (Parm, ZeroConstructor, IsPlainOldData)

void UStructurePaintingComponent::ClientClearPaintingTexture(class AShooterPlayerController* Painter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.StructurePaintingComponent.ClientClearPaintingTexture");

	UStructurePaintingComponent_ClientClearPaintingTexture_Params params;
	params.Painter = Painter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.SupplyCrateSpawningVolume.SpawnCratesFromAllVolumes
// ()
// Parameters:
// class UWorld*                  TheWorld                       (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrateSpawningVolume::SpawnCratesFromAllVolumes(class UWorld* TheWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.SupplyCrateSpawningVolume.SpawnCratesFromAllVolumes");

	ASupplyCrateSpawningVolume_SpawnCratesFromAllVolumes_Params params;
	params.TheWorld = TheWorld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.SupplyCrateSpawningVolume.SpawnCratesFromAllPoints
// ()

void ASupplyCrateSpawningVolume::SpawnCratesFromAllPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.SupplyCrateSpawningVolume.SpawnCratesFromAllPoints");

	ASupplyCrateSpawningVolume_SpawnCratesFromAllPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.SupplyCrateSpawningVolume.SetSpawnEnabled
// ()
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrateSpawningVolume::SetSpawnEnabled(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.SupplyCrateSpawningVolume.SetSpawnEnabled");

	ASupplyCrateSpawningVolume_SetSpawnEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.SupplyCrateSpawningVolume.CheckForSupplyCrateStart
// ()

void ASupplyCrateSpawningVolume::CheckForSupplyCrateStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.SupplyCrateSpawningVolume.CheckForSupplyCrateStart");

	ASupplyCrateSpawningVolume_CheckForSupplyCrateStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.SupplyCrateSpawningVolume.CheckCrateSpawn
// ()

void ASupplyCrateSpawningVolume::CheckCrateSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.SupplyCrateSpawningVolume.CheckCrateSpawn");

	ASupplyCrateSpawningVolume_CheckCrateSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.VictoryCore.SupportsShaderModel5
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryCore::SupportsShaderModel5()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.VictoryCore.SupportsShaderModel5");

	UVictoryCore_SupportsShaderModel5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.VictoryCore.SteamOverlayOpenURL
// ()
// Parameters:
// struct FString                 ToURL                          (Parm, ZeroConstructor)

void UVictoryCore::SteamOverlayOpenURL(const struct FString& ToURL)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.VictoryCore.SteamOverlayOpenURL");

	UVictoryCore_SteamOverlayOpenURL_Params params;
	params.ToURL = ToURL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.VictoryCore.StaticGetTimeSince
// ()
// Parameters:
// class UWorld*                  TheWorld                       (Parm, ZeroConstructor, IsPlainOldData)
// double                         Time                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVictoryCore::StaticGetTimeSince(class UWorld* TheWorld, double Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.VictoryCore.StaticGetTimeSince");

	UVictoryCore_StaticGetTimeSince_Params params;
	params.TheWorld = TheWorld;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.VictoryCore.StaticCheckForCommand
// ()
// Parameters:
// struct FString                 CommandName                    (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryCore::StaticCheckForCommand(const struct FString& CommandName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.VictoryCore.StaticCheckForCommand");

	UVictoryCore_StaticCheckForCommand_Params params;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.VictoryCore.SpawnActorDeferred
// ()
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWorld*                  inWorld                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                Rotation                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNoCollisionFail               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UVictoryCore::SpawnActorDeferred(class UClass* Class, class UWorld* inWorld, const struct FVector& Location, const struct FRotator& Rotation, class AActor* Owner, class APawn* Instigator, bool bNoCollisionFail)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.VictoryCore.SpawnActorDeferred");

	UVictoryCore_SpawnActorDeferred_Params params;
	params.Class = Class;
	params.inWorld = inWorld;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Owner = Owner;
	params.Instigator = Instigator;
	params.bNoCollisionFail = bNoCollisionFail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.VictoryCore.SortActorsByTag
// ()
// Parameters:
// int                            tagIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          actors                         (Parm, ZeroConstructor)
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> UVictoryCore::SortActorsByTag(int tagIndex, TArray<class AActor*> actors)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.VictoryCore.SortActorsByTag");

	UVictoryCore_SortActorsByTag_Params params;
	params.tagIndex = tagIndex;
	params.actors = actors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.VictoryCore.SetSessionPrefix
// ()
// Parameters:
// struct FString                 InPrefix                       (Parm, ZeroConstructor)

void UVictoryCore::SetSessionPrefix(const struct FString& InPrefix)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.VictoryCore.SetSessionPrefix");

	UVictoryCore_SetSessionPrefix_Params params;
	params.InPrefix = InPrefix;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.VictoryCore.ServerOctreeOverlapActorsBitMask
// ()
// Parameters:
// class UWorld*                  TheWorld                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AtLoc                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            OctreeTypeBitMask              (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> UVictoryCore::ServerOctreeOverlapActorsBitMask(class UWorld* TheWorld, const struct FVector& AtLoc, float Radius, int OctreeTypeBitMask)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.VictoryCore.ServerOctreeOverlapActorsBitMask");

	UVictoryCore_ServerOctreeOverlapActorsBitMask_Params params;
	params.TheWorld = TheWorld;
	params.AtLoc = AtLoc;
	params.Radius = Radius;
	params.OctreeTypeBitMask = OctreeTypeBitMask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.VictoryCore.ServerOctreeOverlapActors
// ()
// Parameters:
// class UWorld*                  TheWorld                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AtLoc                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EServerOctreeGroup> OctreeType                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> UVictoryCore::ServerOctreeOverlapActors(class UWorld* TheWorld, const struct FVector& AtLoc, float Radius, TEnumAsByte<EServerOctreeGroup> OctreeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.VictoryCore.ServerOctreeOverlapActors");

	UVictoryCore_ServerOctreeOverlapActors_Params params;
	params.TheWorld = TheWorld;
	params.AtLoc = AtLoc;
	params.Radius = Radius;
	params.OctreeType = OctreeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.VictoryCore.ReupdateCaptures
// ()
// Parameters:
// class UWorld*                  ForWorld                       (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryCore::ReupdateCaptures(class UWorld* ForWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.VictoryCore.ReupdateCaptures");

	UVictoryCore_ReupdateCaptures_Params params;
	params.ForWorld = ForWorld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.VictoryCore.RemoveInvalidObjectsInContainer
// ()
// Parameters:
// TArray<TWeakObjectPtr<class APrimalDinoCharacter>> fContainer                     (Parm, ZeroConstructor)
// TArray<TWeakObjectPtr<class APrimalDinoCharacter>> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<TWeakObjectPtr<class APrimalDinoCharacter>> UVictoryCore::RemoveInvalidObjectsInContainer(TArray<TWeakObjectPtr<class APrimalDinoCharacter>> fContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.VictoryCore.RemoveInvalidObjectsInContainer");

	UVictoryCore_RemoveInvalidObjectsInContainer_Params params;
	params.fContainer = fContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.VictoryCore.PureCheckForCommand
// ()
// Parameters:
// struct FString                 CommandName                    (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryCore::PureCheckForCommand(const struct FString& CommandName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.VictoryCore.PureCheckForCommand");

	UVictoryCore_PureCheckForCommand_Params params;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.VictoryCore.IsLoadingSaveGame
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryCore::IsLoadingSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.VictoryCore.IsLoadingSaveGame");

	UVictoryCore_IsLoadingSaveGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.VictoryCore.IsGameWorld
// ()
// Parameters:
// class UWorld*                  TheWorld                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryCore::IsGameWorld(class UWorld* TheWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.VictoryCore.IsGameWorld");

	UVictoryCore_IsGameWorld_Params params;
	params.TheWorld = TheWorld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.VictoryCore.GetWeightedRandomIndexFromArray
// ()
// Parameters:
// TArray<float>                  pArray                         (Parm, ZeroConstructor)
// float                          ForceRand                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVictoryCore::GetWeightedRandomIndexFromArray(TArray<float> pArray, float ForceRand)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.VictoryCore.GetWeightedRandomIndexFromArray");

	UVictoryCore_GetWeightedRandomIndexFromArray_Params params;
	params.pArray = pArray;
	params.ForceRand = ForceRand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.VictoryCore.GetTimeSince
// ()
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVictoryCore::GetTimeSince(class APawn* Pawn, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.VictoryCore.GetTimeSince");

	UVictoryCore_GetTimeSince_Params params;
	params.Pawn = Pawn;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.VictoryCore.GetTimeSeconds
// ()
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVictoryCore::GetTimeSeconds(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.VictoryCore.GetTimeSeconds");

	UVictoryCore_GetTimeSeconds_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.VictoryCore.GetTeamColor
// ()
// Parameters:
// int                            TargetingTeam                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FColor                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FColor UVictoryCore::GetTeamColor(int TargetingTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.VictoryCore.GetTeamColor");

	UVictoryCore_GetTeamColor_Params params;
	params.TargetingTeam = TargetingTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.VictoryCore.GetSecondsIntoDay
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVictoryCore::GetSecondsIntoDay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.VictoryCore.GetSecondsIntoDay");

	UVictoryCore_GetSecondsIntoDay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.VictoryCore.GetGroundLocation
// ()
// Parameters:
// class UWorld*                  ForWorld                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 theGroundLoc                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StartLoc                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 OffsetUp                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 OffsetDown                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryCore::GetGroundLocation(class UWorld* ForWorld, const struct FVector& StartLoc, const struct FVector& OffsetUp, const struct FVector& OffsetDown, struct FVector* theGroundLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.VictoryCore.GetGroundLocation");

	UVictoryCore_GetGroundLocation_Params params;
	params.ForWorld = ForWorld;
	params.StartLoc = StartLoc;
	params.OffsetUp = OffsetUp;
	params.OffsetDown = OffsetDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (theGroundLoc != nullptr)
		*theGroundLoc = params.theGroundLoc;

	return params.ReturnValue;
}


// Function ShooterGame.VictoryCore.GetDefaultObject
// ()
// Parameters:
// class UObject*                 FromObjectInstance             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UVictoryCore::GetDefaultObject(class UObject* FromObjectInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.VictoryCore.GetDefaultObject");

	UVictoryCore_GetDefaultObject_Params params;
	params.FromObjectInstance = FromObjectInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.VictoryCore.GetClosestActorArray
// ()
// Parameters:
// struct FVector                 ToPoint                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ActorArray                     (Parm, OutParm, ZeroConstructor)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UVictoryCore::GetClosestActorArray(const struct FVector& ToPoint, TArray<class AActor*>* ActorArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.VictoryCore.GetClosestActorArray");

	UVictoryCore_GetClosestActorArray_Params params;
	params.ToPoint = ToPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorArray != nullptr)
		*ActorArray = params.ActorArray;

	return params.ReturnValue;
}


// Function ShooterGame.VictoryCore.GetClassDefaultObject
// ()
// Parameters:
// class UClass*                  FromClass                      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UVictoryCore::GetClassDefaultObject(class UClass* FromClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.VictoryCore.GetClassDefaultObject");

	UVictoryCore_GetClassDefaultObject_Params params;
	params.FromClass = FromClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.VictoryCore.FormatAsTime
// ()
// Parameters:
// int                            InTime                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseLeadingZero                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceLeadingZeroHour          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShowSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UVictoryCore::FormatAsTime(int InTime, bool UseLeadingZero, bool bForceLeadingZeroHour, bool bShowSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.VictoryCore.FormatAsTime");

	UVictoryCore_FormatAsTime_Params params;
	params.InTime = InTime;
	params.UseLeadingZero = UseLeadingZero;
	params.bForceLeadingZeroHour = bForceLeadingZeroHour;
	params.bShowSeconds = bShowSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.VictoryCore.FloatToDouble
// ()
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// double                         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

double UVictoryCore::FloatToDouble(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.VictoryCore.FloatToDouble");

	UVictoryCore_FloatToDouble_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.VictoryCore.FinishSpawning
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryCore::FinishSpawning(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.VictoryCore.FinishSpawning");

	UVictoryCore_FinishSpawning_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.VictoryCore.FindWorldActors
// ()
// Parameters:
// class UWorld*                  fWorld                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          fContainer                     (Parm, OutParm, ZeroConstructor)
// class UClass*                  fType                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   fTag                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryCore::FindWorldActors(class UWorld* fWorld, class UClass* fType, const struct FName& fTag, TArray<class AActor*>* fContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.VictoryCore.FindWorldActors");

	UVictoryCore_FindWorldActors_Params params;
	params.fWorld = fWorld;
	params.fType = fType;
	params.fTag = fTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (fContainer != nullptr)
		*fContainer = params.fContainer;

	return params.ReturnValue;
}


// Function ShooterGame.VictoryCore.FindActorAIState
// ()
// Parameters:
// class UClass*                  fStateType                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FDinoAttackInfo> fContainerOfStates             (Parm, ZeroConstructor)
// class UPrimalAIState*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPrimalAIState* UVictoryCore::FindActorAIState(class UClass* fStateType, TArray<struct FDinoAttackInfo> fContainerOfStates)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.VictoryCore.FindActorAIState");

	UVictoryCore_FindActorAIState_Params params;
	params.fStateType = fStateType;
	params.fContainerOfStates = fContainerOfStates;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.VictoryCore.CallGlobalLevelEvent
// ()
// Parameters:
// class UWorld*                  ForWorld                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   EventName                      (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryCore::CallGlobalLevelEvent(class UWorld* ForWorld, const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.VictoryCore.CallGlobalLevelEvent");

	UVictoryCore_CallGlobalLevelEvent_Params params;
	params.ForWorld = ForWorld;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.VictoryCore.BPProjectWorldToScreenPosition
// ()
// Parameters:
// struct FVector                 WorldLocation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class APlayerController*       thePC                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UVictoryCore::BPProjectWorldToScreenPosition(const struct FVector& WorldLocation, class APlayerController* thePC)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.VictoryCore.BPProjectWorldToScreenPosition");

	UVictoryCore_BPProjectWorldToScreenPosition_Params params;
	params.WorldLocation = WorldLocation;
	params.thePC = thePC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.VictoryCore.BPGetWeightedRandomIndex
// ()
// Parameters:
// TArray<float>                  pArray                         (Parm, OutParm, ZeroConstructor)
// float                          ForceRand                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVictoryCore::BPGetWeightedRandomIndex(float ForceRand, TArray<float>* pArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.VictoryCore.BPGetWeightedRandomIndex");

	UVictoryCore_BPGetWeightedRandomIndex_Params params;
	params.ForceRand = ForceRand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (pArray != nullptr)
		*pArray = params.pArray;

	return params.ReturnValue;
}


// Function ShooterGame.VictoryCore.BPFLerpFastPure
// ()
// Parameters:
// float                          InMin                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          InMax                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          InPercent                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVictoryCore::BPFLerpFastPure(float InMin, float InMax, float InPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.VictoryCore.BPFLerpFastPure");

	UVictoryCore_BPFLerpFastPure_Params params;
	params.InMin = InMin;
	params.InMax = InMax;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.VictoryCore.BPFLerpFast
// ()
// Parameters:
// float                          InMin                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          InMax                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          InPercent                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVictoryCore::BPFLerpFast(float InMin, float InMax, float InPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.VictoryCore.BPFLerpFast");

	UVictoryCore_BPFLerpFast_Params params;
	params.InMin = InMin;
	params.InMax = InMax;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.VictoryCore.BPFLerp
// ()
// Parameters:
// float                          InMin                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          InMax                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          InPercent                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bClampToMin                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bClampToMax                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVictoryCore::BPFLerp(float InMin, float InMax, float InPercent, bool bClampToMin, bool bClampToMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.VictoryCore.BPFLerp");

	UVictoryCore_BPFLerp_Params params;
	params.InMin = InMin;
	params.InMax = InMax;
	params.InPercent = InPercent;
	params.bClampToMin = bClampToMin;
	params.bClampToMax = bClampToMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.VictoryCore.BPFastTrace
// ()
// Parameters:
// class UWorld*                  TheWorld                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TraceEnd                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TraceStart                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ActorToIgnore                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryCore::BPFastTrace(class UWorld* TheWorld, const struct FVector& TraceEnd, const struct FVector& TraceStart, class AActor* ActorToIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.VictoryCore.BPFastTrace");

	UVictoryCore_BPFastTrace_Params params;
	params.TheWorld = TheWorld;
	params.TraceEnd = TraceEnd;
	params.TraceStart = TraceStart;
	params.ActorToIgnore = ActorToIgnore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
