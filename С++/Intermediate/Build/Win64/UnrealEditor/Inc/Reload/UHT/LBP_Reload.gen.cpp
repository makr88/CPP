// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Reload/LBP_Reload.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLBP_Reload() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
RELOAD_API UClass* Z_Construct_UClass_ULBP_Reload();
RELOAD_API UClass* Z_Construct_UClass_ULBP_Reload_NoRegister();
UPackage* Z_Construct_UPackage__Script_Reload();
// End Cross Module References

// Begin Class ULBP_Reload Function F_GunReload
struct Z_Construct_UFunction_ULBP_Reload_F_GunReload_Statics
{
	struct LBP_Reload_eventF_GunReload_Parms
	{
		int32 Bullet;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "C_Reload" },
		{ "ModuleRelativePath", "LBP_Reload.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Bullet;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULBP_Reload_F_GunReload_Statics::NewProp_Bullet = { "Bullet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LBP_Reload_eventF_GunReload_Parms, Bullet), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULBP_Reload_F_GunReload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LBP_Reload_eventF_GunReload_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULBP_Reload_F_GunReload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULBP_Reload_F_GunReload_Statics::NewProp_Bullet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULBP_Reload_F_GunReload_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULBP_Reload_F_GunReload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULBP_Reload_F_GunReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULBP_Reload, nullptr, "F_GunReload", nullptr, nullptr, Z_Construct_UFunction_ULBP_Reload_F_GunReload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULBP_Reload_F_GunReload_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULBP_Reload_F_GunReload_Statics::LBP_Reload_eventF_GunReload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULBP_Reload_F_GunReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULBP_Reload_F_GunReload_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULBP_Reload_F_GunReload_Statics::LBP_Reload_eventF_GunReload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULBP_Reload_F_GunReload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULBP_Reload_F_GunReload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULBP_Reload::execF_GunReload)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Bullet);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=ULBP_Reload::F_GunReload(Z_Param_Bullet);
	P_NATIVE_END;
}
// End Class ULBP_Reload Function F_GunReload

// Begin Class ULBP_Reload Function F_Reload
struct Z_Construct_UFunction_ULBP_Reload_F_Reload_Statics
{
	struct LBP_Reload_eventF_Reload_Parms
	{
		int32 Bullet;
		bool can_shot;
		bool can_reload;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "C_Reload" },
		{ "ModuleRelativePath", "LBP_Reload.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Bullet;
	static void NewProp_can_shot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_can_shot;
	static void NewProp_can_reload_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_can_reload;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULBP_Reload_F_Reload_Statics::NewProp_Bullet = { "Bullet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LBP_Reload_eventF_Reload_Parms, Bullet), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULBP_Reload_F_Reload_Statics::NewProp_can_shot_SetBit(void* Obj)
{
	((LBP_Reload_eventF_Reload_Parms*)Obj)->can_shot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULBP_Reload_F_Reload_Statics::NewProp_can_shot = { "can_shot", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LBP_Reload_eventF_Reload_Parms), &Z_Construct_UFunction_ULBP_Reload_F_Reload_Statics::NewProp_can_shot_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULBP_Reload_F_Reload_Statics::NewProp_can_reload_SetBit(void* Obj)
{
	((LBP_Reload_eventF_Reload_Parms*)Obj)->can_reload = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULBP_Reload_F_Reload_Statics::NewProp_can_reload = { "can_reload", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LBP_Reload_eventF_Reload_Parms), &Z_Construct_UFunction_ULBP_Reload_F_Reload_Statics::NewProp_can_reload_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULBP_Reload_F_Reload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LBP_Reload_eventF_Reload_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULBP_Reload_F_Reload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULBP_Reload_F_Reload_Statics::NewProp_Bullet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULBP_Reload_F_Reload_Statics::NewProp_can_shot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULBP_Reload_F_Reload_Statics::NewProp_can_reload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULBP_Reload_F_Reload_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULBP_Reload_F_Reload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULBP_Reload_F_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULBP_Reload, nullptr, "F_Reload", nullptr, nullptr, Z_Construct_UFunction_ULBP_Reload_F_Reload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULBP_Reload_F_Reload_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULBP_Reload_F_Reload_Statics::LBP_Reload_eventF_Reload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULBP_Reload_F_Reload_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULBP_Reload_F_Reload_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULBP_Reload_F_Reload_Statics::LBP_Reload_eventF_Reload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULBP_Reload_F_Reload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULBP_Reload_F_Reload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULBP_Reload::execF_Reload)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Bullet);
	P_GET_UBOOL_REF(Z_Param_Out_can_shot);
	P_GET_UBOOL_REF(Z_Param_Out_can_reload);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=ULBP_Reload::F_Reload(Z_Param_Bullet,Z_Param_Out_can_shot,Z_Param_Out_can_reload);
	P_NATIVE_END;
}
// End Class ULBP_Reload Function F_Reload

// Begin Class ULBP_Reload
void ULBP_Reload::StaticRegisterNativesULBP_Reload()
{
	UClass* Class = ULBP_Reload::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "F_GunReload", &ULBP_Reload::execF_GunReload },
		{ "F_Reload", &ULBP_Reload::execF_Reload },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULBP_Reload);
UClass* Z_Construct_UClass_ULBP_Reload_NoRegister()
{
	return ULBP_Reload::StaticClass();
}
struct Z_Construct_UClass_ULBP_Reload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "LBP_Reload.h" },
		{ "ModuleRelativePath", "LBP_Reload.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULBP_Reload_F_GunReload, "F_GunReload" }, // 2732282073
		{ &Z_Construct_UFunction_ULBP_Reload_F_Reload, "F_Reload" }, // 3561115362
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULBP_Reload>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULBP_Reload_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Reload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULBP_Reload_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULBP_Reload_Statics::ClassParams = {
	&ULBP_Reload::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULBP_Reload_Statics::Class_MetaDataParams), Z_Construct_UClass_ULBP_Reload_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULBP_Reload()
{
	if (!Z_Registration_Info_UClass_ULBP_Reload.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULBP_Reload.OuterSingleton, Z_Construct_UClass_ULBP_Reload_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULBP_Reload.OuterSingleton;
}
template<> RELOAD_API UClass* StaticClass<ULBP_Reload>()
{
	return ULBP_Reload::StaticClass();
}
ULBP_Reload::ULBP_Reload(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULBP_Reload);
ULBP_Reload::~ULBP_Reload() {}
// End Class ULBP_Reload

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_BBD_Desktop_Reload_Source_Reload_LBP_Reload_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULBP_Reload, ULBP_Reload::StaticClass, TEXT("ULBP_Reload"), &Z_Registration_Info_UClass_ULBP_Reload, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULBP_Reload), 3201362897U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_BBD_Desktop_Reload_Source_Reload_LBP_Reload_h_231025412(TEXT("/Script/Reload"),
	Z_CompiledInDeferFile_FID_Users_BBD_Desktop_Reload_Source_Reload_LBP_Reload_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_BBD_Desktop_Reload_Source_Reload_LBP_Reload_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
