//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 500.25.3.7.0
//
#ifndef RMModelScreenSharingConnectionDeclaration_h
#define RMModelScreenSharingConnectionDeclaration_h
@import Foundation;

#include "RMModelConfigurationBase.h"
#include "RMModelRegisteredTypeProtocol-Protocol.h"
#include "RMModelScreenSharingConnectionDeclaration_DisplayConfiguration.h"

@class NSNumber, NSString;

@interface RMModelScreenSharingConnectionDeclaration : RMModelConfigurationBase<RMModelRegisteredTypeProtocol>

@property (copy, nonatomic) NSString *payloadConnectionUUID;
@property (copy, nonatomic) NSString *payloadDisplayName;
@property (copy, nonatomic) NSString *payloadHostName;
@property (copy, nonatomic) NSNumber *payloadPort;
@property (copy, nonatomic) RMModelScreenSharingConnectionDeclaration_DisplayConfiguration *payloadDisplayConfiguration;
@property (copy, nonatomic) NSString *payloadAuthenticationCredentialsAssetReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)assetTypes;
+ (id)buildWithIdentifier:(id)identifier connectionUUID:(id)uuid displayName:(id)name hostName:(id)name port:(id)port displayConfiguration:(id)configuration authenticationCredentialsAssetReference:(id)reference;
+ (id)buildRequiredOnlyWithIdentifier:(id)identifier connectionUUID:(id)uuid displayName:(id)name hostName:(id)name displayConfiguration:(id)configuration;
+ (id)combineConfigurations:(id)configurations;
+ (id)supportedOS;

/* instance methods */
- (id)assetReferences;
- (BOOL)loadPayloadFromDictionary:(id)dictionary serializationType:(short)type error:(id *)error;
- (id)serializePayloadWithType:(short)type;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* RMModelScreenSharingConnectionDeclaration_h */
