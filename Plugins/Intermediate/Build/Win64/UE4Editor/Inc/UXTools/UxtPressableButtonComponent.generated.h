// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUxtPressableButtonComponent;
class UUxtNearPointerComponent;
class UObject;
class USceneComponent;
#ifdef UXTOOLS_UxtPressableButtonComponent_generated_h
#error "UxtPressableButtonComponent.generated.h already included, missing '#pragma once' in UxtPressableButtonComponent.h"
#endif
#define UXTOOLS_UxtPressableButtonComponent_generated_h

#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_39_DELEGATE \
struct _Script_UXTools_eventUxtButtonReleasedDelegate_Parms \
{ \
	UUxtPressableButtonComponent* Button; \
}; \
static inline void FUxtButtonReleasedDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtButtonReleasedDelegate, UUxtPressableButtonComponent* Button) \
{ \
	_Script_UXTools_eventUxtButtonReleasedDelegate_Parms Parms; \
	Parms.Button=Button; \
	UxtButtonReleasedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_38_DELEGATE \
struct _Script_UXTools_eventUxtButtonPressedDelegate_Parms \
{ \
	UUxtPressableButtonComponent* Button; \
}; \
static inline void FUxtButtonPressedDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtButtonPressedDelegate, UUxtPressableButtonComponent* Button) \
{ \
	_Script_UXTools_eventUxtButtonPressedDelegate_Parms Parms; \
	Parms.Button=Button; \
	UxtButtonPressedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_37_DELEGATE \
struct _Script_UXTools_eventUxtButtonEndPokeDelegate_Parms \
{ \
	UUxtPressableButtonComponent* Button; \
	UUxtNearPointerComponent* Pointer; \
}; \
static inline void FUxtButtonEndPokeDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtButtonEndPokeDelegate, UUxtPressableButtonComponent* Button, UUxtNearPointerComponent* Pointer) \
{ \
	_Script_UXTools_eventUxtButtonEndPokeDelegate_Parms Parms; \
	Parms.Button=Button; \
	Parms.Pointer=Pointer; \
	UxtButtonEndPokeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_36_DELEGATE \
struct _Script_UXTools_eventUxtButtonUpdatePokeDelegate_Parms \
{ \
	UUxtPressableButtonComponent* Button; \
	UUxtNearPointerComponent* Pointer; \
}; \
static inline void FUxtButtonUpdatePokeDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtButtonUpdatePokeDelegate, UUxtPressableButtonComponent* Button, UUxtNearPointerComponent* Pointer) \
{ \
	_Script_UXTools_eventUxtButtonUpdatePokeDelegate_Parms Parms; \
	Parms.Button=Button; \
	Parms.Pointer=Pointer; \
	UxtButtonUpdatePokeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_35_DELEGATE \
struct _Script_UXTools_eventUxtButtonBeginPokeDelegate_Parms \
{ \
	UUxtPressableButtonComponent* Button; \
	UUxtNearPointerComponent* Pointer; \
}; \
static inline void FUxtButtonBeginPokeDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtButtonBeginPokeDelegate, UUxtPressableButtonComponent* Button, UUxtNearPointerComponent* Pointer) \
{ \
	_Script_UXTools_eventUxtButtonBeginPokeDelegate_Parms Parms; \
	Parms.Button=Button; \
	Parms.Pointer=Pointer; \
	UxtButtonBeginPokeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_34_DELEGATE \
struct _Script_UXTools_eventUxtButtonEndFocusDelegate_Parms \
{ \
	UUxtPressableButtonComponent* Button; \
	UObject* Pointer; \
	bool bIsStillFocused; \
}; \
static inline void FUxtButtonEndFocusDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtButtonEndFocusDelegate, UUxtPressableButtonComponent* Button, UObject* Pointer, bool bIsStillFocused) \
{ \
	_Script_UXTools_eventUxtButtonEndFocusDelegate_Parms Parms; \
	Parms.Button=Button; \
	Parms.Pointer=Pointer; \
	Parms.bIsStillFocused=bIsStillFocused ? true : false; \
	UxtButtonEndFocusDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_33_DELEGATE \
struct _Script_UXTools_eventUxtButtonUpdateFocusDelegate_Parms \
{ \
	UUxtPressableButtonComponent* Button; \
	UObject* Pointer; \
}; \
static inline void FUxtButtonUpdateFocusDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtButtonUpdateFocusDelegate, UUxtPressableButtonComponent* Button, UObject* Pointer) \
{ \
	_Script_UXTools_eventUxtButtonUpdateFocusDelegate_Parms Parms; \
	Parms.Button=Button; \
	Parms.Pointer=Pointer; \
	UxtButtonUpdateFocusDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_32_DELEGATE \
struct _Script_UXTools_eventUxtButtonBeginFocusDelegate_Parms \
{ \
	UUxtPressableButtonComponent* Button; \
	UObject* Pointer; \
	bool bWasAlreadyFocused; \
}; \
static inline void FUxtButtonBeginFocusDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtButtonBeginFocusDelegate, UUxtPressableButtonComponent* Button, UObject* Pointer, bool bWasAlreadyFocused) \
{ \
	_Script_UXTools_eventUxtButtonBeginFocusDelegate_Parms Parms; \
	Parms.Button=Button; \
	Parms.Pointer=Pointer; \
	Parms.bWasAlreadyFocused=bWasAlreadyFocused ? true : false; \
	UxtButtonBeginFocusDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_48_SPARSE_DATA
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_48_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetScaleAdjustedMaxPushDistance); \
	DECLARE_FUNCTION(execIsPressed); \
	DECLARE_FUNCTION(execSetCollisionProfile); \
	DECLARE_FUNCTION(execSetVisuals); \
	DECLARE_FUNCTION(execGetVisuals);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetScaleAdjustedMaxPushDistance); \
	DECLARE_FUNCTION(execIsPressed); \
	DECLARE_FUNCTION(execSetCollisionProfile); \
	DECLARE_FUNCTION(execSetVisuals); \
	DECLARE_FUNCTION(execGetVisuals);


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUxtPressableButtonComponent(); \
	friend struct Z_Construct_UClass_UUxtPressableButtonComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtPressableButtonComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtPressableButtonComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UUxtPressableButtonComponent*>(this); }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUUxtPressableButtonComponent(); \
	friend struct Z_Construct_UClass_UUxtPressableButtonComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtPressableButtonComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtPressableButtonComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UUxtPressableButtonComponent*>(this); }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtPressableButtonComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtPressableButtonComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtPressableButtonComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtPressableButtonComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtPressableButtonComponent(UUxtPressableButtonComponent&&); \
	NO_API UUxtPressableButtonComponent(const UUxtPressableButtonComponent&); \
public:


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_48_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtPressableButtonComponent(UUxtPressableButtonComponent&&); \
	NO_API UUxtPressableButtonComponent(const UUxtPressableButtonComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtPressableButtonComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtPressableButtonComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUxtPressableButtonComponent)


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_48_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VisualsReference() { return STRUCT_OFFSET(UUxtPressableButtonComponent, VisualsReference); } \
	FORCEINLINE static uint32 __PPO__CollisionProfile() { return STRUCT_OFFSET(UUxtPressableButtonComponent, CollisionProfile); }


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_45_PROLOG
#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_48_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_48_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_48_RPC_WRAPPERS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_48_INCLASS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_48_PRIVATE_PROPERTY_OFFSET \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_48_SPARSE_DATA \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_48_INCLASS_NO_PURE_DECLS \
	UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtPressableButtonComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UXToolsGame_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
