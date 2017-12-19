// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDINGESCAPE_Door_generated_h
#error "Door.generated.h already included, missing '#pragma once' in Door.h"
#endif
#define BUILDINGESCAPE_Door_generated_h

#define BuildingEscape_Source_BuildingEscape_Door_h_12_RPC_WRAPPERS
#define BuildingEscape_Source_BuildingEscape_Door_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define BuildingEscape_Source_BuildingEscape_Door_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend BUILDINGESCAPE_API class UClass* Z_Construct_UClass_ADoor(); \
public: \
	DECLARE_CLASS(ADoor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(ADoor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BuildingEscape_Source_BuildingEscape_Door_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend BUILDINGESCAPE_API class UClass* Z_Construct_UClass_ADoor(); \
public: \
	DECLARE_CLASS(ADoor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(ADoor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BuildingEscape_Source_BuildingEscape_Door_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public:


#define BuildingEscape_Source_BuildingEscape_Door_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoor)


#define BuildingEscape_Source_BuildingEscape_Door_h_12_PRIVATE_PROPERTY_OFFSET
#define BuildingEscape_Source_BuildingEscape_Door_h_9_PROLOG
#define BuildingEscape_Source_BuildingEscape_Door_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Door_h_12_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Door_h_12_RPC_WRAPPERS \
	BuildingEscape_Source_BuildingEscape_Door_h_12_INCLASS \
	BuildingEscape_Source_BuildingEscape_Door_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_Door_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Door_h_12_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Door_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Door_h_12_INCLASS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Door_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_Source_BuildingEscape_Door_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
