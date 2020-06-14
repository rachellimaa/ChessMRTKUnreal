// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUxtBoundingBoxManipulatorComponent;
struct FUxtBoundingBoxAffordanceInfo;
class UUxtGrabTargetComponent;
struct FUxtGrabPointerData;
enum class EUxtBoundingBoxAffordanceKind : uint8;
class AActor;
struct FBox;
enum class EUxtBoundingBoxManipulatorPreset : uint8;
#ifdef UXTOOLS_UxtBoundingBoxManipulatorComponent_generated_h
#error "UxtBoundingBoxManipulatorComponent.generated.h already included, missing '#pragma once' in UxtBoundingBoxManipulatorComponent.h"
#endif
#define UXTOOLS_UxtBoundingBoxManipulatorComponent_generated_h

#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundingBoxManipulatorComponent_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUxtBoundingBoxAffordanceInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UXTOOLS_API UScriptStruct* StaticStruct<struct FUxtBoundingBoxAffordanceInfo>();

#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundingBoxManipulatorComponent_h_95_DELEGATE \
struct _Script_UXTools_eventUxtBoundingBoxManipulationEndedDelegate_Parms \
{ \
	UUxtBoundingBoxManipulatorComponent* Manipulator; \
	FUxtBoundingBoxAffordanceInfo AffordanceInfo; \
	UUxtGrabTargetComponent* GrabbedComponent; \
}; \
static inline void FUxtBoundingBoxManipulationEndedDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtBoundingBoxManipulationEndedDelegate, UUxtBoundingBoxManipulatorComponent* Manipulator, FUxtBoundingBoxAffordanceInfo const& AffordanceInfo, UUxtGrabTargetComponent* GrabbedComponent) \
{ \
	_Script_UXTools_eventUxtBoundingBoxManipulationEndedDelegate_Parms Parms; \
	Parms.Manipulator=Manipulator; \
	Parms.AffordanceInfo=AffordanceInfo; \
	Parms.GrabbedComponent=GrabbedComponent; \
	UxtBoundingBoxManipulationEndedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundingBoxManipulatorComponent_h_89_DELEGATE \
struct _Script_UXTools_eventUxtBoundingBoxManipulationStartedDelegate_Parms \
{ \
	UUxtBoundingBoxManipulatorComponent* Manipulator; \
	FUxtBoundingBoxAffordanceInfo AffordanceInfo; \
	UUxtGrabTargetComponent* GrabbedComponent; \
}; \
static inline void FUxtBoundingBoxManipulationStartedDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtBoundingBoxManipulationStartedDelegate, UUxtBoundingBoxManipulatorComponent* Manipulator, FUxtBoundingBoxAffordanceInfo const& AffordanceInfo, UUxtGrabTargetComponent* GrabbedComponent) \
{ \
	_Script_UXTools_eventUxtBoundingBoxManipulationStartedDelegate_Parms Parms; \
	Parms.Manipulator=Manipulator; \
	Parms.AffordanceInfo=AffordanceInfo; \
	Parms.GrabbedComponent=GrabbedComponent; \
	UxtBoundingBoxManipulationStartedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundingBoxManipulatorComponent_h_104_SPARSE_DATA
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundingBoxManipulatorComponent_h_104_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPointerEndGrab); \
	DECLARE_FUNCTION(execOnPointerUpdateGrab); \
	DECLARE_FUNCTION(execOnPointerBeginGrab); \
	DECLARE_FUNCTION(execComputeBoundsFromComponents); \
	DECLARE_FUNCTION(execGetAffordanceKindActorClass); \
	DECLARE_FUNCTION(execGetUsedAffordances); \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execGetInitBoundsFromActor); \
	DECLARE_FUNCTION(execGetPreset); \
	DECLARE_FUNCTION(execUseCustomAffordances); \
	DECLARE_FUNCTION(execGetCornerAffordanceClass); \
	DECLARE_FUNCTION(execGetEdgeAffordanceClass); \
	DECLARE_FUNCTION(execGetFaceAffordanceClass); \
	DECLARE_FUNCTION(execGetCenterAffordanceClass); \
	DECLARE_FUNCTION(execGetCustomAffordances);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundingBoxManipulatorComponent_h_104_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPointerEndGrab); \
	DECLARE_FUNCTION(execOnPointerUpdateGrab); \
	DECLARE_FUNCTION(execOnPointerBeginGrab); \
	DECLARE_FUNCTION(execComputeBoundsFromComponents); \
	DECLARE_FUNCTION(execGetAffordanceKindActorClass); \
	DECLARE_FUNCTION(execGetUsedAffordances); \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execGetInitBoundsFromActor); \
	DECLARE_FUNCTION(execGetPreset); \
	DECLARE_FUNCTION(execUseCustomAffordances); \
	DECLARE_FUNCTION(execGetCornerAffordanceClass); \
	DECLARE_FUNCTION(execGetEdgeAffordanceClass); \
	DECLARE_FUNCTION(execGetFaceAffordanceClass); \
	DECLARE_FUNCTION(execGetCenterAffordanceClass); \
	DECLARE_FUNCTION(execGetCustomAffordances);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundingBoxManipulatorComponent_h_104_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUxtBoundingBoxManipulatorComponent(); \
	friend struct Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtBoundingBoxManipulatorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtBoundingBoxManipulatorComponent)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundingBoxManipulatorComponent_h_104_INCLASS \
private: \
	static void StaticRegisterNativesUUxtBoundingBoxManipulatorComponent(); \
	friend struct Z_Construct_UClass_UUxtBoundingBoxManipulatorComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtBoundingBoxManipulatorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtBoundingBoxManipulatorComponent)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundingBoxManipulatorComponent_h_104_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtBoundingBoxManipulatorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtBoundingBoxManipulatorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtBoundingBoxManipulatorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtBoundingBoxManipulatorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtBoundingBoxManipulatorComponent(UUxtBoundingBoxManipulatorComponent&&); \
	NO_API UUxtBoundingBoxManipulatorComponent(const UUxtBoundingBoxManipulatorComponent&); \
public:


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundingBoxManipulatorComponent_h_104_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtBoundingBoxManipulatorComponent(UUxtBoundingBoxManipulatorComponent&&); \
	NO_API UUxtBoundingBoxManipulatorComponent(const UUxtBoundingBoxManipulatorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtBoundingBoxManipulatorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtBoundingBoxManipulatorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUxtBoundingBoxManipulatorComponent)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundingBoxManipulatorComponent_h_104_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CenterAffordanceClass() { return STRUCT_OFFSET(UUxtBoundingBoxManipulatorComponent, CenterAffordanceClass); } \
	FORCEINLINE static uint32 __PPO__FaceAffordanceClass() { return STRUCT_OFFSET(UUxtBoundingBoxManipulatorComponent, FaceAffordanceClass); } \
	FORCEINLINE static uint32 __PPO__EdgeAffordanceClass() { return STRUCT_OFFSET(UUxtBoundingBoxManipulatorComponent, EdgeAffordanceClass); } \
	FORCEINLINE static uint32 __PPO__CornerAffordanceClass() { return STRUCT_OFFSET(UUxtBoundingBoxManipulatorComponent, CornerAffordanceClass); } \
	FORCEINLINE static uint32 __PPO__bUseCustomAffordances() { return STRUCT_OFFSET(UUxtBoundingBoxManipulatorComponent, bUseCustomAffordances); } \
	FORCEINLINE static uint32 __PPO__Preset() { return STRUCT_OFFSET(UUxtBoundingBoxManipulatorComponent, Preset); } \
	FORCEINLINE static uint32 __PPO__CustomAffordances() { return STRUCT_OFFSET(UUxtBoundingBoxManipulatorComponent, CustomAffordances); } \
	FORCEINLINE static uint32 __PPO__bInitBoundsFromActor() { return STRUCT_OFFSET(UUxtBoundingBoxManipulatorComponent, bInitBoundsFromActor); } \
	FORCEINLINE static uint32 __PPO__Bounds() { return STRUCT_OFFSET(UUxtBoundingBoxManipulatorComponent, Bounds); }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundingBoxManipulatorComponent_h_101_PROLOG
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundingBoxManipulatorComponent_h_104_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundingBoxManipulatorComponent_h_104_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundingBoxManipulatorComponent_h_104_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundingBoxManipulatorComponent_h_104_RPC_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundingBoxManipulatorComponent_h_104_INCLASS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundingBoxManipulatorComponent_h_104_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundingBoxManipulatorComponent_h_104_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundingBoxManipulatorComponent_h_104_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundingBoxManipulatorComponent_h_104_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundingBoxManipulatorComponent_h_104_RPC_WRAPPERS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundingBoxManipulatorComponent_h_104_INCLASS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundingBoxManipulatorComponent_h_104_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtBoundingBoxManipulatorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundingBoxManipulatorComponent_h


#define FOREACH_ENUM_EUXTBOUNDINGBOXAFFORDANCEACTION(op) \
	op(EUxtBoundingBoxAffordanceAction::Resize) \
	op(EUxtBoundingBoxAffordanceAction::Translate) \
	op(EUxtBoundingBoxAffordanceAction::Scale) \
	op(EUxtBoundingBoxAffordanceAction::Rotate) 

enum class EUxtBoundingBoxAffordanceAction : uint8;
template<> UXTOOLS_API UEnum* StaticEnum<EUxtBoundingBoxAffordanceAction>();

#define FOREACH_ENUM_EUXTBOUNDINGBOXAFFORDANCEKIND(op) \
	op(EUxtBoundingBoxAffordanceKind::Center) \
	op(EUxtBoundingBoxAffordanceKind::Face) \
	op(EUxtBoundingBoxAffordanceKind::Edge) \
	op(EUxtBoundingBoxAffordanceKind::Corner) 

enum class EUxtBoundingBoxAffordanceKind : uint8;
template<> UXTOOLS_API UEnum* StaticEnum<EUxtBoundingBoxAffordanceKind>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
