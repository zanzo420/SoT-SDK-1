// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaEngine.BoxCollisionExtentAdjustOverTimeComponent.SetBoxCollisionToAdjust
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBoxComponent*           InBoxComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBoxCollisionExtentAdjustOverTimeComponent::SetBoxCollisionToAdjust(class UBoxComponent* InBoxComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEngine.BoxCollisionExtentAdjustOverTimeComponent.SetBoxCollisionToAdjust");

	UBoxCollisionExtentAdjustOverTimeComponent_SetBoxCollisionToAdjust_Params params;
	params.InBoxComponent = InBoxComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEngine.ForceFeedbackCondition.CanPlayForceFeedback
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                  InOwner                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UForceFeedbackCondition::CanPlayForceFeedback(class AActor* InOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEngine.ForceFeedbackCondition.CanPlayForceFeedback");

	UForceFeedbackCondition_CanPlayForceFeedback_Params params;
	params.InOwner = InOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
