// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWanderer_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Wanderer;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Wanderer()
	{
		if (!Z_Registration_Info_UPackage__Script_Wanderer.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Wanderer",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x237889B0,
				0x1E29002F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Wanderer.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Wanderer.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Wanderer(Z_Construct_UPackage__Script_Wanderer, TEXT("/Script/Wanderer"), Z_Registration_Info_UPackage__Script_Wanderer, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x237889B0, 0x1E29002F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
