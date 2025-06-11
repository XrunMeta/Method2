// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidImagePicker.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANDROIDIMAGEPICKER_AndroidImagePicker_generated_h
#error "AndroidImagePicker.generated.h already included, missing '#pragma once' in AndroidImagePicker.h"
#endif
#define ANDROIDIMAGEPICKER_AndroidImagePicker_generated_h

#define FID__Eko__UnrealEngine_Afterlife_M2_02_Plugins_AndroidImagePicker_Source_AndroidImagePicker_Public_AndroidImagePicker_h_9_DELEGATE \
ANDROIDIMAGEPICKER_API void FOnImagePicked_DelegateWrapper(const FMulticastScriptDelegate& OnImagePicked, const FString& ImagePath);


#define FID__Eko__UnrealEngine_Afterlife_M2_02_Plugins_AndroidImagePicker_Source_AndroidImagePicker_Public_AndroidImagePicker_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOpenImagePicker);


#define FID__Eko__UnrealEngine_Afterlife_M2_02_Plugins_AndroidImagePicker_Source_AndroidImagePicker_Public_AndroidImagePicker_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAndroidImagePicker(); \
	friend struct Z_Construct_UClass_UAndroidImagePicker_Statics; \
public: \
	DECLARE_CLASS(UAndroidImagePicker, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AndroidImagePicker"), NO_API) \
	DECLARE_SERIALIZER(UAndroidImagePicker)


#define FID__Eko__UnrealEngine_Afterlife_M2_02_Plugins_AndroidImagePicker_Source_AndroidImagePicker_Public_AndroidImagePicker_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidImagePicker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAndroidImagePicker(UAndroidImagePicker&&); \
	UAndroidImagePicker(const UAndroidImagePicker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidImagePicker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidImagePicker); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidImagePicker) \
	NO_API virtual ~UAndroidImagePicker();


#define FID__Eko__UnrealEngine_Afterlife_M2_02_Plugins_AndroidImagePicker_Source_AndroidImagePicker_Public_AndroidImagePicker_h_11_PROLOG
#define FID__Eko__UnrealEngine_Afterlife_M2_02_Plugins_AndroidImagePicker_Source_AndroidImagePicker_Public_AndroidImagePicker_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID__Eko__UnrealEngine_Afterlife_M2_02_Plugins_AndroidImagePicker_Source_AndroidImagePicker_Public_AndroidImagePicker_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID__Eko__UnrealEngine_Afterlife_M2_02_Plugins_AndroidImagePicker_Source_AndroidImagePicker_Public_AndroidImagePicker_h_14_INCLASS_NO_PURE_DECLS \
	FID__Eko__UnrealEngine_Afterlife_M2_02_Plugins_AndroidImagePicker_Source_AndroidImagePicker_Public_AndroidImagePicker_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANDROIDIMAGEPICKER_API UClass* StaticClass<class UAndroidImagePicker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID__Eko__UnrealEngine_Afterlife_M2_02_Plugins_AndroidImagePicker_Source_AndroidImagePicker_Public_AndroidImagePicker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
