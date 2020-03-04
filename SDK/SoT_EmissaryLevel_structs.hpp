#pragma once

// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum EmissaryLevel.EBootyRewardType
enum class EBootyRewardType : uint8_t
{
	OwnershipChanged               = 0,
	ItemDroppedOnItem              = 1,
	PlayerKilled                   = 2,
	MAX                            = 3,
	EBootyRewardType_MAX           = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmissaryLevel.EmissaryLevelData
// 0x0040
struct FEmissaryLevelData
{
	int                                                LevelTarget;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GoldMultiplier;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              XPMultiplier;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FStringAssetReference                       EmissaryFlagMeshAssetReference;                           // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TAssetPtr<class UWeightedItemDescSpawnDataAsset>   EmissaryFlotsamSpawnDataAsset;                            // 0x0020(0x0020) (Edit, DisableEditOnInstance)
};

// ScriptStruct EmissaryLevel.EmissaryLevelEntry
// 0x0028
struct FEmissaryLevelEntry
{
	class UClass*                                      Company;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FEmissaryLevelData>                  CompanyLevelData;                                         // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FPlayerStat                                 StatToFireOnEmissaryLevelIncrease;                        // 0x0018(0x0010) (Edit, DisableEditOnInstance)
};

// ScriptStruct EmissaryLevel.EmissaryBootyReward
// 0x0070
struct FEmissaryBootyReward
{
	bool                                               FirstTimeOnly;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NotOriginalOwner;                                         // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FStringAssetReference                       SpecificItemIdent;                                        // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EBootyTypes>                           BootyType;                                                // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FRewardDefinition                           Reward;                                                   // 0x0020(0x0040) (Edit, DisableEditOnInstance)
	struct FString                                     CleanSpecificItemIdent;                                   // 0x0060(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct EmissaryLevel.EmissaryActionRewardData
// 0x0090
struct FEmissaryActionRewardData
{
	TArray<struct FEmissaryBootyReward>                OwnershipChangedRewards;                                  // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FEmissaryBootyReward>                PlacedOnShipRewards;                                      // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FEmissaryBootyReward                        KillEmissaryPlayerReward;                                 // 0x0020(0x0070) (Edit, DisableEditOnInstance)
};

// ScriptStruct EmissaryLevel.EmissaryRewardEntry
// 0x0098
struct FEmissaryRewardEntry
{
	class UClass*                                      Company;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FEmissaryActionRewardData                   ActionRewardData;                                         // 0x0008(0x0090) (Edit, DisableEditOnInstance)
};

// ScriptStruct EmissaryLevel.EmissaryLevelStatusStatInfo
// 0x0010
struct FEmissaryLevelStatusStatInfo
{
	struct FPlayerStat                                 StatToFire;                                               // 0x0000(0x0010) (Edit, DisableEditOnInstance)
};

// ScriptStruct EmissaryLevel.UpdateEmissaryValueForCompany
// 0x001C
struct FUpdateEmissaryValueForCompany
{
	struct FName                                       Company;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       AssociatedCrew;                                           // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                UpdateAmount;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.DeactivateEmissaryForCrew
// 0x0018
struct FDeactivateEmissaryForCrew
{
	struct FName                                       Company;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       AssociatedCrew;                                           // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.ActivateEmissaryForCrew
// 0x0018
struct FActivateEmissaryForCrew
{
	struct FName                                       Company;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       AssociatedCrew;                                           // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissaryLevelChanged
// 0x0014
struct FEmissaryLevelChanged
{
	int                                                NewLevel;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       AssociatedCrew;                                           // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissaryLevelResetProgress
// 0x0001
struct FEmissaryLevelResetProgress
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EmissaryLevel.EmissaryValueUpdateTelemetryEvent
// 0x000C
struct FEmissaryValueUpdateTelemetryEvent
{
	struct FName                                       Company;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                UpdateAmount;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissaryLevelUpdateTelemetryEvent
// 0x000C
struct FEmissaryLevelUpdateTelemetryEvent
{
	struct FName                                       Company;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                NewLevel;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissaryEndTelemetryEvent
// 0x0008
struct FEmissaryEndTelemetryEvent
{
	struct FName                                       Company;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissaryStartTelemetryEvent
// 0x0008
struct FEmissaryStartTelemetryEvent
{
	struct FName                                       Company;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
