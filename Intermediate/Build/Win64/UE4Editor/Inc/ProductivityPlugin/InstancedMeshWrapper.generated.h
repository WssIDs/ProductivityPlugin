// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PRODUCTIVITYPLUGIN_InstancedMeshWrapper_generated_h
#error "InstancedMeshWrapper.generated.h already included, missing '#pragma once' in InstancedMeshWrapper.h"
#endif
#define PRODUCTIVITYPLUGIN_InstancedMeshWrapper_generated_h

#define Engine_Plugins_ProductivityPlugin_Source_ProductivityPlugin_Classes_InstancedMeshWrapper_h_12_RPC_WRAPPERS
#define Engine_Plugins_ProductivityPlugin_Source_ProductivityPlugin_Classes_InstancedMeshWrapper_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_ProductivityPlugin_Source_ProductivityPlugin_Classes_InstancedMeshWrapper_h_12_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAInstancedMeshWrapper(); \
	friend PRODUCTIVITYPLUGIN_API class UClass* Z_Construct_UClass_AInstancedMeshWrapper(); \
	public: \
	DECLARE_CLASS(AInstancedMeshWrapper, AActor, COMPILED_IN_FLAGS(0), 0, ProductivityPlugin, NO_API) \
	DECLARE_SERIALIZER(AInstancedMeshWrapper) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AInstancedMeshWrapper*>(this); }


#define Engine_Plugins_ProductivityPlugin_Source_ProductivityPlugin_Classes_InstancedMeshWrapper_h_12_INCLASS \
	private: \
	static void StaticRegisterNativesAInstancedMeshWrapper(); \
	friend PRODUCTIVITYPLUGIN_API class UClass* Z_Construct_UClass_AInstancedMeshWrapper(); \
	public: \
	DECLARE_CLASS(AInstancedMeshWrapper, AActor, COMPILED_IN_FLAGS(0), 0, ProductivityPlugin, NO_API) \
	DECLARE_SERIALIZER(AInstancedMeshWrapper) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AInstancedMeshWrapper*>(this); }


#define Engine_Plugins_ProductivityPlugin_Source_ProductivityPlugin_Classes_InstancedMeshWrapper_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInstancedMeshWrapper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInstancedMeshWrapper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInstancedMeshWrapper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInstancedMeshWrapper); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AInstancedMeshWrapper(const AInstancedMeshWrapper& InCopy); \
public:


#define Engine_Plugins_ProductivityPlugin_Source_ProductivityPlugin_Classes_InstancedMeshWrapper_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInstancedMeshWrapper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AInstancedMeshWrapper(const AInstancedMeshWrapper& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInstancedMeshWrapper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInstancedMeshWrapper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInstancedMeshWrapper)


#define Engine_Plugins_ProductivityPlugin_Source_ProductivityPlugin_Classes_InstancedMeshWrapper_h_9_PROLOG
#define Engine_Plugins_ProductivityPlugin_Source_ProductivityPlugin_Classes_InstancedMeshWrapper_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_ProductivityPlugin_Source_ProductivityPlugin_Classes_InstancedMeshWrapper_h_12_RPC_WRAPPERS \
	Engine_Plugins_ProductivityPlugin_Source_ProductivityPlugin_Classes_InstancedMeshWrapper_h_12_INCLASS \
	Engine_Plugins_ProductivityPlugin_Source_ProductivityPlugin_Classes_InstancedMeshWrapper_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_ProductivityPlugin_Source_ProductivityPlugin_Classes_InstancedMeshWrapper_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_ProductivityPlugin_Source_ProductivityPlugin_Classes_InstancedMeshWrapper_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_ProductivityPlugin_Source_ProductivityPlugin_Classes_InstancedMeshWrapper_h_12_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_ProductivityPlugin_Source_ProductivityPlugin_Classes_InstancedMeshWrapper_h_12_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InstancedMeshWrapper."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_ProductivityPlugin_Source_ProductivityPlugin_Classes_InstancedMeshWrapper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
