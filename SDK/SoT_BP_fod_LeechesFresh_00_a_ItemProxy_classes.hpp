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

// BlueprintGeneratedClass BP_fod_LeechesFresh_00_a_ItemProxy.BP_fod_LeechesFresh_00_a_ItemProxy_C
// 0x0000 (0x07B8 - 0x07B8)
class ABP_fod_LeechesFresh_00_a_ItemProxy_C : public ABP_Bait_Proxy_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_fod_LeechesFresh_00_a_ItemProxy.BP_fod_LeechesFresh_00_a_ItemProxy_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
