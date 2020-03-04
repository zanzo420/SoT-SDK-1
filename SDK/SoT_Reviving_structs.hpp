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

// Enum Reviving.EReviveState
enum class EReviveState : uint8_t
{
	Revivable                      = 0,
	NotRevivable                   = 1,
	BeingRevived                   = 2,
	Revived                        = 3,
	EReviveState_MAX               = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Reviving.ReviveableActionStateConstructionInfo
// 0x0038 (0x0068 - 0x0030)
struct FReviveableActionStateConstructionInfo : public FActorActionStateConstructionInfo
{
	class UClass*                                      ActionStateId;                                            // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FDamageInstance                             DamageInstance;                                           // 0x0038(0x0028)
	TEnumAsByte<ECharacterDeathType>                   CharacterDeathType;                                       // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECharacterType>                        CharacterType;                                            // 0x0061(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0062(0x0006) MISSED OFFSET
};

// ScriptStruct Reviving.EventReviveableRepresentationDespawnRequested
// 0x0001
struct FEventReviveableRepresentationDespawnRequested
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Reviving.RevivedActionStateConstructionInfo
// 0x0000 (0x0030 - 0x0030)
struct FRevivedActionStateConstructionInfo : public FActorActionStateConstructionInfo
{

};

// ScriptStruct Reviving.RevivedActionStateParams
// 0x0020
struct FRevivedActionStateParams
{
	float                                              HealthRegained;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PirateAliveShaderInitialAmount;                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PirateAliveShaderTargetAmount;                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PirateAliveShaderDuration;                                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ReviveDuration;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UWwiseEvent*                                 ReviveGaspAudio;                                          // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Reviving.EventCharacterDiedDuringReviving
// 0x0008
struct FEventCharacterDiedDuringReviving
{
	class ACharacter*                                  OwningCharacter;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Reviving.EventCharacterFullyRevived
// 0x0001
struct FEventCharacterFullyRevived
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Reviving.SuccessfulReviveEvent
// 0x0001
struct FSuccessfulReviveEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Reviving.RevivingWindowEnd
// 0x0001
struct FRevivingWindowEnd
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Reviving.RevivingWindowStart
// 0x0030
struct FRevivingWindowStart
{
	struct FDamageInstance                             DamageInstance;                                           // 0x0000(0x0028)
	TEnumAsByte<ECharacterDeathType>                   CharacterDeathType;                                       // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct Reviving.RevivePlayerActionStateConstructionInfo
// 0x0030 (0x0060 - 0x0030)
struct FRevivePlayerActionStateConstructionInfo : public FActorActionStateConstructionInfo
{
	struct FNetActorPtr                                CharacterReviving;                                        // 0x0030(0x0014)
	struct FNetSubObjectPtr                            CharacterBeingRevived;                                    // 0x0044(0x0014)
	class UClass*                                      InputID;                                                  // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
