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

// BlueprintGeneratedClass BP_OnlineAthenaGameMode.BP_OnlineAthenaGameMode_C
// 0x0008 (0x0B78 - 0x0B70)
class ABP_OnlineAthenaGameMode_C : public AOnlineAthenaGameMode
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0B70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_OnlineAthenaGameMode.BP_OnlineAthenaGameMode_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
