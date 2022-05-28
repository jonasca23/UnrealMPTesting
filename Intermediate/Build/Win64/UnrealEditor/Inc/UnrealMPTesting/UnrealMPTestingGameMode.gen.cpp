// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealMPTesting/UnrealMPTestingGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealMPTestingGameMode() {}
// Cross Module References
	UNREALMPTESTING_API UClass* Z_Construct_UClass_AUnrealMPTestingGameMode_NoRegister();
	UNREALMPTESTING_API UClass* Z_Construct_UClass_AUnrealMPTestingGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UnrealMPTesting();
// End Cross Module References
	void AUnrealMPTestingGameMode::StaticRegisterNativesAUnrealMPTestingGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnrealMPTestingGameMode);
	UClass* Z_Construct_UClass_AUnrealMPTestingGameMode_NoRegister()
	{
		return AUnrealMPTestingGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealMPTestingGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealMPTestingGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealMPTesting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealMPTestingGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UnrealMPTestingGameMode.h" },
		{ "ModuleRelativePath", "UnrealMPTestingGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealMPTestingGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealMPTestingGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnrealMPTestingGameMode_Statics::ClassParams = {
		&AUnrealMPTestingGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUnrealMPTestingGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealMPTestingGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealMPTestingGameMode()
	{
		if (!Z_Registration_Info_UClass_AUnrealMPTestingGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnrealMPTestingGameMode.OuterSingleton, Z_Construct_UClass_AUnrealMPTestingGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUnrealMPTestingGameMode.OuterSingleton;
	}
	template<> UNREALMPTESTING_API UClass* StaticClass<AUnrealMPTestingGameMode>()
	{
		return AUnrealMPTestingGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealMPTestingGameMode);
	struct Z_CompiledInDeferFile_FID_UnrealMPTesting_Source_UnrealMPTesting_UnrealMPTestingGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealMPTesting_Source_UnrealMPTesting_UnrealMPTestingGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUnrealMPTestingGameMode, AUnrealMPTestingGameMode::StaticClass, TEXT("AUnrealMPTestingGameMode"), &Z_Registration_Info_UClass_AUnrealMPTestingGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnrealMPTestingGameMode), 159794157U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealMPTesting_Source_UnrealMPTesting_UnrealMPTestingGameMode_h_157671761(TEXT("/Script/UnrealMPTesting"),
		Z_CompiledInDeferFile_FID_UnrealMPTesting_Source_UnrealMPTesting_UnrealMPTestingGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealMPTesting_Source_UnrealMPTesting_UnrealMPTestingGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
