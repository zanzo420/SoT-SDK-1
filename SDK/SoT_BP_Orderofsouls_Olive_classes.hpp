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

// BlueprintGeneratedClass BP_Orderofsouls_Olive.BP_Orderofsouls_Olive_C
// 0x0000 (0x05F8 - 0x05F8)
class ABP_Orderofsouls_Olive_C : public ABP_Orderofsouls_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Orderofsouls_Olive.BP_Orderofsouls_Olive_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
