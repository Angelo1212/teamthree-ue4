// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEAMTHREE_teamthreeGameMode_generated_h
#error "teamthreeGameMode.generated.h already included, missing '#pragma once' in teamthreeGameMode.h"
#endif
#define TEAMTHREE_teamthreeGameMode_generated_h

#define teamthree_Source_teamthree_teamthreeGameMode_h_14_RPC_WRAPPERS
#define teamthree_Source_teamthree_teamthreeGameMode_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define teamthree_Source_teamthree_teamthreeGameMode_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAteamthreeGameMode(); \
	friend TEAMTHREE_API class UClass* Z_Construct_UClass_AteamthreeGameMode(); \
	public: \
	DECLARE_CLASS(AteamthreeGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, teamthree, NO_API) \
	DECLARE_SERIALIZER(AteamthreeGameMode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AteamthreeGameMode*>(this); }


#define teamthree_Source_teamthree_teamthreeGameMode_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesAteamthreeGameMode(); \
	friend TEAMTHREE_API class UClass* Z_Construct_UClass_AteamthreeGameMode(); \
	public: \
	DECLARE_CLASS(AteamthreeGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, teamthree, NO_API) \
	DECLARE_SERIALIZER(AteamthreeGameMode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AteamthreeGameMode*>(this); }


#define teamthree_Source_teamthree_teamthreeGameMode_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AteamthreeGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AteamthreeGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AteamthreeGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AteamthreeGameMode); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AteamthreeGameMode(const AteamthreeGameMode& InCopy); \
public:


#define teamthree_Source_teamthree_teamthreeGameMode_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AteamthreeGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AteamthreeGameMode(const AteamthreeGameMode& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AteamthreeGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AteamthreeGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AteamthreeGameMode)


#define teamthree_Source_teamthree_teamthreeGameMode_h_11_PROLOG
#define teamthree_Source_teamthree_teamthreeGameMode_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	teamthree_Source_teamthree_teamthreeGameMode_h_14_RPC_WRAPPERS \
	teamthree_Source_teamthree_teamthreeGameMode_h_14_INCLASS \
	teamthree_Source_teamthree_teamthreeGameMode_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define teamthree_Source_teamthree_teamthreeGameMode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	teamthree_Source_teamthree_teamthreeGameMode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	teamthree_Source_teamthree_teamthreeGameMode_h_14_INCLASS_NO_PURE_DECLS \
	teamthree_Source_teamthree_teamthreeGameMode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID teamthree_Source_teamthree_teamthreeGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
