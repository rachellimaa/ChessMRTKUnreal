// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UXTOOLS_UxtBoundingBoxManipulatorPresets_generated_h
#error "UxtBoundingBoxManipulatorPresets.generated.h already included, missing '#pragma once' in UxtBoundingBoxManipulatorPresets.h"
#endif
#define UXTOOLS_UxtBoundingBoxManipulatorPresets_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundingBoxManipulatorPresets_h


#define FOREACH_ENUM_EUXTBOUNDINGBOXMANIPULATORPRESET(op) \
	op(EUxtBoundingBoxManipulatorPreset::Default) \
	op(EUxtBoundingBoxManipulatorPreset::Slate2D) \
	op(EUxtBoundingBoxManipulatorPreset::AllResize) \
	op(EUxtBoundingBoxManipulatorPreset::AllTranslate) \
	op(EUxtBoundingBoxManipulatorPreset::AllScale) \
	op(EUxtBoundingBoxManipulatorPreset::AllRotate) 

enum class EUxtBoundingBoxManipulatorPreset : uint8;
template<> UXTOOLS_API UEnum* StaticEnum<EUxtBoundingBoxManipulatorPreset>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
