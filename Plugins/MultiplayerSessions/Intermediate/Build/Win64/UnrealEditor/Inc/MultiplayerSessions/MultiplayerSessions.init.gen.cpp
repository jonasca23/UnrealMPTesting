// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerSessions_init() {}
	MULTIPLAYERSESSIONS_API UFunction* Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MultiplayerSessions;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MultiplayerSessions()
	{
		if (!Z_Registration_Info_UPackage__Script_MultiplayerSessions.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MultiplayerSessions",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x864FCC0D,
				0x45F912A3,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MultiplayerSessions.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MultiplayerSessions.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MultiplayerSessions(Z_Construct_UPackage__Script_MultiplayerSessions, TEXT("/Script/MultiplayerSessions"), Z_Registration_Info_UPackage__Script_MultiplayerSessions, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x864FCC0D, 0x45F912A3));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
