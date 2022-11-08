// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RadioProject/Public/OldRadio.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOldRadio() {}
// Cross Module References
	RADIOPROJECT_API UClass* Z_Construct_UClass_AOldRadio_NoRegister();
	RADIOPROJECT_API UClass* Z_Construct_UClass_AOldRadio();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RadioProject();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AOldRadio::execSetPauseAudio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPauseAudio_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AOldRadio_SetPauseAudio = FName(TEXT("SetPauseAudio"));
	void AOldRadio::SetPauseAudio()
	{
		ProcessEvent(FindFunctionChecked(NAME_AOldRadio_SetPauseAudio),NULL);
	}
	void AOldRadio::StaticRegisterNativesAOldRadio()
	{
		UClass* Class = AOldRadio::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetPauseAudio", &AOldRadio::execSetPauseAudio },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOldRadio_SetPauseAudio_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOldRadio_SetPauseAudio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OldRadio.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOldRadio_SetPauseAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOldRadio, nullptr, "SetPauseAudio", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOldRadio_SetPauseAudio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOldRadio_SetPauseAudio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOldRadio_SetPauseAudio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOldRadio_SetPauseAudio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOldRadio_NoRegister()
	{
		return AOldRadio::StaticClass();
	}
	struct Z_Construct_UClass_AOldRadio_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOldRadio_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RadioProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOldRadio_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOldRadio_SetPauseAudio, "SetPauseAudio" }, // 3752977714
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOldRadio_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OldRadio.h" },
		{ "ModuleRelativePath", "Public/OldRadio.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOldRadio_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "OldRadio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OldRadio.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOldRadio_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOldRadio, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOldRadio_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOldRadio_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOldRadio_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "OldRadio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OldRadio.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOldRadio_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOldRadio, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOldRadio_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOldRadio_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOldRadio_Statics::NewProp_AudioComp_MetaData[] = {
		{ "Category", "OldRadio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OldRadio.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOldRadio_Statics::NewProp_AudioComp = { "AudioComp", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOldRadio, AudioComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOldRadio_Statics::NewProp_AudioComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOldRadio_Statics::NewProp_AudioComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOldRadio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOldRadio_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOldRadio_Statics::NewProp_MeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOldRadio_Statics::NewProp_AudioComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOldRadio_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOldRadio>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOldRadio_Statics::ClassParams = {
		&AOldRadio::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOldRadio_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AOldRadio_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOldRadio_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOldRadio_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOldRadio()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOldRadio_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOldRadio, 3634461502);
	template<> RADIOPROJECT_API UClass* StaticClass<AOldRadio>()
	{
		return AOldRadio::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOldRadio(Z_Construct_UClass_AOldRadio, &AOldRadio::StaticClass, TEXT("/Script/RadioProject"), TEXT("AOldRadio"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOldRadio);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
