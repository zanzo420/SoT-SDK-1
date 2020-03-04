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

// Enum Time.ETimeOfDay
enum class ETimeOfDay : uint8_t
{
	Day                            = 0,
	Night                          = 1,
	ETimeOfDay_MAX                 = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Time.GameTime
// 0x0008
struct FGameTime
{
	struct FDateTime                                   DateTimeRepresentation;                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Time.ReplicatedDateTime
// 0x0008
struct FReplicatedDateTime
{
	int64_t                                            Ticks;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Time.ReplicatedAuthoritativeTime
// 0x0010
struct FReplicatedAuthoritativeTime
{
	struct FReplicatedDateTime                         WorldTime;                                                // 0x0000(0x0008)
	struct FReplicatedDateTime                         SyncTime;                                                 // 0x0008(0x0008)
};

// ScriptStruct Time.EventSetDateTime
// 0x0014
struct FEventSetDateTime
{
	int                                                Year;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Month;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Day;                                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Hour;                                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Minute;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif