// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Interactions/UxtGenericManipulatorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtGenericManipulatorComponent() {}
// Cross Module References
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtTwoHandTransformMode();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtOneHandRotationMode();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtGenericManipulationMode();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtGenericManipulatorComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtGenericManipulatorComponent();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtManipulatorComponentBase();
// End Cross Module References
	static UEnum* EUxtTwoHandTransformMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtTwoHandTransformMode, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtTwoHandTransformMode"));
		}
		return Singleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtTwoHandTransformMode>()
	{
		return EUxtTwoHandTransformMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUxtTwoHandTransformMode(EUxtTwoHandTransformMode_StaticEnum, TEXT("/Script/UXTools"), TEXT("EUxtTwoHandTransformMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UXTools_EUxtTwoHandTransformMode_Hash() { return 2366318333U; }
	UEnum* Z_Construct_UEnum_UXTools_EUxtTwoHandTransformMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUxtTwoHandTransformMode"), 0, Get_Z_Construct_UEnum_UXTools_EUxtTwoHandTransformMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUxtTwoHandTransformMode::Translation", (int64)EUxtTwoHandTransformMode::Translation },
				{ "EUxtTwoHandTransformMode::Rotation", (int64)EUxtTwoHandTransformMode::Rotation },
				{ "EUxtTwoHandTransformMode::Scaling", (int64)EUxtTwoHandTransformMode::Scaling },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitflags", "" },
				{ "Comment", "/** Two-handed transformations supported by the generic manipulator. */" },
				{ "ModuleRelativePath", "Public/Interactions/UxtGenericManipulatorComponent.h" },
				{ "Rotation.Comment", "/** Rotation by the line between grab points. */" },
				{ "Rotation.Name", "EUxtTwoHandTransformMode::Rotation" },
				{ "Rotation.ToolTip", "Rotation by the line between grab points." },
				{ "Scaling.Comment", "/** Scaling by distance between grab points. */" },
				{ "Scaling.Name", "EUxtTwoHandTransformMode::Scaling" },
				{ "Scaling.ToolTip", "Scaling by distance between grab points." },
				{ "ToolTip", "Two-handed transformations supported by the generic manipulator." },
				{ "Translation.Comment", "/** Translation by average movement of grab points. */" },
				{ "Translation.Name", "EUxtTwoHandTransformMode::Translation" },
				{ "Translation.ToolTip", "Translation by average movement of grab points." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
				nullptr,
				"EUxtTwoHandTransformMode",
				"EUxtTwoHandTransformMode",
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
	static UEnum* EUxtOneHandRotationMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtOneHandRotationMode, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtOneHandRotationMode"));
		}
		return Singleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtOneHandRotationMode>()
	{
		return EUxtOneHandRotationMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUxtOneHandRotationMode(EUxtOneHandRotationMode_StaticEnum, TEXT("/Script/UXTools"), TEXT("EUxtOneHandRotationMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UXTools_EUxtOneHandRotationMode_Hash() { return 2577443050U; }
	UEnum* Z_Construct_UEnum_UXTools_EUxtOneHandRotationMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUxtOneHandRotationMode"), 0, Get_Z_Construct_UEnum_UXTools_EUxtOneHandRotationMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUxtOneHandRotationMode::MaintainOriginalRotation", (int64)EUxtOneHandRotationMode::MaintainOriginalRotation },
				{ "EUxtOneHandRotationMode::RotateAboutObjectCenter", (int64)EUxtOneHandRotationMode::RotateAboutObjectCenter },
				{ "EUxtOneHandRotationMode::RotateAboutGrabPoint", (int64)EUxtOneHandRotationMode::RotateAboutGrabPoint },
				{ "EUxtOneHandRotationMode::MaintainRotationToUser", (int64)EUxtOneHandRotationMode::MaintainRotationToUser },
				{ "EUxtOneHandRotationMode::GravityAlignedMaintainRotationToUser", (int64)EUxtOneHandRotationMode::GravityAlignedMaintainRotationToUser },
				{ "EUxtOneHandRotationMode::FaceUser", (int64)EUxtOneHandRotationMode::FaceUser },
				{ "EUxtOneHandRotationMode::FaceAwayFromUser", (int64)EUxtOneHandRotationMode::FaceAwayFromUser },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Specifies how the object will rotate when it is being grabbed with one hand. */" },
				{ "FaceAwayFromUser.Comment", "/** Ensures object always faces away from user. Useful for slates/panels that are configured backwards. */" },
				{ "FaceAwayFromUser.Name", "EUxtOneHandRotationMode::FaceAwayFromUser" },
				{ "FaceAwayFromUser.ToolTip", "Ensures object always faces away from user. Useful for slates/panels that are configured backwards." },
				{ "FaceUser.Comment", "/** Ensures object always faces the user. Useful for slates/panels. */" },
				{ "FaceUser.Name", "EUxtOneHandRotationMode::FaceUser" },
				{ "FaceUser.ToolTip", "Ensures object always faces the user. Useful for slates/panels." },
				{ "GravityAlignedMaintainRotationToUser.Comment", "/** Maintains object's original rotation to user, but makes the object vertical. Useful for bounding boxes. */" },
				{ "GravityAlignedMaintainRotationToUser.Name", "EUxtOneHandRotationMode::GravityAlignedMaintainRotationToUser" },
				{ "GravityAlignedMaintainRotationToUser.ToolTip", "Maintains object's original rotation to user, but makes the object vertical. Useful for bounding boxes." },
				{ "MaintainOriginalRotation.Comment", "/** Does not rotate object as it is being moved. */" },
				{ "MaintainOriginalRotation.Name", "EUxtOneHandRotationMode::MaintainOriginalRotation" },
				{ "MaintainOriginalRotation.ToolTip", "Does not rotate object as it is being moved." },
				{ "MaintainRotationToUser.Comment", "/** Maintains the object's original rotation for Y/Z axis to the user. */" },
				{ "MaintainRotationToUser.Name", "EUxtOneHandRotationMode::MaintainRotationToUser" },
				{ "MaintainRotationToUser.ToolTip", "Maintains the object's original rotation for Y/Z axis to the user." },
				{ "ModuleRelativePath", "Public/Interactions/UxtGenericManipulatorComponent.h" },
				{ "RotateAboutGrabPoint.Comment", "/** Only works for articulated hands/controllers. Rotate object as if it was being held by hand/controller. Useful for inspection. */" },
				{ "RotateAboutGrabPoint.Name", "EUxtOneHandRotationMode::RotateAboutGrabPoint" },
				{ "RotateAboutGrabPoint.ToolTip", "Only works for articulated hands/controllers. Rotate object as if it was being held by hand/controller. Useful for inspection." },
				{ "RotateAboutObjectCenter.Comment", "/** Only works for articulated hands/controllers. Rotate object using rotation of the hand/controller, but about the object center point. Useful for inspecting at a distance. */" },
				{ "RotateAboutObjectCenter.Name", "EUxtOneHandRotationMode::RotateAboutObjectCenter" },
				{ "RotateAboutObjectCenter.ToolTip", "Only works for articulated hands/controllers. Rotate object using rotation of the hand/controller, but about the object center point. Useful for inspecting at a distance." },
				{ "ToolTip", "Specifies how the object will rotate when it is being grabbed with one hand." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
				nullptr,
				"EUxtOneHandRotationMode",
				"EUxtOneHandRotationMode",
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
	static UEnum* EUxtGenericManipulationMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtGenericManipulationMode, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtGenericManipulationMode"));
		}
		return Singleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtGenericManipulationMode>()
	{
		return EUxtGenericManipulationMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUxtGenericManipulationMode(EUxtGenericManipulationMode_StaticEnum, TEXT("/Script/UXTools"), TEXT("EUxtGenericManipulationMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UXTools_EUxtGenericManipulationMode_Hash() { return 3040598841U; }
	UEnum* Z_Construct_UEnum_UXTools_EUxtGenericManipulationMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUxtGenericManipulationMode"), 0, Get_Z_Construct_UEnum_UXTools_EUxtGenericManipulationMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUxtGenericManipulationMode::OneHanded", (int64)EUxtGenericManipulationMode::OneHanded },
				{ "EUxtGenericManipulationMode::TwoHanded", (int64)EUxtGenericManipulationMode::TwoHanded },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitflags", "" },
				{ "Comment", "/** Manipulation modes supported by the generic manipulator. */" },
				{ "ModuleRelativePath", "Public/Interactions/UxtGenericManipulatorComponent.h" },
				{ "OneHanded.Comment", "/** Move and rotate objects with one hand. */" },
				{ "OneHanded.Name", "EUxtGenericManipulationMode::OneHanded" },
				{ "OneHanded.ToolTip", "Move and rotate objects with one hand." },
				{ "ToolTip", "Manipulation modes supported by the generic manipulator." },
				{ "TwoHanded.Comment", "/** Move, rotate, scale objects with two hands. */" },
				{ "TwoHanded.Name", "EUxtGenericManipulationMode::TwoHanded" },
				{ "TwoHanded.ToolTip", "Move, rotate, scale objects with two hands." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
				nullptr,
				"EUxtGenericManipulationMode",
				"EUxtGenericManipulationMode",
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
	DEFINE_FUNCTION(UUxtGenericManipulatorComponent::execSetSmoothing)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewSmoothing);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSmoothing(Z_Param_NewSmoothing);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtGenericManipulatorComponent::execGetSmoothing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSmoothing();
		P_NATIVE_END;
	}
	void UUxtGenericManipulatorComponent::StaticRegisterNativesUUxtGenericManipulatorComponent()
	{
		UClass* Class = UUxtGenericManipulatorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSmoothing", &UUxtGenericManipulatorComponent::execGetSmoothing },
			{ "SetSmoothing", &UUxtGenericManipulatorComponent::execSetSmoothing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtGenericManipulatorComponent_GetSmoothing_Statics
	{
		struct UxtGenericManipulatorComponent_eventGetSmoothing_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtGenericManipulatorComponent_GetSmoothing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGenericManipulatorComponent_eventGetSmoothing_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGenericManipulatorComponent_GetSmoothing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGenericManipulatorComponent_GetSmoothing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGenericManipulatorComponent_GetSmoothing_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGenericManipulatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGenericManipulatorComponent_GetSmoothing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGenericManipulatorComponent, nullptr, "GetSmoothing", nullptr, nullptr, sizeof(UxtGenericManipulatorComponent_eventGetSmoothing_Parms), Z_Construct_UFunction_UUxtGenericManipulatorComponent_GetSmoothing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGenericManipulatorComponent_GetSmoothing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGenericManipulatorComponent_GetSmoothing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGenericManipulatorComponent_GetSmoothing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGenericManipulatorComponent_GetSmoothing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtGenericManipulatorComponent_GetSmoothing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtGenericManipulatorComponent_SetSmoothing_Statics
	{
		struct UxtGenericManipulatorComponent_eventSetSmoothing_Parms
		{
			float NewSmoothing;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewSmoothing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtGenericManipulatorComponent_SetSmoothing_Statics::NewProp_NewSmoothing = { "NewSmoothing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGenericManipulatorComponent_eventSetSmoothing_Parms, NewSmoothing), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGenericManipulatorComponent_SetSmoothing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGenericManipulatorComponent_SetSmoothing_Statics::NewProp_NewSmoothing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGenericManipulatorComponent_SetSmoothing_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGenericManipulatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGenericManipulatorComponent_SetSmoothing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGenericManipulatorComponent, nullptr, "SetSmoothing", nullptr, nullptr, sizeof(UxtGenericManipulatorComponent_eventSetSmoothing_Parms), Z_Construct_UFunction_UUxtGenericManipulatorComponent_SetSmoothing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGenericManipulatorComponent_SetSmoothing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGenericManipulatorComponent_SetSmoothing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGenericManipulatorComponent_SetSmoothing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGenericManipulatorComponent_SetSmoothing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtGenericManipulatorComponent_SetSmoothing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUxtGenericManipulatorComponent_NoRegister()
	{
		return UUxtGenericManipulatorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Smoothing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Smoothing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwoHandTransformModes_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TwoHandTransformModes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OneHandRotationMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OneHandRotationMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OneHandRotationMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManipulationModes_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ManipulationModes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUxtManipulatorComponentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtGenericManipulatorComponent_GetSmoothing, "GetSmoothing" }, // 2484316489
		{ &Z_Construct_UFunction_UUxtGenericManipulatorComponent_SetSmoothing, "SetSmoothing" }, // 2922717413
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Generic manipulator that supports both one- and two-handed interactions.\n * \n * One-handed interaction supports linear movement as well as rotation based on the orientation of the hand.\n * Rotation modes can be selected with different axes and pivot points.\n * \n * Two-handed interaction moves the object based on the center between hands.\n * The actor can be rotated based on the line between both hands and scaled based on the distance.\n */" },
		{ "HideCategories", "Grabbable ManipulatorComponent Trigger PhysicsVolume" },
		{ "IncludePath", "Interactions/UxtGenericManipulatorComponent.h" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGenericManipulatorComponent.h" },
		{ "ToolTip", "Generic manipulator that supports both one- and two-handed interactions.\n\nOne-handed interaction supports linear movement as well as rotation based on the orientation of the hand.\nRotation modes can be selected with different axes and pivot points.\n\nTwo-handed interaction moves the object based on the center between hands.\nThe actor can be rotated based on the line between both hands and scaled based on the distance." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_Smoothing_MetaData[] = {
		{ "BlueprintGetter", "GetSmoothing" },
		{ "BlueprintSetter", "SetSmoothing" },
		{ "Category", "GenericManipulator" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Motion smoothing factor to apply while manipulating the object.\n\x09 *\n\x09 * A low-pass filter is applied to the source transform location and rotation to smooth out jittering.\n\x09 * The new actor transform is a exponentially weighted average of the current transform and the raw target transform based on the time step:\n\x09 *\n\x09 * T_final = Lerp( T_current, T_target, Exp(-Smoothing * DeltaSeconds) )\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGenericManipulatorComponent.h" },
		{ "ToolTip", "Motion smoothing factor to apply while manipulating the object.\n\nA low-pass filter is applied to the source transform location and rotation to smooth out jittering.\nThe new actor transform is a exponentially weighted average of the current transform and the raw target transform based on the time step:\n\nT_final = Lerp( T_current, T_target, Exp(-Smoothing * DeltaSeconds) )" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_Smoothing = { "Smoothing", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtGenericManipulatorComponent, Smoothing), METADATA_PARAMS(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_Smoothing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_Smoothing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_TwoHandTransformModes_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EUxtTwoHandTransformMode" },
		{ "Category", "GenericManipulator" },
		{ "Comment", "/** Enabled transformations in two-handed manipulation. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGenericManipulatorComponent.h" },
		{ "ToolTip", "Enabled transformations in two-handed manipulation." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_TwoHandTransformModes = { "TwoHandTransformModes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtGenericManipulatorComponent, TwoHandTransformModes), nullptr, METADATA_PARAMS(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_TwoHandTransformModes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_TwoHandTransformModes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_OneHandRotationMode_MetaData[] = {
		{ "Category", "GenericManipulator" },
		{ "Comment", "/** Mode of rotation to use while using one hand only. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGenericManipulatorComponent.h" },
		{ "ToolTip", "Mode of rotation to use while using one hand only." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_OneHandRotationMode = { "OneHandRotationMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtGenericManipulatorComponent, OneHandRotationMode), Z_Construct_UEnum_UXTools_EUxtOneHandRotationMode, METADATA_PARAMS(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_OneHandRotationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_OneHandRotationMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_OneHandRotationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_ManipulationModes_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EUxtGenericManipulationMode" },
		{ "Category", "GenericManipulator" },
		{ "Comment", "/** Enabled manipulation modes. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGenericManipulatorComponent.h" },
		{ "ToolTip", "Enabled manipulation modes." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_ManipulationModes = { "ManipulationModes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtGenericManipulatorComponent, ManipulationModes), nullptr, METADATA_PARAMS(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_ManipulationModes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_ManipulationModes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_Smoothing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_TwoHandTransformModes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_OneHandRotationMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_OneHandRotationMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_ManipulationModes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtGenericManipulatorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::ClassParams = {
		&UUxtGenericManipulatorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtGenericManipulatorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtGenericManipulatorComponent, 3506778540);
	template<> UXTOOLS_API UClass* StaticClass<UUxtGenericManipulatorComponent>()
	{
		return UUxtGenericManipulatorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtGenericManipulatorComponent(Z_Construct_UClass_UUxtGenericManipulatorComponent, &UUxtGenericManipulatorComponent::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtGenericManipulatorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtGenericManipulatorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
