// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtBoundingBoxManipulatorPresets.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtBoundingBoxManipulatorPresets() {}
// Cross Module References
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtBoundingBoxManipulatorPreset();
	UPackage* Z_Construct_UPackage__Script_UXTools();
// End Cross Module References
	static UEnum* EUxtBoundingBoxManipulatorPreset_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtBoundingBoxManipulatorPreset, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtBoundingBoxManipulatorPreset"));
		}
		return Singleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtBoundingBoxManipulatorPreset>()
	{
		return EUxtBoundingBoxManipulatorPreset_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUxtBoundingBoxManipulatorPreset(EUxtBoundingBoxManipulatorPreset_StaticEnum, TEXT("/Script/UXTools"), TEXT("EUxtBoundingBoxManipulatorPreset"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UXTools_EUxtBoundingBoxManipulatorPreset_Hash() { return 3908629173U; }
	UEnum* Z_Construct_UEnum_UXTools_EUxtBoundingBoxManipulatorPreset()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUxtBoundingBoxManipulatorPreset"), 0, Get_Z_Construct_UEnum_UXTools_EUxtBoundingBoxManipulatorPreset_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUxtBoundingBoxManipulatorPreset::Default", (int64)EUxtBoundingBoxManipulatorPreset::Default },
				{ "EUxtBoundingBoxManipulatorPreset::Slate2D", (int64)EUxtBoundingBoxManipulatorPreset::Slate2D },
				{ "EUxtBoundingBoxManipulatorPreset::AllResize", (int64)EUxtBoundingBoxManipulatorPreset::AllResize },
				{ "EUxtBoundingBoxManipulatorPreset::AllTranslate", (int64)EUxtBoundingBoxManipulatorPreset::AllTranslate },
				{ "EUxtBoundingBoxManipulatorPreset::AllScale", (int64)EUxtBoundingBoxManipulatorPreset::AllScale },
				{ "EUxtBoundingBoxManipulatorPreset::AllRotate", (int64)EUxtBoundingBoxManipulatorPreset::AllRotate },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllResize.Comment", "/** Full set of affordances, all resizing. */" },
				{ "AllResize.Name", "EUxtBoundingBoxManipulatorPreset::AllResize" },
				{ "AllResize.ToolTip", "Full set of affordances, all resizing." },
				{ "AllRotate.Comment", "/** Full set of affordances, all rotating. */" },
				{ "AllRotate.Name", "EUxtBoundingBoxManipulatorPreset::AllRotate" },
				{ "AllRotate.ToolTip", "Full set of affordances, all rotating." },
				{ "AllScale.Comment", "/** Full set of affordances, all scaling. */" },
				{ "AllScale.Name", "EUxtBoundingBoxManipulatorPreset::AllScale" },
				{ "AllScale.ToolTip", "Full set of affordances, all scaling." },
				{ "AllTranslate.Comment", "/** Full set of affordances, all translating. */" },
				{ "AllTranslate.Name", "EUxtBoundingBoxManipulatorPreset::AllTranslate" },
				{ "AllTranslate.ToolTip", "Full set of affordances, all translating." },
				{ "Comment", "/** Possible presets for common bounding box configurations. */" },
				{ "Default.Comment", "/** Uniform resizing with corners and rotation with edges. */" },
				{ "Default.Name", "EUxtBoundingBoxManipulatorPreset::Default" },
				{ "Default.ToolTip", "Uniform resizing with corners and rotation with edges." },
				{ "ModuleRelativePath", "Public/Controls/UxtBoundingBoxManipulatorPresets.h" },
				{ "Slate2D.Comment", "/** Only front corners and edges are shown, all resize */" },
				{ "Slate2D.Name", "EUxtBoundingBoxManipulatorPreset::Slate2D" },
				{ "Slate2D.ToolTip", "Only front corners and edges are shown, all resize" },
				{ "ToolTip", "Possible presets for common bounding box configurations." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
				nullptr,
				"EUxtBoundingBoxManipulatorPreset",
				"EUxtBoundingBoxManipulatorPreset",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
