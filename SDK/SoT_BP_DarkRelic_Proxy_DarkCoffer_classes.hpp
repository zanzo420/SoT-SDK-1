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

// BlueprintGeneratedClass BP_DarkRelic_Proxy_DarkCoffer.BP_DarkRelic_Proxy_DarkCoffer_C
// 0x0000 (0x0850 - 0x0850)
class ABP_DarkRelic_Proxy_DarkCoffer_C : public ABP_TreasureChestProxy_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DarkRelic_Proxy_DarkCoffer.BP_DarkRelic_Proxy_DarkCoffer_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
