// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtFarBeamComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtFarBeamComponent() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarBeamComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarBeamComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarPointerComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUxtFarBeamComponent::execOnFarPointerDisabled)
	{
		P_GET_OBJECT(UUxtFarPointerComponent,Z_Param_FarPointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFarPointerDisabled(Z_Param_FarPointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtFarBeamComponent::execOnFarPointerEnabled)
	{
		P_GET_OBJECT(UUxtFarPointerComponent,Z_Param_FarPointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFarPointerEnabled(Z_Param_FarPointer);
		P_NATIVE_END;
	}
	void UUxtFarBeamComponent::StaticRegisterNativesUUxtFarBeamComponent()
	{
		UClass* Class = UUxtFarBeamComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnFarPointerDisabled", &UUxtFarBeamComponent::execOnFarPointerDisabled },
			{ "OnFarPointerEnabled", &UUxtFarBeamComponent::execOnFarPointerEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtFarBeamComponent_OnFarPointerDisabled_Statics
	{
		struct UxtFarBeamComponent_eventOnFarPointerDisabled_Parms
		{
			UUxtFarPointerComponent* FarPointer;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FarPointer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FarPointer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarBeamComponent_OnFarPointerDisabled_Statics::NewProp_FarPointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtFarBeamComponent_OnFarPointerDisabled_Statics::NewProp_FarPointer = { "FarPointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtFarBeamComponent_eventOnFarPointerDisabled_Parms, FarPointer), Z_Construct_UClass_UUxtFarPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarBeamComponent_OnFarPointerDisabled_Statics::NewProp_FarPointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarBeamComponent_OnFarPointerDisabled_Statics::NewProp_FarPointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtFarBeamComponent_OnFarPointerDisabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtFarBeamComponent_OnFarPointerDisabled_Statics::NewProp_FarPointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarBeamComponent_OnFarPointerDisabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtFarBeamComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtFarBeamComponent_OnFarPointerDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtFarBeamComponent, nullptr, "OnFarPointerDisabled", nullptr, nullptr, sizeof(UxtFarBeamComponent_eventOnFarPointerDisabled_Parms), Z_Construct_UFunction_UUxtFarBeamComponent_OnFarPointerDisabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarBeamComponent_OnFarPointerDisabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarBeamComponent_OnFarPointerDisabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarBeamComponent_OnFarPointerDisabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtFarBeamComponent_OnFarPointerDisabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtFarBeamComponent_OnFarPointerDisabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtFarBeamComponent_OnFarPointerEnabled_Statics
	{
		struct UxtFarBeamComponent_eventOnFarPointerEnabled_Parms
		{
			UUxtFarPointerComponent* FarPointer;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FarPointer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FarPointer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarBeamComponent_OnFarPointerEnabled_Statics::NewProp_FarPointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtFarBeamComponent_OnFarPointerEnabled_Statics::NewProp_FarPointer = { "FarPointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtFarBeamComponent_eventOnFarPointerEnabled_Parms, FarPointer), Z_Construct_UClass_UUxtFarPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarBeamComponent_OnFarPointerEnabled_Statics::NewProp_FarPointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarBeamComponent_OnFarPointerEnabled_Statics::NewProp_FarPointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtFarBeamComponent_OnFarPointerEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtFarBeamComponent_OnFarPointerEnabled_Statics::NewProp_FarPointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarBeamComponent_OnFarPointerEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtFarBeamComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtFarBeamComponent_OnFarPointerEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtFarBeamComponent, nullptr, "OnFarPointerEnabled", nullptr, nullptr, sizeof(UxtFarBeamComponent_eventOnFarPointerEnabled_Parms), Z_Construct_UFunction_UUxtFarBeamComponent_OnFarPointerEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarBeamComponent_OnFarPointerEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarBeamComponent_OnFarPointerEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarBeamComponent_OnFarPointerEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtFarBeamComponent_OnFarPointerEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtFarBeamComponent_OnFarPointerEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUxtFarBeamComponent_NoRegister()
	{
		return UUxtFarBeamComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtFarBeamComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoverDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HoverDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtFarBeamComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtFarBeamComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtFarBeamComponent_OnFarPointerDisabled, "OnFarPointerDisabled" }, // 1500792863
		{ &Z_Construct_UFunction_UUxtFarBeamComponent_OnFarPointerEnabled, "OnFarPointerEnabled" }, // 3241900845
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFarBeamComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * When added to an actor with a far pointer, this component displays a beam from the pointer ray start to the current hit point.\n */" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Controls/UxtFarBeamComponent.h" },
		{ "ModuleRelativePath", "Public/Controls/UxtFarBeamComponent.h" },
		{ "ToolTip", "When added to an actor with a far pointer, this component displays a beam from the pointer ray start to the current hit point." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFarBeamComponent_Statics::NewProp_HoverDistance_MetaData[] = {
		{ "Category", "Far Beam" },
		{ "Comment", "/** Distance over the hit surface to place beam end at. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtFarBeamComponent.h" },
		{ "ToolTip", "Distance over the hit surface to place beam end at." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtFarBeamComponent_Statics::NewProp_HoverDistance = { "HoverDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtFarBeamComponent, HoverDistance), METADATA_PARAMS(Z_Construct_UClass_UUxtFarBeamComponent_Statics::NewProp_HoverDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFarBeamComponent_Statics::NewProp_HoverDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtFarBeamComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFarBeamComponent_Statics::NewProp_HoverDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtFarBeamComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtFarBeamComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtFarBeamComponent_Statics::ClassParams = {
		&UUxtFarBeamComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUxtFarBeamComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFarBeamComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtFarBeamComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFarBeamComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtFarBeamComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtFarBeamComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtFarBeamComponent, 6542583);
	template<> UXTOOLS_API UClass* StaticClass<UUxtFarBeamComponent>()
	{
		return UUxtFarBeamComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtFarBeamComponent(Z_Construct_UClass_UUxtFarBeamComponent, &UUxtFarBeamComponent::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtFarBeamComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtFarBeamComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
