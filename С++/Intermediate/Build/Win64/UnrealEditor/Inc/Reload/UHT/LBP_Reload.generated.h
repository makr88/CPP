// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LBP_Reload.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RELOAD_LBP_Reload_generated_h
#error "LBP_Reload.generated.h already included, missing '#pragma once' in LBP_Reload.h"
#endif
#define RELOAD_LBP_Reload_generated_h

#define FID_Users_BBD_Desktop_Reload_Source_Reload_LBP_Reload_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execF_GunReload); \
	DECLARE_FUNCTION(execF_Reload);


#define FID_Users_BBD_Desktop_Reload_Source_Reload_LBP_Reload_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULBP_Reload(); \
	friend struct Z_Construct_UClass_ULBP_Reload_Statics; \
public: \
	DECLARE_CLASS(ULBP_Reload, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Reload"), NO_API) \
	DECLARE_SERIALIZER(ULBP_Reload)


#define FID_Users_BBD_Desktop_Reload_Source_Reload_LBP_Reload_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULBP_Reload(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULBP_Reload(ULBP_Reload&&); \
	ULBP_Reload(const ULBP_Reload&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULBP_Reload); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULBP_Reload); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULBP_Reload) \
	NO_API virtual ~ULBP_Reload();


#define FID_Users_BBD_Desktop_Reload_Source_Reload_LBP_Reload_h_13_PROLOG
#define FID_Users_BBD_Desktop_Reload_Source_Reload_LBP_Reload_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_BBD_Desktop_Reload_Source_Reload_LBP_Reload_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_BBD_Desktop_Reload_Source_Reload_LBP_Reload_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_BBD_Desktop_Reload_Source_Reload_LBP_Reload_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RELOAD_API UClass* StaticClass<class ULBP_Reload>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_BBD_Desktop_Reload_Source_Reload_LBP_Reload_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
