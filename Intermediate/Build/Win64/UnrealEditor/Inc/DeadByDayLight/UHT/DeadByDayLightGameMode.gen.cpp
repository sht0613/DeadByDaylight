// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDayLight/DeadByDayLightGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeadByDayLightGameMode() {}

// Begin Cross Module References
DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADeadByDayLightGameMode();
DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADeadByDayLightGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_DeadByDayLight();
// End Cross Module References

// Begin Class ADeadByDayLightGameMode
void ADeadByDayLightGameMode::StaticRegisterNativesADeadByDayLightGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADeadByDayLightGameMode);
UClass* Z_Construct_UClass_ADeadByDayLightGameMode_NoRegister()
{
	return ADeadByDayLightGameMode::StaticClass();
}
struct Z_Construct_UClass_ADeadByDayLightGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DeadByDayLightGameMode.h" },
		{ "ModuleRelativePath", "DeadByDayLightGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADeadByDayLightGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADeadByDayLightGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DeadByDayLight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADeadByDayLightGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADeadByDayLightGameMode_Statics::ClassParams = {
	&ADeadByDayLightGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADeadByDayLightGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADeadByDayLightGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADeadByDayLightGameMode()
{
	if (!Z_Registration_Info_UClass_ADeadByDayLightGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADeadByDayLightGameMode.OuterSingleton, Z_Construct_UClass_ADeadByDayLightGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADeadByDayLightGameMode.OuterSingleton;
}
template<> DEADBYDAYLIGHT_API UClass* StaticClass<ADeadByDayLightGameMode>()
{
	return ADeadByDayLightGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADeadByDayLightGameMode);
ADeadByDayLightGameMode::~ADeadByDayLightGameMode() {}
// End Class ADeadByDayLightGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_MultiProject_DeadByDayLight_Source_DeadByDayLight_DeadByDayLightGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADeadByDayLightGameMode, ADeadByDayLightGameMode::StaticClass, TEXT("ADeadByDayLightGameMode"), &Z_Registration_Info_UClass_ADeadByDayLightGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADeadByDayLightGameMode), 3616304489U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiProject_DeadByDayLight_Source_DeadByDayLight_DeadByDayLightGameMode_h_533183638(TEXT("/Script/DeadByDayLight"),
	Z_CompiledInDeferFile_FID_MultiProject_DeadByDayLight_Source_DeadByDayLight_DeadByDayLightGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiProject_DeadByDayLight_Source_DeadByDayLight_DeadByDayLightGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
