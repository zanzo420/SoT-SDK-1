#pragma once

// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EmissaryLevel.EmissaryEntitlementCategory
// 0x0000 (0x0080 - 0x0080)
class UEmissaryEntitlementCategory : public UItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.EmissaryEntitlementCategory");
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryEntitlementDesc
// 0x0000 (0x00D8 - 0x00D8)
class UEmissaryEntitlementDesc : public UEntitlementDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.EmissaryEntitlementDesc");
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryFlotsamItemSpawnComponent
// 0x0080 (0x04A0 - 0x0420)
class UEmissaryFlotsamItemSpawnComponent : public UItemSpawnComponent
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0420(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.EmissaryFlotsamItemSpawnComponent");
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryLevelSettingsAsset
// 0x0030 (0x0058 - 0x0028)
class UEmissaryLevelSettingsAsset : public UDataAsset
{
public:
	TArray<struct FEmissaryLevelEntry>                 EmissaryLevelData;                                        // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FEmissaryFlagMeshReferences                 DefaultEmissaryFlagAssetReferences;                       // 0x0038(0x0020) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.EmissaryLevelSettingsAsset");
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryLevelService
// 0x0108 (0x0518 - 0x0410)
class AEmissaryLevelService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0410(0x0068) MISSED OFFSET
	class UEmissaryLevelSettingsAsset*                 Settings;                                                 // 0x0478(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEmissaryRewardSettingsAsset*                RewardSettings;                                           // 0x0480(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x90];                                      // 0x0488(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.EmissaryLevelService");
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryParticipantComponent
// 0x0028 (0x00F0 - 0x00C8)
class UEmissaryParticipantComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00C8(0x0018) MISSED OFFSET
	int                                                EmissaryLevel;                                            // 0x00E0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	struct FName                                       AffiliatedCompany;                                        // 0x00E4(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.EmissaryParticipantComponent");
		return ptr;
	}


	void OnRep_EmissaryLevel();
};


// Class EmissaryLevel.EmissaryRewardSettingsAsset
// 0x0010 (0x0038 - 0x0028)
class UEmissaryRewardSettingsAsset : public UDataAsset
{
public:
	TArray<struct FEmissaryRewardEntry>                EmissaryRewardData;                                       // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.EmissaryRewardSettingsAsset");
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryVoyageInlineVoteConsumerBase
// 0x0060 (0x0090 - 0x0030)
class UEmissaryVoyageInlineVoteConsumerBase : public UVoteConsumerInlineBase
{
public:
	class UVoteValidatorInlineBase*                    Validator;                                                // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0038(0x0040) MISSED OFFSET
	TArray<struct FCrewMemberVotes>                    Votes;                                                    // 0x0078(0x0010) (Net, ZeroConstructor, Transient)
	class AActor*                                      OwningActor;                                              // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.EmissaryVoyageInlineVoteConsumerBase");
		return ptr;
	}


	void OnRep_Votes();
};


// Class EmissaryLevel.StartEmissaryVoyageInlineVoteConsumer
// 0x0150 (0x01E0 - 0x0090)
class UStartEmissaryVoyageInlineVoteConsumer : public UEmissaryVoyageInlineVoteConsumerBase
{
public:
	struct FText                                       EmissaryVotingCastVote;                                   // 0x0090(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       EmissaryVotingCantVote;                                   // 0x00C8(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       EmissaryVotingCantVoteReasonCrewShipOutsideRange;         // 0x0100(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       EmissaryVotingCantVoteReasonNoEmissaryEntitlement;        // 0x0138(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       EmissaryVotingRemoveVote;                                 // 0x0170(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       EmissaryVotingCantRemoveVote;                             // 0x01A8(0x0038) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.StartEmissaryVoyageInlineVoteConsumer");
		return ptr;
	}

};


// Class EmissaryLevel.StopEmissaryVoyageInlineVoteConsumer
// 0x0150 (0x01E0 - 0x0090)
class UStopEmissaryVoyageInlineVoteConsumer : public UEmissaryVoyageInlineVoteConsumerBase
{
public:
	struct FText                                       EmissaryVotingCastVote;                                   // 0x0090(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       EmissaryVotingCantVote;                                   // 0x00C8(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       EmissaryVotingCantVoteReasonCrewShipOutsideRange;         // 0x0100(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       EmissaryVotingCantVoteReasonActiveForDifferentCompany;    // 0x0138(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       EmissaryVotingRemoveVote;                                 // 0x0170(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       EmissaryVotingCantRemoveVote;                             // 0x01A8(0x0038) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.StopEmissaryVoyageInlineVoteConsumer");
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryVoyageVoteValidatorBase
// 0x0048 (0x0078 - 0x0030)
class UEmissaryVoyageVoteValidatorBase : public UVoteValidatorInlineBase
{
public:
	class UClass*                                      TargetCompany;                                            // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      RequiredEntitlement;                                      // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0040(0x0030) MISSED OFFSET
	float                                              ShipDistanceCanVoteInCentimetre;                          // 0x0070(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.EmissaryVoyageVoteValidatorBase");
		return ptr;
	}

};


// Class EmissaryLevel.StartEmissaryVoyageInlineVoteValidator
// 0x0000 (0x0078 - 0x0078)
class UStartEmissaryVoyageInlineVoteValidator : public UEmissaryVoyageVoteValidatorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.StartEmissaryVoyageInlineVoteValidator");
		return ptr;
	}

};


// Class EmissaryLevel.StopEmissaryVoyageInlineVoteValidator
// 0x0000 (0x0078 - 0x0078)
class UStopEmissaryVoyageInlineVoteValidator : public UEmissaryVoyageVoteValidatorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.StopEmissaryVoyageInlineVoteValidator");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
