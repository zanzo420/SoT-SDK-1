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

// Function BP_Sarcophagus.BP_Sarcophagus_C.CanInteract
struct ABP_Sarcophagus_C_CanInteract_Params
{
	class AActor**                                     InInteractor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Sarcophagus.BP_Sarcophagus_C.Open
struct ABP_Sarcophagus_C_Open_Params
{
};

// Function BP_Sarcophagus.BP_Sarcophagus_C.TriggerOpenAnimation
struct ABP_Sarcophagus_C_TriggerOpenAnimation_Params
{
};

// Function BP_Sarcophagus.BP_Sarcophagus_C.GetObjectDisplayName
struct ABP_Sarcophagus_C_GetObjectDisplayName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_Sarcophagus.BP_Sarcophagus_C.GetClosestInteractionPoint
struct ABP_Sarcophagus_C_GetClosestInteractionPoint_Params
{
	struct FVector*                                    ReferencePosition;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              OutInteractionPointRadius;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Sarcophagus.BP_Sarcophagus_C.UserConstructionScript
struct ABP_Sarcophagus_C_UserConstructionScript_Params
{
};

// Function BP_Sarcophagus.BP_Sarcophagus_C.ReceiveBeginPlay
struct ABP_Sarcophagus_C_ReceiveBeginPlay_Params
{
};

// Function BP_Sarcophagus.BP_Sarcophagus_C.Blueprint_OnInteract_Server
struct ABP_Sarcophagus_C_Blueprint_OnInteract_Server_Params
{
	class AActor**                                     InInteractor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Sarcophagus.BP_Sarcophagus_C.Blueprint_OnInteract_Client
struct ABP_Sarcophagus_C_Blueprint_OnInteract_Client_Params
{
	class AActor**                                     InInteractor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Sarcophagus.BP_Sarcophagus_C.ExecuteUbergraph_BP_Sarcophagus
struct ABP_Sarcophagus_C_ExecuteUbergraph_BP_Sarcophagus_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Sarcophagus.BP_Sarcophagus_C.OnHasBeenInteracted__DelegateSignature
struct ABP_Sarcophagus_C_OnHasBeenInteracted__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
