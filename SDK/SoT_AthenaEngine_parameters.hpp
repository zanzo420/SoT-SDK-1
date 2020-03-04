#pragma once

// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AthenaEngine.BoxCollisionExtentAdjustOverTimeComponent.SetBoxCollisionToAdjust
struct UBoxCollisionExtentAdjustOverTimeComponent_SetBoxCollisionToAdjust_Params
{
	class UBoxComponent*                               InBoxComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaEngine.ForceFeedbackCondition.CanPlayForceFeedback
struct UForceFeedbackCondition_CanPlayForceFeedback_Params
{
	class AActor*                                      InOwner;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
