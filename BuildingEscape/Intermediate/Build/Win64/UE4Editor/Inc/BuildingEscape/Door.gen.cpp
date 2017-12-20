// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Door.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoor() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ADoor_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ADoor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UFunction* Z_Construct_UFunction_ADoor_Close();
	BUILDINGESCAPE_API UFunction* Z_Construct_UFunction_ADoor_Open();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void ADoor::StaticRegisterNativesADoor()
	{
		UClass* Class = ADoor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Close", (Native)&ADoor::execClose },
			{ "Open", (Native)&ADoor::execOpen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ADoor_Close()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Door.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, "Close", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ADoor_Open()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Door.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, "Open", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADoor_NoRegister()
	{
		return ADoor::StaticClass();
	}
	UClass* Z_Construct_UClass_ADoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ADoor_Close, "Close" }, // 1734176073
				{ &Z_Construct_UFunction_ADoor_Open, "Open" }, // 2170263486
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Door.h" },
				{ "ModuleRelativePath", "Door.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLocked_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Door.h" },
				{ "ToolTip", "Whether the door is locked or not" },
			};
#endif
			auto NewProp_IsLocked_SetBit = [](void* Obj){ ((ADoor*)Obj)->IsLocked = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLocked = { UE4CodeGen_Private::EPropertyClass::Bool, "IsLocked", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ADoor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsLocked_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsLocked_MetaData, ARRAY_COUNT(NewProp_IsLocked_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorInstance_MetaData[] = {
				{ "Category", "Mesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Door.h" },
				{ "ToolTip", "The door" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorInstance = { UE4CodeGen_Private::EPropertyClass::Object, "DoorInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000090009, 1, nullptr, STRUCT_OFFSET(ADoor, DoorInstance), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_DoorInstance_MetaData, ARRAY_COUNT(NewProp_DoorInstance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenDegrees_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Door.h" },
				{ "ToolTip", "The open degrees of the door" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OpenDegrees = { UE4CodeGen_Private::EPropertyClass::Struct, "OpenDegrees", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(ADoor, OpenDegrees), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_OpenDegrees_MetaData, ARRAY_COUNT(NewProp_OpenDegrees_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsLocked,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DoorInstance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OpenDegrees,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ADoor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ADoor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADoor, 559291823);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADoor(Z_Construct_UClass_ADoor, &ADoor::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("ADoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
