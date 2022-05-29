// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealMPTesting/UnrealMPTestingCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealMPTestingCharacter() {}
// Cross Module References
	UNREALMPTESTING_API UClass* Z_Construct_UClass_AUnrealMPTestingCharacter_NoRegister();
	UNREALMPTESTING_API UClass* Z_Construct_UClass_AUnrealMPTestingCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_UnrealMPTesting();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AUnrealMPTestingCharacter::execJoinGameSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JoinGameSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnrealMPTestingCharacter::execCreateGameSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateGameSession();
		P_NATIVE_END;
	}
	void AUnrealMPTestingCharacter::StaticRegisterNativesAUnrealMPTestingCharacter()
	{
		UClass* Class = AUnrealMPTestingCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateGameSession", &AUnrealMPTestingCharacter::execCreateGameSession },
			{ "JoinGameSession", &AUnrealMPTestingCharacter::execJoinGameSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUnrealMPTestingCharacter_CreateGameSession_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnrealMPTestingCharacter_CreateGameSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UnrealMPTestingCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnrealMPTestingCharacter_CreateGameSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnrealMPTestingCharacter, nullptr, "CreateGameSession", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnrealMPTestingCharacter_CreateGameSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnrealMPTestingCharacter_CreateGameSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnrealMPTestingCharacter_CreateGameSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnrealMPTestingCharacter_CreateGameSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnrealMPTestingCharacter_JoinGameSession_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnrealMPTestingCharacter_JoinGameSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UnrealMPTestingCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnrealMPTestingCharacter_JoinGameSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnrealMPTestingCharacter, nullptr, "JoinGameSession", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnrealMPTestingCharacter_JoinGameSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnrealMPTestingCharacter_JoinGameSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnrealMPTestingCharacter_JoinGameSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnrealMPTestingCharacter_JoinGameSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnrealMPTestingCharacter);
	UClass* Z_Construct_UClass_AUnrealMPTestingCharacter_NoRegister()
	{
		return AUnrealMPTestingCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealMPTestingCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRateGamepad_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRateGamepad;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealMPTestingCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealMPTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUnrealMPTestingCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUnrealMPTestingCharacter_CreateGameSession, "CreateGameSession" }, // 2814832408
		{ &Z_Construct_UFunction_AUnrealMPTestingCharacter_JoinGameSession, "JoinGameSession" }, // 1509428365
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealMPTestingCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "UnrealMPTestingCharacter.h" },
		{ "ModuleRelativePath", "UnrealMPTestingCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealMPTestingCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnrealMPTestingCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnrealMPTestingCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnrealMPTestingCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnrealMPTestingCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealMPTestingCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealMPTestingCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnrealMPTestingCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnrealMPTestingCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnrealMPTestingCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnrealMPTestingCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealMPTestingCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealMPTestingCharacter_Statics::NewProp_TurnRateGamepad_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "UnrealMPTestingCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUnrealMPTestingCharacter_Statics::NewProp_TurnRateGamepad = { "TurnRateGamepad", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnrealMPTestingCharacter, TurnRateGamepad), METADATA_PARAMS(Z_Construct_UClass_AUnrealMPTestingCharacter_Statics::NewProp_TurnRateGamepad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealMPTestingCharacter_Statics::NewProp_TurnRateGamepad_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUnrealMPTestingCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealMPTestingCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealMPTestingCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealMPTestingCharacter_Statics::NewProp_TurnRateGamepad,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealMPTestingCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealMPTestingCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnrealMPTestingCharacter_Statics::ClassParams = {
		&AUnrealMPTestingCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUnrealMPTestingCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealMPTestingCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUnrealMPTestingCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealMPTestingCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealMPTestingCharacter()
	{
		if (!Z_Registration_Info_UClass_AUnrealMPTestingCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnrealMPTestingCharacter.OuterSingleton, Z_Construct_UClass_AUnrealMPTestingCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUnrealMPTestingCharacter.OuterSingleton;
	}
	template<> UNREALMPTESTING_API UClass* StaticClass<AUnrealMPTestingCharacter>()
	{
		return AUnrealMPTestingCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealMPTestingCharacter);
	struct Z_CompiledInDeferFile_FID_UnrealMPTesting_Source_UnrealMPTesting_UnrealMPTestingCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealMPTesting_Source_UnrealMPTesting_UnrealMPTestingCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUnrealMPTestingCharacter, AUnrealMPTestingCharacter::StaticClass, TEXT("AUnrealMPTestingCharacter"), &Z_Registration_Info_UClass_AUnrealMPTestingCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnrealMPTestingCharacter), 1743855891U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealMPTesting_Source_UnrealMPTesting_UnrealMPTestingCharacter_h_3292038603(TEXT("/Script/UnrealMPTesting"),
		Z_CompiledInDeferFile_FID_UnrealMPTesting_Source_UnrealMPTesting_UnrealMPTestingCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealMPTesting_Source_UnrealMPTesting_UnrealMPTestingCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
