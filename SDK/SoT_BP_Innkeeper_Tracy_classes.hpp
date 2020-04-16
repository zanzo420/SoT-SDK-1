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

// BlueprintGeneratedClass BP_Innkeeper_Tracy.BP_Innkeeper_Tracy_C
// 0x0038 (0x0670 - 0x0638)
class ABP_Innkeeper_Tracy_C : public ABP_Innkeeper_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0638(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWwiseEvent*                                 SFX_IdleLoopPlay_1;                                       // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 SFX_IdleLoopStop_1;                                       // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWwiseEmitter                               InnkeeperEmitter_1;                                       // 0x0650(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Innkeeper_Tracy.BP_Innkeeper_Tracy_C");
		return ptr;
	}


	struct FVector GetClosestInteractionPoint(struct FVector* ReferencePosition, float* OutInteractionPointRadius);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_BP_Innkeeper_Tracy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
