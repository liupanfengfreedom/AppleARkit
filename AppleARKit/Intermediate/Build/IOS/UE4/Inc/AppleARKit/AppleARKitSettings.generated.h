// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef APPLEARKIT_AppleARKitSettings_generated_h
#error "AppleARKitSettings.generated.h already included, missing '#pragma once' in AppleARKitSettings.h"
#endif
#define APPLEARKIT_AppleARKitSettings_generated_h

#define Engine_Plugins_Runtime_AR_Apple_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h_40_RPC_WRAPPERS
#define Engine_Plugins_Runtime_AR_Apple_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h_40_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Runtime_AR_Apple_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAppleARKitSettings(); \
	friend struct Z_Construct_UClass_UAppleARKitSettings_Statics; \
public: \
	DECLARE_CLASS(UAppleARKitSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AppleARKit"), NO_API) \
	DECLARE_SERIALIZER(UAppleARKitSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Plugins_Runtime_AR_Apple_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUAppleARKitSettings(); \
	friend struct Z_Construct_UClass_UAppleARKitSettings_Statics; \
public: \
	DECLARE_CLASS(UAppleARKitSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AppleARKit"), NO_API) \
	DECLARE_SERIALIZER(UAppleARKitSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Plugins_Runtime_AR_Apple_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAppleARKitSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAppleARKitSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAppleARKitSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAppleARKitSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAppleARKitSettings(UAppleARKitSettings&&); \
	NO_API UAppleARKitSettings(const UAppleARKitSettings&); \
public:


#define Engine_Plugins_Runtime_AR_Apple_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAppleARKitSettings(UAppleARKitSettings&&); \
	NO_API UAppleARKitSettings(const UAppleARKitSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAppleARKitSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAppleARKitSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAppleARKitSettings)


#define Engine_Plugins_Runtime_AR_Apple_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h_40_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FaceTrackingLogDir() { return STRUCT_OFFSET(UAppleARKitSettings, FaceTrackingLogDir); } \
	FORCEINLINE static uint32 __PPO__LivelinkTrackingType() { return STRUCT_OFFSET(UAppleARKitSettings, LivelinkTrackingType); } \
	FORCEINLINE static uint32 __PPO__bFaceTrackingLogData() { return STRUCT_OFFSET(UAppleARKitSettings, bFaceTrackingLogData); } \
	FORCEINLINE static uint32 __PPO__bFaceTrackingWriteEachFrame() { return STRUCT_OFFSET(UAppleARKitSettings, bFaceTrackingWriteEachFrame); } \
	FORCEINLINE static uint32 __PPO__FaceTrackingFileWriterType() { return STRUCT_OFFSET(UAppleARKitSettings, FaceTrackingFileWriterType); } \
	FORCEINLINE static uint32 __PPO__bShouldWriteCameraImagePerFrame() { return STRUCT_OFFSET(UAppleARKitSettings, bShouldWriteCameraImagePerFrame); } \
	FORCEINLINE static uint32 __PPO__WrittenCameraImageScale() { return STRUCT_OFFSET(UAppleARKitSettings, WrittenCameraImageScale); } \
	FORCEINLINE static uint32 __PPO__WrittenCameraImageQuality() { return STRUCT_OFFSET(UAppleARKitSettings, WrittenCameraImageQuality); } \
	FORCEINLINE static uint32 __PPO__WrittenCameraImageRotation() { return STRUCT_OFFSET(UAppleARKitSettings, WrittenCameraImageRotation); } \
	FORCEINLINE static uint32 __PPO__LiveLinkPublishingPort() { return STRUCT_OFFSET(UAppleARKitSettings, LiveLinkPublishingPort); } \
	FORCEINLINE static uint32 __PPO__DefaultFaceTrackingLiveLinkSubjectName() { return STRUCT_OFFSET(UAppleARKitSettings, DefaultFaceTrackingLiveLinkSubjectName); } \
	FORCEINLINE static uint32 __PPO__DefaultFaceTrackingDirection() { return STRUCT_OFFSET(UAppleARKitSettings, DefaultFaceTrackingDirection); } \
	FORCEINLINE static uint32 __PPO__bAdjustThreadPrioritiesDuringARSession() { return STRUCT_OFFSET(UAppleARKitSettings, bAdjustThreadPrioritiesDuringARSession); } \
	FORCEINLINE static uint32 __PPO__GameThreadPriorityOverride() { return STRUCT_OFFSET(UAppleARKitSettings, GameThreadPriorityOverride); } \
	FORCEINLINE static uint32 __PPO__RenderThreadPriorityOverride() { return STRUCT_OFFSET(UAppleARKitSettings, RenderThreadPriorityOverride); } \
	FORCEINLINE static uint32 __PPO__ARKitTimecodeProvider() { return STRUCT_OFFSET(UAppleARKitSettings, ARKitTimecodeProvider); }


#define Engine_Plugins_Runtime_AR_Apple_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h_35_PROLOG
#define Engine_Plugins_Runtime_AR_Apple_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_AR_Apple_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h_40_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_AR_Apple_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h_40_RPC_WRAPPERS \
	Engine_Plugins_Runtime_AR_Apple_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h_40_INCLASS \
	Engine_Plugins_Runtime_AR_Apple_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_AR_Apple_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_AR_Apple_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h_40_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_AR_Apple_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_AR_Apple_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h_40_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_AR_Apple_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> APPLEARKIT_API UClass* StaticClass<class UAppleARKitSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_AR_Apple_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h


#define FOREACH_ENUM_ELIVELINKTRACKINGTYPE(op) \
	op(ELivelinkTrackingType::None) \
	op(ELivelinkTrackingType::FaceTracking) \
	op(ELivelinkTrackingType::PoseTracking) 

enum class ELivelinkTrackingType : uint8;
template<> APPLEARKIT_API UEnum* StaticEnum<ELivelinkTrackingType>();

#define FOREACH_ENUM_EARFACETRACKINGFILEWRITERTYPE(op) \
	op(EARFaceTrackingFileWriterType::None) \
	op(EARFaceTrackingFileWriterType::CSV) \
	op(EARFaceTrackingFileWriterType::JSON) 

enum class EARFaceTrackingFileWriterType : uint8;
template<> APPLEARKIT_API UEnum* StaticEnum<EARFaceTrackingFileWriterType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
