// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtBoundingBoxManipulatorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtBoundingBoxManipulatorComponent() {}
// Cross Module References
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationEndedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister();
	UXTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_NoRegister();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationStartedDelegate__DelegateSignature();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtBoundingBoxAffordanceAction();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtBoundingBoxAffordanceKind();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtBoundingBoxManipulatorPreset();
	UXTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FUxtGrabPointerData();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationEndedDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtBoundingBoxManipulationEndedDelegate_Parms
		{
			UUxtBoundingBoxManipulatorComponent* Manipulator;
			FUxtBoundingBoxAffordanceInfo AffordanceInfo;
			UUxtGrabTargetComponent* GrabbedComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabbedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrabbedComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AffordanceInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AffordanceInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Manipulator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Manipulator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationEndedDelegate__DelegateSignature_Statics::NewProp_GrabbedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationEndedDelegate__DelegateSignature_Statics::NewProp_GrabbedComponent = { "GrabbedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtBoundingBoxManipulationEndedDelegate_Parms, GrabbedComponent), Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationEndedDelegate__DelegateSignature_Statics::NewProp_GrabbedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationEndedDelegate__DelegateSignature_Statics::NewProp_GrabbedComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationEndedDelegate__DelegateSignature_Statics::NewProp_AffordanceInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationEndedDelegate__DelegateSignature_Statics::NewProp_AffordanceInfo = { "AffordanceInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtBoundingBoxManipulationEndedDelegate_Parms, AffordanceInfo), Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationEndedDelegate__DelegateSignature_Statics::NewProp_AffordanceInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationEndedDelegate__DelegateSignature_Statics::NewProp_AffordanceInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationEndedDelegate__DelegateSignature_Statics::NewProp_Manipulator_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationEndedDelegate__DelegateSignature_Statics::NewProp_Manipulator = { "Manipulator", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtBoundingBoxManipulationEndedDelegate_Parms, Manipulator), Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationEndedDelegate__DelegateSignature_Statics::NewProp_Manipulator_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationEndedDelegate__DelegateSignature_Statics::NewProp_Manipulator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationEndedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationEndedDelegate__DelegateSignature_Statics::NewProp_GrabbedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationEndedDelegate__DelegateSignature_Statics::NewProp_AffordanceInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationEndedDelegate__DelegateSignature_Statics::NewProp_Manipulator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationEndedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationEndedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtBoundingBoxManipulationEndedDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_UXTools_eventUxtBoundingBoxManipulationEndedDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationEndedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationEndedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationEndedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationEndedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationEndedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationEndedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationStartedDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtBoundingBoxManipulationStartedDelegate_Parms
		{
			UUxtBoundingBoxManipulatorComponent* Manipulator;
			FUxtBoundingBoxAffordanceInfo AffordanceInfo;
			UUxtGrabTargetComponent* GrabbedComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabbedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrabbedComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AffordanceInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AffordanceInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Manipulator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Manipulator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationStartedDelegate__DelegateSignature_Statics::NewProp_GrabbedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationStartedDelegate__DelegateSignature_Statics::NewProp_GrabbedComponent = { "GrabbedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtBoundingBoxManipulationStartedDelegate_Parms, GrabbedComponent), Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationStartedDelegate__DelegateSignature_Statics::NewProp_GrabbedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationStartedDelegate__DelegateSignature_Statics::NewProp_GrabbedComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationStartedDelegate__DelegateSignature_Statics::NewProp_AffordanceInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationStartedDelegate__DelegateSignature_Statics::NewProp_AffordanceInfo = { "AffordanceInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtBoundingBoxManipulationStartedDelegate_Parms, AffordanceInfo), Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationStartedDelegate__DelegateSignature_Statics::NewProp_AffordanceInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationStartedDelegate__DelegateSignature_Statics::NewProp_AffordanceInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationStartedDelegate__DelegateSignature_Statics::NewProp_Manipulator_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationStartedDelegate__DelegateSignature_Statics::NewProp_Manipulator = { "Manipulator", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtBoundingBoxManipulationStartedDelegate_Parms, Manipulator), Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationStartedDelegate__DelegateSignature_Statics::NewProp_Manipulator_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationStartedDelegate__DelegateSignature_Statics::NewProp_Manipulator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationStartedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationStartedDelegate__DelegateSignature_Statics::NewProp_GrabbedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationStartedDelegate__DelegateSignature_Statics::NewProp_AffordanceInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationStartedDelegate__DelegateSignature_Statics::NewProp_Manipulator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationStartedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationStartedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtBoundingBoxManipulationStartedDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_UXTools_eventUxtBoundingBoxManipulationStartedDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationStartedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationStartedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationStartedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationStartedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationStartedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationStartedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EUxtBoundingBoxAffordanceAction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtBoundingBoxAffordanceAction, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtBoundingBoxAffordanceAction"));
		}
		return Singleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtBoundingBoxAffordanceAction>()
	{
		return EUxtBoundingBoxAffordanceAction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUxtBoundingBoxAffordanceAction(EUxtBoundingBoxAffordanceAction_StaticEnum, TEXT("/Script/UXTools"), TEXT("EUxtBoundingBoxAffordanceAction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UXTools_EUxtBoundingBoxAffordanceAction_Hash() { return 2548772604U; }
	UEnum* Z_Construct_UEnum_UXTools_EUxtBoundingBoxAffordanceAction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUxtBoundingBoxAffordanceAction"), 0, Get_Z_Construct_UEnum_UXTools_EUxtBoundingBoxAffordanceAction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUxtBoundingBoxAffordanceAction::Resize", (int64)EUxtBoundingBoxAffordanceAction::Resize },
				{ "EUxtBoundingBoxAffordanceAction::Translate", (int64)EUxtBoundingBoxAffordanceAction::Translate },
				{ "EUxtBoundingBoxAffordanceAction::Scale", (int64)EUxtBoundingBoxAffordanceAction::Scale },
				{ "EUxtBoundingBoxAffordanceAction::Rotate", (int64)EUxtBoundingBoxAffordanceAction::Rotate },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Defines which effect moving an affordance has on the bounding box. */" },
				{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
				{ "Resize.Comment", "/** Move only one side of the bounding box. */" },
				{ "Resize.Name", "EUxtBoundingBoxAffordanceAction::Resize" },
				{ "Resize.ToolTip", "Move only one side of the bounding box." },
				{ "Rotate.Comment", "/** Rotate the bounding box about its center point. */" },
				{ "Rotate.Name", "EUxtBoundingBoxAffordanceAction::Rotate" },
				{ "Rotate.ToolTip", "Rotate the bounding box about its center point." },
				{ "Scale.Comment", "/** Scale the bounding box, moving both sides in opposite directions. */" },
				{ "Scale.Name", "EUxtBoundingBoxAffordanceAction::Scale" },
				{ "Scale.ToolTip", "Scale the bounding box, moving both sides in opposite directions." },
				{ "ToolTip", "Defines which effect moving an affordance has on the bounding box." },
				{ "Translate.Comment", "/** Move both sides of the bounding box. */" },
				{ "Translate.Name", "EUxtBoundingBoxAffordanceAction::Translate" },
				{ "Translate.ToolTip", "Move both sides of the bounding box." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
				nullptr,
				"EUxtBoundingBoxAffordanceAction",
				"EUxtBoundingBoxAffordanceAction",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EUxtBoundingBoxAffordanceKind_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtBoundingBoxAffordanceKind, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtBoundingBoxAffordanceKind"));
		}
		return Singleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtBoundingBoxAffordanceKind>()
	{
		return EUxtBoundingBoxAffordanceKind_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUxtBoundingBoxAffordanceKind(EUxtBoundingBoxAffordanceKind_StaticEnum, TEXT("/Script/UXTools"), TEXT("EUxtBoundingBoxAffordanceKind"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UXTools_EUxtBoundingBoxAffordanceKind_Hash() { return 2563921852U; }
	UEnum* Z_Construct_UEnum_UXTools_EUxtBoundingBoxAffordanceKind()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUxtBoundingBoxAffordanceKind"), 0, Get_Z_Construct_UEnum_UXTools_EUxtBoundingBoxAffordanceKind_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUxtBoundingBoxAffordanceKind::Center", (int64)EUxtBoundingBoxAffordanceKind::Center },
				{ "EUxtBoundingBoxAffordanceKind::Face", (int64)EUxtBoundingBoxAffordanceKind::Face },
				{ "EUxtBoundingBoxAffordanceKind::Edge", (int64)EUxtBoundingBoxAffordanceKind::Edge },
				{ "EUxtBoundingBoxAffordanceKind::Corner", (int64)EUxtBoundingBoxAffordanceKind::Corner },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Center.Name", "EUxtBoundingBoxAffordanceKind::Center" },
				{ "Comment", "/** Defines the kind of actor that should be spawned for an affordance. */" },
				{ "Corner.Name", "EUxtBoundingBoxAffordanceKind::Corner" },
				{ "Edge.Name", "EUxtBoundingBoxAffordanceKind::Edge" },
				{ "Face.Name", "EUxtBoundingBoxAffordanceKind::Face" },
				{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
				{ "ToolTip", "Defines the kind of actor that should be spawned for an affordance." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
				nullptr,
				"EUxtBoundingBoxAffordanceKind",
				"EUxtBoundingBoxAffordanceKind",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FUxtBoundingBoxAffordanceInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UXTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo, Z_Construct_UPackage__Script_UXTools(), TEXT("UxtBoundingBoxAffordanceInfo"), sizeof(FUxtBoundingBoxAffordanceInfo), Get_Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Hash());
	}
	return Singleton;
}
template<> UXTOOLS_API UScriptStruct* StaticStruct<FUxtBoundingBoxAffordanceInfo>()
{
	return FUxtBoundingBoxAffordanceInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUxtBoundingBoxAffordanceInfo(FUxtBoundingBoxAffordanceInfo::StaticStruct, TEXT("/Script/UXTools"), TEXT("UxtBoundingBoxAffordanceInfo"), false, nullptr, nullptr);
static struct FScriptStruct_UXTools_StaticRegisterNativesFUxtBoundingBoxAffordanceInfo
{
	FScriptStruct_UXTools_StaticRegisterNativesFUxtBoundingBoxAffordanceInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UxtBoundingBoxAffordanceInfo")),new UScriptStruct::TCppStructOps<FUxtBoundingBoxAffordanceInfo>);
	}
} ScriptStruct_UXTools_StaticRegisterNativesFUxtBoundingBoxAffordanceInfo;
	struct Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Kind_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Kind;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Kind_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintMatrix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstraintMatrix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundsRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundsRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundsLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundsLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Action;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Action_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Affordances are grabbable actors placed on the bounding box which enable interaction. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
		{ "ToolTip", "Affordances are grabbable actors placed on the bounding box which enable interaction." },
	};
#endif
	void* Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUxtBoundingBoxAffordanceInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::NewProp_Kind_MetaData[] = {
		{ "Category", "Bounding Box" },
		{ "Comment", "/**\n\x09 * Kind of actor class to use if no explicit actor class is set.\n\x09 * In this case the matching actor class from the bounding box component will be used.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
		{ "ToolTip", "Kind of actor class to use if no explicit actor class is set.\nIn this case the matching actor class from the bounding box component will be used." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::NewProp_Kind = { "Kind", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtBoundingBoxAffordanceInfo, Kind), Z_Construct_UEnum_UXTools_EUxtBoundingBoxAffordanceKind, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::NewProp_Kind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::NewProp_Kind_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::NewProp_Kind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::NewProp_ActorClass_MetaData[] = {
		{ "Category", "Bounding Box" },
		{ "Comment", "/** Actor that will be spawned to represent the affordance. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
		{ "ToolTip", "Actor that will be spawned to represent the affordance." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtBoundingBoxAffordanceInfo, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::NewProp_ActorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::NewProp_ConstraintMatrix_MetaData[] = {
		{ "Category", "Bounding Box" },
		{ "Comment", "/**\n\x09 * Constraint matrix defining possible movement directions or rotation axes.\n\x09 * Drag vectors during interaction are multiplied with this matrix.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
		{ "ToolTip", "Constraint matrix defining possible movement directions or rotation axes.\nDrag vectors during interaction are multiplied with this matrix." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::NewProp_ConstraintMatrix = { "ConstraintMatrix", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtBoundingBoxAffordanceInfo, ConstraintMatrix), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::NewProp_ConstraintMatrix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::NewProp_ConstraintMatrix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::NewProp_BoundsRotation_MetaData[] = {
		{ "Category", "Bounding Box" },
		{ "Comment", "/** Rotation of the affordance in bounding box space. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
		{ "ToolTip", "Rotation of the affordance in bounding box space." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::NewProp_BoundsRotation = { "BoundsRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtBoundingBoxAffordanceInfo, BoundsRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::NewProp_BoundsRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::NewProp_BoundsRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::NewProp_BoundsLocation_MetaData[] = {
		{ "Category", "Bounding Box" },
		{ "Comment", "/** Location of the affordance in normalized bounding box space (-1..1). */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
		{ "ToolTip", "Location of the affordance in normalized bounding box space (-1..1)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::NewProp_BoundsLocation = { "BoundsLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtBoundingBoxAffordanceInfo, BoundsLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::NewProp_BoundsLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::NewProp_BoundsLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::NewProp_Action_MetaData[] = {
		{ "Category", "Bounding Box" },
		{ "Comment", "/** Action to perform when the affordance is grabbed. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
		{ "ToolTip", "Action to perform when the affordance is grabbed." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtBoundingBoxAffordanceInfo, Action), Z_Construct_UEnum_UXTools_EUxtBoundingBoxAffordanceAction, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::NewProp_Action_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::NewProp_Kind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::NewProp_Kind_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::NewProp_ActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::NewProp_ConstraintMatrix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::NewProp_BoundsRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::NewProp_BoundsLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::NewProp_Action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::NewProp_Action_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
		nullptr,
		&NewStructOps,
		"UxtBoundingBoxAffordanceInfo",
		sizeof(FUxtBoundingBoxAffordanceInfo),
		alignof(FUxtBoundingBoxAffordanceInfo),
		Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UxtBoundingBoxAffordanceInfo"), sizeof(FUxtBoundingBoxAffordanceInfo), Get_Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Hash() { return 1975842344U; }
	DEFINE_FUNCTION(UUxtBoundingBoxManipulatorComponent::execOnPointerEndGrab)
	{
		P_GET_OBJECT(UUxtGrabTargetComponent,Z_Param_Grabbable);
		P_GET_STRUCT(FUxtGrabPointerData,Z_Param_GrabPointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPointerEndGrab(Z_Param_Grabbable,Z_Param_GrabPointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtBoundingBoxManipulatorComponent::execOnPointerUpdateGrab)
	{
		P_GET_OBJECT(UUxtGrabTargetComponent,Z_Param_Grabbable);
		P_GET_STRUCT(FUxtGrabPointerData,Z_Param_GrabPointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPointerUpdateGrab(Z_Param_Grabbable,Z_Param_GrabPointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtBoundingBoxManipulatorComponent::execOnPointerBeginGrab)
	{
		P_GET_OBJECT(UUxtGrabTargetComponent,Z_Param_Grabbable);
		P_GET_STRUCT(FUxtGrabPointerData,Z_Param_GrabPointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPointerBeginGrab(Z_Param_Grabbable,Z_Param_GrabPointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtBoundingBoxManipulatorComponent::execComputeBoundsFromComponents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ComputeBoundsFromComponents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtBoundingBoxManipulatorComponent::execGetAffordanceKindActorClass)
	{
		P_GET_ENUM(EUxtBoundingBoxAffordanceKind,Z_Param_Kind);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<AActor> *)Z_Param__Result=P_THIS->GetAffordanceKindActorClass(EUxtBoundingBoxAffordanceKind(Z_Param_Kind));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtBoundingBoxManipulatorComponent::execGetUsedAffordances)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FUxtBoundingBoxAffordanceInfo>*)Z_Param__Result=P_THIS->GetUsedAffordances();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtBoundingBoxManipulatorComponent::execGetBounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBox*)Z_Param__Result=P_THIS->GetBounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtBoundingBoxManipulatorComponent::execGetInitBoundsFromActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetInitBoundsFromActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtBoundingBoxManipulatorComponent::execGetPreset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EUxtBoundingBoxManipulatorPreset*)Z_Param__Result=P_THIS->GetPreset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtBoundingBoxManipulatorComponent::execUseCustomAffordances)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UseCustomAffordances();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtBoundingBoxManipulatorComponent::execGetCornerAffordanceClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<AActor> *)Z_Param__Result=P_THIS->GetCornerAffordanceClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtBoundingBoxManipulatorComponent::execGetEdgeAffordanceClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<AActor> *)Z_Param__Result=P_THIS->GetEdgeAffordanceClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtBoundingBoxManipulatorComponent::execGetFaceAffordanceClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<AActor> *)Z_Param__Result=P_THIS->GetFaceAffordanceClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtBoundingBoxManipulatorComponent::execGetCenterAffordanceClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<AActor> *)Z_Param__Result=P_THIS->GetCenterAffordanceClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtBoundingBoxManipulatorComponent::execGetCustomAffordances)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FUxtBoundingBoxAffordanceInfo>*)Z_Param__Result=P_THIS->GetCustomAffordances();
		P_NATIVE_END;
	}
	void UUxtBoundingBoxManipulatorComponent::StaticRegisterNativesUUxtBoundingBoxManipulatorComponent()
	{
		UClass* Class = UUxtBoundingBoxManipulatorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ComputeBoundsFromComponents", &UUxtBoundingBoxManipulatorComponent::execComputeBoundsFromComponents },
			{ "GetAffordanceKindActorClass", &UUxtBoundingBoxManipulatorComponent::execGetAffordanceKindActorClass },
			{ "GetBounds", &UUxtBoundingBoxManipulatorComponent::execGetBounds },
			{ "GetCenterAffordanceClass", &UUxtBoundingBoxManipulatorComponent::execGetCenterAffordanceClass },
			{ "GetCornerAffordanceClass", &UUxtBoundingBoxManipulatorComponent::execGetCornerAffordanceClass },
			{ "GetCustomAffordances", &UUxtBoundingBoxManipulatorComponent::execGetCustomAffordances },
			{ "GetEdgeAffordanceClass", &UUxtBoundingBoxManipulatorComponent::execGetEdgeAffordanceClass },
			{ "GetFaceAffordanceClass", &UUxtBoundingBoxManipulatorComponent::execGetFaceAffordanceClass },
			{ "GetInitBoundsFromActor", &UUxtBoundingBoxManipulatorComponent::execGetInitBoundsFromActor },
			{ "GetPreset", &UUxtBoundingBoxManipulatorComponent::execGetPreset },
			{ "GetUsedAffordances", &UUxtBoundingBoxManipulatorComponent::execGetUsedAffordances },
			{ "OnPointerBeginGrab", &UUxtBoundingBoxManipulatorComponent::execOnPointerBeginGrab },
			{ "OnPointerEndGrab", &UUxtBoundingBoxManipulatorComponent::execOnPointerEndGrab },
			{ "OnPointerUpdateGrab", &UUxtBoundingBoxManipulatorComponent::execOnPointerUpdateGrab },
			{ "UseCustomAffordances", &UUxtBoundingBoxManipulatorComponent::execUseCustomAffordances },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_ComputeBoundsFromComponents_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_ComputeBoundsFromComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bounding Box" },
		{ "Comment", "/** Compute the bounding box based on the components of the bounding box actor. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
		{ "ToolTip", "Compute the bounding box based on the components of the bounding box actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_ComputeBoundsFromComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent, nullptr, "ComputeBoundsFromComponents", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_ComputeBoundsFromComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_ComputeBoundsFromComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_ComputeBoundsFromComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_ComputeBoundsFromComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetAffordanceKindActorClass_Statics
	{
		struct UxtBoundingBoxManipulatorComponent_eventGetAffordanceKindActorClass_Parms
		{
			EUxtBoundingBoxAffordanceKind Kind;
			TSubclassOf<AActor>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Kind;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Kind_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetAffordanceKindActorClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBoundingBoxManipulatorComponent_eventGetAffordanceKindActorClass_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetAffordanceKindActorClass_Statics::NewProp_Kind = { "Kind", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBoundingBoxManipulatorComponent_eventGetAffordanceKindActorClass_Parms, Kind), Z_Construct_UEnum_UXTools_EUxtBoundingBoxAffordanceKind, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetAffordanceKindActorClass_Statics::NewProp_Kind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetAffordanceKindActorClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetAffordanceKindActorClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetAffordanceKindActorClass_Statics::NewProp_Kind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetAffordanceKindActorClass_Statics::NewProp_Kind_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetAffordanceKindActorClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bounding Box" },
		{ "Comment", "/** Actor class that will be instantiated for the given kind of affordance. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
		{ "ToolTip", "Actor class that will be instantiated for the given kind of affordance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetAffordanceKindActorClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent, nullptr, "GetAffordanceKindActorClass", nullptr, nullptr, sizeof(UxtBoundingBoxManipulatorComponent_eventGetAffordanceKindActorClass_Parms), Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetAffordanceKindActorClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetAffordanceKindActorClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetAffordanceKindActorClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetAffordanceKindActorClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetAffordanceKindActorClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetAffordanceKindActorClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetBounds_Statics
	{
		struct UxtBoundingBoxManipulatorComponent_eventGetBounds_Parms
		{
			FBox ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetBounds_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBoundingBoxManipulatorComponent_eventGetBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetBounds_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetBounds_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetBounds_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Bounding Box" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent, nullptr, "GetBounds", nullptr, nullptr, sizeof(UxtBoundingBoxManipulatorComponent_eventGetBounds_Parms), Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCenterAffordanceClass_Statics
	{
		struct UxtBoundingBoxManipulatorComponent_eventGetCenterAffordanceClass_Parms
		{
			TSubclassOf<AActor>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCenterAffordanceClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBoundingBoxManipulatorComponent_eventGetCenterAffordanceClass_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCenterAffordanceClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCenterAffordanceClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCenterAffordanceClass_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Bounding Box" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCenterAffordanceClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent, nullptr, "GetCenterAffordanceClass", nullptr, nullptr, sizeof(UxtBoundingBoxManipulatorComponent_eventGetCenterAffordanceClass_Parms), Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCenterAffordanceClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCenterAffordanceClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCenterAffordanceClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCenterAffordanceClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCenterAffordanceClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCenterAffordanceClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCornerAffordanceClass_Statics
	{
		struct UxtBoundingBoxManipulatorComponent_eventGetCornerAffordanceClass_Parms
		{
			TSubclassOf<AActor>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCornerAffordanceClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBoundingBoxManipulatorComponent_eventGetCornerAffordanceClass_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCornerAffordanceClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCornerAffordanceClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCornerAffordanceClass_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Bounding Box" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCornerAffordanceClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent, nullptr, "GetCornerAffordanceClass", nullptr, nullptr, sizeof(UxtBoundingBoxManipulatorComponent_eventGetCornerAffordanceClass_Parms), Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCornerAffordanceClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCornerAffordanceClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCornerAffordanceClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCornerAffordanceClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCornerAffordanceClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCornerAffordanceClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCustomAffordances_Statics
	{
		struct UxtBoundingBoxManipulatorComponent_eventGetCustomAffordances_Parms
		{
			TArray<FUxtBoundingBoxAffordanceInfo> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCustomAffordances_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCustomAffordances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBoundingBoxManipulatorComponent_eventGetCustomAffordances_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCustomAffordances_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCustomAffordances_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCustomAffordances_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCustomAffordances_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCustomAffordances_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCustomAffordances_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCustomAffordances_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Bounding Box" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCustomAffordances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent, nullptr, "GetCustomAffordances", nullptr, nullptr, sizeof(UxtBoundingBoxManipulatorComponent_eventGetCustomAffordances_Parms), Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCustomAffordances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCustomAffordances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCustomAffordances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCustomAffordances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCustomAffordances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCustomAffordances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetEdgeAffordanceClass_Statics
	{
		struct UxtBoundingBoxManipulatorComponent_eventGetEdgeAffordanceClass_Parms
		{
			TSubclassOf<AActor>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetEdgeAffordanceClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBoundingBoxManipulatorComponent_eventGetEdgeAffordanceClass_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetEdgeAffordanceClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetEdgeAffordanceClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetEdgeAffordanceClass_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Bounding Box" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetEdgeAffordanceClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent, nullptr, "GetEdgeAffordanceClass", nullptr, nullptr, sizeof(UxtBoundingBoxManipulatorComponent_eventGetEdgeAffordanceClass_Parms), Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetEdgeAffordanceClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetEdgeAffordanceClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetEdgeAffordanceClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetEdgeAffordanceClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetEdgeAffordanceClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetEdgeAffordanceClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetFaceAffordanceClass_Statics
	{
		struct UxtBoundingBoxManipulatorComponent_eventGetFaceAffordanceClass_Parms
		{
			TSubclassOf<AActor>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetFaceAffordanceClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBoundingBoxManipulatorComponent_eventGetFaceAffordanceClass_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetFaceAffordanceClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetFaceAffordanceClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetFaceAffordanceClass_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Bounding Box" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetFaceAffordanceClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent, nullptr, "GetFaceAffordanceClass", nullptr, nullptr, sizeof(UxtBoundingBoxManipulatorComponent_eventGetFaceAffordanceClass_Parms), Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetFaceAffordanceClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetFaceAffordanceClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetFaceAffordanceClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetFaceAffordanceClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetFaceAffordanceClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetFaceAffordanceClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetInitBoundsFromActor_Statics
	{
		struct UxtBoundingBoxManipulatorComponent_eventGetInitBoundsFromActor_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetInitBoundsFromActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtBoundingBoxManipulatorComponent_eventGetInitBoundsFromActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetInitBoundsFromActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtBoundingBoxManipulatorComponent_eventGetInitBoundsFromActor_Parms), &Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetInitBoundsFromActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetInitBoundsFromActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetInitBoundsFromActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetInitBoundsFromActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Bounding Box" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetInitBoundsFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent, nullptr, "GetInitBoundsFromActor", nullptr, nullptr, sizeof(UxtBoundingBoxManipulatorComponent_eventGetInitBoundsFromActor_Parms), Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetInitBoundsFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetInitBoundsFromActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetInitBoundsFromActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetInitBoundsFromActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetInitBoundsFromActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetInitBoundsFromActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetPreset_Statics
	{
		struct UxtBoundingBoxManipulatorComponent_eventGetPreset_Parms
		{
			EUxtBoundingBoxManipulatorPreset ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetPreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBoundingBoxManipulatorComponent_eventGetPreset_Parms, ReturnValue), Z_Construct_UEnum_UXTools_EUxtBoundingBoxManipulatorPreset, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetPreset_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetPreset_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetPreset_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetPreset_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Bounding Box" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent, nullptr, "GetPreset", nullptr, nullptr, sizeof(UxtBoundingBoxManipulatorComponent_eventGetPreset_Parms), Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetUsedAffordances_Statics
	{
		struct UxtBoundingBoxManipulatorComponent_eventGetUsedAffordances_Parms
		{
			TArray<FUxtBoundingBoxAffordanceInfo> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetUsedAffordances_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetUsedAffordances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBoundingBoxManipulatorComponent_eventGetUsedAffordances_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetUsedAffordances_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetUsedAffordances_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetUsedAffordances_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetUsedAffordances_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetUsedAffordances_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetUsedAffordances_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetUsedAffordances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bounding Box" },
		{ "Comment", "/**\n\x09 * Get the list of affordances that will be used for the bounding box.\n\x09 * This can be a based on a preset or a custom set of affordances.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
		{ "ToolTip", "Get the list of affordances that will be used for the bounding box.\nThis can be a based on a preset or a custom set of affordances." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetUsedAffordances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent, nullptr, "GetUsedAffordances", nullptr, nullptr, sizeof(UxtBoundingBoxManipulatorComponent_eventGetUsedAffordances_Parms), Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetUsedAffordances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetUsedAffordances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetUsedAffordances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetUsedAffordances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetUsedAffordances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetUsedAffordances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerBeginGrab_Statics
	{
		struct UxtBoundingBoxManipulatorComponent_eventOnPointerBeginGrab_Parms
		{
			UUxtGrabTargetComponent* Grabbable;
			FUxtGrabPointerData GrabPointer;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrabPointer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grabbable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Grabbable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerBeginGrab_Statics::NewProp_GrabPointer = { "GrabPointer", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBoundingBoxManipulatorComponent_eventOnPointerBeginGrab_Parms, GrabPointer), Z_Construct_UScriptStruct_FUxtGrabPointerData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerBeginGrab_Statics::NewProp_Grabbable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerBeginGrab_Statics::NewProp_Grabbable = { "Grabbable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBoundingBoxManipulatorComponent_eventOnPointerBeginGrab_Parms, Grabbable), Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerBeginGrab_Statics::NewProp_Grabbable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerBeginGrab_Statics::NewProp_Grabbable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerBeginGrab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerBeginGrab_Statics::NewProp_GrabPointer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerBeginGrab_Statics::NewProp_Grabbable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerBeginGrab_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Callback when an affordance is being grabbed. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
		{ "ToolTip", "Callback when an affordance is being grabbed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerBeginGrab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent, nullptr, "OnPointerBeginGrab", nullptr, nullptr, sizeof(UxtBoundingBoxManipulatorComponent_eventOnPointerBeginGrab_Parms), Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerBeginGrab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerBeginGrab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerBeginGrab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerBeginGrab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerBeginGrab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerBeginGrab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerEndGrab_Statics
	{
		struct UxtBoundingBoxManipulatorComponent_eventOnPointerEndGrab_Parms
		{
			UUxtGrabTargetComponent* Grabbable;
			FUxtGrabPointerData GrabPointer;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrabPointer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grabbable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Grabbable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerEndGrab_Statics::NewProp_GrabPointer = { "GrabPointer", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBoundingBoxManipulatorComponent_eventOnPointerEndGrab_Parms, GrabPointer), Z_Construct_UScriptStruct_FUxtGrabPointerData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerEndGrab_Statics::NewProp_Grabbable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerEndGrab_Statics::NewProp_Grabbable = { "Grabbable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBoundingBoxManipulatorComponent_eventOnPointerEndGrab_Parms, Grabbable), Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerEndGrab_Statics::NewProp_Grabbable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerEndGrab_Statics::NewProp_Grabbable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerEndGrab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerEndGrab_Statics::NewProp_GrabPointer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerEndGrab_Statics::NewProp_Grabbable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerEndGrab_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Callback when an affordance is being released. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
		{ "ToolTip", "Callback when an affordance is being released." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerEndGrab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent, nullptr, "OnPointerEndGrab", nullptr, nullptr, sizeof(UxtBoundingBoxManipulatorComponent_eventOnPointerEndGrab_Parms), Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerEndGrab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerEndGrab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerEndGrab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerEndGrab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerEndGrab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerEndGrab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerUpdateGrab_Statics
	{
		struct UxtBoundingBoxManipulatorComponent_eventOnPointerUpdateGrab_Parms
		{
			UUxtGrabTargetComponent* Grabbable;
			FUxtGrabPointerData GrabPointer;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrabPointer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grabbable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Grabbable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerUpdateGrab_Statics::NewProp_GrabPointer = { "GrabPointer", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBoundingBoxManipulatorComponent_eventOnPointerUpdateGrab_Parms, GrabPointer), Z_Construct_UScriptStruct_FUxtGrabPointerData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerUpdateGrab_Statics::NewProp_Grabbable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerUpdateGrab_Statics::NewProp_Grabbable = { "Grabbable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBoundingBoxManipulatorComponent_eventOnPointerUpdateGrab_Parms, Grabbable), Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerUpdateGrab_Statics::NewProp_Grabbable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerUpdateGrab_Statics::NewProp_Grabbable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerUpdateGrab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerUpdateGrab_Statics::NewProp_GrabPointer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerUpdateGrab_Statics::NewProp_Grabbable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerUpdateGrab_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Callback when an affordance is being grabbed. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
		{ "ToolTip", "Callback when an affordance is being grabbed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerUpdateGrab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent, nullptr, "OnPointerUpdateGrab", nullptr, nullptr, sizeof(UxtBoundingBoxManipulatorComponent_eventOnPointerUpdateGrab_Parms), Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerUpdateGrab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerUpdateGrab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerUpdateGrab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerUpdateGrab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerUpdateGrab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerUpdateGrab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_UseCustomAffordances_Statics
	{
		struct UxtBoundingBoxManipulatorComponent_eventUseCustomAffordances_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_UseCustomAffordances_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtBoundingBoxManipulatorComponent_eventUseCustomAffordances_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_UseCustomAffordances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtBoundingBoxManipulatorComponent_eventUseCustomAffordances_Parms), &Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_UseCustomAffordances_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_UseCustomAffordances_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_UseCustomAffordances_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_UseCustomAffordances_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Bounding Box" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_UseCustomAffordances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent, nullptr, "UseCustomAffordances", nullptr, nullptr, sizeof(UxtBoundingBoxManipulatorComponent_eventUseCustomAffordances_Parms), Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_UseCustomAffordances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_UseCustomAffordances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_UseCustomAffordances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_UseCustomAffordances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_UseCustomAffordances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_UseCustomAffordances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_NoRegister()
	{
		return UUxtBoundingBoxManipulatorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInitBoundsFromActor_MetaData[];
#endif
		static void NewProp_bInitBoundsFromActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitBoundsFromActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomAffordances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomAffordances;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomAffordances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Preset;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Preset_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomAffordances_MetaData[];
#endif
		static void NewProp_bUseCustomAffordances_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomAffordances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CornerAffordanceClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CornerAffordanceClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeAffordanceClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EdgeAffordanceClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FaceAffordanceClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FaceAffordanceClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterAffordanceClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CenterAffordanceClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnManipulationEnded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnManipulationEnded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnManipulationStarted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnManipulationStarted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_ComputeBoundsFromComponents, "ComputeBoundsFromComponents" }, // 705121934
		{ &Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetAffordanceKindActorClass, "GetAffordanceKindActorClass" }, // 214880221
		{ &Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetBounds, "GetBounds" }, // 1474666929
		{ &Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCenterAffordanceClass, "GetCenterAffordanceClass" }, // 189171294
		{ &Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCornerAffordanceClass, "GetCornerAffordanceClass" }, // 2598523989
		{ &Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetCustomAffordances, "GetCustomAffordances" }, // 2785418717
		{ &Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetEdgeAffordanceClass, "GetEdgeAffordanceClass" }, // 3492824081
		{ &Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetFaceAffordanceClass, "GetFaceAffordanceClass" }, // 4275641998
		{ &Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetInitBoundsFromActor, "GetInitBoundsFromActor" }, // 1320831623
		{ &Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetPreset, "GetPreset" }, // 2278025320
		{ &Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_GetUsedAffordances, "GetUsedAffordances" }, // 242366941
		{ &Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerBeginGrab, "OnPointerBeginGrab" }, // 1101187683
		{ &Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerEndGrab, "OnPointerEndGrab" }, // 1405151404
		{ &Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_OnPointerUpdateGrab, "OnPointerUpdateGrab" }, // 3228024965
		{ &Z_Construct_UFunction_UUxtBoundingBoxManipulatorComponent_UseCustomAffordances, "UseCustomAffordances" }, // 2521176880
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Manages a set of affordances that can be manipulated for changing the actor transform.\n */" },
		{ "IncludePath", "Controls/UxtBoundingBoxManipulatorComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
		{ "ToolTip", "Manages a set of affordances that can be manipulated for changing the actor transform." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_Bounds_MetaData[] = {
		{ "BlueprintGetter", "GetBounds" },
		{ "Category", "Bounding Box" },
		{ "Comment", "/** Current bounding box in the local space of the actor. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
		{ "ToolTip", "Current bounding box in the local space of the actor." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0040000000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtBoundingBoxManipulatorComponent, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_Bounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_bInitBoundsFromActor_MetaData[] = {
		{ "BlueprintGetter", "GetInitBoundsFromActor" },
		{ "Category", "Bounding Box" },
		{ "Comment", "/** Initialize bounds from actor content. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
		{ "ToolTip", "Initialize bounds from actor content." },
	};
#endif
	void Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_bInitBoundsFromActor_SetBit(void* Obj)
	{
		((UUxtBoundingBoxManipulatorComponent*)Obj)->bInitBoundsFromActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_bInitBoundsFromActor = { "bInitBoundsFromActor", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtBoundingBoxManipulatorComponent), &Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_bInitBoundsFromActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_bInitBoundsFromActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_bInitBoundsFromActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_CustomAffordances_MetaData[] = {
		{ "BlueprintGetter", "GetCustomAffordances" },
		{ "Category", "Bounding Box" },
		{ "Comment", "/**\n\x09 * List of custom affordances.\n\x09 * These affordances will only be used when using the Custom preset.\n\x09 */" },
		{ "EditCondition", "bUseCustomAffordances" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
		{ "ToolTip", "List of custom affordances.\nThese affordances will only be used when using the Custom preset." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_CustomAffordances = { "CustomAffordances", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtBoundingBoxManipulatorComponent, CustomAffordances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_CustomAffordances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_CustomAffordances_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_CustomAffordances_Inner = { "CustomAffordances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_Preset_MetaData[] = {
		{ "BlueprintGetter", "GetPreset" },
		{ "Category", "Bounding Box" },
		{ "Comment", "/**\n\x09 * Preset to use for the bounding box.\n\x09 * When set to Custom the list of affordances must be created by the user.\n\x09 */" },
		{ "EditCondition", "!bUseCustomAffordances" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
		{ "ToolTip", "Preset to use for the bounding box.\nWhen set to Custom the list of affordances must be created by the user." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtBoundingBoxManipulatorComponent, Preset), Z_Construct_UEnum_UXTools_EUxtBoundingBoxManipulatorPreset, METADATA_PARAMS(Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_Preset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_Preset_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_Preset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_bUseCustomAffordances_MetaData[] = {
		{ "BlueprintGetter", "UseCustomAffordances" },
		{ "Category", "Bounding Box" },
		{ "Comment", "/** Use a custom set of affordances instead of a preset. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
		{ "ToolTip", "Use a custom set of affordances instead of a preset." },
	};
#endif
	void Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_bUseCustomAffordances_SetBit(void* Obj)
	{
		((UUxtBoundingBoxManipulatorComponent*)Obj)->bUseCustomAffordances = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_bUseCustomAffordances = { "bUseCustomAffordances", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtBoundingBoxManipulatorComponent), &Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_bUseCustomAffordances_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_bUseCustomAffordances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_bUseCustomAffordances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_CornerAffordanceClass_MetaData[] = {
		{ "BlueprintGetter", "GetCornerAffordanceClass" },
		{ "Category", "Bounding Box" },
		{ "Comment", "/** Actor class to instantiate for a corner affordances. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
		{ "ToolTip", "Actor class to instantiate for a corner affordances." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_CornerAffordanceClass = { "CornerAffordanceClass", nullptr, (EPropertyFlags)0x0044000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtBoundingBoxManipulatorComponent, CornerAffordanceClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_CornerAffordanceClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_CornerAffordanceClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_EdgeAffordanceClass_MetaData[] = {
		{ "BlueprintGetter", "GetEdgeAffordanceClass" },
		{ "Category", "Bounding Box" },
		{ "Comment", "/** Actor class to instantiate for a edge affordances. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
		{ "ToolTip", "Actor class to instantiate for a edge affordances." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_EdgeAffordanceClass = { "EdgeAffordanceClass", nullptr, (EPropertyFlags)0x0044000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtBoundingBoxManipulatorComponent, EdgeAffordanceClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_EdgeAffordanceClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_EdgeAffordanceClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_FaceAffordanceClass_MetaData[] = {
		{ "BlueprintGetter", "GetFaceAffordanceClass" },
		{ "Category", "Bounding Box" },
		{ "Comment", "/** Actor class to instantiate for a face affordances. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
		{ "ToolTip", "Actor class to instantiate for a face affordances." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_FaceAffordanceClass = { "FaceAffordanceClass", nullptr, (EPropertyFlags)0x0044000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtBoundingBoxManipulatorComponent, FaceAffordanceClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_FaceAffordanceClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_FaceAffordanceClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_CenterAffordanceClass_MetaData[] = {
		{ "BlueprintGetter", "GetCenterAffordanceClass" },
		{ "Category", "Bounding Box" },
		{ "Comment", "/** Actor class to instantiate for a center affordance. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
		{ "ToolTip", "Actor class to instantiate for a center affordance." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_CenterAffordanceClass = { "CenterAffordanceClass", nullptr, (EPropertyFlags)0x0044000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtBoundingBoxManipulatorComponent, CenterAffordanceClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_CenterAffordanceClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_CenterAffordanceClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_OnManipulationEnded_MetaData[] = {
		{ "Category", "Bounding Box" },
		{ "Comment", "/** Event raised when a manipulation is ended. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
		{ "ToolTip", "Event raised when a manipulation is ended." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_OnManipulationEnded = { "OnManipulationEnded", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtBoundingBoxManipulatorComponent, OnManipulationEnded), Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationEndedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_OnManipulationEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_OnManipulationEnded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_OnManipulationStarted_MetaData[] = {
		{ "Category", "Bounding Box" },
		{ "Comment", "/** Event raised when a manipulation is started. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorComponent.h" },
		{ "ToolTip", "Event raised when a manipulation is started." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_OnManipulationStarted = { "OnManipulationStarted", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtBoundingBoxManipulatorComponent, OnManipulationStarted), Z_Construct_UDelegateFunction_UXTools_UxtBoundingBoxManipulationStartedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_OnManipulationStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_OnManipulationStarted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_bInitBoundsFromActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_CustomAffordances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_CustomAffordances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_Preset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_Preset_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_bUseCustomAffordances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_CornerAffordanceClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_EdgeAffordanceClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_FaceAffordanceClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_CenterAffordanceClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_OnManipulationEnded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::NewProp_OnManipulationStarted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtBoundingBoxManipulatorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::ClassParams = {
		&UUxtBoundingBoxManipulatorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtBoundingBoxManipulatorComponent, 2549253060);
	template<> UXTOOLS_API UClass* StaticClass<UUxtBoundingBoxManipulatorComponent>()
	{
		return UUxtBoundingBoxManipulatorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtBoundingBoxManipulatorComponent(Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent, &UUxtBoundingBoxManipulatorComponent::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtBoundingBoxManipulatorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtBoundingBoxManipulatorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
