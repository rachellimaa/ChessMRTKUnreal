// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUxtGrabTargetComponent;
struct FUxtGrabPointerData;
struct FTransform;
struct FVector;
#ifdef UXTOOLS_UxtManipulatorComponentBase_generated_h
#error "UxtManipulatorComponentBase.generated.h already included, missing '#pragma once' in UxtManipulatorComponentBase.h"
#endif
#define UXTOOLS_UxtManipulatorComponentBase_generated_h

#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_24_SPARSE_DATA
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnManipulationEnd); \
	DECLARE_FUNCTION(execOnManipulationStarted); \
	DECLARE_FUNCTION(execApplyTargetTransform); \
	DECLARE_FUNCTION(execSetInitialTransform); \
	DECLARE_FUNCTION(execSmoothTransform); \
	DECLARE_FUNCTION(execRotateAboutAxis); \
	DECLARE_FUNCTION(execRotateAroundPivot); \
	DECLARE_FUNCTION(execMoveToTargets);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnManipulationEnd); \
	DECLARE_FUNCTION(execOnManipulationStarted); \
	DECLARE_FUNCTION(execApplyTargetTransform); \
	DECLARE_FUNCTION(execSetInitialTransform); \
	DECLARE_FUNCTION(execSmoothTransform); \
	DECLARE_FUNCTION(execRotateAboutAxis); \
	DECLARE_FUNCTION(execRotateAroundPivot); \
	DECLARE_FUNCTION(execMoveToTargets);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUxtManipulatorComponentBase(); \
	friend struct Z_Construct_UClass_UUxtManipulatorComponentBase_Statics; \
public: \
	DECLARE_CLASS(UUxtManipulatorComponentBase, UUxtGrabTargetComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtManipulatorComponentBase)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUUxtManipulatorComponentBase(); \
	friend struct Z_Construct_UClass_UUxtManipulatorComponentBase_Statics; \
public: \
	DECLARE_CLASS(UUxtManipulatorComponentBase, UUxtGrabTargetComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtManipulatorComponentBase)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtManipulatorComponentBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtManipulatorComponentBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtManipulatorComponentBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtManipulatorComponentBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtManipulatorComponentBase(UUxtManipulatorComponentBase&&); \
	NO_API UUxtManipulatorComponentBase(const UUxtManipulatorComponentBase&); \
public:


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtManipulatorComponentBase(UUxtManipulatorComponentBase&&); \
	NO_API UUxtManipulatorComponentBase(const UUxtManipulatorComponentBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtManipulatorComponentBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtManipulatorComponentBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUxtManipulatorComponentBase)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_24_PRIVATE_PROPERTY_OFFSET
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_21_PROLOG
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_24_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_24_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_24_RPC_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_24_INCLASS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_24_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_24_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_24_INCLASS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtManipulatorComponentBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
