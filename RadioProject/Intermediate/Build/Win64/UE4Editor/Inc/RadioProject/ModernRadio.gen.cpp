// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RadioProject/Public/ModernRadio.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModernRadio() {}
// Cross Module References
	RADIOPROJECT_API UClass* Z_Construct_UClass_AModernRadio_NoRegister();
	RADIOPROJECT_API UClass* Z_Construct_UClass_AModernRadio();
	RADIOPROJECT_API UClass* Z_Construct_UClass_AOldRadio();
	UPackage* Z_Construct_UPackage__Script_RadioProject();
// End Cross Module References
	void AModernRadio::StaticRegisterNativesAModernRadio()
	{
	}
	UClass* Z_Construct_UClass_AModernRadio_NoRegister()
	{
		return AModernRadio::StaticClass();
	}
	struct Z_Construct_UClass_AModernRadio_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AModernRadio_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOldRadio,
		(UObject* (*)())Z_Construct_UPackage__Script_RadioProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModernRadio_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ModernRadio.h" },
		{ "ModuleRelativePath", "Public/ModernRadio.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModernRadio_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModernRadio>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AModernRadio_Statics::ClassParams = {
		&AModernRadio::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AModernRadio_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AModernRadio_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AModernRadio()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AModernRadio_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AModernRadio, 2161214043);
	template<> RADIOPROJECT_API UClass* StaticClass<AModernRadio>()
	{
		return AModernRadio::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AModernRadio(Z_Construct_UClass_AModernRadio, &AModernRadio::StaticClass, TEXT("/Script/RadioProject"), TEXT("AModernRadio"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AModernRadio);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
