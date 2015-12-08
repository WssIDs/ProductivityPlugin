// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Private/ProductivityPluginModulePCH.h"
#include "ProductivityPlugin.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProductivityPlugin() {}
	void AInstancedMeshWrapper::StaticRegisterNativesAInstancedMeshWrapper()
	{
	}
	IMPLEMENT_CLASS(AInstancedMeshWrapper, 692735168);
	void UProductivityPluginEditorSettings::StaticRegisterNativesUProductivityPluginEditorSettings()
	{
	}
	IMPLEMENT_CLASS(UProductivityPluginEditorSettings, 1035493221);
class UScriptStruct* FBatchPlaceMeshInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PRODUCTIVITYPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FBatchPlaceMeshInfo();
		extern PRODUCTIVITYPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBatchPlaceMeshInfo_CRC();
		extern PRODUCTIVITYPLUGIN_API class UPackage* Z_Construct_UPackage_ProductivityPlugin();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBatchPlaceMeshInfo, Z_Construct_UPackage_ProductivityPlugin(), TEXT("BatchPlaceMeshInfo"), sizeof(FBatchPlaceMeshInfo), Get_Z_Construct_UScriptStruct_FBatchPlaceMeshInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBatchPlaceMeshInfo(FBatchPlaceMeshInfo::StaticStruct, TEXT("/Script/ProductivityPlugin"));
static struct FScriptStruct_ProductivityPlugin_StaticRegisterNativesFBatchPlaceMeshInfo
{
	FScriptStruct_ProductivityPlugin_StaticRegisterNativesFBatchPlaceMeshInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BatchPlaceMeshInfo")),new UScriptStruct::TCppStructOps<FBatchPlaceMeshInfo>);
	}
} ScriptStruct_ProductivityPlugin_StaticRegisterNativesFBatchPlaceMeshInfo;
class UScriptStruct* FMeshInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PRODUCTIVITYPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FMeshInfo();
		extern PRODUCTIVITYPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FMeshInfo_CRC();
		extern PRODUCTIVITYPLUGIN_API class UPackage* Z_Construct_UPackage_ProductivityPlugin();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshInfo, Z_Construct_UPackage_ProductivityPlugin(), TEXT("MeshInfo"), sizeof(FMeshInfo), Get_Z_Construct_UScriptStruct_FMeshInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMeshInfo(FMeshInfo::StaticStruct, TEXT("/Script/ProductivityPlugin"));
static struct FScriptStruct_ProductivityPlugin_StaticRegisterNativesFMeshInfo
{
	FScriptStruct_ProductivityPlugin_StaticRegisterNativesFMeshInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MeshInfo")),new UScriptStruct::TCppStructOps<FMeshInfo>);
	}
} ScriptStruct_ProductivityPlugin_StaticRegisterNativesFMeshInfo;
	void UProductivitySettings::StaticRegisterNativesUProductivitySettings()
	{
	}
	IMPLEMENT_CLASS(UProductivitySettings, 3204141504);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();
	ENGINE_API class UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UStaticMesh_NoRegister();

	PRODUCTIVITYPLUGIN_API class UClass* Z_Construct_UClass_AInstancedMeshWrapper_NoRegister();
	PRODUCTIVITYPLUGIN_API class UClass* Z_Construct_UClass_AInstancedMeshWrapper();
	PRODUCTIVITYPLUGIN_API class UClass* Z_Construct_UClass_UProductivityPluginEditorSettings_NoRegister();
	PRODUCTIVITYPLUGIN_API class UClass* Z_Construct_UClass_UProductivityPluginEditorSettings();
	PRODUCTIVITYPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FBatchPlaceMeshInfo();
	PRODUCTIVITYPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FMeshInfo();
	PRODUCTIVITYPLUGIN_API class UClass* Z_Construct_UClass_UProductivitySettings_NoRegister();
	PRODUCTIVITYPLUGIN_API class UClass* Z_Construct_UClass_UProductivitySettings();
	PRODUCTIVITYPLUGIN_API class UPackage* Z_Construct_UPackage_ProductivityPlugin();
	UClass* Z_Construct_UClass_AInstancedMeshWrapper_NoRegister()
	{
		return AInstancedMeshWrapper::StaticClass();
	}
	UClass* Z_Construct_UClass_AInstancedMeshWrapper()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage_ProductivityPlugin();
			OuterClass = AInstancedMeshWrapper::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_InstancedMeshes = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InstancedMeshes"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(InstancedMeshes, AInstancedMeshWrapper), 0x000000000008000d, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("InstancedMeshWrapper.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/InstancedMeshWrapper.h"));
				MetaData->SetValue(NewProp_InstancedMeshes, TEXT("Category"), TEXT("Meshes"));
				MetaData->SetValue(NewProp_InstancedMeshes, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_InstancedMeshes, TEXT("ModuleRelativePath"), TEXT("Classes/InstancedMeshWrapper.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInstancedMeshWrapper(Z_Construct_UClass_AInstancedMeshWrapper, TEXT("AInstancedMeshWrapper"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInstancedMeshWrapper);
	UClass* Z_Construct_UClass_UProductivityPluginEditorSettings_NoRegister()
	{
		return UProductivityPluginEditorSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UProductivityPluginEditorSettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage_ProductivityPlugin();
			OuterClass = UProductivityPluginEditorSettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100084;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(GroupStaticToInstancedResults, UProductivityPluginEditorSettings, bool);
				UProperty* NewProp_GroupStaticToInstancedResults = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GroupStaticToInstancedResults"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(GroupStaticToInstancedResults, UProductivityPluginEditorSettings), 0x0000000000004001, CPP_BOOL_PROPERTY_BITMASK(GroupStaticToInstancedResults, UProductivityPluginEditorSettings), sizeof(bool), true);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("EditorUserSettings"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ProductivityPluginEditorSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/ProductivityPluginEditorSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Implements the Editor's play settings."));
				MetaData->SetValue(NewProp_GroupStaticToInstancedResults, TEXT("Category"), TEXT("ProductivityOptions"));
				MetaData->SetValue(NewProp_GroupStaticToInstancedResults, TEXT("ModuleRelativePath"), TEXT("Classes/ProductivityPluginEditorSettings.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProductivityPluginEditorSettings(Z_Construct_UClass_UProductivityPluginEditorSettings, TEXT("UProductivityPluginEditorSettings"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProductivityPluginEditorSettings);
	UScriptStruct* Z_Construct_UScriptStruct_FBatchPlaceMeshInfo()
	{
		UPackage* Outer=Z_Construct_UPackage_ProductivityPlugin();
		extern uint32 Get_Z_Construct_UScriptStruct_FBatchPlaceMeshInfo_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReload(Outer, TEXT("BatchPlaceMeshInfo"), sizeof(FBatchPlaceMeshInfo), Get_Z_Construct_UScriptStruct_FBatchPlaceMeshInfo_CRC());
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BatchPlaceMeshInfo"), RF_Public|RF_Transient|RF_Native) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FBatchPlaceMeshInfo>, EStructFlags(0x00000001));
			UProperty* NewProp_MeshInfo = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MeshInfo"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(MeshInfo, FBatchPlaceMeshInfo), 0x0000000000000005, Z_Construct_UScriptStruct_FMeshInfo());
			UProperty* NewProp_ImportNameSubstring = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ImportNameSubstring"), RF_Public|RF_Transient|RF_Native) UStrProperty(CPP_PROPERTY_BASE(ImportNameSubstring, FBatchPlaceMeshInfo), 0x0000000000000005);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/ProductivityTypes.h"));
			MetaData->SetValue(NewProp_MeshInfo, TEXT("Category"), TEXT("BatchPlacing"));
			MetaData->SetValue(NewProp_MeshInfo, TEXT("ModuleRelativePath"), TEXT("Classes/ProductivityTypes.h"));
			MetaData->SetValue(NewProp_ImportNameSubstring, TEXT("Category"), TEXT("BatchPlacing"));
			MetaData->SetValue(NewProp_ImportNameSubstring, TEXT("ModuleRelativePath"), TEXT("Classes/ProductivityTypes.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBatchPlaceMeshInfo_CRC() { return 2391422858U; }
	UScriptStruct* Z_Construct_UScriptStruct_FMeshInfo()
	{
		UPackage* Outer=Z_Construct_UPackage_ProductivityPlugin();
		extern uint32 Get_Z_Construct_UScriptStruct_FMeshInfo_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReload(Outer, TEXT("MeshInfo"), sizeof(FMeshInfo), Get_Z_Construct_UScriptStruct_FMeshInfo_CRC());
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MeshInfo"), RF_Public|RF_Transient|RF_Native) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FMeshInfo>, EStructFlags(0x00000001));
			UProperty* NewProp_Materials = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Materials"), RF_Public|RF_Transient|RF_Native) UArrayProperty(CPP_PROPERTY_BASE(Materials, FMeshInfo), 0x0000000000000005);
			UProperty* NewProp_Materials_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Materials, TEXT("Materials"), RF_Public|RF_Transient|RF_Native) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_UMaterialInterface_NoRegister());
			UProperty* NewProp_StaticMesh = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("StaticMesh"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(StaticMesh, FMeshInfo), 0x0000000000000005, Z_Construct_UClass_UStaticMesh_NoRegister());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/ProductivityTypes.h"));
			MetaData->SetValue(NewProp_Materials, TEXT("Category"), TEXT("Rendering"));
			MetaData->SetValue(NewProp_Materials, TEXT("ModuleRelativePath"), TEXT("Classes/ProductivityTypes.h"));
			MetaData->SetValue(NewProp_StaticMesh, TEXT("Category"), TEXT("Rendering"));
			MetaData->SetValue(NewProp_StaticMesh, TEXT("ModuleRelativePath"), TEXT("Classes/ProductivityTypes.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMeshInfo_CRC() { return 994429164U; }
	UClass* Z_Construct_UClass_UProductivitySettings_NoRegister()
	{
		return UProductivitySettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UProductivitySettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage_ProductivityPlugin();
			OuterClass = UProductivitySettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20000084;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_BatchPlaceSettings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BatchPlaceSettings"), RF_Public|RF_Transient|RF_Native) UArrayProperty(CPP_PROPERTY_BASE(BatchPlaceSettings, UProductivitySettings), 0x0000000000004001);
				UProperty* NewProp_BatchPlaceSettings_Inner = new(EC_InternalUseOnlyConstructor, NewProp_BatchPlaceSettings, TEXT("BatchPlaceSettings"), RF_Public|RF_Transient|RF_Native) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000, Z_Construct_UScriptStruct_FBatchPlaceMeshInfo());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(EnableProductivityServer, UProductivitySettings, bool);
				UProperty* NewProp_EnableProductivityServer = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EnableProductivityServer"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(EnableProductivityServer, UProductivitySettings), 0x0000000000004001, CPP_BOOL_PROPERTY_BITMASK(EnableProductivityServer, UProductivitySettings), sizeof(bool), true);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ProductivitySettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/ProductivitySettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Implements the settings for the Slate Remote plug-in."));
				MetaData->SetValue(NewProp_BatchPlaceSettings, TEXT("Category"), TEXT("Productivity"));
				MetaData->SetValue(NewProp_BatchPlaceSettings, TEXT("ModuleRelativePath"), TEXT("Classes/ProductivitySettings.h"));
				MetaData->SetValue(NewProp_BatchPlaceSettings, TEXT("ToolTip"), TEXT("Settings for batch placing."));
				MetaData->SetValue(NewProp_EnableProductivityServer, TEXT("Category"), TEXT("Productivity"));
				MetaData->SetValue(NewProp_EnableProductivityServer, TEXT("ModuleRelativePath"), TEXT("Classes/ProductivitySettings.h"));
				MetaData->SetValue(NewProp_EnableProductivityServer, TEXT("ToolTip"), TEXT("Whether the Productivity Server is enabled."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProductivitySettings(Z_Construct_UClass_UProductivitySettings, TEXT("UProductivitySettings"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProductivitySettings);
	UPackage* Z_Construct_UPackage_ProductivityPlugin()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/ProductivityPlugin")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x618CFC4F;
			Guid.B = 0xA75E3974;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
