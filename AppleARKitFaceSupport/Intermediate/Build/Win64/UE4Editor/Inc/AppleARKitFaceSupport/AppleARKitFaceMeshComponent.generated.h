// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FNetQuantizeFaceCurve;
struct FTransform;
struct FVector;
enum class EARFaceBlendShape : uint8;
enum class EARFaceBlendShape : uint8; 
struct FVector2D;
#ifdef APPLEARKITFACESUPPORT_AppleARKitFaceMeshComponent_generated_h
#error "AppleARKitFaceMeshComponent.generated.h already included, missing '#pragma once' in AppleARKitFaceMeshComponent.h"
#endif
#define APPLEARKITFACESUPPORT_AppleARKitFaceMeshComponent_generated_h

#define Engine_Plugins_Runtime_AR_Apple_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNetQuantizeFaceCurve_Statics; \
	APPLEARKITFACESUPPORT_API static class UScriptStruct* StaticStruct();


template<> APPLEARKITFACESUPPORT_API UScriptStruct* StaticStruct<struct FNetQuantizeFaceCurve>();

#define Engine_Plugins_Runtime_AR_Apple_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_RPC_WRAPPERS \
	virtual bool ServerUpdateFaceCurves_Validate(TArray<FNetQuantizeFaceCurve> const& ); \
	virtual void ServerUpdateFaceCurves_Implementation(TArray<FNetQuantizeFaceCurve> const& ClientCurves); \
 \
	DECLARE_FUNCTION(execServerUpdateFaceCurves) \
	{ \
		P_GET_TARRAY(FNetQuantizeFaceCurve,Z_Param_ClientCurves); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerUpdateFaceCurves_Validate(Z_Param_ClientCurves)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerUpdateFaceCurves_Validate")); \
			return; \
		} \
		P_THIS->ServerUpdateFaceCurves_Implementation(Z_Param_ClientCurves); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_RemoteCurves) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_RemoteCurves(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPublishViaLiveLink) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SubjectName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PublishViaLiveLink(Z_Param_SubjectName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastUpdateTimestamp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLastUpdateTimestamp(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastUpdateFrameNumber) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetLastUpdateFrameNumber(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAutoBind) \
	{ \
		P_GET_UBOOL(Z_Param_bAutoBind); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAutoBind(Z_Param_bAutoBind); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMesh) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateMesh(Z_Param_Out_Vertices); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMeshFromBlendShapes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateMeshFromBlendShapes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFaceBlendShapeAmount) \
	{ \
		P_GET_ENUM(EARFaceBlendShape,Z_Param_BlendShape); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFaceBlendShapeAmount(EARFaceBlendShape(Z_Param_BlendShape)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBlendShapeAmount) \
	{ \
		P_GET_ENUM(EARFaceBlendShape,Z_Param_BlendShape); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBlendShapeAmount(EARFaceBlendShape(Z_Param_BlendShape),Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBlendShapes) \
	{ \
		P_GET_TMAP_REF(EARFaceBlendShape,float,Z_Param_Out_InBlendShapes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBlendShapes(Z_Param_Out_InBlendShapes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateMesh) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV0); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateMesh(Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_UV0); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_AR_Apple_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerUpdateFaceCurves_Validate(TArray<FNetQuantizeFaceCurve> const& ); \
	virtual void ServerUpdateFaceCurves_Implementation(TArray<FNetQuantizeFaceCurve> const& ClientCurves); \
 \
	DECLARE_FUNCTION(execServerUpdateFaceCurves) \
	{ \
		P_GET_TARRAY(FNetQuantizeFaceCurve,Z_Param_ClientCurves); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerUpdateFaceCurves_Validate(Z_Param_ClientCurves)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerUpdateFaceCurves_Validate")); \
			return; \
		} \
		P_THIS->ServerUpdateFaceCurves_Implementation(Z_Param_ClientCurves); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_RemoteCurves) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_RemoteCurves(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPublishViaLiveLink) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SubjectName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PublishViaLiveLink(Z_Param_SubjectName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastUpdateTimestamp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLastUpdateTimestamp(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastUpdateFrameNumber) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetLastUpdateFrameNumber(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAutoBind) \
	{ \
		P_GET_UBOOL(Z_Param_bAutoBind); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAutoBind(Z_Param_bAutoBind); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMesh) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateMesh(Z_Param_Out_Vertices); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMeshFromBlendShapes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateMeshFromBlendShapes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFaceBlendShapeAmount) \
	{ \
		P_GET_ENUM(EARFaceBlendShape,Z_Param_BlendShape); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFaceBlendShapeAmount(EARFaceBlendShape(Z_Param_BlendShape)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBlendShapeAmount) \
	{ \
		P_GET_ENUM(EARFaceBlendShape,Z_Param_BlendShape); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBlendShapeAmount(EARFaceBlendShape(Z_Param_BlendShape),Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBlendShapes) \
	{ \
		P_GET_TMAP_REF(EARFaceBlendShape,float,Z_Param_Out_InBlendShapes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBlendShapes(Z_Param_Out_InBlendShapes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateMesh) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV0); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateMesh(Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_UV0); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_AR_Apple_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_EVENT_PARMS \
	struct AppleARKitFaceMeshComponent_eventServerUpdateFaceCurves_Parms \
	{ \
		TArray<FNetQuantizeFaceCurve> ClientCurves; \
	};


#define Engine_Plugins_Runtime_AR_Apple_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_CALLBACK_WRAPPERS
#define Engine_Plugins_Runtime_AR_Apple_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAppleARKitFaceMeshComponent(); \
	friend struct Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UAppleARKitFaceMeshComponent, UProceduralMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AppleARKitFaceSupport"), NO_API) \
	DECLARE_SERIALIZER(UAppleARKitFaceMeshComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Engine_Plugins_Runtime_AR_Apple_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_INCLASS \
private: \
	static void StaticRegisterNativesUAppleARKitFaceMeshComponent(); \
	friend struct Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UAppleARKitFaceMeshComponent, UProceduralMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AppleARKitFaceSupport"), NO_API) \
	DECLARE_SERIALIZER(UAppleARKitFaceMeshComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Engine_Plugins_Runtime_AR_Apple_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAppleARKitFaceMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAppleARKitFaceMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAppleARKitFaceMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAppleARKitFaceMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAppleARKitFaceMeshComponent(UAppleARKitFaceMeshComponent&&); \
	NO_API UAppleARKitFaceMeshComponent(const UAppleARKitFaceMeshComponent&); \
public:


#define Engine_Plugins_Runtime_AR_Apple_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAppleARKitFaceMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAppleARKitFaceMeshComponent(UAppleARKitFaceMeshComponent&&); \
	NO_API UAppleARKitFaceMeshComponent(const UAppleARKitFaceMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAppleARKitFaceMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAppleARKitFaceMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAppleARKitFaceMeshComponent)


#define Engine_Plugins_Runtime_AR_Apple_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_AR_Apple_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_115_PROLOG \
	Engine_Plugins_Runtime_AR_Apple_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_EVENT_PARMS


#define Engine_Plugins_Runtime_AR_Apple_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_AR_Apple_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_AR_Apple_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_RPC_WRAPPERS \
	Engine_Plugins_Runtime_AR_Apple_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_CALLBACK_WRAPPERS \
	Engine_Plugins_Runtime_AR_Apple_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_INCLASS \
	Engine_Plugins_Runtime_AR_Apple_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_AR_Apple_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_AR_Apple_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_AR_Apple_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_AR_Apple_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_CALLBACK_WRAPPERS \
	Engine_Plugins_Runtime_AR_Apple_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_AR_Apple_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AppleARKitFaceMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> APPLEARKITFACESUPPORT_API UClass* StaticClass<class UAppleARKitFaceMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_AR_Apple_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h


#define FOREACH_ENUM_EARFACECOMPONENTTRANSFORMMIXING(op) \
	op(EARFaceComponentTransformMixing::ComponentOnly) \
	op(EARFaceComponentTransformMixing::ComponentLocationTrackedRotation) \
	op(EARFaceComponentTransformMixing::ComponentWithTracked) \
	op(EARFaceComponentTransformMixing::TrackingOnly) 

enum class EARFaceComponentTransformMixing : uint8;
template<> APPLEARKITFACESUPPORT_API UEnum* StaticEnum<EARFaceComponentTransformMixing>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
