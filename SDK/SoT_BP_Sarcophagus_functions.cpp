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

// Function BP_Sarcophagus.BP_Sarcophagus_C.CanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 InInteractor                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Sarcophagus_C::CanInteract(class AActor** InInteractor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sarcophagus.BP_Sarcophagus_C.CanInteract");

	ABP_Sarcophagus_C_CanInteract_Params params;
	params.InInteractor = InInteractor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Sarcophagus.BP_Sarcophagus_C.Open
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Sarcophagus_C::Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sarcophagus.BP_Sarcophagus_C.Open");

	ABP_Sarcophagus_C_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Sarcophagus.BP_Sarcophagus_C.TriggerOpenAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Sarcophagus_C::TriggerOpenAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sarcophagus.BP_Sarcophagus_C.TriggerOpenAnimation");

	ABP_Sarcophagus_C_TriggerOpenAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Sarcophagus.BP_Sarcophagus_C.GetObjectDisplayName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABP_Sarcophagus_C::GetObjectDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sarcophagus.BP_Sarcophagus_C.GetObjectDisplayName");

	ABP_Sarcophagus_C_GetObjectDisplayName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Sarcophagus.BP_Sarcophagus_C.GetClosestInteractionPoint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                ReferencePosition              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          OutInteractionPointRadius      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABP_Sarcophagus_C::GetClosestInteractionPoint(struct FVector* ReferencePosition, float* OutInteractionPointRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sarcophagus.BP_Sarcophagus_C.GetClosestInteractionPoint");

	ABP_Sarcophagus_C_GetClosestInteractionPoint_Params params;
	params.ReferencePosition = ReferencePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInteractionPointRadius != nullptr)
		*OutInteractionPointRadius = params.OutInteractionPointRadius;

	return params.ReturnValue;
}


// Function BP_Sarcophagus.BP_Sarcophagus_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Sarcophagus_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sarcophagus.BP_Sarcophagus_C.UserConstructionScript");

	ABP_Sarcophagus_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Sarcophagus.BP_Sarcophagus_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Sarcophagus_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sarcophagus.BP_Sarcophagus_C.ReceiveBeginPlay");

	ABP_Sarcophagus_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Sarcophagus.BP_Sarcophagus_C.Blueprint_OnInteract_Server
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 InInteractor                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Sarcophagus_C::Blueprint_OnInteract_Server(class AActor** InInteractor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sarcophagus.BP_Sarcophagus_C.Blueprint_OnInteract_Server");

	ABP_Sarcophagus_C_Blueprint_OnInteract_Server_Params params;
	params.InInteractor = InInteractor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Sarcophagus.BP_Sarcophagus_C.Blueprint_OnInteract_Client
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 InInteractor                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Sarcophagus_C::Blueprint_OnInteract_Client(class AActor** InInteractor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sarcophagus.BP_Sarcophagus_C.Blueprint_OnInteract_Client");

	ABP_Sarcophagus_C_Blueprint_OnInteract_Client_Params params;
	params.InInteractor = InInteractor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Sarcophagus.BP_Sarcophagus_C.ExecuteUbergraph_BP_Sarcophagus
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Sarcophagus_C::ExecuteUbergraph_BP_Sarcophagus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sarcophagus.BP_Sarcophagus_C.ExecuteUbergraph_BP_Sarcophagus");

	ABP_Sarcophagus_C_ExecuteUbergraph_BP_Sarcophagus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Sarcophagus.BP_Sarcophagus_C.OnHasBeenInteracted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Sarcophagus_C::OnHasBeenInteracted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sarcophagus.BP_Sarcophagus_C.OnHasBeenInteracted__DelegateSignature");

	ABP_Sarcophagus_C_OnHasBeenInteracted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
