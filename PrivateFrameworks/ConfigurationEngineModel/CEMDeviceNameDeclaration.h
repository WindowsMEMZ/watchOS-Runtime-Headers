//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef CEMDeviceNameDeclaration_h
#define CEMDeviceNameDeclaration_h
@import Foundation;

#include "CEMConfigurationBase.h"
#include "CEMRegisteredTypeProtocol-Protocol.h"

@class NSNumber, NSString;

@interface CEMDeviceNameDeclaration : CEMConfigurationBase<CEMRegisteredTypeProtocol>

@property (copy, nonatomic) NSString *payloadName;
@property (copy, nonatomic) NSNumber *payloadAllowDeviceNameModification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)profileType;
+ (id)allowedPayloadKeys;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)identifier withName:(id)name withAllowDeviceNameModification:(id)modification;
+ (id)buildRequiredOnlyWithIdentifier:(id)identifier withName:(id)name;

/* instance methods */
- (BOOL)multipleAllowed;
- (BOOL)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (BOOL)loadPayload:(id)payload error:(id *)error;
- (id)serializePayloadWithAssetProviders:(id)providers;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CEMDeviceNameDeclaration_h */
