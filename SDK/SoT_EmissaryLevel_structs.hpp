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


// Enum EmissaryLevel.EEmissaryDeactivateReason
enum class EEmissaryDeactivateReason : uint8_t
{
	DissociateFromShip             = 0,
	Cancelled                      = 1,
	EEmissaryDeactivateReason_MAX  = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmissaryLevel.EmissaryFlagMeshReferences
// 0x0020
struct FEmissaryFlagMeshReferences
{
	struct FStringAssetReference                       BackOfShipEmissaryFlagMeshAssetReference;                 // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FStringAssetReference                       MastEmissaryFlagMeshAssetReference;                       // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct EmissaryLevel.EmissaryLevelData
// 0x0060
struct FEmissaryLevelData
{
	int                                                LevelTarget;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FEmissaryFlagMeshReferences                 EmissaryFlagMeshAssetReferences;                          // 0x0008(0x0020) (Edit, DisableEditOnInstance)
	TAssetPtr<class UWeightedItemDescSpawnDataAsset>   EmissaryFlotsamSpawnDataAsset;                            // 0x0028(0x0020) (Edit, DisableEditOnInstance)
	struct FRewardId                                   EmissaryDeactivationReward;                               // 0x0048(0x0008) (Edit, DisableEditOnInstance)
	TArray<struct FPlayerStat>                         StatsToFireOnEmissaryLevelReached;                        // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct EmissaryLevel.EmissaryLevelEntry
// 0x0018
struct FEmissaryLevelEntry
{
	class UClass*                                      Company;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FEmissaryLevelData>                  CompanyLevelData;                                         // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct EmissaryLevel.EmissaryEventAward
// 0x0008
struct FEmissaryEventAward
{
	bool                                               FirstTimeOnly;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NotOriginalOwner;                                         // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEmissaryQualityLevel>                 ItemQualityRequirement;                                   // 0x0002(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	int                                                EmissaryLevelIncrease;                                    // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissaryKillPlayerReward
// 0x0018
struct FEmissaryKillPlayerReward
{
	int                                                EmissaryLevelIncrease;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<class UClass*>                              ValidEmissariesToKill;                                    // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct EmissaryLevel.EmissaryActionRewardData
// 0x0038
struct FEmissaryActionRewardData
{
	TArray<struct FEmissaryEventAward>                 OwnershipChangedRewards;                                  // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FEmissaryEventAward>                 PlacedOnShipRewards;                                      // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FEmissaryKillPlayerReward                   KillPlayerReward;                                         // 0x0020(0x0018) (Edit, DisableEditOnInstance)
};

// ScriptStruct EmissaryLevel.EmissaryRewardEntry
// 0x0040
struct FEmissaryRewardEntry
{
	class UClass*                                      Company;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FEmissaryActionRewardData                   ActionRewardData;                                         // 0x0008(0x0038) (Edit, DisableEditOnInstance)
};

// ScriptStruct EmissaryLevel.CrewMemberVotes
// 0x0020
struct FCrewMemberVotes
{
	struct FGuid                                       CrewId;                                                   // 0x0000(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class APlayerState*>                        MemberVotes;                                              // 0x0010(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct EmissaryLevel.EmissaryLevelStatusStatInfo
// 0x0010
struct FEmissaryLevelStatusStatInfo
{
	struct FPlayerStat                                 StatToFire;                                               // 0x0000(0x0010) (Edit, DisableEditOnInstance)
};

// ScriptStruct EmissaryLevel.ChaliceStatuePhaseUpdate
// 0x0004
struct FChaliceStatuePhaseUpdate
{
	int                                                NewLevel;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryLevel.EmissaryProgressUpdatedNetworkEvent
// 0x0010 (0x0020 - 0x0010)
struct FEmissaryProgressUpdatedNetworkEvent : public FNetworkEventStruct
{
	float                                              OldRepTotal;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              NewRepTotal;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       CompanyId;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
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
// 0x0020
struct FDeactivateEmissaryForCrew
{
	struct FName                                       Company;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       AssociatedCrew;                                           // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEmissaryDeactivateReason>             EmissaryDeactivateReason;                                 // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                EmissaryTotal;                                            // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
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
