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

// BlueprintGeneratedClass BarrelItemTypes_Special_CursedCannonballs.BarrelItemTypes_Special_CursedCannonballs_C
// 0x0000 (0x0080 - 0x0080)
class UBarrelItemTypes_Special_CursedCannonballs_C : public UCannonballItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BarrelItemTypes_Special_CursedCannonballs.BarrelItemTypes_Special_CursedCannonballs_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif