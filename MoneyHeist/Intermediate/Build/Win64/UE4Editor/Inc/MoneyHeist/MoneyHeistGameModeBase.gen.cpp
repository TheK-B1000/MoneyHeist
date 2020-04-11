// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoneyHeist/MoneyHeistGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoneyHeistGameModeBase() {}
// Cross Module References
	MONEYHEIST_API UClass* Z_Construct_UClass_AMoneyHeistGameModeBase_NoRegister();
	MONEYHEIST_API UClass* Z_Construct_UClass_AMoneyHeistGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MoneyHeist();
// End Cross Module References
	void AMoneyHeistGameModeBase::StaticRegisterNativesAMoneyHeistGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AMoneyHeistGameModeBase_NoRegister()
	{
		return AMoneyHeistGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMoneyHeistGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMoneyHeistGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MoneyHeist,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoneyHeistGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MoneyHeistGameModeBase.h" },
		{ "ModuleRelativePath", "MoneyHeistGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMoneyHeistGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoneyHeistGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMoneyHeistGameModeBase_Statics::ClassParams = {
		&AMoneyHeistGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMoneyHeistGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMoneyHeistGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMoneyHeistGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMoneyHeistGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMoneyHeistGameModeBase, 3918109863);
	template<> MONEYHEIST_API UClass* StaticClass<AMoneyHeistGameModeBase>()
	{
		return AMoneyHeistGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMoneyHeistGameModeBase(Z_Construct_UClass_AMoneyHeistGameModeBase, &AMoneyHeistGameModeBase::StaticClass, TEXT("/Script/MoneyHeist"), TEXT("AMoneyHeistGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMoneyHeistGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
