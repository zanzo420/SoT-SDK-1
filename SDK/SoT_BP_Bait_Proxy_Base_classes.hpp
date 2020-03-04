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

// BlueprintGeneratedClass BP_Bait_Proxy_Base.BP_Bait_Proxy_Base_C
// 0x0008 (0x07B8 - 0x07B0)
class ABP_Bait_Proxy_Base_C : public ABP_ProxyIngestible_C
{
public:
	class UTetherCustomisationComponent*               TetherCustomisation;                                      // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Bait_Proxy_Base.BP_Bait_Proxy_Base_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
