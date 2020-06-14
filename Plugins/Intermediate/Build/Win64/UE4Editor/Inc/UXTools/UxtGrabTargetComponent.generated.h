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
struct FVector;
struct FTransform;
struct FRotator;
class UUxtNearPointerComponent;
class UUxtFarPointerComponent;
#ifdef UXTOOLS_UxtGrabTargetComponent_generated_h
#error "UxtGrabTargetComponent.generated.h already included, missing '#pragma once' in UxtGrabTargetComponent.h"
#endif
#define UXTOOLS_UxtGrabTargetComponent_generated_h

#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UXTOOLS_API UScriptStruct* StaticStruct<struct FUxtGrabPointerData>();

#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_108_DELEGATE \
struct _Script_UXTools_eventUxtEndGrabDelegate_Parms \
{ \
	UUxtGrabTargetComponent* Grabbable; \
	FUxtGrabPointerData GrabPointer; \
}; \
static inline void FUxtEndGrabDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtEndGrabDelegate, UUxtGrabTargetComponent* Grabbable, FUxtGrabPointerData GrabPointer) \
{ \
	_Script_UXTools_eventUxtEndGrabDelegate_Parms Parms; \
	Parms.Grabbable=Grabbable; \
	Parms.GrabPointer=GrabPointer; \
	UxtEndGrabDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_106_DELEGATE \
struct _Script_UXTools_eventUxtUpdateGrabDelegate_Parms \
{ \
	UUxtGrabTargetComponent* Grabbable; \
	FUxtGrabPointerData GrabPointer; \
}; \
static inline void FUxtUpdateGrabDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtUpdateGrabDelegate, UUxtGrabTargetComponent* Grabbable, FUxtGrabPointerData GrabPointer) \
{ \
	_Script_UXTools_eventUxtUpdateGrabDelegate_Parms Parms; \
	Parms.Grabbable=Grabbable; \
	Parms.GrabPointer=GrabPointer; \
	UxtUpdateGrabDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_104_DELEGATE \
struct _Script_UXTools_eventUxtBeginGrabDelegate_Parms \
{ \
	UUxtGrabTargetComponent* Grabbable; \
	FUxtGrabPointerData GrabPointer; \
}; \
static inline void FUxtBeginGrabDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtBeginGrabDelegate, UUxtGrabTargetComponent* Grabbable, FUxtGrabPointerData GrabPointer) \
{ \
	_Script_UXTools_eventUxtBeginGrabDelegate_Parms Parms; \
	Parms.Grabbable=Grabbable; \
	Parms.GrabPointer=GrabPointer; \
	UxtBeginGrabDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_57_SPARSE_DATA
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_57_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPointerLocation); \
	DECLARE_FUNCTION(execGetPointerTransform); \
	DECLARE_FUNCTION(execGetRotationOffset); \
	DECLARE_FUNCTION(execGetLocationOffset); \
	DECLARE_FUNCTION(execGetTargetTransform); \
	DECLARE_FUNCTION(execGetTargetRotation); \
	DECLARE_FUNCTION(execGetTargetLocation); \
	DECLARE_FUNCTION(execGetGrabTransform); \
	DECLARE_FUNCTION(execGetGrabRotation); \
	DECLARE_FUNCTION(execGetGrabLocation);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPointerLocation); \
	DECLARE_FUNCTION(execGetPointerTransform); \
	DECLARE_FUNCTION(execGetRotationOffset); \
	DECLARE_FUNCTION(execGetLocationOffset); \
	DECLARE_FUNCTION(execGetTargetTransform); \
	DECLARE_FUNCTION(execGetTargetRotation); \
	DECLARE_FUNCTION(execGetTargetLocation); \
	DECLARE_FUNCTION(execGetGrabTransform); \
	DECLARE_FUNCTION(execGetGrabRotation); \
	DECLARE_FUNCTION(execGetGrabLocation);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUxtGrabPointerDataFunctionLibrary(); \
	friend struct Z_Construct_UClass_UUxtGrabPointerDataFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UUxtGrabPointerDataFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtGrabPointerDataFunctionLibrary)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_57_INCLASS \
private: \
	static void StaticRegisterNativesUUxtGrabPointerDataFunctionLibrary(); \
	friend struct Z_Construct_UClass_UUxtGrabPointerDataFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UUxtGrabPointerDataFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtGrabPointerDataFunctionLibrary)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtGrabPointerDataFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtGrabPointerDataFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtGrabPointerDataFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtGrabPointerDataFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtGrabPointerDataFunctionLibrary(UUxtGrabPointerDataFunctionLibrary&&); \
	NO_API UUxtGrabPointerDataFunctionLibrary(const UUxtGrabPointerDataFunctionLibrary&); \
public:


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtGrabPointerDataFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtGrabPointerDataFunctionLibrary(UUxtGrabPointerDataFunctionLibrary&&); \
	NO_API UUxtGrabPointerDataFunctionLibrary(const UUxtGrabPointerDataFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtGrabPointerDataFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtGrabPointerDataFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtGrabPointerDataFunctionLibrary)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_57_PRIVATE_PROPERTY_OFFSET
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_54_PROLOG
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_57_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_57_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_57_RPC_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_57_INCLASS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_57_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_57_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_57_INCLASS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtGrabPointerDataFunctionLibrary>();

#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_122_SPARSE_DATA
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_122_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGrabPointers); \
	DECLARE_FUNCTION(execSetTickOnlyWhileGrabbed); \
	DECLARE_FUNCTION(execGetTickOnlyWhileGrabbed); \
	DECLARE_FUNCTION(execGetTargetCentroid); \
	DECLARE_FUNCTION(execGetGrabPointCentroid); \
	DECLARE_FUNCTION(execGetSecondaryGrabPointer); \
	DECLARE_FUNCTION(execGetPrimaryGrabPointer); \
	DECLARE_FUNCTION(execFindGrabPointer);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGrabPointers); \
	DECLARE_FUNCTION(execSetTickOnlyWhileGrabbed); \
	DECLARE_FUNCTION(execGetTickOnlyWhileGrabbed); \
	DECLARE_FUNCTION(execGetTargetCentroid); \
	DECLARE_FUNCTION(execGetGrabPointCentroid); \
	DECLARE_FUNCTION(execGetSecondaryGrabPointer); \
	DECLARE_FUNCTION(execGetPrimaryGrabPointer); \
	DECLARE_FUNCTION(execFindGrabPointer);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_122_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUxtGrabTargetComponent(); \
	friend struct Z_Construct_UClass_UUxtGrabTargetComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtGrabTargetComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtGrabTargetComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UUxtGrabTargetComponent*>(this); }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_122_INCLASS \
private: \
	static void StaticRegisterNativesUUxtGrabTargetComponent(); \
	friend struct Z_Construct_UClass_UUxtGrabTargetComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtGrabTargetComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtGrabTargetComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UUxtGrabTargetComponent*>(this); }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_122_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtGrabTargetComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtGrabTargetComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtGrabTargetComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtGrabTargetComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtGrabTargetComponent(UUxtGrabTargetComponent&&); \
	NO_API UUxtGrabTargetComponent(const UUxtGrabTargetComponent&); \
public:


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_122_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtGrabTargetComponent(UUxtGrabTargetComponent&&); \
	NO_API UUxtGrabTargetComponent(const UUxtGrabTargetComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtGrabTargetComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtGrabTargetComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUxtGrabTargetComponent)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_122_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GrabPointers() { return STRUCT_OFFSET(UUxtGrabTargetComponent, GrabPointers); }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_119_PROLOG
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_122_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_122_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_122_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_122_RPC_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_122_INCLASS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_122_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_122_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_122_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_122_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_122_INCLASS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_122_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtGrabTargetComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
