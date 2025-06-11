// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidImagePicker/Public/AndroidImagePicker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAndroidImagePicker() {}

// Begin Cross Module References
ANDROIDIMAGEPICKER_API UClass* Z_Construct_UClass_UAndroidImagePicker();
ANDROIDIMAGEPICKER_API UClass* Z_Construct_UClass_UAndroidImagePicker_NoRegister();
ANDROIDIMAGEPICKER_API UFunction* Z_Construct_UDelegateFunction_AndroidImagePicker_OnImagePicked__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AndroidImagePicker();
// End Cross Module References

// Begin Delegate FOnImagePicked
struct Z_Construct_UDelegateFunction_AndroidImagePicker_OnImagePicked__DelegateSignature_Statics
{
	struct _Script_AndroidImagePicker_eventOnImagePicked_Parms
	{
		FString ImagePath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate yang bisa dibind dari Blueprint\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidImagePicker.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate yang bisa dibind dari Blueprint" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ImagePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AndroidImagePicker_OnImagePicked__DelegateSignature_Statics::NewProp_ImagePath = { "ImagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AndroidImagePicker_eventOnImagePicked_Parms, ImagePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImagePath_MetaData), NewProp_ImagePath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AndroidImagePicker_OnImagePicked__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AndroidImagePicker_OnImagePicked__DelegateSignature_Statics::NewProp_ImagePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidImagePicker_OnImagePicked__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AndroidImagePicker_OnImagePicked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AndroidImagePicker, nullptr, "OnImagePicked__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AndroidImagePicker_OnImagePicked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidImagePicker_OnImagePicked__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AndroidImagePicker_OnImagePicked__DelegateSignature_Statics::_Script_AndroidImagePicker_eventOnImagePicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidImagePicker_OnImagePicked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AndroidImagePicker_OnImagePicked__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AndroidImagePicker_OnImagePicked__DelegateSignature_Statics::_Script_AndroidImagePicker_eventOnImagePicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AndroidImagePicker_OnImagePicked__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AndroidImagePicker_OnImagePicked__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnImagePicked_DelegateWrapper(const FMulticastScriptDelegate& OnImagePicked, const FString& ImagePath)
{
	struct _Script_AndroidImagePicker_eventOnImagePicked_Parms
	{
		FString ImagePath;
	};
	_Script_AndroidImagePicker_eventOnImagePicked_Parms Parms;
	Parms.ImagePath=ImagePath;
	OnImagePicked.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnImagePicked

// Begin Class UAndroidImagePicker Function OpenImagePicker
struct Z_Construct_UFunction_UAndroidImagePicker_OpenImagePicker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Android|Image Picker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Fungsi yang dipanggil dari Blueprint\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidImagePicker.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fungsi yang dipanggil dari Blueprint" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidImagePicker_OpenImagePicker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAndroidImagePicker, nullptr, "OpenImagePicker", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidImagePicker_OpenImagePicker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidImagePicker_OpenImagePicker_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAndroidImagePicker_OpenImagePicker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidImagePicker_OpenImagePicker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidImagePicker::execOpenImagePicker)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenImagePicker();
	P_NATIVE_END;
}
// End Class UAndroidImagePicker Function OpenImagePicker

// Begin Class UAndroidImagePicker
void UAndroidImagePicker::StaticRegisterNativesUAndroidImagePicker()
{
	UClass* Class = UAndroidImagePicker::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OpenImagePicker", &UAndroidImagePicker::execOpenImagePicker },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAndroidImagePicker);
UClass* Z_Construct_UClass_UAndroidImagePicker_NoRegister()
{
	return UAndroidImagePicker::StaticClass();
}
struct Z_Construct_UClass_UAndroidImagePicker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AndroidImagePicker.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AndroidImagePicker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnImagePicked_MetaData[] = {
		{ "Category", "Android|Image Picker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate untuk kirim balik hasil path\n" },
#endif
		{ "ModuleRelativePath", "Public/AndroidImagePicker.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate untuk kirim balik hasil path" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnImagePicked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidImagePicker_OpenImagePicker, "OpenImagePicker" }, // 805355240
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidImagePicker>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAndroidImagePicker_Statics::NewProp_OnImagePicked = { "OnImagePicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidImagePicker, OnImagePicked), Z_Construct_UDelegateFunction_AndroidImagePicker_OnImagePicked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnImagePicked_MetaData), NewProp_OnImagePicked_MetaData) }; // 2196520339
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidImagePicker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidImagePicker_Statics::NewProp_OnImagePicked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidImagePicker_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAndroidImagePicker_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidImagePicker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidImagePicker_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidImagePicker_Statics::ClassParams = {
	&UAndroidImagePicker::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAndroidImagePicker_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidImagePicker_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidImagePicker_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidImagePicker_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidImagePicker()
{
	if (!Z_Registration_Info_UClass_UAndroidImagePicker.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidImagePicker.OuterSingleton, Z_Construct_UClass_UAndroidImagePicker_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidImagePicker.OuterSingleton;
}
template<> ANDROIDIMAGEPICKER_API UClass* StaticClass<UAndroidImagePicker>()
{
	return UAndroidImagePicker::StaticClass();
}
UAndroidImagePicker::UAndroidImagePicker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidImagePicker);
UAndroidImagePicker::~UAndroidImagePicker() {}
// End Class UAndroidImagePicker

// Begin Registration
struct Z_CompiledInDeferFile_FID__Eko__UnrealEngine_Afterlife_M2_02_Plugins_AndroidImagePicker_Source_AndroidImagePicker_Public_AndroidImagePicker_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidImagePicker, UAndroidImagePicker::StaticClass, TEXT("UAndroidImagePicker"), &Z_Registration_Info_UClass_UAndroidImagePicker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidImagePicker), 4228747621U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID__Eko__UnrealEngine_Afterlife_M2_02_Plugins_AndroidImagePicker_Source_AndroidImagePicker_Public_AndroidImagePicker_h_951965128(TEXT("/Script/AndroidImagePicker"),
	Z_CompiledInDeferFile_FID__Eko__UnrealEngine_Afterlife_M2_02_Plugins_AndroidImagePicker_Source_AndroidImagePicker_Public_AndroidImagePicker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID__Eko__UnrealEngine_Afterlife_M2_02_Plugins_AndroidImagePicker_Source_AndroidImagePicker_Public_AndroidImagePicker_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
