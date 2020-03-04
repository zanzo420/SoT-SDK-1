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

// BlueprintGeneratedClass AnimNotify_StartMysteriousStrangerOnboardingCutscene.AnimNotify_StartMysteriousStrangerOnboardingCutscene_C
// 0x0000 (0x0030 - 0x0030)
class UAnimNotify_StartMysteriousStrangerOnboardingCutscene_C : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotify_StartMysteriousStrangerOnboardingCutscene.AnimNotify_StartMysteriousStrangerOnboardingCutscene_C");
		return ptr;
	}


	struct FString GetNotifyName();
	bool Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
