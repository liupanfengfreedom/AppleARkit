// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef APPLEARKIT_AppleARKitHitTestResult_generated_h
#error "AppleARKitHitTestResult.generated.h already included, missing '#pragma once' in AppleARKitHitTestResult.h"
#endif
#define APPLEARKIT_AppleARKitHitTestResult_generated_h

#define Engine_Plugins_Runtime_AR_Apple_AppleARKit_Source_AppleARKit_Public_AppleARKitHitTestResult_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAppleARKitHitTestResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> APPLEARKIT_API UScriptStruct* StaticStruct<struct FAppleARKitHitTestResult>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_AR_Apple_AppleARKit_Source_AppleARKit_Public_AppleARKitHitTestResult_h


#define FOREACH_ENUM_EAPPLEARKITHITTESTRESULTTYPE(op) \
	op(EAppleARKitHitTestResultType::None) \
	op(EAppleARKitHitTestResultType::FeaturePoint) \
	op(EAppleARKitHitTestResultType::EstimatedHorizontalPlane) \
	op(EAppleARKitHitTestResultType::ExistingPlane) \
	op(EAppleARKitHitTestResultType::ExistingPlaneUsingExtent) 

enum class EAppleARKitHitTestResultType : uint8;
template<> APPLEARKIT_API UEnum* StaticEnum<EAppleARKitHitTestResultType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
